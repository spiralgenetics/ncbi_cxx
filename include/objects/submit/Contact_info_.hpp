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

/// @file Contact_info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'submit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SUBMIT_CONTACT_INFO_BASE_HPP
#define OBJECTS_SUBMIT_CONTACT_INFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>
#include <vector>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CAuthor;
class CObject_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// who to contact to discuss the submission
class NCBI_SUBMIT_EXPORT CContact_info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CContact_info_Base(void);
    // destructor
    virtual ~CContact_info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TName;
    typedef list< string > TAddress;
    typedef string TPhone;
    typedef string TFax;
    typedef string TEmail;
    typedef string TTelex;
    typedef CObject_id TOwner_id;
    typedef vector< char > TPassword;
    typedef string TLast_name;
    typedef string TFirst_name;
    typedef string TMiddle_initial;
    typedef CAuthor TContact;

    // getters
    // setters

    /// OBSOLETE: will be removed
    /// optional
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
    /// typedef list< string > TAddress
    ///  Check whether the Address data member has been assigned a value.
    bool IsSetAddress(void) const;
    /// Check whether it is safe or not to call GetAddress method.
    bool CanGetAddress(void) const;
    void ResetAddress(void);
    const TAddress& GetAddress(void) const;
    TAddress& SetAddress(void);

    /// optional
    /// typedef string TPhone
    ///  Check whether the Phone data member has been assigned a value.
    bool IsSetPhone(void) const;
    /// Check whether it is safe or not to call GetPhone method.
    bool CanGetPhone(void) const;
    void ResetPhone(void);
    const TPhone& GetPhone(void) const;
    void SetPhone(const TPhone& value);
    TPhone& SetPhone(void);

    /// optional
    /// typedef string TFax
    ///  Check whether the Fax data member has been assigned a value.
    bool IsSetFax(void) const;
    /// Check whether it is safe or not to call GetFax method.
    bool CanGetFax(void) const;
    void ResetFax(void);
    const TFax& GetFax(void) const;
    void SetFax(const TFax& value);
    TFax& SetFax(void);

    /// optional
    /// typedef string TEmail
    ///  Check whether the Email data member has been assigned a value.
    bool IsSetEmail(void) const;
    /// Check whether it is safe or not to call GetEmail method.
    bool CanGetEmail(void) const;
    void ResetEmail(void);
    const TEmail& GetEmail(void) const;
    void SetEmail(const TEmail& value);
    TEmail& SetEmail(void);

    /// optional
    /// typedef string TTelex
    ///  Check whether the Telex data member has been assigned a value.
    bool IsSetTelex(void) const;
    /// Check whether it is safe or not to call GetTelex method.
    bool CanGetTelex(void) const;
    void ResetTelex(void);
    const TTelex& GetTelex(void) const;
    void SetTelex(const TTelex& value);
    TTelex& SetTelex(void);

    /// for owner accounts
    /// optional
    /// typedef CObject_id TOwner_id
    ///  Check whether the Owner_id data member has been assigned a value.
    bool IsSetOwner_id(void) const;
    /// Check whether it is safe or not to call GetOwner_id method.
    bool CanGetOwner_id(void) const;
    void ResetOwner_id(void);
    const TOwner_id& GetOwner_id(void) const;
    void SetOwner_id(TOwner_id& value);
    TOwner_id& SetOwner_id(void);

    /// optional
    /// typedef vector< char > TPassword
    ///  Check whether the Password data member has been assigned a value.
    bool IsSetPassword(void) const;
    /// Check whether it is safe or not to call GetPassword method.
    bool CanGetPassword(void) const;
    void ResetPassword(void);
    const TPassword& GetPassword(void) const;
    TPassword& SetPassword(void);

    /// structured to replace name above
    /// optional
    /// typedef string TLast_name
    ///  Check whether the Last_name data member has been assigned a value.
    bool IsSetLast_name(void) const;
    /// Check whether it is safe or not to call GetLast_name method.
    bool CanGetLast_name(void) const;
    void ResetLast_name(void);
    const TLast_name& GetLast_name(void) const;
    void SetLast_name(const TLast_name& value);
    TLast_name& SetLast_name(void);

    /// optional
    /// typedef string TFirst_name
    ///  Check whether the First_name data member has been assigned a value.
    bool IsSetFirst_name(void) const;
    /// Check whether it is safe or not to call GetFirst_name method.
    bool CanGetFirst_name(void) const;
    void ResetFirst_name(void);
    const TFirst_name& GetFirst_name(void) const;
    void SetFirst_name(const TFirst_name& value);
    TFirst_name& SetFirst_name(void);

    /// optional
    /// typedef string TMiddle_initial
    ///  Check whether the Middle_initial data member has been assigned a value.
    bool IsSetMiddle_initial(void) const;
    /// Check whether it is safe or not to call GetMiddle_initial method.
    bool CanGetMiddle_initial(void) const;
    void ResetMiddle_initial(void);
    const TMiddle_initial& GetMiddle_initial(void) const;
    void SetMiddle_initial(const TMiddle_initial& value);
    TMiddle_initial& SetMiddle_initial(void);

    /// WARNING: this will replace the above
    /// optional
    /// typedef CAuthor TContact
    ///  Check whether the Contact data member has been assigned a value.
    bool IsSetContact(void) const;
    /// Check whether it is safe or not to call GetContact method.
    bool CanGetContact(void) const;
    void ResetContact(void);
    const TContact& GetContact(void) const;
    void SetContact(TContact& value);
    TContact& SetContact(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CContact_info_Base(const CContact_info_Base&);
    CContact_info_Base& operator=(const CContact_info_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    list< string > m_Address;
    string m_Phone;
    string m_Fax;
    string m_Email;
    string m_Telex;
    CRef< TOwner_id > m_Owner_id;
    vector< char > m_Password;
    string m_Last_name;
    string m_First_name;
    string m_Middle_initial;
    CRef< TContact > m_Contact;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CContact_info_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CContact_info_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CContact_info_Base::TName& CContact_info_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CContact_info_Base::SetName(const CContact_info_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CContact_info_Base::TName& CContact_info_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CContact_info_Base::IsSetAddress(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CContact_info_Base::CanGetAddress(void) const
{
    return true;
}

inline
const CContact_info_Base::TAddress& CContact_info_Base::GetAddress(void) const
{
    return m_Address;
}

inline
CContact_info_Base::TAddress& CContact_info_Base::SetAddress(void)
{
    m_set_State[0] |= 0x4;
    return m_Address;
}

inline
bool CContact_info_Base::IsSetPhone(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CContact_info_Base::CanGetPhone(void) const
{
    return IsSetPhone();
}

inline
const CContact_info_Base::TPhone& CContact_info_Base::GetPhone(void) const
{
    if (!CanGetPhone()) {
        ThrowUnassigned(2);
    }
    return m_Phone;
}

inline
void CContact_info_Base::SetPhone(const CContact_info_Base::TPhone& value)
{
    m_Phone = value;
    m_set_State[0] |= 0x30;
}

inline
CContact_info_Base::TPhone& CContact_info_Base::SetPhone(void)
{
#ifdef _DEBUG
    if (!IsSetPhone()) {
        m_Phone = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Phone;
}

inline
bool CContact_info_Base::IsSetFax(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CContact_info_Base::CanGetFax(void) const
{
    return IsSetFax();
}

inline
const CContact_info_Base::TFax& CContact_info_Base::GetFax(void) const
{
    if (!CanGetFax()) {
        ThrowUnassigned(3);
    }
    return m_Fax;
}

inline
void CContact_info_Base::SetFax(const CContact_info_Base::TFax& value)
{
    m_Fax = value;
    m_set_State[0] |= 0xc0;
}

inline
CContact_info_Base::TFax& CContact_info_Base::SetFax(void)
{
#ifdef _DEBUG
    if (!IsSetFax()) {
        m_Fax = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Fax;
}

inline
bool CContact_info_Base::IsSetEmail(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CContact_info_Base::CanGetEmail(void) const
{
    return IsSetEmail();
}

inline
const CContact_info_Base::TEmail& CContact_info_Base::GetEmail(void) const
{
    if (!CanGetEmail()) {
        ThrowUnassigned(4);
    }
    return m_Email;
}

inline
void CContact_info_Base::SetEmail(const CContact_info_Base::TEmail& value)
{
    m_Email = value;
    m_set_State[0] |= 0x300;
}

inline
CContact_info_Base::TEmail& CContact_info_Base::SetEmail(void)
{
#ifdef _DEBUG
    if (!IsSetEmail()) {
        m_Email = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Email;
}

inline
bool CContact_info_Base::IsSetTelex(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CContact_info_Base::CanGetTelex(void) const
{
    return IsSetTelex();
}

inline
const CContact_info_Base::TTelex& CContact_info_Base::GetTelex(void) const
{
    if (!CanGetTelex()) {
        ThrowUnassigned(5);
    }
    return m_Telex;
}

inline
void CContact_info_Base::SetTelex(const CContact_info_Base::TTelex& value)
{
    m_Telex = value;
    m_set_State[0] |= 0xc00;
}

inline
CContact_info_Base::TTelex& CContact_info_Base::SetTelex(void)
{
#ifdef _DEBUG
    if (!IsSetTelex()) {
        m_Telex = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Telex;
}

inline
bool CContact_info_Base::IsSetOwner_id(void) const
{
    return m_Owner_id.NotEmpty();
}

inline
bool CContact_info_Base::CanGetOwner_id(void) const
{
    return IsSetOwner_id();
}

inline
const CContact_info_Base::TOwner_id& CContact_info_Base::GetOwner_id(void) const
{
    if (!CanGetOwner_id()) {
        ThrowUnassigned(6);
    }
    return (*m_Owner_id);
}

inline
bool CContact_info_Base::IsSetPassword(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CContact_info_Base::CanGetPassword(void) const
{
    return IsSetPassword();
}

inline
const CContact_info_Base::TPassword& CContact_info_Base::GetPassword(void) const
{
    if (!CanGetPassword()) {
        ThrowUnassigned(7);
    }
    return m_Password;
}

inline
CContact_info_Base::TPassword& CContact_info_Base::SetPassword(void)
{
    m_set_State[0] |= 0x4000;
    return m_Password;
}

inline
bool CContact_info_Base::IsSetLast_name(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CContact_info_Base::CanGetLast_name(void) const
{
    return IsSetLast_name();
}

inline
const CContact_info_Base::TLast_name& CContact_info_Base::GetLast_name(void) const
{
    if (!CanGetLast_name()) {
        ThrowUnassigned(8);
    }
    return m_Last_name;
}

inline
void CContact_info_Base::SetLast_name(const CContact_info_Base::TLast_name& value)
{
    m_Last_name = value;
    m_set_State[0] |= 0x30000;
}

inline
CContact_info_Base::TLast_name& CContact_info_Base::SetLast_name(void)
{
#ifdef _DEBUG
    if (!IsSetLast_name()) {
        m_Last_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Last_name;
}

inline
bool CContact_info_Base::IsSetFirst_name(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CContact_info_Base::CanGetFirst_name(void) const
{
    return IsSetFirst_name();
}

inline
const CContact_info_Base::TFirst_name& CContact_info_Base::GetFirst_name(void) const
{
    if (!CanGetFirst_name()) {
        ThrowUnassigned(9);
    }
    return m_First_name;
}

inline
void CContact_info_Base::SetFirst_name(const CContact_info_Base::TFirst_name& value)
{
    m_First_name = value;
    m_set_State[0] |= 0xc0000;
}

inline
CContact_info_Base::TFirst_name& CContact_info_Base::SetFirst_name(void)
{
#ifdef _DEBUG
    if (!IsSetFirst_name()) {
        m_First_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_First_name;
}

inline
bool CContact_info_Base::IsSetMiddle_initial(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CContact_info_Base::CanGetMiddle_initial(void) const
{
    return IsSetMiddle_initial();
}

inline
const CContact_info_Base::TMiddle_initial& CContact_info_Base::GetMiddle_initial(void) const
{
    if (!CanGetMiddle_initial()) {
        ThrowUnassigned(10);
    }
    return m_Middle_initial;
}

inline
void CContact_info_Base::SetMiddle_initial(const CContact_info_Base::TMiddle_initial& value)
{
    m_Middle_initial = value;
    m_set_State[0] |= 0x300000;
}

inline
CContact_info_Base::TMiddle_initial& CContact_info_Base::SetMiddle_initial(void)
{
#ifdef _DEBUG
    if (!IsSetMiddle_initial()) {
        m_Middle_initial = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Middle_initial;
}

inline
bool CContact_info_Base::IsSetContact(void) const
{
    return m_Contact.NotEmpty();
}

inline
bool CContact_info_Base::CanGetContact(void) const
{
    return IsSetContact();
}

inline
const CContact_info_Base::TContact& CContact_info_Base::GetContact(void) const
{
    if (!CanGetContact()) {
        ThrowUnassigned(11);
    }
    return (*m_Contact);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SUBMIT_CONTACT_INFO_BASE_HPP
