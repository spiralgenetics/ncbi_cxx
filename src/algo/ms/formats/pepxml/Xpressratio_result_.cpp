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
 *   'pepXML.xsd'.
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
#include <algo/ms/formats/pepxml/Xpressratio_result.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CXpressratio_result_Base::C_Attlist::ResetRatio(void)
{
    m_Ratio.erase();
    m_set_State[0] &= ~0xc000;
}

void CXpressratio_result_Base::C_Attlist::ResetHeavy2light_ratio(void)
{
    m_Heavy2light_ratio.erase();
    m_set_State[0] &= ~0x30000;
}

void CXpressratio_result_Base::C_Attlist::Reset(void)
{
    ResetLight_firstscan();
    ResetLight_lastscan();
    ResetLight_mass();
    ResetHeavy_firstscan();
    ResetHeavy_lastscan();
    ResetHeavy_mass();
    ResetMass_tol();
    ResetRatio();
    ResetHeavy2light_ratio();
    ResetLight_area();
    ResetHeavy_area();
    ResetDecimal_ratio();
}

BEGIN_NAMED_CLASS_INFO("", CXpressratio_result_Base::C_Attlist)
{
    SET_INTERNAL_NAME("xpressratio_result", "Attlist");
    SET_CLASS_MODULE("pepXML");
    ADD_NAMED_STD_MEMBER("light_firstscan", m_Light_firstscan)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("light_lastscan", m_Light_lastscan)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("light_mass", m_Light_mass)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy_firstscan", m_Heavy_firstscan)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy_lastscan", m_Heavy_lastscan)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy_mass", m_Heavy_mass)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("mass_tol", m_Mass_tol)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("ratio", m_Ratio)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy2light_ratio", m_Heavy2light_ratio)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("light_area", m_Light_area)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy_area", m_Heavy_area)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("decimal_ratio", m_Decimal_ratio)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->SetRandomOrder(true);
}
END_CLASS_INFO

// constructor
CXpressratio_result_Base::C_Attlist::C_Attlist(void)
    : m_Light_firstscan(0), m_Light_lastscan(0), m_Light_mass(0), m_Heavy_firstscan(0), m_Heavy_lastscan(0), m_Heavy_mass(0), m_Mass_tol(0), m_Light_area(0), m_Heavy_area(0), m_Decimal_ratio(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CXpressratio_result_Base::C_Attlist::~C_Attlist(void)
{
}


void CXpressratio_result_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CXpressratio_result_Base::SetAttlist(CXpressratio_result_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
    SetXpressratio_result();
}

void CXpressratio_result_Base::Reset(void)
{
    ResetAttlist();
    ResetXpressratio_result();
}

BEGIN_NAMED_BASE_CLASS_INFO("xpressratio_result", CXpressratio_result)
{
    SET_CLASS_MODULE("pepXML");
    SET_NAMESPACE("http://regis-web.systemsbiology.net/pepXML")->SetNsQualified(true);
    ADD_NAMED_REF_MEMBER("Attlist", m_Attlist, C_Attlist)->SetNoPrefix()->SetAttlist();
    ADD_NAMED_NULL_MEMBER("xpressratio_result", null, ())->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CXpressratio_result_Base::CXpressratio_result_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
    }
}

// destructor
CXpressratio_result_Base::~CXpressratio_result_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

