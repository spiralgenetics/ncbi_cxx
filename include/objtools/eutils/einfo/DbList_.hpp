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

/// @file DbList_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'einfo.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_BASE_HPP
#define einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

#ifndef BEGIN_einfo_SCOPE
#  define BEGIN_einfo_SCOPE BEGIN_SCOPE(einfo)
#  define END_einfo_SCOPE END_SCOPE(einfo)
#endif
BEGIN_einfo_SCOPE // namespace einfo::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CDbList_Base : public NCBI_NS_NCBI::CSerialObject
{
    typedef NCBI_NS_NCBI::CSerialObject Tparent;
public:
    // constructor
    CDbList_Base(void);
    // destructor
    virtual ~CDbList_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef NCBI_NS_STD::list< NCBI_NS_STD::string > TDbName;

    // getters
    // setters

    /// \S+ 
    /// mandatory
    /// typedef NCBI_NS_STD::list< NCBI_NS_STD::string > TDbName
    ///  Check whether the DbName data member has been assigned a value.
    bool IsSetDbName(void) const;
    /// Check whether it is safe or not to call GetDbName method.
    bool CanGetDbName(void) const;
    void ResetDbName(void);
    const TDbName& GetDbName(void) const;
    TDbName& SetDbName(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDbList_Base(const CDbList_Base&);
    CDbList_Base& operator=(const CDbList_Base&);

    // data
    Uint4 m_set_State[1];
    NCBI_NS_STD::list< NCBI_NS_STD::string > m_DbName;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDbList_Base::IsSetDbName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CDbList_Base::CanGetDbName(void) const
{
    return true;
}

inline
const CDbList_Base::TDbName& CDbList_Base::GetDbName(void) const
{
    return m_DbName;
}

inline
CDbList_Base::TDbName& CDbList_Base::SetDbName(void)
{
    m_set_State[0] |= 0x1;
    return m_DbName;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_einfo_SCOPE // namespace einfo::


#endif // einfo__OBJTOOLS_EUTILS_EINFO_DBLIST_BASE_HPP
