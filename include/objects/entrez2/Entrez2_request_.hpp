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

/// @file Entrez2_request_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_REQUEST_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_REQUEST_BASE_HPP

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


// forward declarations
class CE2Request;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///***************************************
///  Entrez2 Request types
///***************************************
///****************************************
/// The basic request wrapper leaves space for a version which
///   allow the server to support older clients
/// The tool parameter allows us to log the client types for
///   debugging and tuning
/// The cookie is a session ID returned by the first Entrez2-reply
///****************************************
/// a standard request
class NCBI_ENTREZ2_EXPORT CEntrez2_request_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_request_Base(void);
    // destructor
    virtual ~CEntrez2_request_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CE2Request TRequest;
    typedef int TVersion;
    typedef string TTool;
    typedef string TCookie;
    typedef bool TUse_history;

    // getters
    // setters

    /// the actual request
    /// mandatory
    /// typedef CE2Request TRequest
    ///  Check whether the Request data member has been assigned a value.
    bool IsSetRequest(void) const;
    /// Check whether it is safe or not to call GetRequest method.
    bool CanGetRequest(void) const;
    void ResetRequest(void);
    const TRequest& GetRequest(void) const;
    void SetRequest(TRequest& value);
    TRequest& SetRequest(void);

    /// ASN1 spec version
    /// mandatory
    /// typedef int TVersion
    ///  Check whether the Version data member has been assigned a value.
    bool IsSetVersion(void) const;
    /// Check whether it is safe or not to call GetVersion method.
    bool CanGetVersion(void) const;
    void ResetVersion(void);
    TVersion GetVersion(void) const;
    void SetVersion(TVersion value);
    TVersion& SetVersion(void);

    /// tool making request
    /// optional
    /// typedef string TTool
    ///  Check whether the Tool data member has been assigned a value.
    bool IsSetTool(void) const;
    /// Check whether it is safe or not to call GetTool method.
    bool CanGetTool(void) const;
    void ResetTool(void);
    const TTool& GetTool(void) const;
    void SetTool(const TTool& value);
    TTool& SetTool(void);

    /// history session cookie
    /// optional
    /// typedef string TCookie
    ///  Check whether the Cookie data member has been assigned a value.
    bool IsSetCookie(void) const;
    /// Check whether it is safe or not to call GetCookie method.
    bool CanGetCookie(void) const;
    void ResetCookie(void);
    const TCookie& GetCookie(void) const;
    void SetCookie(const TCookie& value);
    TCookie& SetCookie(void);

    /// request should use history
    /// optional with default false
    /// typedef bool TUse_history
    ///  Check whether the Use_history data member has been assigned a value.
    bool IsSetUse_history(void) const;
    /// Check whether it is safe or not to call GetUse_history method.
    bool CanGetUse_history(void) const;
    void ResetUse_history(void);
    void SetDefaultUse_history(void);
    TUse_history GetUse_history(void) const;
    void SetUse_history(TUse_history value);
    TUse_history& SetUse_history(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_request_Base(const CEntrez2_request_Base&);
    CEntrez2_request_Base& operator=(const CEntrez2_request_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TRequest > m_Request;
    int m_Version;
    string m_Tool;
    string m_Cookie;
    bool m_Use_history;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_request_Base::IsSetRequest(void) const
{
    return m_Request.NotEmpty();
}

inline
bool CEntrez2_request_Base::CanGetRequest(void) const
{
    return true;
}

inline
const CEntrez2_request_Base::TRequest& CEntrez2_request_Base::GetRequest(void) const
{
    if ( !m_Request ) {
        const_cast<CEntrez2_request_Base*>(this)->ResetRequest();
    }
    return (*m_Request);
}

inline
CEntrez2_request_Base::TRequest& CEntrez2_request_Base::SetRequest(void)
{
    if ( !m_Request ) {
        ResetRequest();
    }
    return (*m_Request);
}

inline
bool CEntrez2_request_Base::IsSetVersion(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_request_Base::CanGetVersion(void) const
{
    return IsSetVersion();
}

inline
void CEntrez2_request_Base::ResetVersion(void)
{
    m_Version = 0;
    m_set_State[0] &= ~0xc;
}

inline
CEntrez2_request_Base::TVersion CEntrez2_request_Base::GetVersion(void) const
{
    if (!CanGetVersion()) {
        ThrowUnassigned(1);
    }
    return m_Version;
}

inline
void CEntrez2_request_Base::SetVersion(CEntrez2_request_Base::TVersion value)
{
    m_Version = value;
    m_set_State[0] |= 0xc;
}

inline
CEntrez2_request_Base::TVersion& CEntrez2_request_Base::SetVersion(void)
{
#ifdef _DEBUG
    if (!IsSetVersion()) {
        memset(&m_Version,UnassignedByte(),sizeof(m_Version));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Version;
}

inline
bool CEntrez2_request_Base::IsSetTool(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez2_request_Base::CanGetTool(void) const
{
    return IsSetTool();
}

inline
const CEntrez2_request_Base::TTool& CEntrez2_request_Base::GetTool(void) const
{
    if (!CanGetTool()) {
        ThrowUnassigned(2);
    }
    return m_Tool;
}

inline
void CEntrez2_request_Base::SetTool(const CEntrez2_request_Base::TTool& value)
{
    m_Tool = value;
    m_set_State[0] |= 0x30;
}

inline
CEntrez2_request_Base::TTool& CEntrez2_request_Base::SetTool(void)
{
#ifdef _DEBUG
    if (!IsSetTool()) {
        m_Tool = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Tool;
}

inline
bool CEntrez2_request_Base::IsSetCookie(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CEntrez2_request_Base::CanGetCookie(void) const
{
    return IsSetCookie();
}

inline
const CEntrez2_request_Base::TCookie& CEntrez2_request_Base::GetCookie(void) const
{
    if (!CanGetCookie()) {
        ThrowUnassigned(3);
    }
    return m_Cookie;
}

inline
void CEntrez2_request_Base::SetCookie(const CEntrez2_request_Base::TCookie& value)
{
    m_Cookie = value;
    m_set_State[0] |= 0xc0;
}

inline
CEntrez2_request_Base::TCookie& CEntrez2_request_Base::SetCookie(void)
{
#ifdef _DEBUG
    if (!IsSetCookie()) {
        m_Cookie = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Cookie;
}

inline
bool CEntrez2_request_Base::IsSetUse_history(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CEntrez2_request_Base::CanGetUse_history(void) const
{
    return true;
}

inline
void CEntrez2_request_Base::ResetUse_history(void)
{
    m_Use_history = false;
    m_set_State[0] &= ~0x300;
}

inline
void CEntrez2_request_Base::SetDefaultUse_history(void)
{
    ResetUse_history();
}

inline
CEntrez2_request_Base::TUse_history CEntrez2_request_Base::GetUse_history(void) const
{
    return m_Use_history;
}

inline
void CEntrez2_request_Base::SetUse_history(CEntrez2_request_Base::TUse_history value)
{
    m_Use_history = value;
    m_set_State[0] |= 0x300;
}

inline
CEntrez2_request_Base::TUse_history& CEntrez2_request_Base::SetUse_history(void)
{
#ifdef _DEBUG
    if (!IsSetUse_history()) {
        memset(&m_Use_history,UnassignedByte(),sizeof(m_Use_history));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Use_history;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_REQUEST_BASE_HPP
