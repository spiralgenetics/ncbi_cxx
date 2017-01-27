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
#include <algo/ms/formats/pepxml/Asapratio_result.hpp>
#include <algo/ms/formats/pepxml/Asapratio_peptide_data.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CAsapratio_result_Base::C_Attlist::Reset(void)
{
    ResetMean();
    ResetError();
    ResetHeavy2light_mean();
    ResetHeavy2light_error();
}

BEGIN_NAMED_CLASS_INFO("", CAsapratio_result_Base::C_Attlist)
{
    SET_INTERNAL_NAME("asapratio_result", "Attlist");
    SET_CLASS_MODULE("pepXML");
    ADD_NAMED_STD_MEMBER("mean", m_Mean)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("error", m_Error)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy2light_mean", m_Heavy2light_mean)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("heavy2light_error", m_Heavy2light_error)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->SetRandomOrder(true);
}
END_CLASS_INFO

// constructor
CAsapratio_result_Base::C_Attlist::C_Attlist(void)
    : m_Mean(0), m_Error(0), m_Heavy2light_mean(0), m_Heavy2light_error(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CAsapratio_result_Base::C_Attlist::~C_Attlist(void)
{
}


void CAsapratio_result_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CAsapratio_result_Base::SetAttlist(CAsapratio_result_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
}

void CAsapratio_result_Base::ResetAsapratio_peptide_data(void)
{
    if ( !m_Asapratio_peptide_data ) {
        m_Asapratio_peptide_data.Reset(new TAsapratio_peptide_data());
        return;
    }
    (*m_Asapratio_peptide_data).Reset();
}

void CAsapratio_result_Base::SetAsapratio_peptide_data(CAsapratio_result_Base::TAsapratio_peptide_data& value)
{
    m_Asapratio_peptide_data.Reset(&value);
}

void CAsapratio_result_Base::Reset(void)
{
    ResetAttlist();
    ResetAsapratio_peptide_data();
}

BEGIN_NAMED_BASE_CLASS_INFO("asapratio_result", CAsapratio_result)
{
    SET_CLASS_MODULE("pepXML");
    SET_NAMESPACE("http://regis-web.systemsbiology.net/pepXML")->SetNsQualified(true);
    ADD_NAMED_REF_MEMBER("Attlist", m_Attlist, C_Attlist)->SetNoPrefix()->SetAttlist();
    ADD_NAMED_REF_MEMBER("asapratio_peptide_data", m_Asapratio_peptide_data, CAsapratio_peptide_data)->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CAsapratio_result_Base::CAsapratio_result_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
        ResetAsapratio_peptide_data();
    }
}

// destructor
CAsapratio_result_Base::~CAsapratio_result_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
