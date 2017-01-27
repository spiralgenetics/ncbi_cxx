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
 *   'id2.asn'.
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
#include <objects/id2/ID2_Blob_Id.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_IN_INFO("", CID2_Blob_Id_Base::, ESub_sat, true)
{
    SET_ENUM_INTERNAL_NAME("ID2-Blob-Id", "sub-sat");
    SET_ENUM_MODULE("NCBI-ID2Access");
    ADD_ENUM_VALUE("main", eSub_sat_main);
    ADD_ENUM_VALUE("snp", eSub_sat_snp);
    ADD_ENUM_VALUE("snp-graph", eSub_sat_snp_graph);
    ADD_ENUM_VALUE("cdd", eSub_sat_cdd);
    ADD_ENUM_VALUE("mgc", eSub_sat_mgc);
    ADD_ENUM_VALUE("hprd", eSub_sat_hprd);
    ADD_ENUM_VALUE("sts", eSub_sat_sts);
    ADD_ENUM_VALUE("trna", eSub_sat_trna);
    ADD_ENUM_VALUE("exon", eSub_sat_exon);
}
END_ENUM_INFO

void CID2_Blob_Id_Base::Reset(void)
{
    ResetSat();
    ResetSub_sat();
    ResetSat_key();
    ResetVersion();
}

BEGIN_NAMED_BASE_CLASS_INFO("ID2-Blob-Id", CID2_Blob_Id)
{
    SET_CLASS_MODULE("NCBI-ID2Access");
    ADD_NAMED_STD_MEMBER("sat", m_Sat)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_ENUM_MEMBER("sub-sat", m_Sub_sat, ESub_sat)->SetDefault(new TSub_sat(eSub_sat_main))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("sat-key", m_Sat_key)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("version", m_Version)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CID2_Blob_Id_Base::CID2_Blob_Id_Base(void)
    : m_Sat(0), m_Sub_sat(eSub_sat_main), m_Sat_key(0), m_Version(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CID2_Blob_Id_Base::~CID2_Blob_Id_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
