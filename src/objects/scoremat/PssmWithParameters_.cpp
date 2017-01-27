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
 *   'scoremat.asn'.
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
#include <objects/scoremat/PssmWithParameters.hpp>
#include <objects/scoremat/Pssm.hpp>
#include <objects/scoremat/PssmParameters.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CPssmWithParameters_Base::ResetPssm(void)
{
    if ( !m_Pssm ) {
        m_Pssm.Reset(new TPssm());
        return;
    }
    (*m_Pssm).Reset();
}

void CPssmWithParameters_Base::SetPssm(CPssmWithParameters_Base::TPssm& value)
{
    m_Pssm.Reset(&value);
}

void CPssmWithParameters_Base::ResetParams(void)
{
    m_Params.Reset();
}

void CPssmWithParameters_Base::SetParams(CPssmWithParameters_Base::TParams& value)
{
    m_Params.Reset(&value);
}

CPssmWithParameters_Base::TParams& CPssmWithParameters_Base::SetParams(void)
{
    if ( !m_Params )
        m_Params.Reset(new ncbi::objects::CPssmParameters());
    return (*m_Params);
}

void CPssmWithParameters_Base::Reset(void)
{
    ResetPssm();
    ResetParams();
}

BEGIN_NAMED_BASE_CLASS_INFO("PssmWithParameters", CPssmWithParameters)
{
    SET_CLASS_MODULE("NCBI-ScoreMat");
    ADD_NAMED_REF_MEMBER("pssm", m_Pssm, CPssm);
    ADD_NAMED_REF_MEMBER("params", m_Params, CPssmParameters)->SetOptional();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CPssmWithParameters_Base::CPssmWithParameters_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetPssm();
    }
}

// destructor
CPssmWithParameters_Base::~CPssmWithParameters_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
