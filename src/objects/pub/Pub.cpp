/* $Id: Pub.cpp 400351 2013-05-20 21:01:10Z rafanovi $
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
 * Author:  .......
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using specifications from the ASN data definition file
 *   'pub.asn'.
 */

#include <ncbi_pch.hpp>

#include <objects/pub/Pub.hpp>
#include <objects/pub/Pub_equiv.hpp>

#include <objects/biblio/Author.hpp>
#include <objects/biblio/Auth_list.hpp>
#include <objects/biblio/PubMedId.hpp>
#include <objects/biblio/Cit_art.hpp>
#include <objects/biblio/Cit_jour.hpp>
#include <objects/biblio/Cit_book.hpp>
#include <objects/biblio/Cit_proc.hpp>
#include <objects/biblio/Cit_let.hpp>
#include <objects/biblio/Cit_sub.hpp>
#include <objects/biblio/Cit_pat.hpp>
#include <objects/biblio/Id_pat.hpp>
#include <objects/biblio/Cit_gen.hpp>
#include <objects/medline/Medline_entry.hpp>

#include <objects/pub/pub_macros.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

// destructor
CPub::~CPub(void)
{
}


// Appends a label to "label"
bool CPub::GetLabel(string*        label,
                    ELabelType     type,
                    TLabelFlags    flags,
                    ELabelVersion  version) const
{
    static const char* s_PubTypes[14] = {
        "Unknown",
        "Generic",
        "Submit",
        "Medline",
        "MUID",
        "Article",
        "Journal",
        "Book",
        "Proceedings",
        "Patent",
        "PatID",
        "Manuscript",
        "Equiv",
        "PMID" };

    // Check that label exists
    if (!label) {
        return false;
    }

    // Get the index into the s_PubTypes array corresponding to pub type
    int idx = static_cast<int>(Which());
    idx = idx >= 0 && idx < 14 ? idx : 0;

    if (type == eType) {
        // Append pub type to label and return
        *label += s_PubTypes[idx];
        return true;
    }

    if (type == eBoth) {
        // Append pub type to label
        *label += string(s_PubTypes[idx]) + ": ";
    }

    switch (Which()) {
    case e_Muid:
        *label += "NLM" + NStr::IntToString(GetMuid());
        return true;
    case e_Pmid:
        *label += "PM" + NStr::IntToString(GetPmid().Get());
        return true;
    case e_Equiv:
        return GetEquiv().GetLabel(label, flags, version);
    case e_Medline:
        return GetMedline().GetLabel(label, flags, version);
    case e_Article:
        return GetArticle().GetLabel(label, flags, version);
    case e_Journal:
        return GetJournal().GetLabel(label, flags, version);
    case e_Book:
        return GetBook().GetLabel(label, flags, version);
    case e_Proc:
        return GetProc().GetLabel(label, flags, version);
    case e_Man:
        return GetMan().GetLabel(label, flags, version);
    case e_Sub:
        return GetSub().GetLabel(label, flags, version);
    case e_Patent:
        return GetPatent().GetLabel(label, flags, version);
    case e_Pat_id:
        return GetPat_id().GetLabel(label, flags, version);
    case e_Gen:
        return GetGen().GetLabel(label, flags, version);
    default:
        return false;
    }
}


bool CPub::IsSetAuthors(void) const
{
    switch (Which()) {
    case CPub::e_Gen :
        return (GetGen().IsSetAuthors());
    case CPub::e_Sub :
        return (GetSub().IsSetAuthors());
    case CPub::e_Article :
        return (GetArticle().IsSetAuthors());
    case CPub::e_Book :
        return (GetBook().IsSetAuthors());
    case CPub::e_Proc :
        return (GetProc().IsSetBook() && GetProc().GetBook().IsSetAuthors());
    case CPub::e_Patent :
        return (GetPatent().IsSetAuthors());
    case CPub::e_Man :
        return (GetMan().IsSetCit() && GetMan().GetCit().IsSetAuthors());
    default :
      break;
  }
  
  return false;
}

const CAuth_list& CPub::GetAuthors (void) const
{
  switch (Which()) {
    case CPub::e_Gen :
        return (GetGen().GetAuthors());
    case CPub::e_Sub :
        return (GetSub().GetAuthors());
    case CPub::e_Article :
        return (GetArticle().GetAuthors());
    case CPub::e_Book :
        return (GetBook().GetAuthors());
    case CPub::e_Proc :
        return (GetProc().GetBook().GetAuthors());
    case CPub::e_Patent :
        return (GetPatent().GetAuthors());
    case CPub::e_Man :
        return (GetMan().GetCit().GetAuthors());
    default :
        NCBI_THROW(CSerialException, eNotImplemented,
                   "CPub::GetAuthors: unsupported entry type "
                   + SelectionName(Which()));
  }
}

