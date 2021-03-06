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
 *   'insdseq.asn'.
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
#include <objects/insdseq/INSDSeq.hpp>
#include <objects/insdseq/INSDAltSeqData.hpp>
#include <objects/insdseq/INSDComment.hpp>
#include <objects/insdseq/INSDFeature.hpp>
#include <objects/insdseq/INSDFeatureSet.hpp>
#include <objects/insdseq/INSDReference.hpp>
#include <objects/insdseq/INSDStrucComment.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CINSDSeq_Base::ResetLocus(void)
{
    m_Locus.erase();
    m_set_State[0] &= ~0x3;
}

void CINSDSeq_Base::ResetStrandedness(void)
{
    m_Strandedness.erase();
    m_set_State[0] &= ~0x30;
}

void CINSDSeq_Base::ResetMoltype(void)
{
    m_Moltype.erase();
    m_set_State[0] &= ~0xc0;
}

void CINSDSeq_Base::ResetTopology(void)
{
    m_Topology.erase();
    m_set_State[0] &= ~0x300;
}

void CINSDSeq_Base::ResetDivision(void)
{
    m_Division.erase();
    m_set_State[0] &= ~0xc00;
}

void CINSDSeq_Base::ResetUpdate_date(void)
{
    m_Update_date.erase();
    m_set_State[0] &= ~0x3000;
}

void CINSDSeq_Base::ResetCreate_date(void)
{
    m_Create_date.erase();
    m_set_State[0] &= ~0xc000;
}

void CINSDSeq_Base::ResetUpdate_release(void)
{
    m_Update_release.erase();
    m_set_State[0] &= ~0x30000;
}

void CINSDSeq_Base::ResetCreate_release(void)
{
    m_Create_release.erase();
    m_set_State[0] &= ~0xc0000;
}

void CINSDSeq_Base::ResetDefinition(void)
{
    m_Definition.erase();
    m_set_State[0] &= ~0x300000;
}

void CINSDSeq_Base::ResetPrimary_accession(void)
{
    m_Primary_accession.erase();
    m_set_State[0] &= ~0xc00000;
}

void CINSDSeq_Base::ResetEntry_version(void)
{
    m_Entry_version.erase();
    m_set_State[0] &= ~0x3000000;
}

void CINSDSeq_Base::ResetAccession_version(void)
{
    m_Accession_version.erase();
    m_set_State[0] &= ~0xc000000;
}

void CINSDSeq_Base::ResetOther_seqids(void)
{
    m_Other_seqids.clear();
    m_set_State[0] &= ~0x30000000;
}

void CINSDSeq_Base::ResetSecondary_accessions(void)
{
    m_Secondary_accessions.clear();
    m_set_State[0] &= ~0xc0000000;
}

void CINSDSeq_Base::ResetProject(void)
{
    m_Project.erase();
    m_set_State[1] &= ~0x3;
}

void CINSDSeq_Base::ResetKeywords(void)
{
    m_Keywords.clear();
    m_set_State[1] &= ~0xc;
}

void CINSDSeq_Base::ResetSegment(void)
{
    m_Segment.erase();
    m_set_State[1] &= ~0x30;
}

void CINSDSeq_Base::ResetSource(void)
{
    m_Source.erase();
    m_set_State[1] &= ~0xc0;
}

void CINSDSeq_Base::ResetOrganism(void)
{
    m_Organism.erase();
    m_set_State[1] &= ~0x300;
}

void CINSDSeq_Base::ResetTaxonomy(void)
{
    m_Taxonomy.erase();
    m_set_State[1] &= ~0xc00;
}

void CINSDSeq_Base::ResetReferences(void)
{
    m_References.clear();
    m_set_State[1] &= ~0x3000;
}

void CINSDSeq_Base::ResetComment(void)
{
    m_Comment.erase();
    m_set_State[1] &= ~0xc000;
}

void CINSDSeq_Base::ResetComment_set(void)
{
    m_Comment_set.clear();
    m_set_State[1] &= ~0x30000;
}

void CINSDSeq_Base::ResetStruc_comments(void)
{
    m_Struc_comments.clear();
    m_set_State[1] &= ~0xc0000;
}

void CINSDSeq_Base::ResetPrimary(void)
{
    m_Primary.erase();
    m_set_State[1] &= ~0x300000;
}

