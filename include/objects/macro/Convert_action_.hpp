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

/// @file Convert_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_CONVERT_ACTION_BASE_HPP
#define OBJECTS_MACRO_CONVERT_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Cap_change.hpp>
#include <objects/macro/ExistingTextOption.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CField_pair_type;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CConvert_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CConvert_action_Base(void);
    // destructor
    virtual ~CConvert_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CField_pair_type TFields;
    typedef bool TStrip_name;
    typedef bool TKeep_original;
    typedef ECap_change TCapitalization;
    typedef EExistingTextOption TExisting_text;

    // getters
    // setters

    /// mandatory
    /// typedef CField_pair_type TFields
    ///  Check whether the Fields data member has been assigned a value.
    bool IsSetFields(void) const;
    /// Check whether it is safe or not to call GetFields method.
    bool CanGetFields(void) const;
    void ResetFields(void);
    const TFields& GetFields(void) const;
    void SetFields(TFields& value);
    TFields& SetFields(void);

    /// optional with default false
    /// typedef bool TStrip_name
    ///  Check whether the Strip_name data member has been assigned a value.
    bool IsSetStrip_name(void) const;
    /// Check whether it is safe or not to call GetStrip_name method.
    bool CanGetStrip_name(void) const;
    void ResetStrip_name(void);
    void SetDefaultStrip_name(void);
    TStrip_name GetStrip_name(void) const;
    void SetStrip_name(TStrip_name value);
    TStrip_name& SetStrip_name(void);

    /// optional with default false
    /// typedef bool TKeep_original
    ///  Check whether the Keep_original data member has been assigned a value.
    bool IsSetKeep_original(void) const;
    /// Check whether it is safe or not to call GetKeep_original method.
    bool CanGetKeep_original(void) const;
    void ResetKeep_original(void);
    void SetDefaultKeep_original(void);
    TKeep_original GetKeep_original(void) const;
    void SetKeep_original(TKeep_original value);
    TKeep_original& SetKeep_original(void);

    /// optional with default eCap_change_none
    /// typedef ECap_change TCapitalization
    ///  Check whether the Capitalization data member has been assigned a value.
    bool IsSetCapitalization(void) const;
    /// Check whether it is safe or not to call GetCapitalization method.
    bool CanGetCapitalization(void) const;
    void ResetCapitalization(void);
    void SetDefaultCapitalization(void);
    TCapitalization GetCapitalization(void) const;
    void SetCapitalization(TCapitalization value);
    TCapitalization& SetCapitalization(void);

    /// mandatory
    /// typedef EExistingTextOption TExisting_text
    ///  Check whether the Existing_text data member has been assigned a value.
    bool IsSetExisting_text(void) const;
    /// Check whether it is safe or not to call GetExisting_text method.
    bool CanGetExisting_text(void) const;
    void ResetExisting_text(void);
    TExisting_text GetExisting_text(void) const;
    void SetExisting_text(TExisting_text value);
    TExisting_text& SetExisting_text(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CConvert_action_Base(const CConvert_action_Base&);
    CConvert_action_Base& operator=(const CConvert_action_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TFields > m_Fields;
    bool m_Strip_name;
    bool m_Keep_original;
    ECap_change m_Capitalization;
    EExistingTextOption m_Existing_text;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CConvert_action_Base::IsSetFields(void) const
{
    return m_Fields.NotEmpty();
}

inline
bool CConvert_action_Base::CanGetFields(void) const
{
    return true;
}

inline
const CConvert_action_Base::TFields& CConvert_action_Base::GetFields(void) const
{
    if ( !m_Fields ) {
        const_cast<CConvert_action_Base*>(this)->ResetFields();
    }
    return (*m_Fields);
}

inline
CConvert_action_Base::TFields& CConvert_action_Base::SetFields(void)
{
    if ( !m_Fields ) {
        ResetFields();
    }
    return (*m_Fields);
}

inline
bool CConvert_action_Base::IsSetStrip_name(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CConvert_action_Base::CanGetStrip_name(void) const
{
    return true;
}

inline
void CConvert_action_Base::ResetStrip_name(void)
{
    m_Strip_name = false;
    m_set_State[0] &= ~0xc;
}

inline
void CConvert_action_Base::SetDefaultStrip_name(void)
{
    ResetStrip_name();
}

inline
CConvert_action_Base::TStrip_name CConvert_action_Base::GetStrip_name(void) const
{
    return m_Strip_name;
}

inline
void CConvert_action_Base::SetStrip_name(CConvert_action_Base::TStrip_name value)
{
    m_Strip_name = value;
    m_set_State[0] |= 0xc;
}

inline
CConvert_action_Base::TStrip_name& CConvert_action_Base::SetStrip_name(void)
{
#ifdef _DEBUG
    if (!IsSetStrip_name()) {
        memset(&m_Strip_name,UnassignedByte(),sizeof(m_Strip_name));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Strip_name;
}

inline
bool CConvert_action_Base::IsSetKeep_original(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CConvert_action_Base::CanGetKeep_original(void) const
{
    return true;
}

inline
void CConvert_action_Base::ResetKeep_original(void)
{
    m_Keep_original = false;
    m_set_State[0] &= ~0x30;
}

inline
void CConvert_action_Base::SetDefaultKeep_original(void)
{
    ResetKeep_original();
}

inline
CConvert_action_Base::TKeep_original CConvert_action_Base::GetKeep_original(void) const
{
    return m_Keep_original;
}

inline
void CConvert_action_Base::SetKeep_original(CConvert_action_Base::TKeep_original value)
{
    m_Keep_original = value;
    m_set_State[0] |= 0x30;
}

inline
CConvert_action_Base::TKeep_original& CConvert_action_Base::SetKeep_original(void)
{
#ifdef _DEBUG
    if (!IsSetKeep_original()) {
        memset(&m_Keep_original,UnassignedByte(),sizeof(m_Keep_original));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Keep_original;
}

inline
bool CConvert_action_Base::IsSetCapitalization(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CConvert_action_Base::CanGetCapitalization(void) const
{
    return true;
}

inline
void CConvert_action_Base::ResetCapitalization(void)
{
    m_Capitalization = eCap_change_none;
    m_set_State[0] &= ~0xc0;
}

inline
void CConvert_action_Base::SetDefaultCapitalization(void)
{
    ResetCapitalization();
}

inline
CConvert_action_Base::TCapitalization CConvert_action_Base::GetCapitalization(void) const
{
    return m_Capitalization;
}

inline
void CConvert_action_Base::SetCapitalization(CConvert_action_Base::TCapitalization value)
{
    m_Capitalization = value;
    m_set_State[0] |= 0xc0;
}

inline
CConvert_action_Base::TCapitalization& CConvert_action_Base::SetCapitalization(void)
{
#ifdef _DEBUG
    if (!IsSetCapitalization()) {
        memset(&m_Capitalization,UnassignedByte(),sizeof(m_Capitalization));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Capitalization;
}

inline
bool CConvert_action_Base::IsSetExisting_text(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CConvert_action_Base::CanGetExisting_text(void) const
{
    return IsSetExisting_text();
}

inline
void CConvert_action_Base::ResetExisting_text(void)
{
    m_Existing_text = (ncbi::objects::EExistingTextOption)(0);
    m_set_State[0] &= ~0x300;
}

inline
CConvert_action_Base::TExisting_text CConvert_action_Base::GetExisting_text(void) const
{
    if (!CanGetExisting_text()) {
        ThrowUnassigned(4);
    }
    return m_Existing_text;
}

inline
void CConvert_action_Base::SetExisting_text(CConvert_action_Base::TExisting_text value)
{
    m_Existing_text = value;
    m_set_State[0] |= 0x300;
}

inline
CConvert_action_Base::TExisting_text& CConvert_action_Base::SetExisting_text(void)
{
#ifdef _DEBUG
    if (!IsSetExisting_text()) {
        memset(&m_Existing_text,UnassignedByte(),sizeof(m_Existing_text));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Existing_text;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_CONVERT_ACTION_BASE_HPP