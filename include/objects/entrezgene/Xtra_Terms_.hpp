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

/// @file Xtra_Terms_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrezgene.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZGENE_XTRA_TERMS_BASE_HPP
#define OBJECTS_ENTREZGENE_XTRA_TERMS_BASE_HPP

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
/// see note 2
class NCBI_ENTREZGENE_EXPORT CXtra_Terms_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CXtra_Terms_Base(void);
    // destructor
    virtual ~CXtra_Terms_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TTag;
    typedef string TValue;

    // getters
    // setters

    /// mandatory
    /// typedef string TTag
    ///  Check whether the Tag data member has been assigned a value.
    bool IsSetTag(void) const;
    /// Check whether it is safe or not to call GetTag method.
    bool CanGetTag(void) const;
    void ResetTag(void);
    const TTag& GetTag(void) const;
    void SetTag(const TTag& value);
    TTag& SetTag(void);

    /// mandatory
    /// typedef string TValue
    ///  Check whether the Value data member has been assigned a value.
    bool IsSetValue(void) const;
    /// Check whether it is safe or not to call GetValue method.
    bool CanGetValue(void) const;
    void ResetValue(void);
    const TValue& GetValue(void) const;
    void SetValue(const TValue& value);
    TValue& SetValue(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CXtra_Terms_Base(const CXtra_Terms_Base&);
    CXtra_Terms_Base& operator=(const CXtra_Terms_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Tag;
    string m_Value;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CXtra_Terms_Base::IsSetTag(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CXtra_Terms_Base::CanGetTag(void) const
{
    return IsSetTag();
}

inline
const CXtra_Terms_Base::TTag& CXtra_Terms_Base::GetTag(void) const
{
    if (!CanGetTag()) {
        ThrowUnassigned(0);
    }
    return m_Tag;
}

inline
void CXtra_Terms_Base::SetTag(const CXtra_Terms_Base::TTag& value)
{
    m_Tag = value;
    m_set_State[0] |= 0x3;
}

inline
CXtra_Terms_Base::TTag& CXtra_Terms_Base::SetTag(void)
{
#ifdef _DEBUG
    if (!IsSetTag()) {
        m_Tag = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Tag;
}

inline
bool CXtra_Terms_Base::IsSetValue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CXtra_Terms_Base::CanGetValue(void) const
{
    return IsSetValue();
}

inline
const CXtra_Terms_Base::TValue& CXtra_Terms_Base::GetValue(void) const
{
    if (!CanGetValue()) {
        ThrowUnassigned(1);
    }
    return m_Value;
}

inline
void CXtra_Terms_Base::SetValue(const CXtra_Terms_Base::TValue& value)
{
    m_Value = value;
    m_set_State[0] |= 0xc;
}

inline
CXtra_Terms_Base::TValue& CXtra_Terms_Base::SetValue(void)
{
#ifdef _DEBUG
    if (!IsSetValue()) {
        m_Value = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Value;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZGENE_XTRA_TERMS_BASE_HPP
