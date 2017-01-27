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

/// @file TranslationStack.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'esearch.dtd'.
///
/// New methods or data members can be added to it if needed.
/// See also: TranslationStack_.hpp


#ifndef esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSTACK_HPP
#define esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSTACK_HPP


// generated includes
#include <objtools/eutils/esearch/TranslationStack_.hpp>

// generated classes

BEGIN_esearch_SCOPE // namespace esearch::

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CTranslationStack : public CTranslationStack_Base
{
    typedef CTranslationStack_Base Tparent;
public:
    // constructor
    CTranslationStack(void);
    // destructor
    ~CTranslationStack(void);

private:
    // Prohibit copy constructor and assignment operator
    CTranslationStack(const CTranslationStack& value);
    CTranslationStack& operator=(const CTranslationStack& value);

};

/////////////////// CTranslationStack inline methods

// constructor
inline
CTranslationStack::CTranslationStack(void)
{
}


/////////////////// end of CTranslationStack inline methods


END_esearch_SCOPE // namespace esearch::


#endif // esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSTACK_HPP
/* Original file checksum: lines: 82, chars: 2565, CRC32: 71173bb4 */