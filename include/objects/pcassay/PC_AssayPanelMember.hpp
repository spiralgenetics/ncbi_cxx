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

/// @file PC_AssayPanelMember.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'pcassay.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: PC_AssayPanelMember_.hpp


#ifndef OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_HPP
#define OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_HPP


// generated includes
#include <objects/pcassay/PC_AssayPanelMember_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_PCASSAY_EXPORT CPC_AssayPanelMember : public CPC_AssayPanelMember_Base
{
    typedef CPC_AssayPanelMember_Base Tparent;
public:
    // constructor
    CPC_AssayPanelMember(void);
    // destructor
    ~CPC_AssayPanelMember(void);

private:
    // Prohibit copy constructor and assignment operator
    CPC_AssayPanelMember(const CPC_AssayPanelMember& value);
    CPC_AssayPanelMember& operator=(const CPC_AssayPanelMember& value);

};

/////////////////// CPC_AssayPanelMember inline methods

// constructor
inline
CPC_AssayPanelMember::CPC_AssayPanelMember(void)
{
}


/////////////////// end of CPC_AssayPanelMember inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCASSAY_PC_ASSAYPANELMEMBER_HPP
/* Original file checksum: lines: 86, chars: 2606, CRC32: 1ca2f5f3 */
