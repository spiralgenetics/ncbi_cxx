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

/// @file RealValue.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: RealValue_.hpp


#ifndef OBJECTS_MMDB3_REALVALUE_HPP
#define OBJECTS_MMDB3_REALVALUE_HPP


// generated includes
#include <objects/mmdb3/RealValue_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_MMDB3_EXPORT CRealValue : public CRealValue_Base
{
    typedef CRealValue_Base Tparent;
public:
    // constructor
    CRealValue(void);
    // destructor
    ~CRealValue(void);

private:
    // Prohibit copy constructor and assignment operator
    CRealValue(const CRealValue& value);
    CRealValue& operator=(const CRealValue& value);

};

/////////////////// CRealValue inline methods

// constructor
inline
CRealValue::CRealValue(void)
{
}


/////////////////// end of CRealValue inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_REALVALUE_HPP
/* Original file checksum: lines: 86, chars: 2404, CRC32: f5943c9a */
