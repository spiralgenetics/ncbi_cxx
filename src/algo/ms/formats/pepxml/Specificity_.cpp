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
#include <algo/ms/formats/pepxml/Specificity.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CSpecificity_Base::C_Attlist::, EAttlist_sense, false)
{
    SET_ENUM_INTERNAL_NAME("specificity.Attlist", "sense");
    SET_ENUM_MODULE("pepXML");
    ADD_ENUM_VALUE("C", eAttlist_sense_C);
    ADD_ENUM_VALUE("N", eAttlist_sense_N);
}
END_ENUM_INFO

void CSpecificity_Base::C_Attlist::ResetCut(void)
{
    m_Cut.erase();
    m_set_State[0] &= ~0x30;
}

void CSpecificity_Base::C_Attlist::ResetNo_cut(void)
{
    m_No_cut.erase();
    m_set_State[0] &= ~0xc0;
}

void CSpecificity_Base::C_Attlist::Reset(void)
{
    ResetSense();
    ResetMin_spacing();
    ResetCut();
    ResetNo_cut();
}

BEGIN_NAMED_CLASS_INFO("", CSpecificity_Base::C_Attlist)
{
    SET_INTERNAL_NAME("specificity", "Attlist");
    SET_CLASS_MODULE("pepXML");
    ADD_NAMED_ENUM_MEMBER("sense", m_Sense, EAttlist_sense)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("min_spacing", m_Min_spacing)->SetDefault(new TMin_spacing(1))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("cut", m_Cut)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("no_cut", m_No_cut)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->SetRandomOrder(true);
}
END_CLASS_INFO

// constructor
CSpecificity_Base::C_Attlist::C_Attlist(void)
    : m_Sense((EAttlist_sense)(0)), m_Min_spacing(1)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CSpecificity_Base::C_Attlist::~C_Attlist(void)
{
}


void CSpecificity_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CSpecificity_Base::SetAttlist(CSpecificity_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
    SetSpecificity();
}

void CSpecificity_Base::Reset(void)
{
    ResetAttlist();
    ResetSpecificity();
}

BEGIN_NAMED_BASE_CLASS_INFO("specificity", CSpecificity)
{
    SET_CLASS_MODULE("pepXML");
    SET_NAMESPACE("http://regis-web.systemsbiology.net/pepXML")->SetNsQualified(true);
    ADD_NAMED_REF_MEMBER("Attlist", m_Attlist, C_Attlist)->SetNoPrefix()->SetAttlist();
    ADD_NAMED_NULL_MEMBER("specificity", null, ())->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CSpecificity_Base::CSpecificity_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
    }
}

// destructor
CSpecificity_Base::~CSpecificity_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

