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

/// @file DbList.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'einfo.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: DbList_.hpp


#ifndef einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_HPP
#define einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_HPP


// generated includes
#include <objtools/eutils/einfo/DbList_.hpp>

// generated classes

BEGIN_einfo_SCOPE // namespace einfo::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CDbList : public CDbList_Base
{
    typedef CDbList_Base Tparent;
public:
    // constructor
    CDbList(void);
    // destructor
    ~CDbList(void);

private:
    // Prohibit copy constructor and assignment operator
    CDbList(const CDbList& value);
    CDbList& operator=(const CDbList& value);

};

/////////////////// CDbList inline methods

// constructor
inline
CDbList::CDbList(void)
{
}


/////////////////// end of CDbList inline methods


END_einfo_SCOPE // namespace einfo::


#endif // einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_HPP
/* Original file checksum: lines: 82, chars: 2351, CRC32: a4e2a948 */
