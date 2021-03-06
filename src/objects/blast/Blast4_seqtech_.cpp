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
#include <objects/blast/Blast4_seqtech.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("Blast4-seqtech", EBlast4_seqtech, true)
{
    SET_ENUM_MODULE("NCBI-Blast4");
    ADD_ENUM_VALUE("unknown", eBlast4_seqtech_unknown);
    ADD_ENUM_VALUE("standard", eBlast4_seqtech_standard);
    ADD_ENUM_VALUE("est", eBlast4_seqtech_est);
    ADD_ENUM_VALUE("sts", eBlast4_seqtech_sts);
    ADD_ENUM_VALUE("survey", eBlast4_seqtech_survey);
    ADD_ENUM_VALUE("genemap", eBlast4_seqtech_genemap);
    ADD_ENUM_VALUE("physmap", eBlast4_seqtech_physmap);
    ADD_ENUM_VALUE("derived", eBlast4_seqtech_derived);
    ADD_ENUM_VALUE("concept-trans", eBlast4_seqtech_concept_trans);
    ADD_ENUM_VALUE("seq-pept", eBlast4_seqtech_seq_pept);
    ADD_ENUM_VALUE("both", eBlast4_seqtech_both);
    ADD_ENUM_VALUE("seq-pept-overlap", eBlast4_seqtech_seq_pept_overlap);
    ADD_ENUM_VALUE("seq-pept-homol", eBlast4_seqtech_seq_pept_homol);
    ADD_ENUM_VALUE("concept-trans-a", eBlast4_seqtech_concept_trans_a);
    ADD_ENUM_VALUE("htgs-1", eBlast4_seqtech_htgs_1);
    ADD_ENUM_VALUE("htgs-2", eBlast4_seqtech_htgs_2);
    ADD_ENUM_VALUE("htgs-3", eBlast4_seqtech_htgs_3);
    ADD_ENUM_VALUE("fli-cdna", eBlast4_seqtech_fli_cdna);
    ADD_ENUM_VALUE("htgs-0", eBlast4_seqtech_htgs_0);
    ADD_ENUM_VALUE("htc", eBlast4_seqtech_htc);
    ADD_ENUM_VALUE("wgs", eBlast4_seqtech_wgs);
    ADD_ENUM_VALUE("other", eBlast4_seqtech_other);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

