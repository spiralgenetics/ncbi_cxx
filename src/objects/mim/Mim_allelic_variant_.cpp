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
 *   'mim.asn'.
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
#include <objects/mim/Mim_allelic_variant.hpp>
#include <objects/mim/Mim_link.hpp>
#include <objects/mim/Mim_text.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CMim_allelic_variant_Base::ResetNumber(void)
{
    m_Number.erase();
    m_set_State[0] &= ~0x3;
}

void CMim_allelic_variant_Base::ResetName(void)
{
    m_Name.erase();
    m_set_State[0] &= ~0xc;
}

void CMim_allelic_variant_Base::ResetAliases(void)
{
    m_Aliases.clear();
    m_set_State[0] &= ~0x30;
}

void CMim_allelic_variant_Base::ResetMutation(void)
{
    m_Mutation.clear();
    m_set_State[0] &= ~0xc0;
}

void CMim_allelic_variant_Base::ResetDescription(void)
{
    m_Description.clear();
    m_set_State[0] &= ~0x300;
}

void CMim_allelic_variant_Base::ResetSnpLinks(void)
{
    m_SnpLinks.Reset();
}

void CMim_allelic_variant_Base::SetSnpLinks(CMim_allelic_variant_Base::TSnpLinks& value)
{
    m_SnpLinks.Reset(&value);
}

CMim_allelic_variant_Base::TSnpLinks& CMim_allelic_variant_Base::SetSnpLinks(void)
{
    if ( !m_SnpLinks )
        m_SnpLinks.Reset(new ncbi::objects::CMim_link());
    return (*m_SnpLinks);
}

void CMim_allelic_variant_Base::Reset(void)
{
    ResetNumber();
    ResetName();
    ResetAliases();
    ResetMutation();
    ResetDescription();
    ResetSnpLinks();
}

BEGIN_NAMED_BASE_CLASS_INFO("Mim-allelic-variant", CMim_allelic_variant)
{
    SET_CLASS_MODULE("NCBI-Mim");
    ADD_NAMED_STD_MEMBER("number", m_Number)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("name", m_Name)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("aliases", m_Aliases, STL_list, (STD, (string)))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("mutation", m_Mutation, STL_list, (STL_CRef, (CLASS, (CMim_text))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("description", m_Description, STL_list, (STL_CRef, (CLASS, (CMim_text))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("snpLinks", m_SnpLinks, CMim_link)->SetOptional();
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CMim_allelic_variant_Base::CMim_allelic_variant_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CMim_allelic_variant_Base::~CMim_allelic_variant_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

