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

/// @file Rs.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'docsum.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Rs_.hpp


#ifndef OBJECTS_DOCSUM_RS_HPP
#define OBJECTS_DOCSUM_RS_HPP


// generated includes
#include <objects/docsum/Rs_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_DOCSUM_EXPORT CRs : public CRs_Base
{
    typedef CRs_Base Tparent;
public:
    // constructor
    CRs(void);
    // destructor
    ~CRs(void);

private:
    // Prohibit copy constructor and assignment operator
    CRs(const CRs& value);
    CRs& operator=(const CRs& value);

};

/////////////////// CRs inline methods

// constructor
inline
CRs::CRs(void)
{
}


/////////////////// end of CRs inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_DOCSUM_RS_HPP
/* Original file checksum: lines: 86, chars: 2277, CRC32: 3280c53 */
