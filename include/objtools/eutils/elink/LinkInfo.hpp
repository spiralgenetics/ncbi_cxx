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

/// @file LinkInfo.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'elink.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: LinkInfo_.hpp


#ifndef elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_HPP
#define elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_HPP


// generated includes
#include <objtools/eutils/elink/LinkInfo_.hpp>

// generated classes

BEGIN_elink_SCOPE // namespace elink::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CLinkInfo : public CLinkInfo_Base
{
    typedef CLinkInfo_Base Tparent;
public:
    // constructor
    CLinkInfo(void);
    // destructor
    ~CLinkInfo(void);

private:
    // Prohibit copy constructor and assignment operator
    CLinkInfo(const CLinkInfo& value);
    CLinkInfo& operator=(const CLinkInfo& value);

};

/////////////////// CLinkInfo inline methods

// constructor
inline
CLinkInfo::CLinkInfo(void)
{
}


/////////////////// end of CLinkInfo inline methods


END_elink_SCOPE // namespace elink::


#endif // elink__OBJTOOLS_EUTILS_ELINK_LINKINFO_HPP
/* Original file checksum: lines: 82, chars: 2389, CRC32: 3c3e5e54 */
