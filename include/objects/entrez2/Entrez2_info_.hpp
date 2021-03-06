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

/// @file Entrez2_info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_INFO_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_INFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/entrez2/Entrez2_dt.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CEntrez2_db_info;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// describes all the databases
class NCBI_ENTREZ2_EXPORT CEntrez2_info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_info_Base(void);
    // destructor
    virtual ~CEntrez2_info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TDb_count;
    typedef CEntrez2_dt TBuild_date;
    typedef list< CRef< CEntrez2_db_info > > TDb_info;

    // getters
    // setters

    /// number of databases
    /// mandatory
    /// typedef int TDb_count
    ///  Check whether the Db_count data member has been assigned a value.
    bool IsSetDb_count(void) const;
    /// Check whether it is safe or not to call GetDb_count method.
    bool CanGetDb_count(void) const;
    void ResetDb_count(void);
    TDb_count GetDb_count(void) const;
    void SetDb_count(TDb_count value);
    TDb_count& SetDb_count(void);

    /// build date of databases
    /// mandatory
    /// typedef CEntrez2_dt TBuild_date
    ///  Check whether the Build_date data member has been assigned a value.
    bool IsSetBuild_date(void) const;
    /// Check whether it is safe or not to call GetBuild_date method.
    bool CanGetBuild_date(void) const;
    void ResetBuild_date(void);
    const TBuild_date& GetBuild_date(void) const;
    void SetBuild_date(const TBuild_date& value);
    TBuild_date& SetBuild_date(void);

    /// info by database
    /// mandatory
    /// typedef list< CRef< CEntrez2_db_info > > TDb_info
    ///  Check whether the Db_info data member has been assigned a value.
    bool IsSetDb_info(void) const;
    /// Check whether it is safe or not to call GetDb_info method.
    bool CanGetDb_info(void) const;
    void ResetDb_info(void);
    const TDb_info& GetDb_info(void) const;
    TDb_info& SetDb_info(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_info_Base(const CEntrez2_info_Base&);
    CEntrez2_info_Base& operator=(const CEntrez2_info_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Db_count;
    CEntrez2_dt m_Build_date;
    list< CRef< CEntrez2_db_info > > m_Db_info;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_info_Base::IsSetDb_count(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_info_Base::CanGetDb_count(void) const
{
    return IsSetDb_count();
}

inline
void CEntrez2_info_Base::ResetDb_count(void)
{
    m_Db_count = 0;
    m_set_State[0] &= ~0x3;
}

inline
CEntrez2_info_Base::TDb_count CEntrez2_info_Base::GetDb_count(void) const
{
    if (!CanGetDb_count()) {
        ThrowUnassigned(0);
    }
    return m_Db_count;
}

inline
void CEntrez2_info_Base::SetDb_count(CEntrez2_info_Base::TDb_count value)
{
    m_Db_count = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_info_Base::TDb_count& CEntrez2_info_Base::SetDb_count(void)
{
#ifdef _DEBUG
    if (!IsSetDb_count()) {
        memset(&m_Db_count,UnassignedByte(),sizeof(m_Db_count));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Db_count;
}

inline
bool CEntrez2_info_Base::IsSetBuild_date(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_info_Base::CanGetBuild_date(void) const
{
    return IsSetBuild_date();
}

inline
void CEntrez2_info_Base::ResetBuild_date(void)
{
    m_Build_date = CEntrez2_dt(0);
    m_set_State[0] &= ~0xc;
}

inline
const CEntrez2_info_Base::TBuild_date& CEntrez2_info_Base::GetBuild_date(void) const
{
    if (!CanGetBuild_date()) {
        ThrowUnassigned(1);
    }
    return m_Build_date;
}

inline
void CEntrez2_info_Base::SetBuild_date(const CEntrez2_info_Base::TBuild_date& value)
{
    m_Build_date = value;
    m_set_State[0] |= 0xc;
}

inline
CEntrez2_info_Base::TBuild_date& CEntrez2_info_Base::SetBuild_date(void)
{
    m_set_State[0] |= 0x4;
    return m_Build_date;
}

inline
bool CEntrez2_info_Base::IsSetDb_info(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez2_info_Base::CanGetDb_info(void) const
{
    return true;
}

inline
const CEntrez2_info_Base::TDb_info& CEntrez2_info_Base::GetDb_info(void) const
{
    return m_Db_info;
}

inline
CEntrez2_info_Base::TDb_info& CEntrez2_info_Base::SetDb_info(void)
{
    m_set_State[0] |= 0x10;
    return m_Db_info;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_INFO_BASE_HPP
