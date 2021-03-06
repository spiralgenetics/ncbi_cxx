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

/// @file DescriptionText_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'soap_dataobj.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SAMPLE_APP_SOAP_DESCRIPTIONTEXT_BASE_HPP
#define SAMPLE_APP_SOAP_DESCRIPTIONTEXT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CDescriptionText_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CDescriptionText_Base(void);
    // destructor
    virtual ~CDescriptionText_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TText;

    // getters
    // setters

    /// mandatory
    /// typedef string TText
    ///  Check whether the Text data member has been assigned a value.
    bool IsSetText(void) const;
    /// Check whether it is safe or not to call GetText method.
    bool CanGetText(void) const;
    void ResetText(void);
    const TText& GetText(void) const;
    void SetText(const TText& value);
    TText& SetText(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDescriptionText_Base(const CDescriptionText_Base&);
    CDescriptionText_Base& operator=(const CDescriptionText_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Text;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDescriptionText_Base::IsSetText(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CDescriptionText_Base::CanGetText(void) const
{
    return IsSetText();
}

inline
const CDescriptionText_Base::TText& CDescriptionText_Base::GetText(void) const
{
    if (!CanGetText()) {
        ThrowUnassigned(0);
    }
    return m_Text;
}

inline
void CDescriptionText_Base::SetText(const CDescriptionText_Base::TText& value)
{
    m_Text = value;
    m_set_State[0] |= 0x3;
}

inline
CDescriptionText_Base::TText& CDescriptionText_Base::SetText(void)
{
#ifdef _DEBUG
    if (!IsSetText()) {
        m_Text = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Text;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SAMPLE_APP_SOAP_DESCRIPTIONTEXT_BASE_HPP
