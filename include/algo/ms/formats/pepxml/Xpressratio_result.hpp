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

/// @file Xpressratio_result.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// New methods or data members can be added to it if needed.
/// See also: Xpressratio_result_.hpp


#ifndef ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_RESULT_HPP
#define ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_RESULT_HPP


// generated includes
#include <algo/ms/formats/pepxml/Xpressratio_result_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_PEPXML_EXPORT CXpressratio_result : public CXpressratio_result_Base
{
    typedef CXpressratio_result_Base Tparent;
public:
    // constructor
    CXpressratio_result(void);
    // destructor
    ~CXpressratio_result(void);

private:
    // Prohibit copy constructor and assignment operator
    CXpressratio_result(const CXpressratio_result& value);
    CXpressratio_result& operator=(const CXpressratio_result& value);

};

/////////////////// CXpressratio_result inline methods

// constructor
inline
CXpressratio_result::CXpressratio_result(void)
{
}


/////////////////// end of CXpressratio_result inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_RESULT_HPP
/* Original file checksum: lines: 86, chars: 2613, CRC32: b887b88 */
