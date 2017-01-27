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
 *   'pcassay.asn'.
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
#include <objects/pcassay/PC_ResultType.hpp>
#include <objects/pcassay/PC_AssayPanelTestResult.hpp>
#include <objects/pcassay/PC_ConcentrationAttr.hpp>
#include <objects/pcassay/PC_IntegerMinMax.hpp>
#include <objects/pcassay/PC_RealMinMax.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CPC_ResultType_Base::, EType, true)
{
    SET_ENUM_INTERNAL_NAME("PC-ResultType", "type");
    SET_ENUM_MODULE("NCBI-PCAssay");
    ADD_ENUM_VALUE("float", eType_float);
    ADD_ENUM_VALUE("int", eType_int);
    ADD_ENUM_VALUE("bool", eType_bool);
    ADD_ENUM_VALUE("string", eType_string);
}
END_ENUM_INFO

void CPC_ResultType_Base::C_Constraints::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CPC_ResultType_Base::C_Constraints::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Fset:
        m_Fset.Destruct();
        break;
    case e_Iset:
        m_Iset.Destruct();
        break;
    case e_Sset:
        m_Sset.Destruct();
        break;
    case e_Frange:
    case e_Irange:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CPC_ResultType_Base::C_Constraints::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Fset:
        m_Fset.Construct();
        break;
    case e_Fmin:
        m_Fmin = 0;
        break;
    case e_Fmax:
        m_Fmax = 0;
        break;
    case e_Frange:
        (m_object = new(pool) ncbi::objects::CPC_RealMinMax())->AddReference();
        break;
    case e_Iset:
        m_Iset.Construct();
        break;
    case e_Imin:
        m_Imin = 0;
        break;
    case e_Imax:
        m_Imax = 0;
        break;
    case e_Irange:
        (m_object = new(pool) ncbi::objects::CPC_IntegerMinMax())->AddReference();
        break;
    case e_Sset:
        m_Sset.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CPC_ResultType_Base::C_Constraints::sm_SelectionNames[] = {
    "not set",
    "fset",
    "fmin",
    "fmax",
    "frange",
    "iset",
    "imin",
    "imax",
    "irange",
    "sset"
};

NCBI_NS_STD::string CPC_ResultType_Base::C_Constraints::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CPC_ResultType_Base::C_Constraints::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CPC_ResultType_Base::C_Constraints::TFrange& CPC_ResultType_Base::C_Constraints::GetFrange(void) const
{
    CheckSelected(e_Frange);
    return *static_cast<const TFrange*>(m_object);
}

