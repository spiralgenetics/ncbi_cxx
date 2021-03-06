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

/// @file Sparse_seg_ext.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Sparse_seg_ext_.hpp


#ifndef OBJECTS_SEQALIGN_SPARSE_SEG_EXT_HPP
#define OBJECTS_SEQALIGN_SPARSE_SEG_EXT_HPP


// generated includes
#include <objects/seqalign/Sparse_seg_ext_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQALIGN_EXPORT CSparse_seg_ext : public CSparse_seg_ext_Base
{
    typedef CSparse_seg_ext_Base Tparent;
public:
    // constructor
    CSparse_seg_ext(void);
    // destructor
    ~CSparse_seg_ext(void);

private:
    // Prohibit copy constructor and assignment operator
    CSparse_seg_ext(const CSparse_seg_ext& value);
    CSparse_seg_ext& operator=(const CSparse_seg_ext& value);

};

/////////////////// CSparse_seg_ext inline methods

// constructor
inline
CSparse_seg_ext::CSparse_seg_ext(void)
{
}


/////////////////// end of CSparse_seg_ext inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_SPARSE_SEG_EXT_HPP
/* Original file checksum: lines: 86, chars: 2517, CRC32: bfc46580 */
