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
 *   'linkout.dtd'.
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
#include <objtools/eutils/linkout/FileName.hpp>
BEGIN_linkout_SCOPE // namespace linkout::


// generated classes

void CFileName_Base::C_Attlist::ResetFieldname(void)
{
    m_Fieldname.erase();
    m_set_State[0] &= ~0x3;
}

void CFileName_Base::C_Attlist::Reset(void)
{
    ResetFieldname();
}

BEGIN_NAMED_CLASS_INFO("", CFileName_Base::C_Attlist)
{
    SET_INTERNAL_NAME("FileName", "Attlist");
    SET_CLASS_MODULE("linkout");
    ADD_NAMED_STD_MEMBER("fieldname", m_Fieldname)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    info->SetRandomOrder(true);
}
END_CLASS_INFO

// constructor
CFileName_Base::C_Attlist::C_Attlist(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CFileName_Base::C_Attlist::~C_Attlist(void)
{
}


void CFileName_Base::ResetAttlist(void)
{
    if ( !m_Attlist ) {
        m_Attlist.Reset(new TAttlist());
        return;
    }
    (*m_Attlist).Reset();
}

void CFileName_Base::SetAttlist(CFileName_Base::TAttlist& value)
{
    m_Attlist.Reset(&value);
}

void CFileName_Base::ResetFileName(void)
{
    m_FileName.erase();
    m_set_State[0] &= ~0xc;
}

void CFileName_Base::Reset(void)
{
    ResetAttlist();
    ResetFileName();
}

BEGIN_NAMED_BASE_CLASS_INFO("FileName", CFileName)
{
    SET_CLASS_MODULE("linkout");
    ADD_NAMED_REF_MEMBER("Attlist", m_Attlist, C_Attlist)->SetNoPrefix()->SetAttlist();
    ADD_NAMED_STD_MEMBER("FileName", m_FileName)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix()->SetNotag();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CFileName_Base::CFileName_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetAttlist();
    }
}

// destructor
CFileName_Base::~CFileName_Base(void)
{
}



END_linkout_SCOPE // namespace linkout::

