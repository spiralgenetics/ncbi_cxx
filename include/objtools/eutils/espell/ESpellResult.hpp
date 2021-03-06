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

/// @file ESpellResult.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'espell.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: ESpellResult_.hpp


#ifndef espell__OBJTOOLS_EUTILS_ESPELL_ESPELLRESULT_HPP
#define espell__OBJTOOLS_EUTILS_ESPELL_ESPELLRESULT_HPP


// generated includes
#include <objtools/eutils/espell/ESpellResult_.hpp>

// generated classes

BEGIN_espell_SCOPE // namespace espell::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CESpellResult : public CESpellResult_Base
{
    typedef CESpellResult_Base Tparent;
public:
    // constructor
    CESpellResult(void);
    // destructor
    ~CESpellResult(void);

private:
    // Prohibit copy constructor and assignment operator
    CESpellResult(const CESpellResult& value);
    CESpellResult& operator=(const CESpellResult& value);

};

/////////////////// CESpellResult inline methods

// constructor
inline
CESpellResult::CESpellResult(void)
{
}


/////////////////// end of CESpellResult inline methods


END_espell_SCOPE // namespace espell::


#endif // espell__OBJTOOLS_EUTILS_ESPELL_ESPELLRESULT_HPP
/* Original file checksum: lines: 82, chars: 2477, CRC32: 38d90918 */
