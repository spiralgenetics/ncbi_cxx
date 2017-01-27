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
 *   'genome_collection.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

#include <ncbi_pch.hpp>
#include <objects/genomecoll/NCBI_GenomeCollection_module.hpp>
#include <objects/genomecoll/GC_Assemblies.hpp>
#include <objects/genomecoll/GC_Assembly.hpp>
#include <objects/genomecoll/GC_AssemblyDesc.hpp>
#include <objects/genomecoll/GC_AssemblySet.hpp>
#include <objects/genomecoll/GC_AssemblyUnit.hpp>
#include <objects/genomecoll/GC_DbTagAlias.hpp>
#include <objects/genomecoll/GC_External_Seqid.hpp>
#include <objects/genomecoll/GC_Genome.hpp>
#include <objects/genomecoll/GC_GenomicPart.hpp>
#include <objects/genomecoll/GC_Project.hpp>
#include <objects/genomecoll/GC_Query.hpp>
#include <objects/genomecoll/GC_Replicon.hpp>
#include <objects/genomecoll/GC_Scaf_stats.hpp>
#include <objects/genomecoll/GC_SeqIdAlias.hpp>
#include <objects/genomecoll/GC_Sequence.hpp>
#include <objects/genomecoll/GC_SequenceStats.hpp>
#include <objects/genomecoll/GC_TaggedSequences.hpp>
#include <objects/genomecoll/GC_TypedSeqId.hpp>


BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

void NCBI_GenomeCollection_RegisterModuleClasses(void)
{
    ncbi::objects::CGC_Assemblies::GetTypeInfo();
    ncbi::objects::CGC_Assembly::GetTypeInfo();
    ncbi::objects::CGC_AssemblyDesc::GetTypeInfo();
    ncbi::objects::CGC_AssemblySet::GetTypeInfo();
    ncbi::objects::CGC_AssemblyUnit::GetTypeInfo();
    ncbi::objects::CGC_DbTagAlias::GetTypeInfo();
    ncbi::objects::CGC_External_Seqid::GetTypeInfo();
    ncbi::objects::CGC_Genome::GetTypeInfo();
    ncbi::objects::CGC_GenomicPart::GetTypeInfo();
    ncbi::objects::CGC_Project::GetTypeInfo();
    ncbi::objects::CGC_Query::GetTypeInfo();
    ncbi::objects::CGC_Replicon::GetTypeInfo();
    ncbi::objects::CGC_Scaf_stats::GetTypeInfo();
    ncbi::objects::CGC_SeqIdAlias::GetTypeInfo();
    ncbi::objects::CGC_Sequence::GetTypeInfo();
    ncbi::objects::CGC_SequenceStats::GetTypeInfo();
    ncbi::objects::CGC_TaggedSequences::GetTypeInfo();
    ncbi::objects::CGC_TypedSeqId::GetTypeInfo();
}

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