void CINSDSeq_Base::ResetSource_db(void)
{
    m_Source_db.erase();
    m_set_State[1] &= ~0xc00000;
}

void CINSDSeq_Base::ResetDatabase_reference(void)
{
    m_Database_reference.erase();
    m_set_State[1] &= ~0x3000000;
}

void CINSDSeq_Base::ResetFeature_table(void)
{
    m_Feature_table.clear();
    m_set_State[1] &= ~0xc000000;
}

void CINSDSeq_Base::ResetFeature_set(void)
{
    m_Feature_set.clear();
    m_set_State[1] &= ~0x30000000;
}

void CINSDSeq_Base::ResetSequence(void)
{
    m_Sequence.erase();
    m_set_State[1] &= ~0xc0000000;
}

void CINSDSeq_Base::ResetContig(void)
{
    m_Contig.erase();
    m_set_State[2] &= ~0x3;
}

void CINSDSeq_Base::ResetAlt_seq(void)
{
    m_Alt_seq.clear();
    m_set_State[2] &= ~0xc;
}

void CINSDSeq_Base::Reset(void)
{
    ResetLocus();
    ResetLength();
    ResetStrandedness();
    ResetMoltype();
    ResetTopology();
    ResetDivision();
    ResetUpdate_date();
    ResetCreate_date();
    ResetUpdate_release();
    ResetCreate_release();
    ResetDefinition();
    ResetPrimary_accession();
    ResetEntry_version();
    ResetAccession_version();
    ResetOther_seqids();
    ResetSecondary_accessions();
    ResetProject();
    ResetKeywords();
    ResetSegment();
    ResetSource();
    ResetOrganism();
    ResetTaxonomy();
    ResetReferences();
    ResetComment();
    ResetComment_set();
    ResetStruc_comments();
    ResetPrimary();
    ResetSource_db();
    ResetDatabase_reference();
    ResetFeature_table();
    ResetFeature_set();
    ResetSequence();
    ResetContig();
    ResetAlt_seq();
}

BEGIN_NAMED_BASE_CLASS_INFO("INSDSeq", CINSDSeq)
{
    SET_CLASS_MODULE("INSD-INSDSeq");
    ADD_NAMED_STD_MEMBER("locus", m_Locus)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("length", m_Length)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("strandedness", m_Strandedness)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("moltype", m_Moltype)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("topology", m_Topology)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("division", m_Division)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("update-date", m_Update_date)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("create-date", m_Create_date)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("update-release", m_Update_release)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("create-release", m_Create_release)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("definition", m_Definition)->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("primary-accession", m_Primary_accession)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("entry-version", m_Entry_version)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("accession-version", m_Accession_version)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("other-seqids", m_Other_seqids, STL_list, (CLASS, (CINSDSeqid)))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("secondary-accessions", m_Secondary_accessions, STL_list, (CLASS, (CINSDSecondary_accn)))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("project", m_Project)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("keywords", m_Keywords, STL_list, (CLASS, (CINSDKeyword)))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("segment", m_Segment)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("source", m_Source)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("organism", m_Organism)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("taxonomy", m_Taxonomy)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("references", m_References, STL_list, (STL_CRef, (CLASS, (CINSDReference))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("comment", m_Comment)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("comment-set", m_Comment_set, STL_list, (STL_CRef, (CLASS, (CINSDComment))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("struc-comments", m_Struc_comments, STL_list, (STL_CRef, (CLASS, (CINSDStrucComment))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("primary", m_Primary)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("source-db", m_Source_db)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("database-reference", m_Database_reference)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("feature-table", m_Feature_table, STL_list, (STL_CRef, (CLASS, (CINSDFeature))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("feature-set", m_Feature_set, STL_list, (STL_CRef, (CLASS, (CINSDFeatureSet))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("sequence", m_Sequence)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_STD_MEMBER("contig", m_Contig)->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    ADD_NAMED_MEMBER("alt-seq", m_Alt_seq, STL_list, (STL_CRef, (CLASS, (CINSDAltSeqData))))->SetOptional()->SetSetFlag(MEMBER_PTR(m_set_State[0]));
    info->RandomOrder();
}
END_CLASS_INFO

// constructor
CINSDSeq_Base::CINSDSeq_Base(void)
    : m_Length(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
}

// destructor
CINSDSeq_Base::~CINSDSeq_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