void CPub::GetTitles(
    TOneTitleRefVec & out_title,
    size_t iMaxToGet ) const
{
    // this "if" lets us assume below this point that 
    // we have room for at least one 
    if( iMaxToGet <= 0 ) {
        return;
    }

    switch( Which() ) {
    case CPub::e_not_set:
    case CPub::e_Medline:
    case CPub::e_Pmid:
    case CPub::e_Pat_id:
        // these types don't have titles, so nothing to do
        break;
    case CPub::e_Gen:
        if( GetGen().IsSetTitle() ) {
            out_title.push_back( 
                xs_GetTitleFromPlainString(
                GetGen().GetTitle()) );
        }
        break;
    case CPub::e_Sub:
        if( GetSub().IsSetDescr() ) {
            out_title.push_back( 
                xs_GetTitleFromPlainString(
                GetSub().GetDescr()) );
        }
        break;
    case CPub::e_Article:
        if( GetArticle().IsSetTitle() && GetArticle().GetTitle().IsSet() ) {
            xs_AppendTitles( out_title, iMaxToGet, GetArticle().GetTitle() );
        }
        break;
    case CPub::e_Journal:
        if( GetJournal().IsSetTitle() ) {
            xs_AppendTitles( out_title, iMaxToGet, GetJournal().GetTitle() );
        }
        break;
    case CPub::e_Book:
        if( GetBook().IsSetTitle() ) {
            xs_AppendTitles( out_title, iMaxToGet, GetBook().GetTitle() );
        }
        break;
    case CPub::e_Proc:
        // what to do here?  It has a book and meeting
        // It's not entirely clear if this is the best course of action
        if( FIELD_CHAIN_OF_2_IS_SET(GetProc(), Book, Title) ) {
            xs_AppendTitles( out_title, iMaxToGet, 
                GetProc().GetBook().GetTitle() );
        }
        break;
    case CPub::e_Patent:
        if( GetPatent().IsSetTitle() ) {
            out_title.push_back( 
                xs_GetTitleFromPlainString(
                GetPatent().GetTitle()) );
        }
        break;
    case CPub::e_Man:
        if( FIELD_CHAIN_OF_2_IS_SET(GetMan(), Cit, Title) ) {
            xs_AppendTitles( out_title, iMaxToGet, 
                GetMan().GetCit().GetTitle() );
        }
        break;
    case CPub::e_Equiv:
        {
            size_t iMaxTitleSizeAllowed = ( out_title.size() + iMaxToGet );
            if( iMaxTitleSizeAllowed < out_title.size() ) {
                // integer overflowed
                iMaxTitleSizeAllowed = 
                    std::numeric_limits<std::size_t>::max();
            }
            FOR_EACH_PUB_ON_PUBEQUIV(pub_it, GetEquiv()) {
                if( out_title.size() >= iMaxTitleSizeAllowed ) {
                    break;
                }

                // dig down recursively
                (*pub_it)->GetTitles(out_title, 
                    (iMaxTitleSizeAllowed - out_title.size()) );
            }
        }
        break;
    default:
        NCBI_THROW(CException, eUnknown, "unhandled pub type");
    }
}

// static
CPub::TOneTitleRef 
CPub::xs_GetTitleFromPlainString(const string & sTitle)
{
    CRef<CTitle::C_E> pRval( new CTitle::C_E );
    pRval->SetName( sTitle );
    return pRval;
}

// static 
void CPub::xs_AppendTitles( TOneTitleRefVec & out_title,
        size_t iMaxToGet, 
        const CTitle & in_title )
{
    if( iMaxToGet <= 0 ) {
        return;
    }

    if( ! in_title.IsSet() ) {
        return;
    }

    size_t iNumCopiedSoFar = 0;
    CTitle::Tdata::const_iterator src_it = in_title.Get().begin();
    CTitle::Tdata::const_iterator src_it_end = in_title.Get().end();
    for( ; src_it != src_it_end && iNumCopiedSoFar < iMaxToGet; 
        ++src_it, ++iNumCopiedSoFar) 
    {
        out_title.push_back( *src_it );
    }
}

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

/* Original file checksum: lines: 61, chars: 1862, CRC32: d27bbf43 */
