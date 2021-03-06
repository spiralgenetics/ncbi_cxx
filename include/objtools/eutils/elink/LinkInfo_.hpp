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

/// @file LinkInfo_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'elink.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_BASE_HPP
#define elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

#ifndef BEGIN_elink_SCOPE
#  define BEGIN_elink_SCOPE BEGIN_SCOPE(elink)
#  define END_elink_SCOPE END_SCOPE(elink)
#endif
BEGIN_elink_SCOPE // namespace elink::


// forward declarations
class CUrl;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CLinkInfo_Base : public NCBI_NS_NCBI::CSerialObject
{
    typedef NCBI_NS_NCBI::CSerialObject Tparent;
public:
    // constructor
    CLinkInfo_Base(void);
    // destructor
    virtual ~CLinkInfo_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef NCBI_NS_STD::string TDbTo;
    typedef NCBI_NS_STD::string TLinkName;
    typedef NCBI_NS_STD::string TMenuTag;
    typedef NCBI_NS_STD::string THtmlTag;
    typedef CUrl TUrl;
    typedef NCBI_NS_STD::string TPriority;

    // getters
    // setters

    /// \S+ 
    /// mandatory
    /// typedef NCBI_NS_STD::string TDbTo
    ///  Check whether the DbTo data member has been assigned a value.
    bool IsSetDbTo(void) const;
    /// Check whether it is safe or not to call GetDbTo method.
    bool CanGetDbTo(void) const;
    void ResetDbTo(void);
    const TDbTo& GetDbTo(void) const;
    void SetDbTo(const TDbTo& value);
    TDbTo& SetDbTo(void);

    /// \S+ 
    /// mandatory
    /// typedef NCBI_NS_STD::string TLinkName
    ///  Check whether the LinkName data member has been assigned a value.
    bool IsSetLinkName(void) const;
    /// Check whether it is safe or not to call GetLinkName method.
    bool CanGetLinkName(void) const;
    void ResetLinkName(void);
    const TLinkName& GetLinkName(void) const;
    void SetLinkName(const TLinkName& value);
    TLinkName& SetLinkName(void);

    /// \S+ 
    /// optional
    /// typedef NCBI_NS_STD::string TMenuTag
    ///  Check whether the MenuTag data member has been assigned a value.
    bool IsSetMenuTag(void) const;
    /// Check whether it is safe or not to call GetMenuTag method.
    bool CanGetMenuTag(void) const;
    void ResetMenuTag(void);
    const TMenuTag& GetMenuTag(void) const;
    void SetMenuTag(const TMenuTag& value);
    TMenuTag& SetMenuTag(void);

    /// \S+ 
    /// optional
    /// typedef NCBI_NS_STD::string THtmlTag
    ///  Check whether the HtmlTag data member has been assigned a value.
    bool IsSetHtmlTag(void) const;
    /// Check whether it is safe or not to call GetHtmlTag method.
    bool CanGetHtmlTag(void) const;
    void ResetHtmlTag(void);
    const THtmlTag& GetHtmlTag(void) const;
    void SetHtmlTag(const THtmlTag& value);
    THtmlTag& SetHtmlTag(void);

    /// cmd=llinks 
    /// \S+ 
    /// optional
    /// typedef CUrl TUrl
    ///  Check whether the Url data member has been assigned a value.
    bool IsSetUrl(void) const;
    /// Check whether it is safe or not to call GetUrl method.
    bool CanGetUrl(void) const;
    void ResetUrl(void);
    const TUrl& GetUrl(void) const;
    void SetUrl(TUrl& value);
    TUrl& SetUrl(void);
    void SetUrl(const NCBI_NS_STD::string& value);

