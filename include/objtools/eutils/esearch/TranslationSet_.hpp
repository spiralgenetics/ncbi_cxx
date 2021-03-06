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

/// @file TranslationSet_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'esearch.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSET_BASE_HPP
#define esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSET_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

#ifndef BEGIN_esearch_SCOPE
#  define BEGIN_esearch_SCOPE BEGIN_SCOPE(esearch)
#  define END_esearch_SCOPE END_SCOPE(esearch)
#endif
BEGIN_esearch_SCOPE // namespace esearch::


// forward declarations
class CTranslation;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CTranslationSet_Base : public NCBI_NS_NCBI::CSerialObject
{
    typedef NCBI_NS_NCBI::CSerialObject Tparent;
public:
    // constructor
    CTranslationSet_Base(void);
    // destructor
    virtual ~CTranslationSet_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef NCBI_NS_STD::list< NCBI_NS_NCBI::CRef< CTranslation > > TTranslation;

    // getters
    // setters

    /// optional
    /// typedef NCBI_NS_STD::list< NCBI_NS_NCBI::CRef< CTranslation > > TTranslation
    ///  Check whether the Translation data member has been assigned a value.
    bool IsSetTranslation(void) const;
    /// Check whether it is safe or not to call GetTranslation method.
    bool CanGetTranslation(void) const;
    void ResetTranslation(void);
    const TTranslation& GetTranslation(void) const;
    TTranslation& SetTranslation(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTranslationSet_Base(const CTranslationSet_Base&);
    CTranslationSet_Base& operator=(const CTranslationSet_Base&);

    // data
    Uint4 m_set_State[1];
    NCBI_NS_STD::list< NCBI_NS_NCBI::CRef< CTranslation > > m_Translation;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTranslationSet_Base::IsSetTranslation(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTranslationSet_Base::CanGetTranslation(void) const
{
    return true;
}

inline
const CTranslationSet_Base::TTranslation& CTranslationSet_Base::GetTranslation(void) const
{
    return m_Translation;
}

inline
CTranslationSet_Base::TTranslation& CTranslationSet_Base::SetTranslation(void)
{
    m_set_State[0] |= 0x1;
    return m_Translation;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_esearch_SCOPE // namespace esearch::


#endif // esearch__OBJTOOLS_EUTILS_ESEARCH_TRANSLATIONSET_BASE_HPP
