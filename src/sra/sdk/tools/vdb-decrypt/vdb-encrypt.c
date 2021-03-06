/*==============================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */


#include "vdb-encrypt.vers.h"

#include "shared.h"

#include <krypto/wgaencrypt.h>
#include <krypto/encfile.h>
#include <kfs/file.h>
#include <klib/rc.h>
#include <klib/defs.h>
#include <klib/log.h>
#include <klib/status.h>

#include <assert.h>
#include <string.h>

/* Version  EXTERN
 *  return 4-part version code: 0xMMmmrrrr, where
 *      MM = major release
 *      mm = minor release
 *    rrrr = bug-fix release
 */
ver_t CC KAppVersion ( void )
{
    return VDB_ENCRYPT_VERS;
}


/* Usage
 */
const char UsageDefaultName [] = "vdb-encrypt";
const char De[]             = "En";
const char de[]             = "en";


static
OptDef Options[] = 
{
    /* name            alias max times oparam required fmtfunc help text loc */
    { OPTION_FORCE,   ALIAS_FORCE,   NULL, ForceUsage,   0, false, false }
};


static 
bool DecryptSraFlag = false;

const bool Decrypting = false;

void CryptOptionLines () {}

bool DoThisFile (const KFile * infile, EncScheme enc, ArcScheme * parc)
{
    const KFile * Infile;
    ArcScheme arc;
    rc_t rc;
    bool do_enc;

    *parc = arcNone;

    switch (enc)
    {
    default:
        STSMSG (1, ("error checking encrypted"));
        return false;

    case encNone:
        do_enc = true;
        rc = KFileAddRef (infile);
        if (rc)
            return false;
        Infile = infile;
        break;

    case encEncFile:
        do_enc = false;
        rc = KEncFileMakeRead (&Infile, infile, &Key);
        if (rc)
            return false;
        break;

    case encWGAEncFile:
        do_enc = false;
        rc = KFileMakeWGAEncRead (&Infile, infile, Password, PasswordSize);
        if (rc)
            return false;
        break;
    }
    arc = ArchiveTypeCheck (Infile);
    KFileRelease (Infile);
    if (arc == arcSRAFile)
    {
        STSMSG (1, ("%sencrypted sra archive", do_enc ? "un" : ""));
        *parc = arcSRAFile;
    }
    return do_enc;
}

bool NameFixUp (char * name)
{
    char * pc = strrchr (name, '.');

    if (((pc != NULL) &&
         (strcmp (pc, EncExt) == 0)) ||
        IsArchive )
        return false;

    strcat (name, EncExt);

    return true;
}

rc_t CryptFile (const KFile * in, const KFile ** new_in,
                KFile * out, KFile ** new_out, EncScheme scheme)
{
    rc_t rc;

    assert (in);
    assert (out);
    assert (new_in);
    assert (new_out);

    *new_in = *new_out = NULL;

    rc = KFileAddRef (in);
    if (rc)
        return rc;

    switch (scheme)
    {
    default:
    case encError:
        KFileRelease (in);
        return RC (rcExe, rcEncryption, rcParsing, rcFile, rcInvalid);

    case encNone:
        rc = KEncFileMakeWrite (new_out, out, &Key);
        if (rc)
        {
            KFileRelease (in);
            return rc;
        }
        break;

    case encEncFile:
    case encWGAEncFile:
        rc = KFileAddRef (out);
        if (rc)
        {
            KFileRelease (in);
            return rc;
        }
        *new_out = out;
        STSMSG (1, ("already encrypted just copying"));
        break;
    }
    *new_in = in;
    return 0;
}


/* KMain - EXTERN
 *  executable entrypoint "main" is implemented by
 *  an OS-specific wrapper that takes care of establishing
 *  signal handlers, logging, etc.
 *
 *  in turn, OS-specific "main" will invoke "KMain" as
 *  platform independent main entrypoint.
 *
 *  "argc" [ IN ] - the number of textual parameters in "argv"
 *  should never be < 0, but has been left as a signed int
 *  for reasons of tradition.
 *
 *  "argv" [ IN ] - array of NUL terminated strings expected
 *  to be in the shell-native character set: ASCII or UTF-8
 *  element 0 is expected to be executable identity or path.
 */
rc_t CC KMain ( int argc, char *argv [] )
{
    Args * args;
    rc_t rc;

    rc = ArgsMakeAndHandle (&args, argc, argv, 1, Options,
                            sizeof (Options) / sizeof (Options[0]));
    if (rc)
        LOGERR (klogInt, rc, "failed to parse command line parameters");

    else
    {
        rc = CommonMain (args);

        ArgsWhack (args);
    }

    STSMSG (1, ("exiting: %R (%u)", rc, rc));
    return rc;
}


/* EOF */
