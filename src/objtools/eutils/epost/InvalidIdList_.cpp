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
 *   'epost.dtd'.
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
#include <objtools/eutils/epost/InvalidIdList.hpp>
BEGIN_epost_SCOPE // namespace epost::


// generated classes

void CInvalidIdList_Base::ResetId(void)
{
    m_Id.clear();
    m_set_State[0] &= ~0x3;
}

void CInvalidIdList_Base::Reset(void)
{
    ResetId();
}

BEGIN_NAMED_BASE_CLASS_INFO("InvalidIdList", CInvalidIdList)
{
    SET_CLASS_MODULE("epost");
    ADD_NAMED_MEMBER("Id", m_Id, STL_list, (STD, (NCBI_NS_STD::string)))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CInvalidIdList_Base::CInvalidIdList_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CInvalidIdList_Base::~CInvalidIdList_Base(void)
{
}



END_epost_SCOPE // namespace epost::
