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

/// @file ResultItem.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'egquery.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: ResultItem_.hpp


#ifndef egquery__OBJTOOLS_EUTILS_EGQUERY_RESULTITEM_HPP
#define egquery__OBJTOOLS_EUTILS_EGQUERY_RESULTITEM_HPP


// generated includes
#include <objtools/eutils/egquery/ResultItem_.hpp>

// generated classes

BEGIN_egquery_SCOPE // namespace egquery::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CResultItem : public CResultItem_Base
{
    typedef CResultItem_Base Tparent;
public:
    // constructor
    CResultItem(void);
    // destructor
    ~CResultItem(void);

private:
    // Prohibit copy constructor and assignment operator
    CResultItem(const CResultItem& value);
    CResultItem& operator=(const CResultItem& value);

};

/////////////////// CResultItem inline methods

// constructor
inline
CResultItem::CResultItem(void)
{
}


/////////////////// end of CResultItem inline methods


END_egquery_SCOPE // namespace egquery::


#endif // egquery__OBJTOOLS_EUTILS_EGQUERY_RESULTITEM_HPP
/* Original file checksum: lines: 82, chars: 2451, CRC32: a33d5998 */