    /// \S+ 
    /// mandatory
    /// typedef NCBI_NS_STD::string TPriority
    ///  Check whether the Priority data member has been assigned a value.
    bool IsSetPriority(void) const;
    /// Check whether it is safe or not to call GetPriority method.
    bool CanGetPriority(void) const;
    void ResetPriority(void);
    const TPriority& GetPriority(void) const;
    void SetPriority(const TPriority& value);
    TPriority& SetPriority(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CLinkInfo_Base(const CLinkInfo_Base&);
    CLinkInfo_Base& operator=(const CLinkInfo_Base&);

    // data
    Uint4 m_set_State[1];
    NCBI_NS_STD::string m_DbTo;
    NCBI_NS_STD::string m_LinkName;
    NCBI_NS_STD::string m_MenuTag;
    NCBI_NS_STD::string m_HtmlTag;
    NCBI_NS_NCBI::CRef< TUrl > m_Url;
    NCBI_NS_STD::string m_Priority;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CLinkInfo_Base::IsSetDbTo(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CLinkInfo_Base::CanGetDbTo(void) const
{
    return IsSetDbTo();
}

inline
const CLinkInfo_Base::TDbTo& CLinkInfo_Base::GetDbTo(void) const
{
    if (!CanGetDbTo()) {
        ThrowUnassigned(0);
    }
    return m_DbTo;
}

inline
void CLinkInfo_Base::SetDbTo(const CLinkInfo_Base::TDbTo& value)
{
    m_DbTo = value;
    m_set_State[0] |= 0x3;
}

inline
CLinkInfo_Base::TDbTo& CLinkInfo_Base::SetDbTo(void)
{
#ifdef _DEBUG
    if (!IsSetDbTo()) {
        m_DbTo = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_DbTo;
}

inline
bool CLinkInfo_Base::IsSetLinkName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CLinkInfo_Base::CanGetLinkName(void) const
{
    return IsSetLinkName();
}

inline
const CLinkInfo_Base::TLinkName& CLinkInfo_Base::GetLinkName(void) const
{
    if (!CanGetLinkName()) {
        ThrowUnassigned(1);
    }
    return m_LinkName;
}

inline
void CLinkInfo_Base::SetLinkName(const CLinkInfo_Base::TLinkName& value)
{
    m_LinkName = value;
    m_set_State[0] |= 0xc;
}

inline
CLinkInfo_Base::TLinkName& CLinkInfo_Base::SetLinkName(void)
{
#ifdef _DEBUG
    if (!IsSetLinkName()) {
        m_LinkName = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_LinkName;
}

inline
bool CLinkInfo_Base::IsSetMenuTag(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CLinkInfo_Base::CanGetMenuTag(void) const
{
    return IsSetMenuTag();
}

inline
const CLinkInfo_Base::TMenuTag& CLinkInfo_Base::GetMenuTag(void) const
{
    if (!CanGetMenuTag()) {
        ThrowUnassigned(2);
    }
    return m_MenuTag;
}

inline
void CLinkInfo_Base::SetMenuTag(const CLinkInfo_Base::TMenuTag& value)
{
    m_MenuTag = value;
    m_set_State[0] |= 0x30;
}

inline
CLinkInfo_Base::TMenuTag& CLinkInfo_Base::SetMenuTag(void)
{
#ifdef _DEBUG
    if (!IsSetMenuTag()) {
        m_MenuTag = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_MenuTag;
}

inline
bool CLinkInfo_Base::IsSetHtmlTag(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CLinkInfo_Base::CanGetHtmlTag(void) const
{
    return IsSetHtmlTag();
}

inline
const CLinkInfo_Base::THtmlTag& CLinkInfo_Base::GetHtmlTag(void) const
{
    if (!CanGetHtmlTag()) {
        ThrowUnassigned(3);
    }
    return m_HtmlTag;
}

inline
void CLinkInfo_Base::SetHtmlTag(const CLinkInfo_Base::THtmlTag& value)
{
    m_HtmlTag = value;
    m_set_State[0] |= 0xc0;
}

inline
CLinkInfo_Base::THtmlTag& CLinkInfo_Base::SetHtmlTag(void)
{
#ifdef _DEBUG
    if (!IsSetHtmlTag()) {
        m_HtmlTag = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_HtmlTag;
}

inline
bool CLinkInfo_Base::IsSetUrl(void) const
{
    return m_Url.NotEmpty();
}

inline
bool CLinkInfo_Base::CanGetUrl(void) const
{
    return IsSetUrl();
}

inline
const CLinkInfo_Base::TUrl& CLinkInfo_Base::GetUrl(void) const
{
    if (!CanGetUrl()) {
        ThrowUnassigned(4);
    }
    return (*m_Url);
}

inline
bool CLinkInfo_Base::IsSetPriority(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CLinkInfo_Base::CanGetPriority(void) const
{
    return IsSetPriority();
}

inline
const CLinkInfo_Base::TPriority& CLinkInfo_Base::GetPriority(void) const
{
    if (!CanGetPriority()) {
        ThrowUnassigned(5);
    }
    return m_Priority;
}

inline
void CLinkInfo_Base::SetPriority(const CLinkInfo_Base::TPriority& value)
{
    m_Priority = value;
    m_set_State[0] |= 0xc00;
}

inline
CLinkInfo_Base::TPriority& CLinkInfo_Base::SetPriority(void)
{
#ifdef _DEBUG
    if (!IsSetPriority()) {
        m_Priority = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Priority;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_elink_SCOPE // namespace elink::


#endif // elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_BASE_HPP
