/* $Id$
 * ===========================================================================
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

/// @file Blast_commo_optio_db_restr.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Blast_commo_optio_db_restr_.hpp


#ifndef OBJECTS_BLAST_BLAST_COMMO_OPTIO_DB_RESTR_HPP
#define OBJECTS_BLAST_BLAST_COMMO_OPTIO_DB_RESTR_HPP


// generated includes
#include <objects/blast/Blast_commo_optio_db_restr_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_common_options_db_restriction : public CBlast4_common_options_db_restriction_Base
{
    typedef CBlast4_common_options_db_restriction_Base Tparent;
public:
    // constructor
    CBlast4_common_options_db_restriction(void);
    // destructor
    ~CBlast4_common_options_db_restriction(void);

private:
    // Prohibit copy constructor and assignment operator
    CBlast4_common_options_db_restriction(const CBlast4_common_options_db_restriction& value);
    CBlast4_common_options_db_restriction& operator=(const CBlast4_common_options_db_restriction& value);

};

/////////////////// CBlast4_common_options_db_restriction inline methods

// constructor
inline
CBlast4_common_options_db_restriction::CBlast4_common_options_db_restriction(void)
{
}


/////////////////// end of CBlast4_common_options_db_restriction inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST_COMMO_OPTIO_DB_RESTR_HPP
/* Original file checksum: lines: 86, chars: 2857, CRC32: 450e86a5 */
