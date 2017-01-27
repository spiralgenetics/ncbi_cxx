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
 *   'egquery.dtd'.
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
#include <objtools/eutils/egquery/EGQueryResult.hpp>
#include <objtools/eutils/egquery/ResultItem.hpp>
BEGIN_egquery_SCOPE // namespace egquery::


// generated classes

void CEGQueryResult_Base::ResetResultItem(void)
{
    m_ResultItem.clear();
    m_set_State[0] &= ~0x3;
}

void CEGQueryResult_Base::Reset(void)
{
    ResetResultItem();
}

BEGIN_NAMED_BASE_CLASS_INFO("eGQueryResult", CEGQueryResult)
{
    SET_CLASS_MODULE("egquery");
    ADD_NAMED_MEMBER("ResultItem", m_ResultItem, STL_list, (STL_CRef, (CLASS, (CResultItem))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CEGQueryResult_Base::CEGQueryResult_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CEGQueryResult_Base::~CEGQueryResult_Base(void)
{
}



END_egquery_SCOPE // namespace egquery::
