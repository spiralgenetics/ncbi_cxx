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

/// @file IconUrl_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'elink.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef elink__OBJTOOLS_EUTILS_ELINK_ICONURL_BASE_HPP
#define elink__OBJTOOLS_EUTILS_ELINK_ICONURL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

#ifndef BEGIN_elink_SCOPE
#  define BEGIN_elink_SCOPE BEGIN_SCOPE(elink)
#  define END_elink_SCOPE END_SCOPE(elink)
#endif
BEGIN_elink_SCOPE // namespace elink::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// \S+ 
class NCBI_EUTILS_EXPORT CIconUrl_Base : public NCBI_NS_NCBI::CSerialObject
{
    typedef NCBI_NS_NCBI::CSerialObject Tparent;
public:
    // constructor
    CIconUrl_Base(void);
    // destructor
    virtual ~CIconUrl_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_EUTILS_EXPORT C_Attlist : public NCBI_NS_NCBI::CSerialObject
    {
        typedef NCBI_NS_NCBI::CSerialObject Tparent;
    public:
        // constructor
        C_Attlist(void);
        // destructor
        ~C_Attlist(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
        enum EAttlist_LNG {
            eAttlist_LNG_DA =  1,
            eAttlist_LNG_DE =  2,
            eAttlist_LNG_EN =  3,
            eAttlist_LNG_EL =  4,
            eAttlist_LNG_ES =  5,
            eAttlist_LNG_FR =  6,
            eAttlist_LNG_IT =  7,
            eAttlist_LNG_IW =  8,
            eAttlist_LNG_JA =  9,
            eAttlist_LNG_NL = 10,
            eAttlist_LNG_NO = 11,
            eAttlist_LNG_RU = 12,
            eAttlist_LNG_SV = 13,
            eAttlist_LNG_ZH = 14
        };
        
        /// Access to EAttlist_LNG's attributes (values, names) as defined in spec
        static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EAttlist_LNG)(void);
        
        // types
        typedef EAttlist_LNG TLNG;
    
        // getters
        // setters
    
        /// optional with default eAttlist_LNG_EN
        /// typedef EAttlist_LNG TLNG
        ///  Check whether the LNG data member has been assigned a value.
        bool IsSetLNG(void) const;
        /// Check whether it is safe or not to call GetLNG method.
        bool CanGetLNG(void) const;
        void ResetLNG(void);
        void SetDefaultLNG(void);
        TLNG GetLNG(void) const;
        void SetLNG(TLNG value);
        TLNG& SetLNG(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        EAttlist_LNG m_LNG;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef NCBI_NS_STD::string TIconUrl;

    // getters
    // setters

    /// mandatory
    /// typedef C_Attlist TAttlist
    ///  Check whether the Attlist data member has been assigned a value.
    bool IsSetAttlist(void) const;
    /// Check whether it is safe or not to call GetAttlist method.
    bool CanGetAttlist(void) const;
    void ResetAttlist(void);
    const TAttlist& GetAttlist(void) const;
    void SetAttlist(TAttlist& value);
    TAttlist& SetAttlist(void);

    /// mandatory
    /// typedef NCBI_NS_STD::string TIconUrl
    ///  Check whether the IconUrl data member has been assigned a value.
    bool IsSetIconUrl(void) const;
    /// Check whether it is safe or not to call GetIconUrl method.
    bool CanGetIconUrl(void) const;
    void ResetIconUrl(void);
    const TIconUrl& GetIconUrl(void) const;
    void SetIconUrl(const TIconUrl& value);
    TIconUrl& SetIconUrl(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CIconUrl_Base(const CIconUrl_Base&);
    CIconUrl_Base& operator=(const CIconUrl_Base&);

    // data
    Uint4 m_set_State[1];
    NCBI_NS_NCBI::CRef< TAttlist > m_Attlist;
    NCBI_NS_STD::string m_IconUrl;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CIconUrl_Base::C_Attlist::IsSetLNG(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CIconUrl_Base::C_Attlist::CanGetLNG(void) const
{
    return true;
}

inline
void CIconUrl_Base::C_Attlist::ResetLNG(void)
{
    m_LNG = eAttlist_LNG_EN;
    m_set_State[0] &= ~0x3;
}

inline
void CIconUrl_Base::C_Attlist::SetDefaultLNG(void)
{
    ResetLNG();
    m_set_State[0] |= 0x1;
}

inline
CIconUrl_Base::C_Attlist::TLNG CIconUrl_Base::C_Attlist::GetLNG(void) const
{
    return m_LNG;
}

inline
void CIconUrl_Base::C_Attlist::SetLNG(CIconUrl_Base::C_Attlist::TLNG value)
{
    m_LNG = value;
    m_set_State[0] |= 0x3;
}

inline
CIconUrl_Base::C_Attlist::TLNG& CIconUrl_Base::C_Attlist::SetLNG(void)
{
#ifdef _DEBUG
    if (!IsSetLNG()) {
        memset(&m_LNG,UnassignedByte(),sizeof(m_LNG));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_LNG;
}

inline
bool CIconUrl_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CIconUrl_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CIconUrl_Base::TAttlist& CIconUrl_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CIconUrl_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CIconUrl_Base::TAttlist& CIconUrl_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CIconUrl_Base::IsSetIconUrl(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CIconUrl_Base::CanGetIconUrl(void) const
{
    return IsSetIconUrl();
}

inline
const CIconUrl_Base::TIconUrl& CIconUrl_Base::GetIconUrl(void) const
{
    if (!CanGetIconUrl()) {
        ThrowUnassigned(1);
    }
    return m_IconUrl;
}

inline
void CIconUrl_Base::SetIconUrl(const CIconUrl_Base::TIconUrl& value)
{
    m_IconUrl = value;
    m_set_State[0] |= 0xc;
}

inline
CIconUrl_Base::TIconUrl& CIconUrl_Base::SetIconUrl(void)
{
#ifdef _DEBUG
    if (!IsSetIconUrl()) {
        m_IconUrl = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_IconUrl;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_elink_SCOPE // namespace elink::


#endif // elink__OBJTOOLS_EUTILS_ELINK_ICONURL_BASE_HPP
