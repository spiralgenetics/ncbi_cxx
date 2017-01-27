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
 *   'dtd_sample_lib.dtd'.
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
#include <sample/lib/dtd/Data_set_id.hpp>
#include <sample/lib/dtd/Data_set_id_type.hpp>
#include <sample/lib/dtd/Data_set_id_uids.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CData_set_id_Base::ResetData_set_id_version(void)
{
    m_Data_set_id_version.erase();
    m_set_State[0] &= ~0x3;
}

void CData_set_id_Base::ResetData_set_id_name(void)
{
    m_Data_set_id_name.erase();
    m_set_State[0] &= ~0xc;
}

void CData_set_id_Base::ResetData_set_id_num(void)
{
    m_Data_set_id_num.erase();
    m_set_State[0] &= ~0x30;
}

void CData_set_id_Base::ResetData_set_id_type(void)
{
    if ( !m_Data_set_id_type ) {
        m_Data_set_id_type.Reset(new TData_set_id_type());
        return;
    }
    (*m_Data_set_id_type).Reset();
}

void CData_set_id_Base::SetData_set_id_type(CData_set_id_Base::TData_set_id_type& value)
{
    m_Data_set_id_type.Reset(&value);
}

void CData_set_id_Base::SetData_set_id_type(const string& value)
{
    SetData_set_id_type() = value;
}

void CData_set_id_Base::ResetData_set_id_weight(void)
{
    m_Data_set_id_weight.erase();
    m_set_State[0] &= ~0x300;
}

void CData_set_id_Base::ResetData_set_id_uids(void)
{
    m_Data_set_id_uids.Reset();
}

void CData_set_id_Base::SetData_set_id_uids(CData_set_id_Base::TData_set_id_uids& value)
{
    m_Data_set_id_uids.Reset(&value);
}

CData_set_id_Base::TData_set_id_uids& CData_set_id_Base::SetData_set_id_uids(void)
{
    if ( !m_Data_set_id_uids )
        m_Data_set_id_uids.Reset(new ncbi::objects::CData_set_id_uids());
    return (*m_Data_set_id_uids);
}

void CData_set_id_Base::Reset(void)
{
    ResetData_set_id_version();
    ResetData_set_id_name();
    ResetData_set_id_num();
    ResetData_set_id_type();
    ResetData_set_id_weight();
    ResetData_set_id_uids();
}

BEGIN_NAMED_BASE_CLASS_INFO("Data-set-id", CData_set_id)
{
    SET_CLASS_MODULE("dtd_sample_lib");
    ADD_NAMED_STD_MEMBER("Data-set-id_version", m_Data_set_id_version)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("Data-set-id_name", m_Data_set_id_name)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("Data-set-id_num", m_Data_set_id_num)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("Data-set-id_type", m_Data_set_id_type, CData_set_id_type)->SetNoPrefix();
    ADD_NAMED_STD_MEMBER("Data-set-id_weight", m_Data_set_id_weight)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetNoPrefix();
    ADD_NAMED_REF_MEMBER("Data-set-id_uids", m_Data_set_id_uids, CData_set_id_uids)->SetOptional()->SetNoPrefix();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CData_set_id_Base::CData_set_id_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetData_set_id_type();
    }
}

// destructor
CData_set_id_Base::~CData_set_id_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
