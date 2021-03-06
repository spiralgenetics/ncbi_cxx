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
#include <objects/mmdb3/Biostruc_feature_set_descr.hpp>
#include <objects/pub/Pub.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CBiostruc_feature_set_descr_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CBiostruc_feature_set_descr_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Name:
    case e_Pdb_comment:
    case e_Other_comment:
        m_string.Destruct();
        break;
    case e_Attribution:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CBiostruc_feature_set_descr_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Attribution:
        (m_object = new(pool) ncbi::objects::CPub())->AddReference();
        break;
    case e_Name:
    case e_Pdb_comment:
    case e_Other_comment:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CBiostruc_feature_set_descr_Base::sm_SelectionNames[] = {
    "not set",
    "name",
    "pdb-comment",
    "other-comment",
    "attribution"
};

NCBI_NS_STD::string CBiostruc_feature_set_descr_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CBiostruc_feature_set_descr_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CBiostruc_feature_set_descr_Base::SetName(const CBiostruc_feature_set_descr_Base::TName& value)
{
    Select(e_Name, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

void CBiostruc_feature_set_descr_Base::SetPdb_comment(const CBiostruc_feature_set_descr_Base::TPdb_comment& value)
{
    Select(e_Pdb_comment, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

void CBiostruc_feature_set_descr_Base::SetOther_comment(const CBiostruc_feature_set_descr_Base::TOther_comment& value)
{
    Select(e_Other_comment, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

const CBiostruc_feature_set_descr_Base::TAttribution& CBiostruc_feature_set_descr_Base::GetAttribution(void) const
{
    CheckSelected(e_Attribution);
    return *static_cast<const TAttribution*>(m_object);
}

CBiostruc_feature_set_descr_Base::TAttribution& CBiostruc_feature_set_descr_Base::SetAttribution(void)
{
    Select(e_Attribution, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAttribution*>(m_object);
}

void CBiostruc_feature_set_descr_Base::SetAttribution(CBiostruc_feature_set_descr_Base::TAttribution& value)
{
    TAttribution* ptr = &value;
    if ( m_choice != e_Attribution || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Attribution;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Biostruc-feature-set-descr", CBiostruc_feature_set_descr)
{
    SET_CHOICE_MODULE("MMDB-Features");
    ADD_NAMED_BUF_CHOICE_VARIANT("name", m_string, STD, (string));
    ADD_NAMED_BUF_CHOICE_VARIANT("pdb-comment", m_string, STD, (string));
    ADD_NAMED_BUF_CHOICE_VARIANT("other-comment", m_string, STD, (string));
    ADD_NAMED_REF_CHOICE_VARIANT("attribution", m_object, CPub);
}
END_CHOICE_INFO

// constructor
CBiostruc_feature_set_descr_Base::CBiostruc_feature_set_descr_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CBiostruc_feature_set_descr_Base::~CBiostruc_feature_set_descr_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

