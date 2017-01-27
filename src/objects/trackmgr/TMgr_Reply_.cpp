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
 *   'trackmgr.asn'.
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
#include <objects/trackmgr/TMgr_Reply.hpp>
#include <objects/trackmgr/TMgr_DisplayTrackReply.hpp>
#include <objects/trackmgr/TMgr_SwitchTrackContextRep.hpp>
#include <objects/trackmgr/TMgr_TrackAttrValueReply.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_Reply_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CTMgr_Reply_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Display_tracks:
    case e_Switch_display_tracks:
    case e_Track_attr_values:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CTMgr_Reply_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Display_tracks:
        (m_object = new(pool) ncbi::objects::CTMgr_DisplayTrackReply())->AddReference();
        break;
    case e_Switch_display_tracks:
        (m_object = new(pool) ncbi::objects::CTMgr_SwitchTrackContextReply())->AddReference();
        break;
    case e_Track_attr_values:
        (m_object = new(pool) ncbi::objects::CTMgr_TrackAttrValueReply())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CTMgr_Reply_Base::sm_SelectionNames[] = {
    "not set",
    "display-tracks",
    "switch-display-tracks",
    "track-attr-values"
};

NCBI_NS_STD::string CTMgr_Reply_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CTMgr_Reply_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CTMgr_Reply_Base::TDisplay_tracks& CTMgr_Reply_Base::GetDisplay_tracks(void) const
{
    CheckSelected(e_Display_tracks);
    return *static_cast<const TDisplay_tracks*>(m_object);
}

CTMgr_Reply_Base::TDisplay_tracks& CTMgr_Reply_Base::SetDisplay_tracks(void)
{
    Select(e_Display_tracks, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TDisplay_tracks*>(m_object);
}

void CTMgr_Reply_Base::SetDisplay_tracks(CTMgr_Reply_Base::TDisplay_tracks& value)
{
    TDisplay_tracks* ptr = &value;
    if ( m_choice != e_Display_tracks || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Display_tracks;
    }
}

const CTMgr_Reply_Base::TSwitch_display_tracks& CTMgr_Reply_Base::GetSwitch_display_tracks(void) const
{
    CheckSelected(e_Switch_display_tracks);
    return *static_cast<const TSwitch_display_tracks*>(m_object);
}

CTMgr_Reply_Base::TSwitch_display_tracks& CTMgr_Reply_Base::SetSwitch_display_tracks(void)
{
    Select(e_Switch_display_tracks, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSwitch_display_tracks*>(m_object);
}

void CTMgr_Reply_Base::SetSwitch_display_tracks(CTMgr_Reply_Base::TSwitch_display_tracks& value)
{
    TSwitch_display_tracks* ptr = &value;
    if ( m_choice != e_Switch_display_tracks || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Switch_display_tracks;
    }
}

const CTMgr_Reply_Base::TTrack_attr_values& CTMgr_Reply_Base::GetTrack_attr_values(void) const
{
    CheckSelected(e_Track_attr_values);
    return *static_cast<const TTrack_attr_values*>(m_object);
}

CTMgr_Reply_Base::TTrack_attr_values& CTMgr_Reply_Base::SetTrack_attr_values(void)
{
    Select(e_Track_attr_values, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TTrack_attr_values*>(m_object);
}

void CTMgr_Reply_Base::SetTrack_attr_values(CTMgr_Reply_Base::TTrack_attr_values& value)
{
    TTrack_attr_values* ptr = &value;
    if ( m_choice != e_Track_attr_values || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Track_attr_values;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("TMgr-Reply", CTMgr_Reply)
{
    SET_CHOICE_MODULE("NCBI-TrackManager");
    ADD_NAMED_REF_CHOICE_VARIANT("display-tracks", m_object, CTMgr_DisplayTrackReply);
    ADD_NAMED_REF_CHOICE_VARIANT("switch-display-tracks", m_object, CTMgr_SwitchTrackContextReply);
    ADD_NAMED_REF_CHOICE_VARIANT("track-attr-values", m_object, CTMgr_TrackAttrValueReply);
}
END_CHOICE_INFO

// constructor
CTMgr_Reply_Base::CTMgr_Reply_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CTMgr_Reply_Base::~CTMgr_Reply_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
