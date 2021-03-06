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

/// @file Query_Search_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'we_cpp.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SERIAL_TEST_QUERY_SEARCH_BASE_HPP
#define SERIAL_TEST_QUERY_SEARCH_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CFilter_Value;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CQuery_Search_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CQuery_Search_Base(void);
    // destructor
    virtual ~CQuery_Search_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TDb;
    typedef string TTerm;
    typedef string TField;
    typedef list< CRef< CFilter_Value > > TFilters;
    typedef int TCount;
    typedef int TFlags;

    // getters
    // setters

    /// source DB
    /// mandatory
    /// typedef string TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    const TDb& GetDb(void) const;
    void SetDb(const TDb& value);
    TDb& SetDb(void);

    /// query term
    /// mandatory
    /// typedef string TTerm
    ///  Check whether the Term data member has been assigned a value.
    bool IsSetTerm(void) const;
    /// Check whether it is safe or not to call GetTerm method.
    bool CanGetTerm(void) const;
    void ResetTerm(void);
    const TTerm& GetTerm(void) const;
    void SetTerm(const TTerm& value);
    TTerm& SetTerm(void);

    /// query default field
    /// optional
    /// typedef string TField
    ///  Check whether the Field data member has been assigned a value.
    bool IsSetField(void) const;
    /// Check whether it is safe or not to call GetField method.
    bool CanGetField(void) const;
    void ResetField(void);
    const TField& GetField(void) const;
    void SetField(const TField& value);
    TField& SetField(void);

    /// query filters set
    /// optional
    /// typedef list< CRef< CFilter_Value > > TFilters
    ///  Check whether the Filters data member has been assigned a value.
    bool IsSetFilters(void) const;
    /// Check whether it is safe or not to call GetFilters method.
    bool CanGetFilters(void) const;
    void ResetFilters(void);
    const TFilters& GetFilters(void) const;
    TFilters& SetFilters(void);

    /// size of result
    /// mandatory
    /// typedef int TCount
    ///  Check whether the Count data member has been assigned a value.
    bool IsSetCount(void) const;
    /// Check whether it is safe or not to call GetCount method.
    bool CanGetCount(void) const;
    void ResetCount(void);
    TCount GetCount(void) const;
    void SetCount(TCount value);
    TCount& SetCount(void);

    /// query flags (IgnoreFilters)  
    /// optional
    /// typedef int TFlags
    ///  Check whether the Flags data member has been assigned a value.
    bool IsSetFlags(void) const;
    /// Check whether it is safe or not to call GetFlags method.
    bool CanGetFlags(void) const;
    void ResetFlags(void);
    TFlags GetFlags(void) const;
    void SetFlags(TFlags value);
    TFlags& SetFlags(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CQuery_Search_Base(const CQuery_Search_Base&);
    CQuery_Search_Base& operator=(const CQuery_Search_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Db;
    string m_Term;
    string m_Field;
    list< CRef< CFilter_Value > > m_Filters;
    int m_Count;
    int m_Flags;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CQuery_Search_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CQuery_Search_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
const CQuery_Search_Base::TDb& CQuery_Search_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(0);
    }
    return m_Db;
}

inline
void CQuery_Search_Base::SetDb(const CQuery_Search_Base::TDb& value)
{
    m_Db = value;
    m_set_State[0] |= 0x3;
}

inline
CQuery_Search_Base::TDb& CQuery_Search_Base::SetDb(void)
{
#ifdef _DEBUG
    if (!IsSetDb()) {
        m_Db = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Db;
}

inline
bool CQuery_Search_Base::IsSetTerm(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CQuery_Search_Base::CanGetTerm(void) const
{
    return IsSetTerm();
}

inline
const CQuery_Search_Base::TTerm& CQuery_Search_Base::GetTerm(void) const
{
    if (!CanGetTerm()) {
        ThrowUnassigned(1);
    }
    return m_Term;
}

inline
void CQuery_Search_Base::SetTerm(const CQuery_Search_Base::TTerm& value)
{
    m_Term = value;
    m_set_State[0] |= 0xc;
}

inline
CQuery_Search_Base::TTerm& CQuery_Search_Base::SetTerm(void)
{
#ifdef _DEBUG
    if (!IsSetTerm()) {
        m_Term = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Term;
}

inline
bool CQuery_Search_Base::IsSetField(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CQuery_Search_Base::CanGetField(void) const
{
    return IsSetField();
}

inline
const CQuery_Search_Base::TField& CQuery_Search_Base::GetField(void) const
{
    if (!CanGetField()) {
        ThrowUnassigned(2);
    }
    return m_Field;
}

inline
void CQuery_Search_Base::SetField(const CQuery_Search_Base::TField& value)
{
    m_Field = value;
    m_set_State[0] |= 0x30;
}

inline
CQuery_Search_Base::TField& CQuery_Search_Base::SetField(void)
{
#ifdef _DEBUG
    if (!IsSetField()) {
        m_Field = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Field;
}

inline
bool CQuery_Search_Base::IsSetFilters(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CQuery_Search_Base::CanGetFilters(void) const
{
    return true;
}

inline
const CQuery_Search_Base::TFilters& CQuery_Search_Base::GetFilters(void) const
{
    return m_Filters;
}

inline
CQuery_Search_Base::TFilters& CQuery_Search_Base::SetFilters(void)
{
    m_set_State[0] |= 0x40;
    return m_Filters;
}

inline
bool CQuery_Search_Base::IsSetCount(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CQuery_Search_Base::CanGetCount(void) const
{
    return IsSetCount();
}

inline
void CQuery_Search_Base::ResetCount(void)
{
    m_Count = 0;
    m_set_State[0] &= ~0x300;
}

inline
CQuery_Search_Base::TCount CQuery_Search_Base::GetCount(void) const
{
    if (!CanGetCount()) {
        ThrowUnassigned(4);
    }
    return m_Count;
}

inline
void CQuery_Search_Base::SetCount(CQuery_Search_Base::TCount value)
{
    m_Count = value;
    m_set_State[0] |= 0x300;
}

inline
CQuery_Search_Base::TCount& CQuery_Search_Base::SetCount(void)
{
#ifdef _DEBUG
    if (!IsSetCount()) {
        memset(&m_Count,UnassignedByte(),sizeof(m_Count));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Count;
}

inline
bool CQuery_Search_Base::IsSetFlags(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CQuery_Search_Base::CanGetFlags(void) const
{
    return IsSetFlags();
}

inline
void CQuery_Search_Base::ResetFlags(void)
{
    m_Flags = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CQuery_Search_Base::TFlags CQuery_Search_Base::GetFlags(void) const
{
    if (!CanGetFlags()) {
        ThrowUnassigned(5);
    }
    return m_Flags;
}

inline
void CQuery_Search_Base::SetFlags(CQuery_Search_Base::TFlags value)
{
    m_Flags = value;
    m_set_State[0] |= 0xc00;
}

inline
CQuery_Search_Base::TFlags& CQuery_Search_Base::SetFlags(void)
{
#ifdef _DEBUG
    if (!IsSetFlags()) {
        memset(&m_Flags,UnassignedByte(),sizeof(m_Flags));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Flags;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SERIAL_TEST_QUERY_SEARCH_BASE_HPP
