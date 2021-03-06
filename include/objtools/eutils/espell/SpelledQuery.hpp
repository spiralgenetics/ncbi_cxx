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

/// @file SpelledQuery.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'espell.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: SpelledQuery_.hpp


#ifndef espell__OBJTOOLS_EUTILS_ESPELL_SPELLEDQUERY_HPP
#define espell__OBJTOOLS_EUTILS_ESPELL_SPELLEDQUERY_HPP


// generated includes
#include <objtools/eutils/espell/SpelledQuery_.hpp>

// generated classes

BEGIN_espell_SCOPE // namespace espell::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CSpelledQuery : public CSpelledQuery_Base
{
    typedef CSpelledQuery_Base Tparent;
public:
    // constructor
    CSpelledQuery(void);
    // destructor
    ~CSpelledQuery(void);

private:
    // Prohibit copy constructor and assignment operator
    CSpelledQuery(const CSpelledQuery& value);
    CSpelledQuery& operator=(const CSpelledQuery& value);

};

/////////////////// CSpelledQuery inline methods

// constructor
inline
CSpelledQuery::CSpelledQuery(void)
{
}


/////////////////// end of CSpelledQuery inline methods


END_espell_SCOPE // namespace espell::


#endif // espell__OBJTOOLS_EUTILS_ESPELL_SPELLEDQUERY_HPP
/* Original file checksum: lines: 82, chars: 2477, CRC32: 56e390bf */
