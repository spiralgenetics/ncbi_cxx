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
 *   'einfo.dtd'.
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
#include <objtools/eutils/einfo/DbInfo.hpp>
#include <objtools/eutils/einfo/FieldList.hpp>
#include <objtools/eutils/einfo/LinkList.hpp>
BEGIN_einfo_SCOPE // namespace einfo::


// generated classes

void CDbInfo_Base::ResetDbName(void)
{
    m_DbName.erase();
    m_set_State[0] &= ~0x3;
}

void CDbInfo_Base::ResetMenuName(void)
{
    m_MenuName.erase();
    m_set_State[0] &= ~0xc;
}

void CDbInfo_Base::ResetDescription(void)
{
    m_Description.erase();
    m_set_State[0] &= ~0x30;
}

void CDbInfo_Base::ResetCount(void)
{
    m_Count.erase();
    m_set_State[0] &= ~0xc0;
}

void CDbInfo_Base::ResetLastUpdate(void)
{
    m_LastUpdate.erase();
    m_set_State[0] &= ~0x300;
}

void CDbInfo_Base::ResetFieldList(void)
{
    if ( !m_FieldList ) {
        m_FieldList.Reset(new TFieldList());
        return;
    }
    (*m_FieldList).Reset();
}

void CDbInfo_Base::SetFieldList(CDbInfo_Base::TFieldList& value)
{
    m_FieldList.Reset(&value);
}

void CDbInfo_Base::ResetLinkList(void)
{
    m_LinkList.Reset();
}

void CDbInfo_Base::SetLinkList(CDbInfo_Base::TLinkList& value)
{
    m_LinkList.Reset(&value);
}

CDbInfo_Base::TLinkList& CDbInfo_Base::SetLinkList(void)
{
    if ( !m_LinkList )
        m_LinkList.Reset(new einfo::CLinkList());
    return (*m_LinkList);
}

void CDbInfo_Base::Reset(void)
{
    ResetDbName();
    ResetMenuName();
    ResetDescription();
    ResetCount();
    ResetLastUpdate();
    ResetFieldList();
    ResetLinkList();
}

BEGIN_NAMED_BASE_CLASS_INFO("DbInfo", CDbInfo)
{
    SET_CLASS_MODULE("einfo");
    ADD_NAMED_STD_MEMBER("DbName", m_DbName)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("MenuName", m_MenuName)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("Description", m_Description)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("Count", m_Count)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("LastUpdate", m_LastUpdate)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("FieldList", m_FieldList, CFieldList)->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("LinkList", m_LinkList, CLinkList)->SetOptional()->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CDbInfo_Base::CDbInfo_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetFieldList();
    }
}

// destructor
CDbInfo_Base::~CDbInfo_Base(void)
{
}



END_einfo_SCOPE // namespace einfo::

