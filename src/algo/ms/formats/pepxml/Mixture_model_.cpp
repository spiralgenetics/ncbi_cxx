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
#include <algo/ms/formats/pepxml/Mixture_model.hpp>
#include <algo/ms/formats/pepxml/Mixturemodel_distribution.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CMixture_model_Base::C_Attlist::ResetComments(void)
{
    m_Comments.erase();
    m_set_State[0] &= ~0xc;
}

void CMixture_model_Base::C_Attlist::ResetEst_tot_correct(void)
{
    m_Est_tot_correct.erase();
    m_set_State[0] &= ~0xc0;
}

void CMixture_model_Base::C_Attlist::ResetTot_num_spectra(void)
{
    m_Tot_num_spectra.erase();
    m_set_State[0] &= ~0x300;
}

void CMixture_model_Base::C_Attlist::ResetNum_iterations(void)
{
    m_Num_iterations.erase();
    m_set_State[0] &= ~0xc00;
}

void CMixture_model_Base::C_Attlist::Reset(void)
{
    ResetPrecursor_ion_charge();
    ResetComments();
    ResetPrior_probability();
    ResetEst_tot_correct();
    ResetTot_num_spectra();
    ResetNum_iterations();
}

BEGIN_NAMED_CLASS_INFO("", CMixture_model_Base::C_Attlist)
{
    SET_INTERNAL_NAME("mixture_model", "Attlist");
    SET_CLASS_MODULE("pepXML");
    ADD_NAMED_STD_MEMBER("precursor_ion_charge", m_Precursor_ion_charge)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("comments", m_Comments)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("prior_probability", m_Prior_probability)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("est_tot_correct", m_Est_tot_correct)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("tot_num_spectra", m_Tot_num_spectra)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("num_iterations", m_Num_iterations)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->SetRandomOrder(true);
}
END_CLASS_INFO

// constructor
CMixture_model_Base::C_Attlist::C_Attlist(void)
    : m_Precursor_ion_charge(0), m_Prior_probability(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CMixture_model_Base::C_Attlist::~C_Attlist(void)
{
}


void CMixture_model_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CMixture_model_Base::SetAttlist(CMixture_model_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
}

void CMixture_model_Base::ResetMixturemodel_distribution(void)
{
    m_Mixturemodel_distribution.clear();
    m_set_State[0] &= ~0xc;
}

void CMixture_model_Base::Reset(void)
{
    ResetAttlist();
    ResetMixturemodel_distribution();
}

BEGIN_NAMED_BASE_CLASS_INFO("mixture_model", CMixture_model)
{
    SET_CLASS_MODULE("pepXML");
    SET_NAMESPACE("http://regis-web.systemsbiology.net/pepXML")->SetNsQualified(true);
    ADD_NAMED_REF_MEMBER("Attlist", m_Attlist, C_Attlist)->SetNoPrefix()->SetAttlist();
    ADD_NAMED_MEMBER("mixturemodel_distribution", m_Mixturemodel_distribution, STL_list, (STL_CRef, (CLASS, (CMixturemodel_distribution))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CMixture_model_Base::CMixture_model_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
    }
}

// destructor
CMixture_model_Base::~CMixture_model_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

