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
 *   'elink.dtd'.
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
#include <objtools/eutils/elink/LinkSet.hpp>
#include <objtools/eutils/elink/IdCheckList.hpp>
#include <objtools/eutils/elink/IdList.hpp>
#include <objtools/eutils/elink/IdUrlList.hpp>
#include <objtools/eutils/elink/LinkSetDb.hpp>
#include <objtools/eutils/elink/LinkSetDbHistory.hpp>
BEGIN_elink_SCOPE // namespace elink::


// generated classes

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::ResetERROR(void)
{
    m_ERROR.erase();
    m_set_State[0] &= ~0x3;
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::ResetLinkSetDb(void)
{
    if ( !m_LinkSetDb ) {
        m_LinkSetDb.Reset(new TLinkSetDb());
        return;
    }
    (*m_LinkSetDb).Reset();
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::SetLinkSetDb(CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::TLinkSetDb& value)
{
    m_LinkSetDb.Reset(&value);
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::Reset(void)
{
    ResetERROR();
    ResetLinkSetDb();
}

BEGIN_NAMED_CLASS_INFO("", CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL)
{
    SET_INTERNAL_NAME("LinkSet.IIIE.IE.EL_2.EL.EL", "E");
    SET_CLASS_MODULE("elink");
    ADD_NAMED_STD_MEMBER("ERROR", m_ERROR)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("LinkSetDb", m_LinkSetDb, CLinkSetDb)->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::C_E_EL(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetLinkSetDb();
    }
}

// destructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_E_EL::~C_E_EL(void)
{
}


void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::ResetEL(void)
{
    m_EL.clear();
    m_set_State[0] &= ~0x3;
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::Reset(void)
{
    ResetEL();
}

BEGIN_NAMED_CLASS_INFO("", CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL)
{
    SET_INTERNAL_NAME("LinkSet.IIIE.IE.EL_2", "EL");
    SET_CLASS_MODULE("elink");
    ADD_NAMED_MEMBER("EL", m_EL, STL_list, (STL_CRef, (CLASS, (C_E_EL))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::C_EL(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL::~C_EL(void)
{
}


void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW::ResetLinkSetDbHistory(void)
{
    m_LinkSetDbHistory.clear();
    m_set_State[0] &= ~0x3;
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW::ResetWebEnv(void)
{
    m_WebEnv.erase();
    m_set_State[0] &= ~0xc;
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW::Reset(void)
{
    ResetLinkSetDbHistory();
    ResetWebEnv();
}

BEGIN_NAMED_CLASS_INFO("", CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW)
{
    SET_INTERNAL_NAME("LinkSet.IIIE.IE.EL_2", "LW");
    SET_CLASS_MODULE("elink");
    ADD_NAMED_MEMBER("LinkSetDbHistory", m_LinkSetDbHistory, STL_list, (STL_CRef, (CLASS, (CLinkSetDbHistory))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("WebEnv", m_WebEnv)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW::C_LW(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_LW::~C_LW(void)
{
}


void CLinkSet_Base::C_Data::C_IE::C_EL_2::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_EL:
    case e_LW:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_EL:
        (m_object = new(pool) C_EL())->AddReference();
        break;
    case e_LW:
        (m_object = new(pool) C_LW())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CLinkSet_Base::C_Data::C_IE::C_EL_2::sm_SelectionNames[] = {
    "not set",
    "EL",
    "LW"
};

NCBI_NS_STD::string CLinkSet_Base::C_Data::C_IE::C_EL_2::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CLinkSet_Base::C_Data::C_IE::C_EL_2::TEL& CLinkSet_Base::C_Data::C_IE::C_EL_2::GetEL(void) const
{
    CheckSelected(e_EL);
    return *static_cast<const TEL*>(m_object);
}

CLinkSet_Base::C_Data::C_IE::C_EL_2::TEL& CLinkSet_Base::C_Data::C_IE::C_EL_2::SetEL(void)
{
    Select(e_EL, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TEL*>(m_object);
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::SetEL(CLinkSet_Base::C_Data::C_IE::C_EL_2::TEL& value)
{
    TEL* ptr = &value;
    if ( m_choice != e_EL || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_EL;
    }
}

const CLinkSet_Base::C_Data::C_IE::C_EL_2::TLW& CLinkSet_Base::C_Data::C_IE::C_EL_2::GetLW(void) const
{
    CheckSelected(e_LW);
    return *static_cast<const TLW*>(m_object);
}

CLinkSet_Base::C_Data::C_IE::C_EL_2::TLW& CLinkSet_Base::C_Data::C_IE::C_EL_2::SetLW(void)
{
    Select(e_LW, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TLW*>(m_object);
}

void CLinkSet_Base::C_Data::C_IE::C_EL_2::SetLW(CLinkSet_Base::C_Data::C_IE::C_EL_2::TLW& value)
{
    TLW* ptr = &value;
    if ( m_choice != e_LW || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_LW;
    }
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CLinkSet_Base::C_Data::C_IE::C_EL_2)
{
    SET_INTERNAL_NAME("LinkSet.IIIE.IE", "EL_2");
    SET_CHOICE_MODULE("elink");
    ADD_NAMED_REF_CHOICE_VARIANT("EL", m_object, C_EL)->SetNoPrefix()->SetNotag();
    ADD_NAMED_REF_CHOICE_VARIANT("LW", m_object, C_LW)->SetNoPrefix()->SetNotag();
}
END_CHOICE_INFO

// constructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::C_EL_2(void)
    : m_choice(e_not_set)
{
}

// destructor
CLinkSet_Base::C_Data::C_IE::C_EL_2::~C_EL_2(void)
{
    Reset();
}


void CLinkSet_Base::C_Data::C_IE::ResetIdList(void)
{
    m_IdList.Reset();
}

void CLinkSet_Base::C_Data::C_IE::SetIdList(CLinkSet_Base::C_Data::C_IE::TIdList& value)
{
    m_IdList.Reset(&value);
}

CLinkSet_Base::C_Data::C_IE::TIdList& CLinkSet_Base::C_Data::C_IE::SetIdList(void)
{
    if ( !m_IdList )
        m_IdList.Reset(new elink::CIdList());
    return (*m_IdList);
}

void CLinkSet_Base::C_Data::C_IE::ResetEL_2(void)
{
    if ( !m_EL_2 ) {
        m_EL_2.Reset(new TEL_2());
        return;
    }
    (*m_EL_2).Reset();
}

void CLinkSet_Base::C_Data::C_IE::SetEL_2(CLinkSet_Base::C_Data::C_IE::TEL_2& value)
{
    m_EL_2.Reset(&value);
}

void CLinkSet_Base::C_Data::C_IE::Reset(void)
{
    ResetIdList();
    ResetEL_2();
}

BEGIN_NAMED_CLASS_INFO("", CLinkSet_Base::C_Data::C_IE)
{
    SET_INTERNAL_NAME("LinkSet.IIIE", "IE");
    SET_CLASS_MODULE("elink");
    ADD_NAMED_REF_MEMBER("IdList", m_IdList, CIdList)->SetOptional()->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("EL_2", m_EL_2, C_EL_2)->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLinkSet_Base::C_Data::C_IE::C_IE(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetEL_2();
    }
}

// destructor
CLinkSet_Base::C_Data::C_IE::~C_IE(void)
{
}


void CLinkSet_Base::C_Data::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CLinkSet_Base::C_Data::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_ERROR:
        m_string.Destruct();
        break;
    case e_IE:
    case e_IdUrlList:
    case e_IdCheckList:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CLinkSet_Base::C_Data::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_IE:
        (m_object = new(pool) C_IE())->AddReference();
        break;
    case e_IdUrlList:
        (m_object = new(pool) elink::CIdUrlList())->AddReference();
        break;
    case e_IdCheckList:
        (m_object = new(pool) elink::CIdCheckList())->AddReference();
        break;
    case e_ERROR:
        m_string.Construct();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CLinkSet_Base::C_Data::sm_SelectionNames[] = {
    "not set",
    "IE",
    "IdUrlList",
    "IdCheckList",
    "ERROR"
};

NCBI_NS_STD::string CLinkSet_Base::C_Data::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CLinkSet_Base::C_Data::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CLinkSet_Base::C_Data::TIE& CLinkSet_Base::C_Data::GetIE(void) const
{
    CheckSelected(e_IE);
    return *static_cast<const TIE*>(m_object);
}

CLinkSet_Base::C_Data::TIE& CLinkSet_Base::C_Data::SetIE(void)
{
    Select(e_IE, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TIE*>(m_object);
}

void CLinkSet_Base::C_Data::SetIE(CLinkSet_Base::C_Data::TIE& value)
{
    TIE* ptr = &value;
    if ( m_choice != e_IE || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_IE;
    }
}

const CLinkSet_Base::C_Data::TIdUrlList& CLinkSet_Base::C_Data::GetIdUrlList(void) const
{
    CheckSelected(e_IdUrlList);
    return *static_cast<const TIdUrlList*>(m_object);
}

CLinkSet_Base::C_Data::TIdUrlList& CLinkSet_Base::C_Data::SetIdUrlList(void)
{
    Select(e_IdUrlList, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TIdUrlList*>(m_object);
}

void CLinkSet_Base::C_Data::SetIdUrlList(CLinkSet_Base::C_Data::TIdUrlList& value)
{
    TIdUrlList* ptr = &value;
    if ( m_choice != e_IdUrlList || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_IdUrlList;
    }
}

const CLinkSet_Base::C_Data::TIdCheckList& CLinkSet_Base::C_Data::GetIdCheckList(void) const
{
    CheckSelected(e_IdCheckList);
    return *static_cast<const TIdCheckList*>(m_object);
}

CLinkSet_Base::C_Data::TIdCheckList& CLinkSet_Base::C_Data::SetIdCheckList(void)
{
    Select(e_IdCheckList, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TIdCheckList*>(m_object);
}

void CLinkSet_Base::C_Data::SetIdCheckList(CLinkSet_Base::C_Data::TIdCheckList& value)
{
    TIdCheckList* ptr = &value;
    if ( m_choice != e_IdCheckList || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_IdCheckList;
    }
}

void CLinkSet_Base::C_Data::SetERROR(const CLinkSet_Base::C_Data::TERROR& value)
{
    Select(e_ERROR, NCBI_NS_NCBI::eDoNotResetVariant);
    *m_string = value;
}

// helper methods

// type info
BEGIN_NAMED_CHOICE_INFO("", CLinkSet_Base::C_Data)
{
    SET_INTERNAL_NAME("LinkSet", "IIIE");
    SET_CHOICE_MODULE("elink");
    ADD_NAMED_REF_CHOICE_VARIANT("IE", m_object, C_IE)->SetNoPrefix()->SetNotag();
    ADD_NAMED_REF_CHOICE_VARIANT("IdUrlList", m_object, CIdUrlList)->SetNoPrefix();
    ADD_NAMED_REF_CHOICE_VARIANT("IdCheckList", m_object, CIdCheckList)->SetNoPrefix();
    ADD_NAMED_BUF_CHOICE_VARIANT("ERROR", m_string, STD, (NCBI_NS_STD::string))->SetNoPrefix();
}
END_CHOICE_INFO

// constructor
CLinkSet_Base::C_Data::C_Data(void)
    : m_choice(e_not_set)
{
}

// destructor
CLinkSet_Base::C_Data::~C_Data(void)
{
    Reset();
}


void CLinkSet_Base::ResetDbFrom(void)
{
    m_DbFrom.erase();
    m_set_State[0] &= ~0x3;
}

void CLinkSet_Base::ResetData(void)
{
    if ( !m_Data ) {
        m_Data.Reset(new TData());
        return;
    }
    (*m_Data).Reset();
}

void CLinkSet_Base::SetData(CLinkSet_Base::TData& value)
{
    m_Data.Reset(&value);
}

void CLinkSet_Base::ResetERROR(void)
{
    m_ERROR.erase();
    m_set_State[0] &= ~0x30;
}

void CLinkSet_Base::Reset(void)
{
    ResetDbFrom();
    ResetData();
    ResetERROR();
}

BEGIN_NAMED_BASE_CLASS_INFO("LinkSet", CLinkSet)
{
    SET_CLASS_MODULE("elink");
    ADD_NAMED_STD_MEMBER("DbFrom", m_DbFrom)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("Data", m_Data, C_Data)->SetNoPrefix()->SetNotag();
    ADD_NAMED_STD_MEMBER("ERROR", m_ERROR)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLinkSet_Base::CLinkSet_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetData();
    }
}

// destructor
CLinkSet_Base::~CLinkSet_Base(void)
{
}



END_elink_SCOPE // namespace elink::

