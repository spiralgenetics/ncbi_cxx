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
 *   'blast.asn'.
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
#include <objects/blast/Blas_comm_opti_query_filte.hpp>
#include <objects/blast/Blas_comm_opti_repea_filte.hpp>
#include <objects/blast/Blast4_mask.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CBlast4_common_options_query_filtering_Base::ResetRepeats_filtering(void)
{
    m_Repeats_filtering.Reset();
}

void CBlast4_common_options_query_filtering_Base::SetRepeats_filtering(CBlast4_common_options_query_filtering_Base::TRepeats_filtering& value)
{
    m_Repeats_filtering.Reset(&value);
}

CBlast4_common_options_query_filtering_Base::TRepeats_filtering& CBlast4_common_options_query_filtering_Base::SetRepeats_filtering(void)
{
    if ( !m_Repeats_filtering )
        m_Repeats_filtering.Reset(new ncbi::objects::CBlast4_common_options_repeats_filtering());
    return (*m_Repeats_filtering);
}

void CBlast4_common_options_query_filtering_Base::ResetUser_specified_masks(void)
{
    m_User_specified_masks.clear();
    m_set_State[0] &= ~0x300;
}

void CBlast4_common_options_query_filtering_Base::Reset(void)
{
    ResetUse_seg_filtering();
    ResetUse_dust_filtering();
    ResetMask_for_lookup_table_only();
    ResetRepeats_filtering();
    ResetUser_specified_masks();
    ResetNo_filtering();
}

BEGIN_NAMED_BASE_CLASS_INFO("Blast4-common-options-query-filtering", CBlast4_common_options_query_filtering)
{
    SET_CLASS_MODULE("NCBI-Blast4");
    ADD_NAMED_STD_MEMBER("use-seg-filtering", m_Use_seg_filtering)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("use-dust-filtering", m_Use_dust_filtering)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("mask-for-lookup-table-only", m_Mask_for_lookup_table_only)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_REF_MEMBER("repeats-filtering", m_Repeats_filtering, CBlast4_common_options_repeats_filtering)->SetOptional();
    ADD_NAMED_MEMBER("user-specified-masks", m_User_specified_masks, STL_list, (STL_CRef, (CLASS, (CBlast4_mask))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("no-filtering", m_No_filtering)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CBlast4_common_options_query_filtering_Base::CBlast4_common_options_query_filtering_Base(void)
    : m_Use_seg_filtering(0), m_Use_dust_filtering(0), m_Mask_for_lookup_table_only(0), m_No_filtering(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CBlast4_common_options_query_filtering_Base::~CBlast4_common_options_query_filtering_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

