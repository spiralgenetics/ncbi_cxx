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

/// @file Convert_feature_action.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Convert_feature_action_.hpp


#ifndef OBJECTS_MACRO_CONVERT_FEATURE_ACTION_HPP
#define OBJECTS_MACRO_CONVERT_FEATURE_ACTION_HPP


// generated includes
#include <objects/macro/Convert_feature_action_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CConvert_feature_action : public CConvert_feature_action_Base
{
    typedef CConvert_feature_action_Base Tparent;
public:
    // constructor
    CConvert_feature_action(void);
    // destructor
    ~CConvert_feature_action(void);

private:
    // Prohibit copy constructor and assignment operator
    CConvert_feature_action(const CConvert_feature_action& value);
    CConvert_feature_action& operator=(const CConvert_feature_action& value);

};

/////////////////// CConvert_feature_action inline methods

// constructor
inline
CConvert_feature_action::CConvert_feature_action(void)
{
}


/////////////////// end of CConvert_feature_action inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_CONVERT_FEATURE_ACTION_HPP
/* Original file checksum: lines: 86, chars: 2633, CRC32: 9c3ffed9 */
