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

/// @file Mim_link_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mim.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MIM_MIM_LINK_BASE_HPP
#define OBJECTS_MIM_MIM_LINK_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_MIM_EXPORT CMim_link_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMim_link_Base(void);
    // destructor
    virtual ~CMim_link_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TNum;
    typedef string TUids;
    typedef int TNumRelevant;

    // getters
    // setters

    /// mandatory
    /// typedef int TNum
    ///  Check whether the Num data member has been assigned a value.
    bool IsSetNum(void) const;
    /// Check whether it is safe or not to call GetNum method.
    bool CanGetNum(void) const;
    void ResetNum(void);
    TNum GetNum(void) const;
    void SetNum(TNum value);
    TNum& SetNum(void);

    /// mandatory
    /// typedef string TUids
    ///  Check whether the Uids data member has been assigned a value.
    bool IsSetUids(void) const;
    /// Check whether it is safe or not to call GetUids method.
    bool CanGetUids(void) const;
    void ResetUids(void);
    const TUids& GetUids(void) const;
    void SetUids(const TUids& value);
    TUids& SetUids(void);

    /// optional
    /// typedef int TNumRelevant
    ///  Check whether the NumRelevant data member has been assigned a value.
    bool IsSetNumRelevant(void) const;
    /// Check whether it is safe or not to call GetNumRelevant method.
    bool CanGetNumRelevant(void) const;
    void ResetNumRelevant(void);
    TNumRelevant GetNumRelevant(void) const;
    void SetNumRelevant(TNumRelevant value);
    TNumRelevant& SetNumRelevant(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMim_link_Base(const CMim_link_Base&);
    CMim_link_Base& operator=(const CMim_link_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Num;
    string m_Uids;
    int m_NumRelevant;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMim_link_Base::IsSetNum(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMim_link_Base::CanGetNum(void) const
{
    return IsSetNum();
}

inline
void CMim_link_Base::ResetNum(void)
{
    m_Num = 0;
    m_set_State[0] &= ~0x3;
}

inline
CMim_link_Base::TNum CMim_link_Base::GetNum(void) const
{
    if (!CanGetNum()) {
        ThrowUnassigned(0);
    }
    return m_Num;
}

inline
void CMim_link_Base::SetNum(CMim_link_Base::TNum value)
{
    m_Num = value;
    m_set_State[0] |= 0x3;
}

inline
CMim_link_Base::TNum& CMim_link_Base::SetNum(void)
{
#ifdef _DEBUG
    if (!IsSetNum()) {
        memset(&m_Num,UnassignedByte(),sizeof(m_Num));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Num;
}

inline
bool CMim_link_Base::IsSetUids(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMim_link_Base::CanGetUids(void) const
{
    return IsSetUids();
}

inline
const CMim_link_Base::TUids& CMim_link_Base::GetUids(void) const
{
    if (!CanGetUids()) {
        ThrowUnassigned(1);
    }
    return m_Uids;
}

inline
void CMim_link_Base::SetUids(const CMim_link_Base::TUids& value)
{
    m_Uids = value;
    m_set_State[0] |= 0xc;
}

inline
CMim_link_Base::TUids& CMim_link_Base::SetUids(void)
{
#ifdef _DEBUG
    if (!IsSetUids()) {
        m_Uids = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Uids;
}

inline
bool CMim_link_Base::IsSetNumRelevant(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMim_link_Base::CanGetNumRelevant(void) const
{
    return IsSetNumRelevant();
}

inline
void CMim_link_Base::ResetNumRelevant(void)
{
    m_NumRelevant = 0;
    m_set_State[0] &= ~0x30;
}

inline
CMim_link_Base::TNumRelevant CMim_link_Base::GetNumRelevant(void) const
{
    if (!CanGetNumRelevant()) {
        ThrowUnassigned(2);
    }
    return m_NumRelevant;
}

inline
void CMim_link_Base::SetNumRelevant(CMim_link_Base::TNumRelevant value)
{
    m_NumRelevant = value;
    m_set_State[0] |= 0x30;
}

inline
CMim_link_Base::TNumRelevant& CMim_link_Base::SetNumRelevant(void)
{
#ifdef _DEBUG
    if (!IsSetNumRelevant()) {
        memset(&m_NumRelevant,UnassignedByte(),sizeof(m_NumRelevant));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_NumRelevant;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MIM_MIM_LINK_BASE_HPP
