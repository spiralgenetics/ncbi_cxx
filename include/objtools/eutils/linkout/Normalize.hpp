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

/// @file Normalize.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'linkout.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: Normalize_.hpp


#ifndef linkout__OBJTOOLS_EUTILS_LINKOUT_NORMALIZE_HPP
#define linkout__OBJTOOLS_EUTILS_LINKOUT_NORMALIZE_HPP


// generated includes
#include <objtools/eutils/linkout/Normalize_.hpp>

// generated classes

BEGIN_linkout_SCOPE // namespace linkout::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CNormalize : public CNormalize_Base
{
    typedef CNormalize_Base Tparent;
public:
    // constructor
    CNormalize(void);
    // destructor
    ~CNormalize(void);

private:
    // Prohibit copy constructor and assignment operator
    CNormalize(const CNormalize& value);
    CNormalize& operator=(const CNormalize& value);

};

/////////////////// CNormalize inline methods

// constructor
inline
CNormalize::CNormalize(void)
{
}


/////////////////// end of CNormalize inline methods


END_linkout_SCOPE // namespace linkout::


#endif // linkout__OBJTOOLS_EUTILS_LINKOUT_NORMALIZE_HPP
/* Original file checksum: lines: 82, chars: 2432, CRC32: 9263b84f */
