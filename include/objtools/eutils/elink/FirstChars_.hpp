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

/// @file FirstChars_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'elink.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef elink__OBJTOOLS_EUTILS_ELINK_FIRSTCHARS_BASE_HPP
#define elink__OBJTOOLS_EUTILS_ELINK_FIRSTCHARS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

#ifndef BEGIN_elink_SCOPE
#  define BEGIN_elink_SCOPE BEGIN_SCOPE(elink)
#  define END_elink_SCOPE END_SCOPE(elink)
#endif
BEGIN_elink_SCOPE // namespace elink::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_EUTILS_EXPORT CFirstChars_Base : public NCBI_NS_NCBI::CSerialObject
{
    typedef NCBI_NS_NCBI::CSerialObject Tparent;
public:
    // constructor
    CFirstChars_Base(void);
    // destructor
    virtual ~CFirstChars_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef NCBI_NS_STD::list< NCBI_NS_STD::string > TFirstChar;

    // getters
    // setters

    /// optional
    /// typedef NCBI_NS_STD::list< NCBI_NS_STD::string > TFirstChar
    ///  Check whether the FirstChar data member has been assigned a value.
    bool IsSetFirstChar(void) const;
    /// Check whether it is safe or not to call GetFirstChar method.
    bool CanGetFirstChar(void) const;
    void ResetFirstChar(void);
    const TFirstChar& GetFirstChar(void) const;
    TFirstChar& SetFirstChar(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CFirstChars_Base(const CFirstChars_Base&);
    CFirstChars_Base& operator=(const CFirstChars_Base&);

    // data
    Uint4 m_set_State[1];
    NCBI_NS_STD::list< NCBI_NS_STD::string > m_FirstChar;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CFirstChars_Base::IsSetFirstChar(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CFirstChars_Base::CanGetFirstChar(void) const
{
    return true;
}

inline
const CFirstChars_Base::TFirstChar& CFirstChars_Base::GetFirstChar(void) const
{
    return m_FirstChar;
}

inline
CFirstChars_Base::TFirstChar& CFirstChars_Base::SetFirstChar(void)
{
    m_set_State[0] |= 0x1;
    return m_FirstChar;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_elink_SCOPE // namespace elink::


#endif // elink__OBJTOOLS_EUTILS_ELINK_FIRSTCHARS_BASE_HPP