CPC_ResultType_Base::C_Constraints::TFrange& CPC_ResultType_Base::C_Constraints::SetFrange(void)
{
    Select(e_Frange, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TFrange*>(m_object);
}

void CPC_ResultType_Base::C_Constraints::SetFrange(CPC_ResultType_Base::C_Constraints::TFrange& value)
{
    TFrange* ptr = &value;
    if ( m_choice != e_Frange || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Frange;
    }
}

const CPC_ResultType_Base::C_Constraints::TIrange& CPC_ResultType_Base::C_Constraints::GetIrange(void) const
{
    CheckSelected(e_Irange);
    return *static_cast<const TIrange*>(m_object);
}

CPC_ResultType_Base::C_Constraints::TIrange& CPC_ResultType_Base::C_Constraints::SetIrange(void)
{
    Select(e_Irange, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TIrange*>(m_object);
}

void CPC_ResultType_Base::C_Constraints::SetIrange(CPC_ResultType_Base::C_Constraints::TIrange& value)
{
    TIrange* ptr = &value;
    if ( m_choice != e_Irange || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Irange;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CPC_ResultType_Base::C_Constraints)
{
    SET_INTERNAL_NAME("PC-ResultType", "constraints");
    SET_CHOICE_MODULE("NCBI-PCAssay");
    ADD_NAMED_BUF_CHOICE_VARIANT("fset", m_Fset, STL_list, (STD, (double)));
    ADD_NAMED_STD_CHOICE_VARIANT("fmin", m_Fmin);
    ADD_NAMED_STD_CHOICE_VARIANT("fmax", m_Fmax);
    ADD_NAMED_REF_CHOICE_VARIANT("frange", m_object, CPC_RealMinMax);
    ADD_NAMED_BUF_CHOICE_VARIANT("iset", m_Iset, STL_list, (STD, (int)));
    ADD_NAMED_STD_CHOICE_VARIANT("imin", m_Imin);
    ADD_NAMED_STD_CHOICE_VARIANT("imax", m_Imax);
    ADD_NAMED_REF_CHOICE_VARIANT("irange", m_object, CPC_IntegerMinMax);
    ADD_NAMED_BUF_CHOICE_VARIANT("sset", m_Sset, STL_list, (STD, (string)));
}
END_CHOICE_INFO

// constructor
CPC_ResultType_Base::C_Constraints::C_Constraints(void)
    : m_choice(e_not_set)
{
}

// destructor
CPC_ResultType_Base::C_Constraints::~C_Constraints(void)
{
    Reset();
}


BEGIN_NAMED_ENUM_IN_INFO("", CPC_ResultType_Base::, EUnit, true)
{
    SET_ENUM_INTERNAL_NAME("PC-ResultType", "unit");
    SET_ENUM_MODULE("NCBI-PCAssay");
    ADD_ENUM_VALUE("ppt", eUnit_ppt);
    ADD_ENUM_VALUE("ppm", eUnit_ppm);
    ADD_ENUM_VALUE("ppb", eUnit_ppb);
    ADD_ENUM_VALUE("mm", eUnit_mm);
    ADD_ENUM_VALUE("um", eUnit_um);
    ADD_ENUM_VALUE("nm", eUnit_nm);
    ADD_ENUM_VALUE("pm", eUnit_pm);
    ADD_ENUM_VALUE("fm", eUnit_fm);
    ADD_ENUM_VALUE("mgml", eUnit_mgml);
    ADD_ENUM_VALUE("ugml", eUnit_ugml);
    ADD_ENUM_VALUE("ngml", eUnit_ngml);
    ADD_ENUM_VALUE("pgml", eUnit_pgml);
    ADD_ENUM_VALUE("fgml", eUnit_fgml);
    ADD_ENUM_VALUE("m", eUnit_m);
    ADD_ENUM_VALUE("percent", eUnit_percent);
    ADD_ENUM_VALUE("ratio", eUnit_ratio);
    ADD_ENUM_VALUE("sec", eUnit_sec);
    ADD_ENUM_VALUE("rsec", eUnit_rsec);
    ADD_ENUM_VALUE("min", eUnit_min);
    ADD_ENUM_VALUE("rmin", eUnit_rmin);
    ADD_ENUM_VALUE("day", eUnit_day);
    ADD_ENUM_VALUE("rday", eUnit_rday);
    ADD_ENUM_VALUE("ml-min-kg", eUnit_ml_min_kg);
    ADD_ENUM_VALUE("l-kg", eUnit_l_kg);
    ADD_ENUM_VALUE("hr-ng-ml", eUnit_hr_ng_ml);
    ADD_ENUM_VALUE("cm-sec", eUnit_cm_sec);
    ADD_ENUM_VALUE("mg-kg", eUnit_mg_kg);
    ADD_ENUM_VALUE("none", eUnit_none);
    ADD_ENUM_VALUE("unspecified", eUnit_unspecified);
}
END_ENUM_INFO

BEGIN_NAMED_ENUM_IN_INFO("", CPC_ResultType_Base::, ETransform, true)
{
    SET_ENUM_INTERNAL_NAME("PC-ResultType", "transform");
    SET_ENUM_MODULE("NCBI-PCAssay");
    ADD_ENUM_VALUE("linear", eTransform_linear);
    ADD_ENUM_VALUE("ln", eTransform_ln);
    ADD_ENUM_VALUE("log", eTransform_log);
    ADD_ENUM_VALUE("reciprocal", eTransform_reciprocal);
    ADD_ENUM_VALUE("negative", eTransform_negative);
    ADD_ENUM_VALUE("nlog", eTransform_nlog);
    ADD_ENUM_VALUE("nln", eTransform_nln);
}
END_ENUM_INFO

BEGIN_NAMED_ENUM_IN_INFO("", CPC_ResultType_Base::, EAnnot, true)
{
    SET_ENUM_INTERNAL_NAME("PC-ResultType", "annot");
    SET_ENUM_MODULE("NCBI-PCAssay");
    ADD_ENUM_VALUE("pmid", eAnnot_pmid);
    ADD_ENUM_VALUE("mmdb", eAnnot_mmdb);
    ADD_ENUM_VALUE("url", eAnnot_url);
    ADD_ENUM_VALUE("protein-gi", eAnnot_protein_gi);
    ADD_ENUM_VALUE("nucleotide-gi", eAnnot_nucleotide_gi);
    ADD_ENUM_VALUE("taxonomy", eAnnot_taxonomy);
    ADD_ENUM_VALUE("mim", eAnnot_mim);
    ADD_ENUM_VALUE("gene", eAnnot_gene);
    ADD_ENUM_VALUE("probe", eAnnot_probe);
    ADD_ENUM_VALUE("aid", eAnnot_aid);
    ADD_ENUM_VALUE("sid", eAnnot_sid);
    ADD_ENUM_VALUE("cid", eAnnot_cid);
    ADD_ENUM_VALUE("protein-target-gi", eAnnot_protein_target_gi);
    ADD_ENUM_VALUE("biosystems-target-id", eAnnot_biosystems_target_id);
    ADD_ENUM_VALUE("target-name", eAnnot_target_name);
    ADD_ENUM_VALUE("target-descr", eAnnot_target_descr);
    ADD_ENUM_VALUE("target-tax-id", eAnnot_target_tax_id);
    ADD_ENUM_VALUE("gene-target-id", eAnnot_gene_target_id);
    ADD_ENUM_VALUE("dna-nucleotide-target-gi", eAnnot_dna_nucleotide_target_gi);
    ADD_ENUM_VALUE("rna-nucleotide-target-gi", eAnnot_rna_nucleotide_target_gi);
}
END_ENUM_INFO

void CPC_ResultType_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0xc;
}

void CPC_ResultType_Base::ResetDescription(void)
{
    m_Description.clear();
    m_set_State[0] &= ~0x30;
}

void CPC_ResultType_Base::ResetConstraints(void)
{
    m_Constraints.Reset();
}

void CPC_ResultType_Base::SetConstraints(CPC_ResultType_Base::TConstraints& value)
{
    m_Constraints.Reset(&value);
}

CPC_ResultType_Base::TConstraints& CPC_ResultType_Base::SetConstraints(void)
{
    if ( !m_Constraints )
        m_Constraints.Reset(new C_Constraints());
    return (*m_Constraints);
}

void CPC_ResultType_Base::ResetSunit(void)
{
    m_Sunit.erase();
    m_set_State[0] &= ~0x3000;
}

void CPC_ResultType_Base::ResetStransform(void)
{
    m_Stransform.erase();
    m_set_State[0] &= ~0x30000;
}

void CPC_ResultType_Base::ResetTc(void)
{
    m_Tc.Reset();
}

void CPC_ResultType_Base::SetTc(CPC_ResultType_Base::TTc& value)
{
    m_Tc.Reset(&value);
}

CPC_ResultType_Base::TTc& CPC_ResultType_Base::SetTc(void)
{
    if ( !m_Tc )
        m_Tc.Reset(new ncbi::objects::CPC_ConcentrationAttr());
    return (*m_Tc);
}

void CPC_ResultType_Base::ResetPanel_info(void)
{
    m_Panel_info.Reset();
}

void CPC_ResultType_Base::SetPanel_info(CPC_ResultType_Base::TPanel_info& value)
{
    m_Panel_info.Reset(&value);
}

CPC_ResultType_Base::TPanel_info& CPC_ResultType_Base::SetPanel_info(void)
{
    if ( !m_Panel_info )
        m_Panel_info.Reset(new ncbi::objects::CPC_AssayPanelTestResult());
    return (*m_Panel_info);
}

void CPC_ResultType_Base::Reset(void)
{
    ResetTid();
    ResetName();
    ResetDescription();
    ResetType();
    ResetConstraints();
    ResetUnit();
    ResetSunit();
    ResetTransform();
    ResetStransform();
    ResetTc();
    ResetAc();
    ResetPanel_info();
    ResetAnnot();
}

BEGIN_NAMED_BASE_CLASS_INFO("PC-ResultType", CPC_ResultType)
{
    SET_CLASS_MODULE("NCBI-PCAssay");
    ADD_NAMED_STD_MEMBER("tid", m_Tid)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("description", m_Description, STL_list, (STD, (string)))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("type", m_Type, EType)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("constraints", m_Constraints, C_Constraints)->SetOptional();
    ADD_NAMED_ENUM_MEMBER("unit", m_Unit, EUnit)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("sunit", m_Sunit)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("transform", m_Transform, ETransform)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("stransform", m_Stransform)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("tc", m_Tc, CPC_ConcentrationAttr)->SetOptional();
    ADD_NAMED_STD_MEMBER("ac", m_Ac)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("panel-info", m_Panel_info, CPC_AssayPanelTestResult)->SetOptional();
    ADD_NAMED_ENUM_MEMBER("annot", m_Annot, EAnnot)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CPC_ResultType_Base::CPC_ResultType_Base(void)
    : m_Tid(0), m_Type((EType)(0)), m_Unit((EUnit)(0)), m_Transform((ETransform)(0)), m_Ac(0), m_Annot((EAnnot)(0))
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CPC_ResultType_Base::~CPC_ResultType_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
