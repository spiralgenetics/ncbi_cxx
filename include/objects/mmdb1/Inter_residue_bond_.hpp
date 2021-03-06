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

/// @file Inter_residue_bond_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb1.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB1_INTER_RESIDUE_BOND_BASE_HPP
#define OBJECTS_MMDB1_INTER_RESIDUE_BOND_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CAtom_pntr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Inter-residue bonds are defined by a reference to two atoms. For PDB-derived 
/// structures bonds are identified from biopolymer connectivity according to
/// SEQRES and from other connectivity information on SSBOND and CONECT 
/// records. These data are validated and unreported bonds identified by
/// stereochemical calculation, using the same criteria as for intra-residue 
/// bonds.
class NCBI_MMDB1_EXPORT CInter_residue_bond_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CInter_residue_bond_Base(void);
    // destructor
    virtual ~CInter_residue_bond_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EBond_order {
        eBond_order_single         =   1,
        eBond_order_partial_double =   2,
        eBond_order_aromatic       =   3,
        eBond_order_double         =   4,
        eBond_order_triple         =   5,
        eBond_order_other          =   6,
        eBond_order_unknown        = 255
    };
    
    /// Access to EBond_order's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EBond_order)(void);
    
    // types
    typedef CAtom_pntr TAtom_id_1;
    typedef CAtom_pntr TAtom_id_2;
    typedef int TBond_order;

    // getters
    // setters

    /// mandatory
    /// typedef CAtom_pntr TAtom_id_1
    ///  Check whether the Atom_id_1 data member has been assigned a value.
    bool IsSetAtom_id_1(void) const;
    /// Check whether it is safe or not to call GetAtom_id_1 method.
    bool CanGetAtom_id_1(void) const;
    void ResetAtom_id_1(void);
    const TAtom_id_1& GetAtom_id_1(void) const;
    void SetAtom_id_1(TAtom_id_1& value);
    TAtom_id_1& SetAtom_id_1(void);

    /// mandatory
    /// typedef CAtom_pntr TAtom_id_2
    ///  Check whether the Atom_id_2 data member has been assigned a value.
    bool IsSetAtom_id_2(void) const;
    /// Check whether it is safe or not to call GetAtom_id_2 method.
    bool CanGetAtom_id_2(void) const;
    void ResetAtom_id_2(void);
    const TAtom_id_2& GetAtom_id_2(void) const;
    void SetAtom_id_2(TAtom_id_2& value);
    TAtom_id_2& SetAtom_id_2(void);

    /// optional
    /// typedef int TBond_order
    ///  Check whether the Bond_order data member has been assigned a value.
    bool IsSetBond_order(void) const;
    /// Check whether it is safe or not to call GetBond_order method.
    bool CanGetBond_order(void) const;
    void ResetBond_order(void);
    TBond_order GetBond_order(void) const;
    void SetBond_order(TBond_order value);
    TBond_order& SetBond_order(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CInter_residue_bond_Base(const CInter_residue_bond_Base&);
    CInter_residue_bond_Base& operator=(const CInter_residue_bond_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAtom_id_1 > m_Atom_id_1;
    CRef< TAtom_id_2 > m_Atom_id_2;
    int m_Bond_order;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CInter_residue_bond_Base::IsSetAtom_id_1(void) const
{
    return m_Atom_id_1.NotEmpty();
}

inline
bool CInter_residue_bond_Base::CanGetAtom_id_1(void) const
{
    return true;
}

inline
const CInter_residue_bond_Base::TAtom_id_1& CInter_residue_bond_Base::GetAtom_id_1(void) const
{
    if ( !m_Atom_id_1 ) {
        const_cast<CInter_residue_bond_Base*>(this)->ResetAtom_id_1();
    }
    return (*m_Atom_id_1);
}

inline
CInter_residue_bond_Base::TAtom_id_1& CInter_residue_bond_Base::SetAtom_id_1(void)
{
    if ( !m_Atom_id_1 ) {
        ResetAtom_id_1();
    }
    return (*m_Atom_id_1);
}

inline
bool CInter_residue_bond_Base::IsSetAtom_id_2(void) const
{
    return m_Atom_id_2.NotEmpty();
}

inline
bool CInter_residue_bond_Base::CanGetAtom_id_2(void) const
{
    return true;
}

inline
const CInter_residue_bond_Base::TAtom_id_2& CInter_residue_bond_Base::GetAtom_id_2(void) const
{
    if ( !m_Atom_id_2 ) {
        const_cast<CInter_residue_bond_Base*>(this)->ResetAtom_id_2();
    }
    return (*m_Atom_id_2);
}

inline
CInter_residue_bond_Base::TAtom_id_2& CInter_residue_bond_Base::SetAtom_id_2(void)
{
    if ( !m_Atom_id_2 ) {
        ResetAtom_id_2();
    }
    return (*m_Atom_id_2);
}

inline
bool CInter_residue_bond_Base::IsSetBond_order(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CInter_residue_bond_Base::CanGetBond_order(void) const
{
    return IsSetBond_order();
}

inline
void CInter_residue_bond_Base::ResetBond_order(void)
{
    m_Bond_order = (EBond_order)(0);
    m_set_State[0] &= ~0x30;
}

inline
CInter_residue_bond_Base::TBond_order CInter_residue_bond_Base::GetBond_order(void) const
{
    if (!CanGetBond_order()) {
        ThrowUnassigned(2);
    }
    return m_Bond_order;
}

inline
void CInter_residue_bond_Base::SetBond_order(CInter_residue_bond_Base::TBond_order value)
{
    m_Bond_order = value;
    m_set_State[0] |= 0x30;
}

inline
CInter_residue_bond_Base::TBond_order& CInter_residue_bond_Base::SetBond_order(void)
{
#ifdef _DEBUG
    if (!IsSetBond_order()) {
        memset(&m_Bond_order,UnassignedByte(),sizeof(m_Bond_order));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Bond_order;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB1_INTER_RESIDUE_BOND_BASE_HPP
