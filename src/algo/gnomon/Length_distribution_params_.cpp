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
 *   'gnomon.asn'.
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
#include <algo/gnomon/Length_distribution_params.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CLength_distribution_params_Base::C_Range::Reset(void)
{
    ResetMin();
    ResetMax();
}

BEGIN_NAMED_CLASS_INFO("", CLength_distribution_params_Base::C_Range)
{
    SET_INTERNAL_NAME("Length-distribution-params", "range");
    SET_CLASS_MODULE("NCBI-GNOMON");
    ADD_NAMED_STD_MEMBER("min", m_Min)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("max", m_Max)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLength_distribution_params_Base::C_Range::C_Range(void)
    : m_Min(0), m_Max(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CLength_distribution_params_Base::C_Range::~C_Range(void)
{
}


void CLength_distribution_params_Base::ResetP(void)
{
    m_P.clear();
    m_set_State[0] &= ~0xc;
}

void CLength_distribution_params_Base::ResetRange(void)
{
    if ( !m_Range ) {
        m_Range.Reset(new TRange());
        return;
    }
    (*m_Range).Reset();
}

void CLength_distribution_params_Base::SetRange(CLength_distribution_params_Base::TRange& value)
{
    m_Range.Reset(&value);
}

void CLength_distribution_params_Base::Reset(void)
{
    ResetStep();
    ResetP();
    ResetA();
    ResetL();
    ResetRange();
}

BEGIN_NAMED_BASE_CLASS_INFO("Length-distribution-params", CLength_distribution_params)
{
    SET_CLASS_MODULE("NCBI-GNOMON");
    ADD_NAMED_STD_MEMBER("step", m_Step)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("p", m_P, STL_list, (STD, (double)))->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("a", m_A)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("l", m_L)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("range", m_Range, C_Range);
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CLength_distribution_params_Base::CLength_distribution_params_Base(void)
    : m_Step(0), m_A(0), m_L(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetRange();
    }
}

// destructor
CLength_distribution_params_Base::~CLength_distribution_params_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

