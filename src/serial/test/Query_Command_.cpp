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
 *   'we_cpp.asn'.
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
#include <serial/test/Query_Command.hpp>
#include <serial/test/Query_Related.hpp>
#include <serial/test/Query_Search.hpp>
#include <serial/test/Query_Select.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CQuery_Command_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CQuery_Command_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Search:
    case e_Select:
    case e_Related:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CQuery_Command_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Search:
        (m_object = new(pool) ncbi::objects::CQuery_Search())->AddReference();
        break;
    case e_Select:
        (m_object = new(pool) ncbi::objects::CQuery_Select())->AddReference();
        break;
    case e_Related:
        (m_object = new(pool) ncbi::objects::CQuery_Related())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CQuery_Command_Base::sm_SelectionNames[] = {
    "not set",
    "search",
    "select",
    "related"
};

NCBI_NS_STD::string CQuery_Command_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CQuery_Command_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CQuery_Command_Base::TSearch& CQuery_Command_Base::GetSearch(void) const
{
    CheckSelected(e_Search);
    return *static_cast<const TSearch*>(m_object);
}

CQuery_Command_Base::TSearch& CQuery_Command_Base::SetSearch(void)
{
    Select(e_Search, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSearch*>(m_object);
}

void CQuery_Command_Base::SetSearch(CQuery_Command_Base::TSearch& value)
{
    TSearch* ptr = &value;
    if ( m_choice != e_Search || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Search;
    }
}

const CQuery_Command_Base::TSelect& CQuery_Command_Base::GetSelect(void) const
{
    CheckSelected(e_Select);
    return *static_cast<const TSelect*>(m_object);
}

CQuery_Command_Base::TSelect& CQuery_Command_Base::SetSelect(void)
{
    Select(e_Select, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TSelect*>(m_object);
}

void CQuery_Command_Base::SetSelect(CQuery_Command_Base::TSelect& value)
{
    TSelect* ptr = &value;
    if ( m_choice != e_Select || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Select;
    }
}

const CQuery_Command_Base::TRelated& CQuery_Command_Base::GetRelated(void) const
{
    CheckSelected(e_Related);
    return *static_cast<const TRelated*>(m_object);
}

CQuery_Command_Base::TRelated& CQuery_Command_Base::SetRelated(void)
{
    Select(e_Related, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TRelated*>(m_object);
}

void CQuery_Command_Base::SetRelated(CQuery_Command_Base::TRelated& value)
{
    TRelated* ptr = &value;
    if ( m_choice != e_Related || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Related;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Query-Command", CQuery_Command)
{
    SET_CHOICE_MODULE("NCBI-Env");
    ADD_NAMED_REF_CHOICE_VARIANT("search", m_object, CQuery_Search);
    ADD_NAMED_REF_CHOICE_VARIANT("select", m_object, CQuery_Select);
    ADD_NAMED_REF_CHOICE_VARIANT("related", m_object, CQuery_Related);
}
END_CHOICE_INFO

// constructor
CQuery_Command_Base::CQuery_Command_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CQuery_Command_Base::~CQuery_Command_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
