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
 *   'seq.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

#include <ncbi_pch.hpp>
#include <objects/seq/NCBI_Sequence_module.hpp>
#include <objects/seq/Align_def.hpp>
#include <objects/seq/Annot_descr.hpp>
#include <objects/seq/Annot_id.hpp>
#include <objects/seq/Annotdesc.hpp>
#include <objects/seq/Bioseq.hpp>
#include <objects/seq/Delta_ext.hpp>
#include <objects/seq/Delta_seq.hpp>
#include <objects/seq/Linkage_evidence.hpp>
#include <objects/seq/Map_ext.hpp>
#include <objects/seq/MolInfo.hpp>
#include <objects/seq/Num_cont.hpp>
#include <objects/seq/Num_enum.hpp>
#include <objects/seq/Num_real.hpp>
#include <objects/seq/Num_ref.hpp>
#include <objects/seq/Numbering.hpp>
#include <objects/seq/Pubdesc.hpp>
#include <objects/seq/Seg_ext.hpp>
#include <objects/seq/Seq_annot.hpp>
#include <objects/seq/Seq_data.hpp>
#include <objects/seq/Seq_descr.hpp>
#include <objects/seq/Seq_ext.hpp>
#include <objects/seq/Seq_gap.hpp>
#include <objects/seq/Seq_hist.hpp>
#include <objects/seq/Seq_hist_rec.hpp>
#include <objects/seq/Seq_inst.hpp>
#include <objects/seq/Seq_literal.hpp>
#include <objects/seq/Seqdesc.hpp>
#include <objects/seq/Textannot_id.hpp>


BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

void NCBI_Sequence_RegisterModuleClasses(void)
{
    ncbi::objects::CAlign_def::GetTypeInfo();
    ncbi::objects::CAnnot_descr::GetTypeInfo();
    ncbi::objects::CAnnot_id::GetTypeInfo();
    ncbi::objects::CAnnotdesc::GetTypeInfo();
    ncbi::objects::CBioseq::GetTypeInfo();
    ncbi::objects::CDelta_ext::GetTypeInfo();
    ncbi::objects::CDelta_seq::GetTypeInfo();
    ncbi::objects::CLinkage_evidence::GetTypeInfo();
    ncbi::objects::CMap_ext::GetTypeInfo();
    ncbi::objects::CMolInfo::GetTypeInfo();
    ncbi::objects::CNum_cont::GetTypeInfo();
    ncbi::objects::CNum_enum::GetTypeInfo();
    ncbi::objects::CNum_real::GetTypeInfo();
    ncbi::objects::CNum_ref::GetTypeInfo();
    ncbi::objects::CNumbering::GetTypeInfo();
    ncbi::objects::CPubdesc::GetTypeInfo();
    ncbi::objects::CSeg_ext::GetTypeInfo();
    ncbi::objects::CSeq_annot::GetTypeInfo();
    ncbi::objects::CSeq_data::GetTypeInfo();
    ncbi::objects::CSeq_descr::GetTypeInfo();
    ncbi::objects::CSeq_ext::GetTypeInfo();
    ncbi::objects::CSeq_gap::GetTypeInfo();
    ncbi::objects::CSeq_hist::GetTypeInfo();
    ncbi::objects::CSeq_hist_rec::GetTypeInfo();
    ncbi::objects::CSeq_inst::GetTypeInfo();
    ncbi::objects::CSeq_literal::GetTypeInfo();
    ncbi::objects::CSeqdesc::GetTypeInfo();
    ncbi::objects::CTextannot_id::GetTypeInfo();
}

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

