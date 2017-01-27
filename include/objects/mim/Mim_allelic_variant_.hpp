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

/// @file Mim_allelic_variant_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mim.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MIM_MIM_ALLELIC_VARIANT_BASE_HPP
#define OBJECTS_MIM_MIM_ALLELIC_VARIANT_BASE_HPP

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
class CMim_link;
class CMim_text;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_MIM_EXPORT CMim_allelic_variant_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMim_allelic_variant_Base(void);
    // destructor
    virtual ~CMim_allelic_variant_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TNumber;
    typedef string TName;
    typedef list< string > TAliases;
    typedef list< CRef< CMim_text > > TMutation;
    typedef list< CRef< CMim_text > > TDescription;
    typedef CMim_link TSnpLinks;

    // getters
    // setters

    /// mandatory
    /// typedef string TNumber
    ///  Check whether the Number data member has been assigned a value.
    bool IsSetNumber(void) const;
    /// Check whether it is safe or not to call GetNumber method.
    bool CanGetNumber(void) const;
    void ResetNumber(void);
    const TNumber& GetNumber(void) const;
    void SetNumber(const TNumber& value);
    TNumber& SetNumber(void);

    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// optional
    /// typedef list< string > TAliases
    ///  Check whether the Aliases data member has been assigned a value.
    bool IsSetAliases(void) const;
    /// Check whether it is safe or not to call GetAliases method.
    bool CanGetAliases(void) const;
    void ResetAliases(void);
    const TAliases& GetAliases(void) const;
    TAliases& SetAliases(void);

    /// optional
    /// typedef list< CRef< CMim_text > > TMutation
    ///  Check whether the Mutation data member has been assigned a value.
    bool IsSetMutation(void) const;
    /// Check whether it is safe or not to call GetMutation method.
    bool CanGetMutation(void) const;
    void ResetMutation(void);
    const TMutation& GetMutation(void) const;
    TMutation& SetMutation(void);

    /// optional
    /// typedef list< CRef< CMim_text > > TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    TDescription& SetDescription(void);

    /// optional
    /// typedef CMim_link TSnpLinks
    ///  Check whether the SnpLinks data member has been assigned a value.
    bool IsSetSnpLinks(void) const;
    /// Check whether it is safe or not to call GetSnpLinks method.
    bool CanGetSnpLinks(void) const;
    void ResetSnpLinks(void);
    const TSnpLinks& GetSnpLinks(void) const;
    void SetSnpLinks(TSnpLinks& value);
    TSnpLinks& SetSnpLinks(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMim_allelic_variant_Base(const CMim_allelic_variant_Base&);
    CMim_allelic_variant_Base& operator=(const CMim_allelic_variant_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Number;
    string m_Name;
    list< string > m_Aliases;
    list< CRef< CMim_text > > m_Mutation;
    list< CRef< CMim_text > > m_Description;
    CRef< TSnpLinks > m_SnpLinks;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMim_allelic_variant_Base::IsSetNumber(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMim_allelic_variant_Base::CanGetNumber(void) const
{
    return IsSetNumber();
}

inline
const CMim_allelic_variant_Base::TNumber& CMim_allelic_variant_Base::GetNumber(void) const
{
    if (!CanGetNumber()) {
        ThrowUnassigned(0);
    }
    return m_Number;
}

inline
void CMim_allelic_variant_Base::SetNumber(const CMim_allelic_variant_Base::TNumber& value)
{
    m_Number = value;
    m_set_State[0] |= 0x3;
}

inline
CMim_allelic_variant_Base::TNumber& CMim_allelic_variant_Base::SetNumber(void)
{
#ifdef _DEBUG
    if (!IsSetNumber()) {
        m_Number = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Number;
}

inline
bool CMim_allelic_variant_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMim_allelic_variant_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CMim_allelic_variant_Base::TName& CMim_allelic_variant_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CMim_allelic_variant_Base::SetName(const CMim_allelic_variant_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
CMim_allelic_variant_Base::TName& CMim_allelic_variant_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Name;
}

inline
bool CMim_allelic_variant_Base::IsSetAliases(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMim_allelic_variant_Base::CanGetAliases(void) const
{
    return true;
}

inline
const CMim_allelic_variant_Base::TAliases& CMim_allelic_variant_Base::GetAliases(void) const
{
    return m_Aliases;
}

inline
CMim_allelic_variant_Base::TAliases& CMim_allelic_variant_Base::SetAliases(void)
{
    m_set_State[0] |= 0x10;
    return m_Aliases;
}

inline
bool CMim_allelic_variant_Base::IsSetMutation(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMim_allelic_variant_Base::CanGetMutation(void) const
{
    return true;
}

inline
const CMim_allelic_variant_Base::TMutation& CMim_allelic_variant_Base::GetMutation(void) const
{
    return m_Mutation;
}

inline
CMim_allelic_variant_Base::TMutation& CMim_allelic_variant_Base::SetMutation(void)
{
    m_set_State[0] |= 0x40;
    return m_Mutation;
}

inline
bool CMim_allelic_variant_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CMim_allelic_variant_Base::CanGetDescription(void) const
{
    return true;
}

inline
const CMim_allelic_variant_Base::TDescription& CMim_allelic_variant_Base::GetDescription(void) const
{
    return m_Description;
}

inline
CMim_allelic_variant_Base::TDescription& CMim_allelic_variant_Base::SetDescription(void)
{
    m_set_State[0] |= 0x100;
    return m_Description;
}

inline
bool CMim_allelic_variant_Base::IsSetSnpLinks(void) const
{
    return m_SnpLinks.NotEmpty();
}

inline
bool CMim_allelic_variant_Base::CanGetSnpLinks(void) const
{
    return IsSetSnpLinks();
}

inline
const CMim_allelic_variant_Base::TSnpLinks& CMim_allelic_variant_Base::GetSnpLinks(void) const
{
    if (!CanGetSnpLinks()) {
        ThrowUnassigned(5);
    }
    return (*m_SnpLinks);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MIM_MIM_ALLELIC_VARIANT_BASE_HPP