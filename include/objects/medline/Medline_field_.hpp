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

/// @file Medline_field_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'medline.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MEDLINE_MEDLINE_FIELD_BASE_HPP
#define OBJECTS_MEDLINE_MEDLINE_FIELD_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CDocRef;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_MEDLINE_EXPORT CMedline_field_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMedline_field_Base(void);
    // destructor
    virtual ~CMedline_field_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// Keyed type
    enum EType {
        eType_other   = 0,  ///< look in line code
        eType_comment = 1,  ///< comment line
        eType_erratum = 2  ///< retracted, corrected, etc
    };
    
    /// Access to EType's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EType)(void);
    
    // types
    typedef int TType;
    typedef string TStr;
    typedef list< CRef< CDocRef > > TIds;

    // getters
    // setters

    /// mandatory
    /// typedef int TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// the text
    /// mandatory
    /// typedef string TStr
    ///  Check whether the Str data member has been assigned a value.
    bool IsSetStr(void) const;
    /// Check whether it is safe or not to call GetStr method.
    bool CanGetStr(void) const;
    void ResetStr(void);
    const TStr& GetStr(void) const;
    void SetStr(const TStr& value);
    TStr& SetStr(void);

    /// pointers relevant to this text
    /// optional
    /// typedef list< CRef< CDocRef > > TIds
    ///  Check whether the Ids data member has been assigned a value.
    bool IsSetIds(void) const;
    /// Check whether it is safe or not to call GetIds method.
    bool CanGetIds(void) const;
    void ResetIds(void);
    const TIds& GetIds(void) const;
    TIds& SetIds(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMedline_field_Base(const CMedline_field_Base&);
    CMedline_field_Base& operator=(const CMedline_field_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Type;
    string m_Str;
    list< CRef< CDocRef > > m_Ids;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMedline_field_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMedline_field_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CMedline_field_Base::ResetType(void)
{
    m_Type = (EType)(0);
    m_set_State[0] &= ~0x3;
}

inline
CMedline_field_Base::TType CMedline_field_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(0);
    }
    return m_Type;
}

inline
void CMedline_field_Base::SetType(CMedline_field_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0x3;
}

inline
CMedline_field_Base::TType& CMedline_field_Base::SetType(void)
{
#ifdef _DEBUG
    if (!IsSetType()) {
        memset(&m_Type,UnassignedByte(),sizeof(m_Type));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Type;
}

inline
bool CMedline_field_Base::IsSetStr(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMedline_field_Base::CanGetStr(void) const
{
    return IsSetStr();
}

inline
const CMedline_field_Base::TStr& CMedline_field_Base::GetStr(void) const
{
    if (!CanGetStr()) {
        ThrowUnassigned(1);
    }
    return m_Str;
}

inline
void CMedline_field_Base::SetStr(const CMedline_field_Base::TStr& value)
{
    m_Str = value;
    m_set_State[0] |= 0xc;
}

inline
CMedline_field_Base::TStr& CMedline_field_Base::SetStr(void)
{
#ifdef _DEBUG
    if (!IsSetStr()) {
        m_Str = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Str;
}

inline
bool CMedline_field_Base::IsSetIds(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMedline_field_Base::CanGetIds(void) const
{
    return true;
}

inline
const CMedline_field_Base::TIds& CMedline_field_Base::GetIds(void) const
{
    return m_Ids;
}

inline
CMedline_field_Base::TIds& CMedline_field_Base::SetIds(void)
{
    m_set_State[0] |= 0x10;
    return m_Ids;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MEDLINE_MEDLINE_FIELD_BASE_HPP
