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

/// @file PC_StereoTetrahedral.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'pcsubstance.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: PC_StereoTetrahedral_.hpp


#ifndef OBJECTS_PCSUBSTANCE_PC_STEREOTETRAHEDRAL_HPP
#define OBJECTS_PCSUBSTANCE_PC_STEREOTETRAHEDRAL_HPP


// generated includes
#include <objects/pcsubstance/PC_StereoTetrahedral_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_PCSUBSTANCE_EXPORT CPC_StereoTetrahedral : public CPC_StereoTetrahedral_Base
{
    typedef CPC_StereoTetrahedral_Base Tparent;
public:
    // constructor
    CPC_StereoTetrahedral(void);
    // destructor
    ~CPC_StereoTetrahedral(void);

private:
    // Prohibit copy constructor and assignment operator
    CPC_StereoTetrahedral(const CPC_StereoTetrahedral& value);
    CPC_StereoTetrahedral& operator=(const CPC_StereoTetrahedral& value);

};

/////////////////// CPC_StereoTetrahedral inline methods

// constructor
inline
CPC_StereoTetrahedral::CPC_StereoTetrahedral(void)
{
}


/////////////////// end of CPC_StereoTetrahedral inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCSUBSTANCE_PC_STEREOTETRAHEDRAL_HPP
/* Original file checksum: lines: 86, chars: 2649, CRC32: fb88ea40 */