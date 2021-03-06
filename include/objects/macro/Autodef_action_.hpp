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

/// @file Autodef_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_AUTODEF_ACTION_BASE_HPP
#define OBJECTS_MACRO_AUTODEF_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/macro/Autod_misc_feat_parse_rule.hpp>
#include <objects/macro/Autodef_list_type.hpp>
#include <objects/macro/Source_qual.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CAutodef_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CAutodef_action_Base(void);
    // destructor
    virtual ~CAutodef_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< ESource_qual > TModifiers;
    typedef EAutodef_list_type TClause_list_type;
    typedef EAutodef_misc_feat_parse_rule TMisc_feat_parse_rule;

    // getters
    // setters

    /// optional
    /// typedef list< ESource_qual > TModifiers
    ///  Check whether the Modifiers data member has been assigned a value.
    bool IsSetModifiers(void) const;
    /// Check whether it is safe or not to call GetModifiers method.
    bool CanGetModifiers(void) const;
    void ResetModifiers(void);
    const TModifiers& GetModifiers(void) const;
    TModifiers& SetModifiers(void);

    /// mandatory
    /// typedef EAutodef_list_type TClause_list_type
    ///  Check whether the Clause_list_type data member has been assigned a value.
    bool IsSetClause_list_type(void) const;
    /// Check whether it is safe or not to call GetClause_list_type method.
    bool CanGetClause_list_type(void) const;
    void ResetClause_list_type(void);
    TClause_list_type GetClause_list_type(void) const;
    void SetClause_list_type(TClause_list_type value);
    TClause_list_type& SetClause_list_type(void);

    /// optional with default eAutodef_misc_feat_parse_rule_look_for_noncoding_products
    /// typedef EAutodef_misc_feat_parse_rule TMisc_feat_parse_rule
    ///  Check whether the Misc_feat_parse_rule data member has been assigned a value.
    bool IsSetMisc_feat_parse_rule(void) const;
    /// Check whether it is safe or not to call GetMisc_feat_parse_rule method.
    bool CanGetMisc_feat_parse_rule(void) const;
    void ResetMisc_feat_parse_rule(void);
    void SetDefaultMisc_feat_parse_rule(void);
    TMisc_feat_parse_rule GetMisc_feat_parse_rule(void) const;
    void SetMisc_feat_parse_rule(TMisc_feat_parse_rule value);
    TMisc_feat_parse_rule& SetMisc_feat_parse_rule(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CAutodef_action_Base(const CAutodef_action_Base&);
    CAutodef_action_Base& operator=(const CAutodef_action_Base&);

    // data
    Uint4 m_set_State[1];
    list< ESource_qual > m_Modifiers;
    EAutodef_list_type m_Clause_list_type;
    EAutodef_misc_feat_parse_rule m_Misc_feat_parse_rule;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CAutodef_action_Base::IsSetModifiers(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CAutodef_action_Base::CanGetModifiers(void) const
{
    return true;
}

inline
const CAutodef_action_Base::TModifiers& CAutodef_action_Base::GetModifiers(void) const
{
    return m_Modifiers;
}

inline
CAutodef_action_Base::TModifiers& CAutodef_action_Base::SetModifiers(void)
{
    m_set_State[0] |= 0x1;
    return m_Modifiers;
}

inline
bool CAutodef_action_Base::IsSetClause_list_type(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CAutodef_action_Base::CanGetClause_list_type(void) const
{
    return IsSetClause_list_type();
}

inline
void CAutodef_action_Base::ResetClause_list_type(void)
{
    m_Clause_list_type = (ncbi::objects::EAutodef_list_type)(0);
    m_set_State[0] &= ~0xc;
}

inline
CAutodef_action_Base::TClause_list_type CAutodef_action_Base::GetClause_list_type(void) const
{
    if (!CanGetClause_list_type()) {
        ThrowUnassigned(1);
    }
    return m_Clause_list_type;
}

inline
void CAutodef_action_Base::SetClause_list_type(CAutodef_action_Base::TClause_list_type value)
{
    m_Clause_list_type = value;
    m_set_State[0] |= 0xc;
}

inline
CAutodef_action_Base::TClause_list_type& CAutodef_action_Base::SetClause_list_type(void)
{
#ifdef _DEBUG
    if (!IsSetClause_list_type()) {
        memset(&m_Clause_list_type,UnassignedByte(),sizeof(m_Clause_list_type));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Clause_list_type;
}

inline
bool CAutodef_action_Base::IsSetMisc_feat_parse_rule(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CAutodef_action_Base::CanGetMisc_feat_parse_rule(void) const
{
    return true;
}

inline
void CAutodef_action_Base::ResetMisc_feat_parse_rule(void)
{
    m_Misc_feat_parse_rule = eAutodef_misc_feat_parse_rule_look_for_noncoding_products;
    m_set_State[0] &= ~0x30;
}

inline
void CAutodef_action_Base::SetDefaultMisc_feat_parse_rule(void)
{
    ResetMisc_feat_parse_rule();
}

inline
CAutodef_action_Base::TMisc_feat_parse_rule CAutodef_action_Base::GetMisc_feat_parse_rule(void) const
{
    return m_Misc_feat_parse_rule;
}

inline
void CAutodef_action_Base::SetMisc_feat_parse_rule(CAutodef_action_Base::TMisc_feat_parse_rule value)
{
    m_Misc_feat_parse_rule = value;
    m_set_State[0] |= 0x30;
}

inline
CAutodef_action_Base::TMisc_feat_parse_rule& CAutodef_action_Base::SetMisc_feat_parse_rule(void)
{
#ifdef _DEBUG
    if (!IsSetMisc_feat_parse_rule()) {
        memset(&m_Misc_feat_parse_rule,UnassignedByte(),sizeof(m_Misc_feat_parse_rule));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Misc_feat_parse_rule;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_AUTODEF_ACTION_BASE_HPP
