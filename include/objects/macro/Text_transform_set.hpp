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

/// @file Text_transform_set.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Text_transform_set_.hpp


#ifndef OBJECTS_MACRO_TEXT_TRANSFORM_SET_HPP
#define OBJECTS_MACRO_TEXT_TRANSFORM_SET_HPP


// generated includes
#include <objects/macro/Text_transform_set_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CText_transform_set : public CText_transform_set_Base
{
    typedef CText_transform_set_Base Tparent;
public:
    // constructor
    CText_transform_set(void);
    // destructor
    ~CText_transform_set(void);

private:
    // Prohibit copy constructor and assignment operator
    CText_transform_set(const CText_transform_set& value);
    CText_transform_set& operator=(const CText_transform_set& value);

};

/////////////////// CText_transform_set inline methods

// constructor
inline
CText_transform_set::CText_transform_set(void)
{
}


/////////////////// end of CText_transform_set inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_TEXT_TRANSFORM_SET_HPP
/* Original file checksum: lines: 86, chars: 2557, CRC32: c711ba72 */
