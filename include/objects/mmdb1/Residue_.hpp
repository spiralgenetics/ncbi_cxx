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

/// @file Residue_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb1.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB1_RESIDUE_BASE_HPP
#define OBJECTS_MMDB1_RESIDUE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/mmdb1/Residue_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CResidue_graph_pntr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Residues may be assigned a text-string name as well as an id number. PDB 
/// assigned residue numbers appear as the residue name.
class NCBI_MMDB1_EXPORT CResidue_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CResidue_Base(void);
    // destructor
    virtual ~CResidue_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CResidue_id TId;
    typedef string TName;
    typedef CResidue_graph_pntr TResidue_graph;

    // getters
    // setters

    /// mandatory
    /// typedef CResidue_id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(const TId& value);
    TId& SetId(void);

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

    /// mandatory
    /// typedef CResidue_graph_pntr TResidue_graph
    ///  Check whether the Residue_graph data member has been assigned a value.
    bool IsSetResidue_graph(void) const;
    /// Check whether it is safe or not to call GetResidue_graph method.
    bool CanGetResidue_graph(void) const;
    void ResetResidue_graph(void);
    const TResidue_graph& GetResidue_graph(void) const;
    void SetResidue_graph(TResidue_graph& value);
    TResidue_graph& SetResidue_graph(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CResidue_Base(const CResidue_Base&);
    CResidue_Base& operator=(const CResidue_Base&);

    // data
    Uint4 m_set_State[1];
    CResidue_id m_Id;
    string m_Name;
    CRef< TResidue_graph > m_Residue_graph;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CResidue_Base::IsSetId(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CResidue_Base::CanGetId(void) const
{
    return IsSetId();
}

inline
void CResidue_Base::ResetId(void)
{
    m_Id = CResidue_id(0);
    m_set_State[0] &= ~0x3;
}

inline
const CResidue_Base::TId& CResidue_Base::GetId(void) const
{
    if (!CanGetId()) {
        ThrowUnassigned(0);
    }
    return m_Id;
}

inline
void CResidue_Base::SetId(const CResidue_Base::TId& value)
{
    m_Id = value;
    m_set_State[0] |= 0x3;
}

inline
CResidue_Base::TId& CResidue_Base::SetId(void)
{
    m_set_State[0] |= 0x1;
    return m_Id;
}

inline
bool CResidue_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CResidue_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CResidue_Base::TName& CResidue_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CResidue_Base::SetName(const CResidue_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
CResidue_Base::TName& CResidue_Base::SetName(void)
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
bool CResidue_Base::IsSetResidue_graph(void) const
{
    return m_Residue_graph.NotEmpty();
}

inline
bool CResidue_Base::CanGetResidue_graph(void) const
{
    return true;
}

inline
const CResidue_Base::TResidue_graph& CResidue_Base::GetResidue_graph(void) const
{
    if ( !m_Residue_graph ) {
        const_cast<CResidue_Base*>(this)->ResetResidue_graph();
    }
    return (*m_Residue_graph);
}

inline
CResidue_Base::TResidue_graph& CResidue_Base::SetResidue_graph(void)
{
    if ( !m_Residue_graph ) {
        ResetResidue_graph();
    }
    return (*m_Residue_graph);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB1_RESIDUE_BASE_HPP
