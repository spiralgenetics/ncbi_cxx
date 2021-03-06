/*===========================================================================
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
#include <kapp/main.h>
#include <kapp/args.h>
#include <klib/out.h>
#include <klib/text.h>
#include <klib/rc.h>
#include <sysalloc.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <common/test_assert.h>

const char UsageDefaultName[] = "test_printf";


rc_t CC UsageSummary ( const char * progname )
{
    return KOutMsg ("\n"
        "Usage:\n"
        "  %s\n"
        "\n", progname);
}


rc_t CC Usage ( const Args * args )
{
    const char * progname;
    const char * fullpath;
    rc_t rc;

    if ( args == NULL )
        rc = RC ( rcApp, rcArgv, rcAccessing, rcSelf, rcNull );
    else
        rc = ArgsProgram ( args, &fullpath, &progname );
    if ( rc )
        progname = fullpath = UsageDefaultName;

    UsageSummary ( progname );

    HelpOptionsStandard ();
    HelpVersion ( fullpath, KAppVersion() );
    return rc;
}


/* Version  EXTERN
 *  return 4-part version code: 0xMMmmrrrr, where
 *      MM = major release
 *      mm = minor release
 *    rrrr = bug-fix release
 */
ver_t CC KAppVersion ( void )
{
    return 0x01000000;
}

#define NFLOATS 10

float fvalues[ NFLOATS ] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.064453125 };

rc_t CC KMain ( int argc, char *argv [] )
{
    OUTMSG( ( "Tests printf(\"%%s\", \"\"):\n" ) );

    OUTMSG( ( "%s", "" ) ); /* We have an assert here */

    OUTMSG( ( "\n\n" ) );

    return 0;
}
