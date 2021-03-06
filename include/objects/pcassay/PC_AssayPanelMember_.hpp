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

/// @file PC_AssayPanelMember_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcassay.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_BASE_HPP
#define OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_BASE_HPP

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
class CPC_AnnotatedXRef;
class CPC_AssayDRAttr;
class CPC_AssayTargetInfo;
class CPC_CategorizedComment;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Specific information about each panel member(or component), such as target, cell line name, cross-reference ... 
class NCBI_PCASSAY_EXPORT CPC_AssayPanelMember_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPC_AssayPanelMember_Base(void);
    // destructor
    virtual ~CPC_AssayPanelMember_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// Assay Outcome Qualifier
    enum EActivity_outcome_method {
        eActivity_outcome_method_other        = 0,  ///<   All Other Type
        eActivity_outcome_method_screening    = 1,  ///<   Primary Screen Assay
        eActivity_outcome_method_confirmatory = 2,  ///<   Confirmatory Assay
        eActivity_outcome_method_summary      = 3  ///<   Probe Summary Assay
    };
    
    /// Access to EActivity_outcome_method's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EActivity_outcome_method)(void);
    
    // types
    typedef int TMid;
    typedef string TName;
    typedef string TDescription;
    typedef list< string > TProtocol;
    typedef list< string > TComment;
    typedef list< CRef< CPC_AssayTargetInfo > > TTarget;
    typedef list< CRef< CPC_AnnotatedXRef > > TXref;
    typedef int TActivity_outcome_method;
    typedef list< CRef< CPC_AssayDRAttr > > TDr;
    typedef list< CRef< CPC_CategorizedComment > > TCategorized_comment;

    // getters
    // setters

    /// ID for panel member 
    /// if a kinase panel with 300 kinases, ID will range from 1 to 300  
    /// TIDs of the same panel member to be grouped based on panel member ID
    /// mandatory
    /// typedef int TMid
    ///  Check whether the Mid data member has been assigned a value.
    bool IsSetMid(void) const;
    /// Check whether it is safe or not to call GetMid method.
    bool CanGetMid(void) const;
    void ResetMid(void);
    TMid GetMid(void) const;
    void SetMid(TMid value);
    TMid& SetMid(void);

    /// short name for this panel member 
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

    /// description about specifics of this panel member
    /// such as about cell line, or target information 
    /// optional
    /// typedef string TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    void SetDescription(const TDescription& value);
    TDescription& SetDescription(void);

    /// Specific procedure used to generate results for the panel member
    /// optional
    /// typedef list< string > TProtocol
    ///  Check whether the Protocol data member has been assigned a value.
    bool IsSetProtocol(void) const;
    /// Check whether it is safe or not to call GetProtocol method.
    bool CanGetProtocol(void) const;
    void ResetProtocol(void);
    const TProtocol& GetProtocol(void) const;
    TProtocol& SetProtocol(void);

    /// Comments or additional information
    /// optional
    /// typedef list< string > TComment
    ///  Check whether the Comment data member has been assigned a value.
    bool IsSetComment(void) const;
    /// Check whether it is safe or not to call GetComment method.
    bool CanGetComment(void) const;
    void ResetComment(void);
    const TComment& GetComment(void) const;
    TComment& SetComment(void);

    /// often provided for profiling assays across protein families
    /// optional
    /// typedef list< CRef< CPC_AssayTargetInfo > > TTarget
    ///  Check whether the Target data member has been assigned a value.
    bool IsSetTarget(void) const;
    /// Check whether it is safe or not to call GetTarget method.
    bool CanGetTarget(void) const;
    void ResetTarget(void);
    const TTarget& GetTarget(void) const;
    TTarget& SetTarget(void);

    /// annotated Cross-Reference Information
    /// optional
    /// typedef list< CRef< CPC_AnnotatedXRef > > TXref
    ///  Check whether the Xref data member has been assigned a value.
    bool IsSetXref(void) const;
    /// Check whether it is safe or not to call GetXref method.
    bool CanGetXref(void) const;
    void ResetXref(void);
    const TXref& GetXref(void) const;
    TXref& SetXref(void);

    /// optional
    /// typedef int TActivity_outcome_method
    ///  Check whether the Activity_outcome_method data member has been assigned a value.
    bool IsSetActivity_outcome_method(void) const;
    /// Check whether it is safe or not to call GetActivity_outcome_method method.
    bool CanGetActivity_outcome_method(void) const;
    void ResetActivity_outcome_method(void);
    TActivity_outcome_method GetActivity_outcome_method(void) const;
    void SetActivity_outcome_method(TActivity_outcome_method value);
    TActivity_outcome_method& SetActivity_outcome_method(void);

    /// Dose-Response Attribution within the panel member
    /// optional
    /// typedef list< CRef< CPC_AssayDRAttr > > TDr
    ///  Check whether the Dr data member has been assigned a value.
    bool IsSetDr(void) const;
    /// Check whether it is safe or not to call GetDr method.
    bool CanGetDr(void) const;
    void ResetDr(void);
    const TDr& GetDr(void) const;
    TDr& SetDr(void);

    /// to report categorized description/comment by associating with a category title 
    /// optional
    /// typedef list< CRef< CPC_CategorizedComment > > TCategorized_comment
    ///  Check whether the Categorized_comment data member has been assigned a value.
    bool IsSetCategorized_comment(void) const;
    /// Check whether it is safe or not to call GetCategorized_comment method.
    bool CanGetCategorized_comment(void) const;
    void ResetCategorized_comment(void);
    const TCategorized_comment& GetCategorized_comment(void) const;
    TCategorized_comment& SetCategorized_comment(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPC_AssayPanelMember_Base(const CPC_AssayPanelMember_Base&);
    CPC_AssayPanelMember_Base& operator=(const CPC_AssayPanelMember_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Mid;
    string m_Name;
    string m_Description;
    list< string > m_Protocol;
    list< string > m_Comment;
    list< CRef< CPC_AssayTargetInfo > > m_Target;
    list< CRef< CPC_AnnotatedXRef > > m_Xref;
    int m_Activity_outcome_method;
    list< CRef< CPC_AssayDRAttr > > m_Dr;
    list< CRef< CPC_CategorizedComment > > m_Categorized_comment;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPC_AssayPanelMember_Base::IsSetMid(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetMid(void) const
{
    return IsSetMid();
}

inline
void CPC_AssayPanelMember_Base::ResetMid(void)
{
    m_Mid = 0;
    m_set_State[0] &= ~0x3;
}

inline
CPC_AssayPanelMember_Base::TMid CPC_AssayPanelMember_Base::GetMid(void) const
{
    if (!CanGetMid()) {
        ThrowUnassigned(0);
    }
    return m_Mid;
}

inline
void CPC_AssayPanelMember_Base::SetMid(CPC_AssayPanelMember_Base::TMid value)
{
    m_Mid = value;
    m_set_State[0] |= 0x3;
}

inline
CPC_AssayPanelMember_Base::TMid& CPC_AssayPanelMember_Base::SetMid(void)
{
#ifdef _DEBUG
    if (!IsSetMid()) {
        memset(&m_Mid,UnassignedByte(),sizeof(m_Mid));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Mid;
}

inline
bool CPC_AssayPanelMember_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CPC_AssayPanelMember_Base::TName& CPC_AssayPanelMember_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CPC_AssayPanelMember_Base::SetName(const CPC_AssayPanelMember_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
CPC_AssayPanelMember_Base::TName& CPC_AssayPanelMember_Base::SetName(void)
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
bool CPC_AssayPanelMember_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CPC_AssayPanelMember_Base::TDescription& CPC_AssayPanelMember_Base::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(2);
    }
    return m_Description;
}

inline
void CPC_AssayPanelMember_Base::SetDescription(const CPC_AssayPanelMember_Base::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0x30;
}

inline
CPC_AssayPanelMember_Base::TDescription& CPC_AssayPanelMember_Base::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Description;
}

inline
bool CPC_AssayPanelMember_Base::IsSetProtocol(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetProtocol(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TProtocol& CPC_AssayPanelMember_Base::GetProtocol(void) const
{
    return m_Protocol;
}

inline
CPC_AssayPanelMember_Base::TProtocol& CPC_AssayPanelMember_Base::SetProtocol(void)
{
    m_set_State[0] |= 0x40;
    return m_Protocol;
}

inline
bool CPC_AssayPanelMember_Base::IsSetComment(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetComment(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TComment& CPC_AssayPanelMember_Base::GetComment(void) const
{
    return m_Comment;
}

inline
CPC_AssayPanelMember_Base::TComment& CPC_AssayPanelMember_Base::SetComment(void)
{
    m_set_State[0] |= 0x100;
    return m_Comment;
}

inline
bool CPC_AssayPanelMember_Base::IsSetTarget(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetTarget(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TTarget& CPC_AssayPanelMember_Base::GetTarget(void) const
{
    return m_Target;
}

inline
CPC_AssayPanelMember_Base::TTarget& CPC_AssayPanelMember_Base::SetTarget(void)
{
    m_set_State[0] |= 0x400;
    return m_Target;
}

inline
bool CPC_AssayPanelMember_Base::IsSetXref(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetXref(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TXref& CPC_AssayPanelMember_Base::GetXref(void) const
{
    return m_Xref;
}

inline
CPC_AssayPanelMember_Base::TXref& CPC_AssayPanelMember_Base::SetXref(void)
{
    m_set_State[0] |= 0x1000;
    return m_Xref;
}

inline
bool CPC_AssayPanelMember_Base::IsSetActivity_outcome_method(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetActivity_outcome_method(void) const
{
    return IsSetActivity_outcome_method();
}

inline
void CPC_AssayPanelMember_Base::ResetActivity_outcome_method(void)
{
    m_Activity_outcome_method = (EActivity_outcome_method)(0);
    m_set_State[0] &= ~0xc000;
}

inline
CPC_AssayPanelMember_Base::TActivity_outcome_method CPC_AssayPanelMember_Base::GetActivity_outcome_method(void) const
{
    if (!CanGetActivity_outcome_method()) {
        ThrowUnassigned(7);
    }
    return m_Activity_outcome_method;
}

inline
void CPC_AssayPanelMember_Base::SetActivity_outcome_method(CPC_AssayPanelMember_Base::TActivity_outcome_method value)
{
    m_Activity_outcome_method = value;
    m_set_State[0] |= 0xc000;
}

inline
CPC_AssayPanelMember_Base::TActivity_outcome_method& CPC_AssayPanelMember_Base::SetActivity_outcome_method(void)
{
#ifdef _DEBUG
    if (!IsSetActivity_outcome_method()) {
        memset(&m_Activity_outcome_method,UnassignedByte(),sizeof(m_Activity_outcome_method));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Activity_outcome_method;
}

inline
bool CPC_AssayPanelMember_Base::IsSetDr(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetDr(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TDr& CPC_AssayPanelMember_Base::GetDr(void) const
{
    return m_Dr;
}

inline
CPC_AssayPanelMember_Base::TDr& CPC_AssayPanelMember_Base::SetDr(void)
{
    m_set_State[0] |= 0x10000;
    return m_Dr;
}

inline
bool CPC_AssayPanelMember_Base::IsSetCategorized_comment(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CPC_AssayPanelMember_Base::CanGetCategorized_comment(void) const
{
    return true;
}

inline
const CPC_AssayPanelMember_Base::TCategorized_comment& CPC_AssayPanelMember_Base::GetCategorized_comment(void) const
{
    return m_Categorized_comment;
}

inline
CPC_AssayPanelMember_Base::TCategorized_comment& CPC_AssayPanelMember_Base::SetCategorized_comment(void)
{
    m_set_State[0] |= 0x40000;
    return m_Categorized_comment;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_BASE_HPP
