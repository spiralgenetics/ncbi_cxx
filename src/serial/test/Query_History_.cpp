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
#include <serial/test/Query_History.hpp>
#include <serial/test/Query_Command.hpp>
#include <serial/test/Time.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CQuery_History_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0x3;
}

void CQuery_History_Base::ResetTime(void)
{
    if ( !m_Time ) {
        m_Time.Reset(new TTime());
        return;
    }
    (*m_Time).Reset();
}

void CQuery_History_Base::SetTime(CQuery_History_Base::TTime& value)
{
    m_Time.Reset(&value);
}

void CQuery_History_Base::ResetCommand(void)
{
    if ( !m_Command ) {
        m_Command.Reset(new TCommand());
        return;
    }
    (*m_Command).Reset();
}

void CQuery_History_Base::SetCommand(CQuery_History_Base::TCommand& value)
{
    m_Command.Reset(&value);
}

void CQuery_History_Base::Reset(void)
{
    ResetName();
    ResetSeqNumber();
    ResetTime();
    ResetCommand();
}

BEGIN_NAMED_BASE_CLASS_INFO("Query-History", CQuery_History)
{
    SET_CLASS_MODULE("NCBI-Env");
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("seqNumber", m_SeqNumber)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("time", m_Time, CTime);
    ADD_NAMED_REF_MEMBER("command", m_Command, CQuery_Command);
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CQuery_History_Base::CQuery_History_Base(void)
    : m_SeqNumber(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetTime();
        ResetCommand();
    }
}

// destructor
CQuery_History_Base::~CQuery_History_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
