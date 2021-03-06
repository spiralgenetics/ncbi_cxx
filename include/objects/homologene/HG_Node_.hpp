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

/// @file HG_Node_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'homologene.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_HOMOLOGENE_HG_NODE_BASE_HPP
#define OBJECTS_HOMOLOGENE_HG_NODE_BASE_HPP

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
class CHG_Node;
class CHG_Node_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CHG_Node_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CHG_Node_Base(void);
    // destructor
    virtual ~CHG_Node_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EType {
        eType_family   = 0,
        eType_ortholog = 1,
        eType_paralog  = 2,
        eType_leaf     = 3
    };
    
    /// Access to EType's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EType)(void);
    
    // types
    typedef EType TType;
    typedef CHG_Node_id TId;
    typedef string TCaption;
    typedef bool TCurrent_node;
    typedef list< CRef< CHG_Node > > TChildren;
    typedef int TBranch_len;

    // getters
    // setters

    /// mandatory
    /// typedef EType TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// mandatory
    /// typedef CHG_Node_id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(TId& value);
    TId& SetId(void);

    /// optional
    /// typedef string TCaption
    ///  Check whether the Caption data member has been assigned a value.
    bool IsSetCaption(void) const;
    /// Check whether it is safe or not to call GetCaption method.
    bool CanGetCaption(void) const;
    void ResetCaption(void);
    const TCaption& GetCaption(void) const;
    void SetCaption(const TCaption& value);
    TCaption& SetCaption(void);

    /// optional with default false
    /// typedef bool TCurrent_node
    ///  Check whether the Current_node data member has been assigned a value.
    bool IsSetCurrent_node(void) const;
    /// Check whether it is safe or not to call GetCurrent_node method.
    bool CanGetCurrent_node(void) const;
    void ResetCurrent_node(void);
    void SetDefaultCurrent_node(void);
    TCurrent_node GetCurrent_node(void) const;
    void SetCurrent_node(TCurrent_node value);
    TCurrent_node& SetCurrent_node(void);

    /// optional
    /// typedef list< CRef< CHG_Node > > TChildren
    ///  Check whether the Children data member has been assigned a value.
    bool IsSetChildren(void) const;
    /// Check whether it is safe or not to call GetChildren method.
    bool CanGetChildren(void) const;
    void ResetChildren(void);
    const TChildren& GetChildren(void) const;
    TChildren& SetChildren(void);

    /// optional
    /// typedef int TBranch_len
    ///  Check whether the Branch_len data member has been assigned a value.
    bool IsSetBranch_len(void) const;
    /// Check whether it is safe or not to call GetBranch_len method.
    bool CanGetBranch_len(void) const;
    void ResetBranch_len(void);
    TBranch_len GetBranch_len(void) const;
    void SetBranch_len(TBranch_len value);
    TBranch_len& SetBranch_len(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CHG_Node_Base(const CHG_Node_Base&);
    CHG_Node_Base& operator=(const CHG_Node_Base&);

    // data
    Uint4 m_set_State[1];
    EType m_Type;
    CRef< TId > m_Id;
    string m_Caption;
    bool m_Current_node;
    list< CRef< CHG_Node > > m_Children;
    int m_Branch_len;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CHG_Node_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CHG_Node_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CHG_Node_Base::ResetType(void)
{
    m_Type = (EType)(0);
    m_set_State[0] &= ~0x3;
}

inline
CHG_Node_Base::TType CHG_Node_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(0);
    }
    return m_Type;
}

inline
void CHG_Node_Base::SetType(CHG_Node_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0x3;
}

inline
CHG_Node_Base::TType& CHG_Node_Base::SetType(void)
{
#ifdef _DEBUG
    if (!IsSetType()) {
        memset(&m_Type,UnassignedByte(),sizeof(m_Type));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Type;
}

inline
bool CHG_Node_Base::IsSetId(void) const
{
    return m_Id.NotEmpty();
}

inline
bool CHG_Node_Base::CanGetId(void) const
{
    return true;
}

inline
const CHG_Node_Base::TId& CHG_Node_Base::GetId(void) const
{
    if ( !m_Id ) {
        const_cast<CHG_Node_Base*>(this)->ResetId();
    }
    return (*m_Id);
}

inline
CHG_Node_Base::TId& CHG_Node_Base::SetId(void)
{
    if ( !m_Id ) {
        ResetId();
    }
    return (*m_Id);
}

inline
bool CHG_Node_Base::IsSetCaption(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CHG_Node_Base::CanGetCaption(void) const
{
    return IsSetCaption();
}

inline
const CHG_Node_Base::TCaption& CHG_Node_Base::GetCaption(void) const
{
    if (!CanGetCaption()) {
        ThrowUnassigned(2);
    }
    return m_Caption;
}

inline
void CHG_Node_Base::SetCaption(const CHG_Node_Base::TCaption& value)
{
    m_Caption = value;
    m_set_State[0] |= 0x30;
}

inline
CHG_Node_Base::TCaption& CHG_Node_Base::SetCaption(void)
{
#ifdef _DEBUG
    if (!IsSetCaption()) {
        m_Caption = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Caption;
}

inline
bool CHG_Node_Base::IsSetCurrent_node(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CHG_Node_Base::CanGetCurrent_node(void) const
{
    return true;
}

inline
void CHG_Node_Base::ResetCurrent_node(void)
{
    m_Current_node = false;
    m_set_State[0] &= ~0xc0;
}

inline
void CHG_Node_Base::SetDefaultCurrent_node(void)
{
    ResetCurrent_node();
}

inline
CHG_Node_Base::TCurrent_node CHG_Node_Base::GetCurrent_node(void) const
{
    return m_Current_node;
}

inline
void CHG_Node_Base::SetCurrent_node(CHG_Node_Base::TCurrent_node value)
{
    m_Current_node = value;
    m_set_State[0] |= 0xc0;
}

inline
CHG_Node_Base::TCurrent_node& CHG_Node_Base::SetCurrent_node(void)
{
#ifdef _DEBUG
    if (!IsSetCurrent_node()) {
        memset(&m_Current_node,UnassignedByte(),sizeof(m_Current_node));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Current_node;
}

inline
bool CHG_Node_Base::IsSetChildren(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CHG_Node_Base::CanGetChildren(void) const
{
    return true;
}

inline
const CHG_Node_Base::TChildren& CHG_Node_Base::GetChildren(void) const
{
    return m_Children;
}

inline
CHG_Node_Base::TChildren& CHG_Node_Base::SetChildren(void)
{
    m_set_State[0] |= 0x100;
    return m_Children;
}

inline
bool CHG_Node_Base::IsSetBranch_len(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CHG_Node_Base::CanGetBranch_len(void) const
{
    return IsSetBranch_len();
}

inline
void CHG_Node_Base::ResetBranch_len(void)
{
    m_Branch_len = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CHG_Node_Base::TBranch_len CHG_Node_Base::GetBranch_len(void) const
{
    if (!CanGetBranch_len()) {
        ThrowUnassigned(5);
    }
    return m_Branch_len;
}

inline
void CHG_Node_Base::SetBranch_len(CHG_Node_Base::TBranch_len value)
{
    m_Branch_len = value;
    m_set_State[0] |= 0xc00;
}

inline
CHG_Node_Base::TBranch_len& CHG_Node_Base::SetBranch_len(void)
{
#ifdef _DEBUG
    if (!IsSetBranch_len()) {
        memset(&m_Branch_len,UnassignedByte(),sizeof(m_Branch_len));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Branch_len;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_HOMOLOGENE_HG_NODE_BASE_HPP
