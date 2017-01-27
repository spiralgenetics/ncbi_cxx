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
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'mmdb1.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/mmdb1/Inter_residue_bond.hpp>
#include <objects/mmdb1/Atom_pntr.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CInter_residue_bond_Base::, EBond_order, true)
{
    SET_ENUM_INTERNAL_NAME("Inter-residue-bond", "bond-order");
    SET_ENUM_MODULE("MMDB-Chemical-graph");
    ADD_ENUM_VALUE("single", eBond_order_single);
    ADD_ENUM_VALUE("partial-double", eBond_order_partial_double);
    ADD_ENUM_VALUE("aromatic", eBond_order_aromatic);
    ADD_ENUM_VALUE("double", eBond_order_double);
    ADD_ENUM_VALUE("triple", eBond_order_triple);
    ADD_ENUM_VALUE("other", eBond_order_other);
    ADD_ENUM_VALUE("unknown", eBond_order_unknown);
}
END_ENUM_INFO

void CInter_residue_bond_Base::ResetAtom_id_1(void)
{
    if ( !m_Atom_id_1 ) {
        m_Atom_id_1.Reset(new TAtom_id_1());
        return;
    }
    (*m_Atom_id_1).Reset();
}

void CInter_residue_bond_Base::SetAtom_id_1(CInter_residue_bond_Base::TAtom_id_1& value)
{
    m_Atom_id_1.Reset(&value);
}

void CInter_residue_bond_Base::ResetAtom_id_2(void)
{
    if ( !m_Atom_id_2 ) {
        m_Atom_id_2.Reset(new TAtom_id_2());
        return;
    }
    (*m_Atom_id_2).Reset();
}

void CInter_residue_bond_Base::SetAtom_id_2(CInter_residue_bond_Base::TAtom_id_2& value)
{
    m_Atom_id_2.Reset(&value);
}

void CInter_residue_bond_Base::Reset(void)
{
    ResetAtom_id_1();
    ResetAtom_id_2();
    ResetBond_order();
}

BEGIN_NAMED_BASE_CLASS_INFO("Inter-residue-bond", CInter_residue_bond)
{
    SET_CLASS_MODULE("MMDB-Chemical-graph");
    ADD_NAMED_REF_MEMBER("atom-id-1", m_Atom_id_1, CAtom_pntr);
    ADD_NAMED_REF_MEMBER("atom-id-2", m_Atom_id_2, CAtom_pntr);
    ADD_NAMED_ENUM_MEMBER("bond-order", m_Bond_order, EBond_order)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CInter_residue_bond_Base::CInter_residue_bond_Base(void)
    : m_Bond_order((EBond_order)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAtom_id_1();
        ResetAtom_id_2();
    }
}

// destructor
CInter_residue_bond_Base::~CInter_residue_bond_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
