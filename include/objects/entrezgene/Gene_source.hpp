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
 */

/// @file Gene_source.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'entrezgene.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Gene_source_.hpp


#ifndef OBJECTS_ENTREZGENE_GENE_SOURCE_HPP
#define OBJECTS_ENTREZGENE_GENE_SOURCE_HPP


// generated includes
#include <objects/entrezgene/Gene_source_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_ENTREZGENE_EXPORT CGene_source : public CGene_source_Base
{
    typedef CGene_source_Base Tparent;
public:
    // constructor
    CGene_source(void);
    // destructor
    ~CGene_source(void);

private:
    // Prohibit copy constructor and assignment operator
    CGene_source(const CGene_source& value);
    CGene_source& operator=(const CGene_source& value);

};

/////////////////// CGene_source inline methods

// constructor
inline
CGene_source::CGene_source(void)
{
}


/////////////////// end of CGene_source inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZGENE_GENE_SOURCE_HPP
/* Original file checksum: lines: 86, chars: 2472, CRC32: fbf602b7 */