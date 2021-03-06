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
#include <objects/mmdb3/Region_pntrs.hpp>
#include <objects/mmdb3/Region_boundary.hpp>
#include <objects/mmdb3/Region_coordinates.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CRegion_pntrs_Base::C_Region::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CRegion_pntrs_Base::C_Region::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Site:
        m_Site.Destruct();
        break;
    case e_Boundary:
        m_Boundary.Destruct();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CRegion_pntrs_Base::C_Region::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    case e_Site:
        m_Site.Construct();
        break;
    case e_Boundary:
        m_Boundary.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CRegion_pntrs_Base::C_Region::sm_SelectionNames[] = {
    "not set",
    "site",
    "boundary"
};

NCBI_NS_STD::string CRegion_pntrs_Base::C_Region::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CRegion_pntrs_Base::C_Region::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CRegion_pntrs_Base::C_Region)
{
    SET_INTERNAL_NAME("Region-pntrs", "region");
    SET_CHOICE_MODULE("MMDB-Features");
    ADD_NAMED_BUF_CHOICE_VARIANT("site", m_Site, STL_list, (STL_CRef, (CLASS, (CRegion_coordinates))));
    ADD_NAMED_BUF_CHOICE_VARIANT("boundary", m_Boundary, STL_list, (STL_CRef, (CLASS, (CRegion_boundary))));
}
END_CHOICE_INFO

// constructor
CRegion_pntrs_Base::C_Region::C_Region(void)
    : m_choice(e_not_set)
{
}

// destructor
CRegion_pntrs_Base::C_Region::~C_Region(void)
{
    Reset();
}


void CRegion_pntrs_Base::ResetRegion(void)
{
    if ( !m_Region ) {
        m_Region.Reset(new TRegion());
        return;
    }
    (*m_Region).Reset();
}

void CRegion_pntrs_Base::SetRegion(CRegion_pntrs_Base::TRegion& value)
{
    m_Region.Reset(&value);
}

void CRegion_pntrs_Base::Reset(void)
{
    ResetModel_id();
    ResetRegion();
}

BEGIN_NAMED_BASE_CLASS_INFO("Region-pntrs", CRegion_pntrs)
{
    SET_CLASS_MODULE("MMDB-Features");
    ADD_NAMED_MEMBER("model-id", m_Model_id, CLASS, (CModel_id))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("region", m_Region, C_Region);
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CRegion_pntrs_Base::CRegion_pntrs_Base(void)
    : m_Model_id(CModel_id(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetRegion();
    }
}

// destructor
CRegion_pntrs_Base::~CRegion_pntrs_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

