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

/// @file Entrez2_hier_node_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_HIER_NODE_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_HIER_NODE_BASE_HPP

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
class CEntrez2_term;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// for hierarchical index
class NCBI_ENTREZ2_EXPORT CEntrez2_hier_node_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_hier_node_Base(void);
    // destructor
    virtual ~CEntrez2_hier_node_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TCannonical_form;
    typedef int TLineage_count;
    typedef list< CRef< CEntrez2_term > > TLineage;
    typedef int TChild_count;
    typedef list< CRef< CEntrez2_term > > TChildren;
    typedef bool TIs_ambiguous;

    // getters
    // setters

    /// the official name
    /// mandatory
    /// typedef string TCannonical_form
    ///  Check whether the Cannonical_form data member has been assigned a value.
    bool IsSetCannonical_form(void) const;
    /// Check whether it is safe or not to call GetCannonical_form method.
    bool CanGetCannonical_form(void) const;
    void ResetCannonical_form(void);
    const TCannonical_form& GetCannonical_form(void) const;
    void SetCannonical_form(const TCannonical_form& value);
    TCannonical_form& SetCannonical_form(void);

    /// number of strings in lineage
    /// mandatory
    /// typedef int TLineage_count
    ///  Check whether the Lineage_count data member has been assigned a value.
    bool IsSetLineage_count(void) const;
    /// Check whether it is safe or not to call GetLineage_count method.
    bool CanGetLineage_count(void) const;
    void ResetLineage_count(void);
    TLineage_count GetLineage_count(void) const;
    void SetLineage_count(TLineage_count value);
    TLineage_count& SetLineage_count(void);

    /// strings up the lineage
    /// optional
    /// typedef list< CRef< CEntrez2_term > > TLineage
    ///  Check whether the Lineage data member has been assigned a value.
    bool IsSetLineage(void) const;
    /// Check whether it is safe or not to call GetLineage method.
    bool CanGetLineage(void) const;
    void ResetLineage(void);
    const TLineage& GetLineage(void) const;
    TLineage& SetLineage(void);

    /// number of children of this node
    /// mandatory
    /// typedef int TChild_count
    ///  Check whether the Child_count data member has been assigned a value.
    bool IsSetChild_count(void) const;
    /// Check whether it is safe or not to call GetChild_count method.
    bool CanGetChild_count(void) const;
    void ResetChild_count(void);
    TChild_count GetChild_count(void) const;
    void SetChild_count(TChild_count value);
    TChild_count& SetChild_count(void);

    /// the children
    /// mandatory
    /// typedef list< CRef< CEntrez2_term > > TChildren
    ///  Check whether the Children data member has been assigned a value.
    bool IsSetChildren(void) const;
    /// Check whether it is safe or not to call GetChildren method.
    bool CanGetChildren(void) const;
    void ResetChildren(void);
    const TChildren& GetChildren(void) const;
    TChildren& SetChildren(void);

    /// used for hierarchy only
    /// optional
    /// typedef bool TIs_ambiguous
    ///  Check whether the Is_ambiguous data member has been assigned a value.
    bool IsSetIs_ambiguous(void) const;
    /// Check whether it is safe or not to call GetIs_ambiguous method.
    bool CanGetIs_ambiguous(void) const;
    void ResetIs_ambiguous(void);
    TIs_ambiguous GetIs_ambiguous(void) const;
    void SetIs_ambiguous(TIs_ambiguous value);
    TIs_ambiguous& SetIs_ambiguous(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_hier_node_Base(const CEntrez2_hier_node_Base&);
    CEntrez2_hier_node_Base& operator=(const CEntrez2_hier_node_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Cannonical_form;
    int m_Lineage_count;
    list< CRef< CEntrez2_term > > m_Lineage;
    int m_Child_count;
    list< CRef< CEntrez2_term > > m_Children;
    bool m_Is_ambiguous;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_hier_node_Base::IsSetCannonical_form(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetCannonical_form(void) const
{
    return IsSetCannonical_form();
}

inline
const CEntrez2_hier_node_Base::TCannonical_form& CEntrez2_hier_node_Base::GetCannonical_form(void) const
{
    if (!CanGetCannonical_form()) {
        ThrowUnassigned(0);
    }
    return m_Cannonical_form;
}

inline
void CEntrez2_hier_node_Base::SetCannonical_form(const CEntrez2_hier_node_Base::TCannonical_form& value)
{
    m_Cannonical_form = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_hier_node_Base::TCannonical_form& CEntrez2_hier_node_Base::SetCannonical_form(void)
{
#ifdef _DEBUG
    if (!IsSetCannonical_form()) {
        m_Cannonical_form = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Cannonical_form;
}

inline
bool CEntrez2_hier_node_Base::IsSetLineage_count(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetLineage_count(void) const
{
    return IsSetLineage_count();
}

inline
void CEntrez2_hier_node_Base::ResetLineage_count(void)
{
    m_Lineage_count = 0;
    m_set_State[0] &= ~0xc;
}

inline
CEntrez2_hier_node_Base::TLineage_count CEntrez2_hier_node_Base::GetLineage_count(void) const
{
    if (!CanGetLineage_count()) {
        ThrowUnassigned(1);
    }
    return m_Lineage_count;
}

inline
void CEntrez2_hier_node_Base::SetLineage_count(CEntrez2_hier_node_Base::TLineage_count value)
{
    m_Lineage_count = value;
    m_set_State[0] |= 0xc;
}

inline
CEntrez2_hier_node_Base::TLineage_count& CEntrez2_hier_node_Base::SetLineage_count(void)
{
#ifdef _DEBUG
    if (!IsSetLineage_count()) {
        memset(&m_Lineage_count,UnassignedByte(),sizeof(m_Lineage_count));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Lineage_count;
}

inline
bool CEntrez2_hier_node_Base::IsSetLineage(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetLineage(void) const
{
    return true;
}

inline
const CEntrez2_hier_node_Base::TLineage& CEntrez2_hier_node_Base::GetLineage(void) const
{
    return m_Lineage;
}

inline
CEntrez2_hier_node_Base::TLineage& CEntrez2_hier_node_Base::SetLineage(void)
{
    m_set_State[0] |= 0x10;
    return m_Lineage;
}

inline
bool CEntrez2_hier_node_Base::IsSetChild_count(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetChild_count(void) const
{
    return IsSetChild_count();
}

inline
void CEntrez2_hier_node_Base::ResetChild_count(void)
{
    m_Child_count = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CEntrez2_hier_node_Base::TChild_count CEntrez2_hier_node_Base::GetChild_count(void) const
{
    if (!CanGetChild_count()) {
        ThrowUnassigned(3);
    }
    return m_Child_count;
}

inline
void CEntrez2_hier_node_Base::SetChild_count(CEntrez2_hier_node_Base::TChild_count value)
{
    m_Child_count = value;
    m_set_State[0] |= 0xc0;
}

inline
CEntrez2_hier_node_Base::TChild_count& CEntrez2_hier_node_Base::SetChild_count(void)
{
#ifdef _DEBUG
    if (!IsSetChild_count()) {
        memset(&m_Child_count,UnassignedByte(),sizeof(m_Child_count));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Child_count;
}

inline
bool CEntrez2_hier_node_Base::IsSetChildren(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetChildren(void) const
{
    return true;
}

inline
const CEntrez2_hier_node_Base::TChildren& CEntrez2_hier_node_Base::GetChildren(void) const
{
    return m_Children;
}

inline
CEntrez2_hier_node_Base::TChildren& CEntrez2_hier_node_Base::SetChildren(void)
{
    m_set_State[0] |= 0x100;
    return m_Children;
}

inline
bool CEntrez2_hier_node_Base::IsSetIs_ambiguous(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CEntrez2_hier_node_Base::CanGetIs_ambiguous(void) const
{
    return IsSetIs_ambiguous();
}

inline
void CEntrez2_hier_node_Base::ResetIs_ambiguous(void)
{
    m_Is_ambiguous = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CEntrez2_hier_node_Base::TIs_ambiguous CEntrez2_hier_node_Base::GetIs_ambiguous(void) const
{
    if (!CanGetIs_ambiguous()) {
        ThrowUnassigned(5);
    }
    return m_Is_ambiguous;
}

inline
void CEntrez2_hier_node_Base::SetIs_ambiguous(CEntrez2_hier_node_Base::TIs_ambiguous value)
{
    m_Is_ambiguous = value;
    m_set_State[0] |= 0xc00;
}

inline
CEntrez2_hier_node_Base::TIs_ambiguous& CEntrez2_hier_node_Base::SetIs_ambiguous(void)
{
#ifdef _DEBUG
    if (!IsSetIs_ambiguous()) {
        memset(&m_Is_ambiguous,UnassignedByte(),sizeof(m_Is_ambiguous));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Is_ambiguous;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_HIER_NODE_BASE_HPP
