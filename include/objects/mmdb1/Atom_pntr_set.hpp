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

/// @file Atom_pntr_set.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'mmdb1.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Atom_pntr_set_.hpp


#ifndef OBJECTS_MMDB1_ATOM_PNTR_SET_HPP
#define OBJECTS_MMDB1_ATOM_PNTR_SET_HPP


// generated includes
#include <objects/mmdb1/Atom_pntr_set_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_MMDB1_EXPORT CAtom_pntr_set : public CAtom_pntr_set_Base
{
    typedef CAtom_pntr_set_Base Tparent;
public:
    // constructor
    CAtom_pntr_set(void);
    // destructor
    ~CAtom_pntr_set(void);

private:
    // Prohibit copy constructor and assignment operator
    CAtom_pntr_set(const CAtom_pntr_set& value);
    CAtom_pntr_set& operator=(const CAtom_pntr_set& value);

};

/////////////////// CAtom_pntr_set inline methods

// constructor
inline
CAtom_pntr_set::CAtom_pntr_set(void)
{
}


/////////////////// end of CAtom_pntr_set inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB1_ATOM_PNTR_SET_HPP
/* Original file checksum: lines: 86, chars: 2480, CRC32: 4a47d885 */
