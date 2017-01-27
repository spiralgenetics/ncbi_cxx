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
 *   'mmdb3.asn'.
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
#include <objects/mmdb3/Residue_interval_pntr.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CResidue_interval_pntr_Base::Reset(void)
{
    ResetMolecule_id();
    ResetFrom();
    ResetTo();
}

BEGIN_NAMED_BASE_CLASS_INFO("Residue-interval-pntr", CResidue_interval_pntr)
{
    SET_CLASS_MODULE("MMDB-Features");
    ADD_NAMED_MEMBER("molecule-id", m_Molecule_id, CLASS, (CMolecule_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("from", m_From, CLASS, (CResidue_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("to", m_To, CLASS, (CResidue_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CResidue_interval_pntr_Base::CResidue_interval_pntr_Base(void)
    : m_Molecule_id(CMolecule_id(0)), m_From(CResidue_id(0)), m_To(CResidue_id(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CResidue_interval_pntr_Base::~CResidue_interval_pntr_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
