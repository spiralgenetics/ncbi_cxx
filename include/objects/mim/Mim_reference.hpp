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

/// @file Mim_reference.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'mim.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Mim_reference_.hpp


#ifndef OBJECTS_MIM_MIM_REFERENCE_HPP
#define OBJECTS_MIM_MIM_REFERENCE_HPP


// generated includes
#include <objects/mim/Mim_reference_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_MIM_EXPORT CMim_reference : public CMim_reference_Base
{
    typedef CMim_reference_Base Tparent;
public:
    // constructor
    CMim_reference(void);
    // destructor
    ~CMim_reference(void);

private:
    // Prohibit copy constructor and assignment operator
    CMim_reference(const CMim_reference& value);
    CMim_reference& operator=(const CMim_reference& value);

};

/////////////////// CMim_reference inline methods

// constructor
inline
CMim_reference::CMim_reference(void)
{
}


/////////////////// end of CMim_reference inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MIM_MIM_REFERENCE_HPP
/* Original file checksum: lines: 86, chars: 2468, CRC32: 1fdb6647 */
