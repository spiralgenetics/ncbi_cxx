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
 *   'ncbimime.asn'.
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
#include <objects/ncbimime/Ncbi_mime_asn1.hpp>
#include <objects/ncbimime/Biostruc_align.hpp>
#include <objects/ncbimime/Biostruc_align_seq.hpp>
#include <objects/ncbimime/Biostruc_seq.hpp>
#include <objects/ncbimime/Biostruc_seqs.hpp>
#include <objects/ncbimime/Biostruc_seqs_aligns_cdd.hpp>
#include <objects/ncbimime/Entrez_general.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CNcbi_mime_asn1_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CNcbi_mime_asn1_Base::ResetSelection(void)
{
    switch ( m_choice ) {
    case e_Entrez:
    case e_Alignstruc:
    case e_Alignseq:
    case e_Strucseq:
    case e_Strucseqs:
    case e_General:
        m_object->RemoveReference();
        break;
    default:
        break;
    }
    m_choice = e_not_set;
}

void CNcbi_mime_asn1_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    switch ( index ) {
    case e_Entrez:
        (m_object = new(pool) ncbi::objects::CEntrez_general())->AddReference();
        break;
    case e_Alignstruc:
        (m_object = new(pool) ncbi::objects::CBiostruc_align())->AddReference();
        break;
    case e_Alignseq:
        (m_object = new(pool) ncbi::objects::CBiostruc_align_seq())->AddReference();
        break;
    case e_Strucseq:
        (m_object = new(pool) ncbi::objects::CBiostruc_seq())->AddReference();
        break;
    case e_Strucseqs:
        (m_object = new(pool) ncbi::objects::CBiostruc_seqs())->AddReference();
        break;
    case e_General:
        (m_object = new(pool) ncbi::objects::CBiostruc_seqs_aligns_cdd())->AddReference();
        break;
    default:
        break;
    }
    m_choice = index;
}

const char* const CNcbi_mime_asn1_Base::sm_SelectionNames[] = {
    "not set",
    "entrez",
    "alignstruc",
    "alignseq",
    "strucseq",
    "strucseqs",
    "general"
};

NCBI_NS_STD::string CNcbi_mime_asn1_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CNcbi_mime_asn1_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

const CNcbi_mime_asn1_Base::TEntrez& CNcbi_mime_asn1_Base::GetEntrez(void) const
{
    CheckSelected(e_Entrez);
    return *static_cast<const TEntrez*>(m_object);
}

CNcbi_mime_asn1_Base::TEntrez& CNcbi_mime_asn1_Base::SetEntrez(void)
{
    Select(e_Entrez, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TEntrez*>(m_object);
}

void CNcbi_mime_asn1_Base::SetEntrez(CNcbi_mime_asn1_Base::TEntrez& value)
{
    TEntrez* ptr = &value;
    if ( m_choice != e_Entrez || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Entrez;
    }
}

const CNcbi_mime_asn1_Base::TAlignstruc& CNcbi_mime_asn1_Base::GetAlignstruc(void) const
{
    CheckSelected(e_Alignstruc);
    return *static_cast<const TAlignstruc*>(m_object);
}

CNcbi_mime_asn1_Base::TAlignstruc& CNcbi_mime_asn1_Base::SetAlignstruc(void)
{
    Select(e_Alignstruc, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAlignstruc*>(m_object);
}

void CNcbi_mime_asn1_Base::SetAlignstruc(CNcbi_mime_asn1_Base::TAlignstruc& value)
{
    TAlignstruc* ptr = &value;
    if ( m_choice != e_Alignstruc || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Alignstruc;
    }
}

const CNcbi_mime_asn1_Base::TAlignseq& CNcbi_mime_asn1_Base::GetAlignseq(void) const
{
    CheckSelected(e_Alignseq);
    return *static_cast<const TAlignseq*>(m_object);
}

CNcbi_mime_asn1_Base::TAlignseq& CNcbi_mime_asn1_Base::SetAlignseq(void)
{
    Select(e_Alignseq, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TAlignseq*>(m_object);
}

void CNcbi_mime_asn1_Base::SetAlignseq(CNcbi_mime_asn1_Base::TAlignseq& value)
{
    TAlignseq* ptr = &value;
    if ( m_choice != e_Alignseq || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Alignseq;
    }
}

const CNcbi_mime_asn1_Base::TStrucseq& CNcbi_mime_asn1_Base::GetStrucseq(void) const
{
    CheckSelected(e_Strucseq);
    return *static_cast<const TStrucseq*>(m_object);
}

CNcbi_mime_asn1_Base::TStrucseq& CNcbi_mime_asn1_Base::SetStrucseq(void)
{
    Select(e_Strucseq, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TStrucseq*>(m_object);
}

void CNcbi_mime_asn1_Base::SetStrucseq(CNcbi_mime_asn1_Base::TStrucseq& value)
{
    TStrucseq* ptr = &value;
    if ( m_choice != e_Strucseq || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Strucseq;
    }
}

const CNcbi_mime_asn1_Base::TStrucseqs& CNcbi_mime_asn1_Base::GetStrucseqs(void) const
{
    CheckSelected(e_Strucseqs);
    return *static_cast<const TStrucseqs*>(m_object);
}

CNcbi_mime_asn1_Base::TStrucseqs& CNcbi_mime_asn1_Base::SetStrucseqs(void)
{
    Select(e_Strucseqs, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TStrucseqs*>(m_object);
}

void CNcbi_mime_asn1_Base::SetStrucseqs(CNcbi_mime_asn1_Base::TStrucseqs& value)
{
    TStrucseqs* ptr = &value;
    if ( m_choice != e_Strucseqs || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_Strucseqs;
    }
}

const CNcbi_mime_asn1_Base::TGeneral& CNcbi_mime_asn1_Base::GetGeneral(void) const
{
    CheckSelected(e_General);
    return *static_cast<const TGeneral*>(m_object);
}

CNcbi_mime_asn1_Base::TGeneral& CNcbi_mime_asn1_Base::SetGeneral(void)
{
    Select(e_General, NCBI_NS_NCBI::eDoNotResetVariant);
    return *static_cast<TGeneral*>(m_object);
}

void CNcbi_mime_asn1_Base::SetGeneral(CNcbi_mime_asn1_Base::TGeneral& value)
{
    TGeneral* ptr = &value;
    if ( m_choice != e_General || m_object != ptr ) {
        ResetSelection();
        (m_object = ptr)->AddReference();
        m_choice = e_General;
    }
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Ncbi-mime-asn1", CNcbi_mime_asn1)
{
    SET_CHOICE_MODULE("NCBI-Mime");
    ADD_NAMED_REF_CHOICE_VARIANT("entrez", m_object, CEntrez_general);
    ADD_NAMED_REF_CHOICE_VARIANT("alignstruc", m_object, CBiostruc_align);
    ADD_NAMED_REF_CHOICE_VARIANT("alignseq", m_object, CBiostruc_align_seq);
    ADD_NAMED_REF_CHOICE_VARIANT("strucseq", m_object, CBiostruc_seq);
    ADD_NAMED_REF_CHOICE_VARIANT("strucseqs", m_object, CBiostruc_seqs);
    ADD_NAMED_REF_CHOICE_VARIANT("general", m_object, CBiostruc_seqs_aligns_cdd);
}
END_CHOICE_INFO

// constructor
CNcbi_mime_asn1_Base::CNcbi_mime_asn1_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CNcbi_mime_asn1_Base::~CNcbi_mime_asn1_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
