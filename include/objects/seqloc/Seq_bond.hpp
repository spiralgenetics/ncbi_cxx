/* $Id: Seq_bond.hpp 194119 2010-06-10 15:37:37Z vasilche $
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
 */

/// @file Seq_bond.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqloc.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Seq_bond_.hpp


#ifndef OBJECTS_SEQLOC_SEQ_BOND_HPP
#define OBJECTS_SEQLOC_SEQ_BOND_HPP


// generated includes
#include <objects/seqloc/Seq_bond_.hpp>

#include <objects/seqloc/Na_strand.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQLOC_EXPORT CSeq_bond : public CSeq_bond_Base
{
    typedef CSeq_bond_Base Tparent;
public:
    // constructor
    CSeq_bond(void);
    // destructor
    ~CSeq_bond(void);

    TSeqPos GetStart(ESeqLocExtremes ext) const;
    TSeqPos GetStop (ESeqLocExtremes ext) const;

    bool IsSetStrand(EIsSetStrand flag = eIsSetStrand_Any) const;
    ENa_strand GetStrand(void) const;

private:
    // Prohibit copy constructor and assignment operator
    CSeq_bond(const CSeq_bond& value);
    CSeq_bond& operator=(const CSeq_bond& value);

};

/////////////////// CSeq_bond inline methods

// constructor
inline
CSeq_bond::CSeq_bond(void)
{
}


/////////////////// end of CSeq_bond inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_SEQLOC_SEQ_BOND_HPP
/* Original file checksum: lines: 94, chars: 2558, CRC32: 456dc796 */
