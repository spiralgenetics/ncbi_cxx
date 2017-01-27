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
#include <objects/trackmgr/TMgr_DisplayTrack.hpp>
#include <objects/trackmgr/TMgr_Attribute.hpp>
#include <objects/trackmgr/TMgr_DatasetItem.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CTMgr_DisplayTrack_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0xc;
}

void CTMgr_DisplayTrack_Base::ResetAttrs(void)
{
    m_Attrs.clear();
    m_set_State[0] &= ~0x30;
}

void CTMgr_DisplayTrack_Base::ResetData(void)
{
    m_Data.clear();
    m_set_State[0] &= ~0xc0;
}

void CTMgr_DisplayTrack_Base::Reset(void)
{
    ResetDtrack_id();
    ResetName();
    ResetAttrs();
    ResetData();
}

BEGIN_NAMED_BASE_CLASS_INFO("TMgr-DisplayTrack", CTMgr_DisplayTrack)
{
    SET_CLASS_MODULE("NCBI-TrackManager");
    ADD_NAMED_STD_MEMBER("dtrack-id", m_Dtrack_id)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("attrs", m_Attrs, STL_list, (STL_CRef, (CLASS, (CTMgr_Attribute))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("data", m_Data, STL_list, (STL_CRef, (CLASS, (CTMgr_DatasetItem))))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CTMgr_DisplayTrack_Base::CTMgr_DisplayTrack_Base(void)
    : m_Dtrack_id(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CTMgr_DisplayTrack_Base::~CTMgr_DisplayTrack_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
