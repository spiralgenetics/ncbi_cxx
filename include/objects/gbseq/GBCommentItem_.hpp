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

/// @file GBCommentItem_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'gbseq.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GBSEQ_GBCOMMENTITEM_BASE_HPP
#define OBJECTS_GBSEQ_GBCOMMENTITEM_BASE_HPP

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
class NCBI_GBSEQ_EXPORT CGBCommentItem_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGBCommentItem_Base(void);
    // destructor
    virtual ~CGBCommentItem_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TValue;
    typedef string TUrl;

    // getters
    // setters

    /// optional
    /// typedef string TValue
    ///  Check whether the Value data member has been assigned a value.
    bool IsSetValue(void) const;
    /// Check whether it is safe or not to call GetValue method.
    bool CanGetValue(void) const;
    void ResetValue(void);
    const TValue& GetValue(void) const;
    void SetValue(const TValue& value);
    TValue& SetValue(void);

    /// optional
    /// typedef string TUrl
    ///  Check whether the Url data member has been assigned a value.
    bool IsSetUrl(void) const;
    /// Check whether it is safe or not to call GetUrl method.
    bool CanGetUrl(void) const;
    void ResetUrl(void);
    const TUrl& GetUrl(void) const;
    void SetUrl(const TUrl& value);
    TUrl& SetUrl(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGBCommentItem_Base(const CGBCommentItem_Base&);
    CGBCommentItem_Base& operator=(const CGBCommentItem_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Value;
    string m_Url;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGBCommentItem_Base::IsSetValue(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGBCommentItem_Base::CanGetValue(void) const
{
    return IsSetValue();
}

inline
const CGBCommentItem_Base::TValue& CGBCommentItem_Base::GetValue(void) const
{
    if (!CanGetValue()) {
        ThrowUnassigned(0);
    }
    return m_Value;
}

inline
void CGBCommentItem_Base::SetValue(const CGBCommentItem_Base::TValue& value)
{
    m_Value = value;
    m_set_State[0] |= 0x3;
}

inline
CGBCommentItem_Base::TValue& CGBCommentItem_Base::SetValue(void)
{
#ifdef _DEBUG
    if (!IsSetValue()) {
        m_Value = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Value;
}

inline
bool CGBCommentItem_Base::IsSetUrl(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGBCommentItem_Base::CanGetUrl(void) const
{
    return IsSetUrl();
}

inline
const CGBCommentItem_Base::TUrl& CGBCommentItem_Base::GetUrl(void) const
{
    if (!CanGetUrl()) {
        ThrowUnassigned(1);
    }
    return m_Url;
}

inline
void CGBCommentItem_Base::SetUrl(const CGBCommentItem_Base::TUrl& value)
{
    m_Url = value;
    m_set_State[0] |= 0xc;
}

inline
CGBCommentItem_Base::TUrl& CGBCommentItem_Base::SetUrl(void)
{
#ifdef _DEBUG
    if (!IsSetUrl()) {
        m_Url = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Url;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GBSEQ_GBCOMMENTITEM_BASE_HPP
