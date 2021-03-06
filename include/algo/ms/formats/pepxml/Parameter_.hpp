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

/// @file Parameter_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_PARAMETER_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_PARAMETER_BASE_HPP

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
class NCBI_PEPXML_EXPORT CParameter_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CParameter_Base(void);
    // destructor
    virtual ~CParameter_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_PEPXML_EXPORT C_Attlist : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Attlist(void);
        // destructor
        ~C_Attlist(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
        // types
        typedef string TName;
        typedef string TValue;
        typedef string TType;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef string TName
        ///  Check whether the Name data member has been assigned a value.
        bool IsSetName(void) const;
        /// Check whether it is safe or not to call GetName method.
        bool CanGetName(void) const;
        void ResetName(void);
        const TName& GetName(void) const;
        void SetName(const TName& value);
        TName& SetName(void);
    
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
    
        /// optional
        /// typedef string TType
        ///  Check whether the Type data member has been assigned a value.
        bool IsSetType(void) const;
        /// Check whether it is safe or not to call GetType method.
        bool CanGetType(void) const;
        void ResetType(void);
        const TType& GetType(void) const;
        void SetType(const TType& value);
        TType& SetType(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        string m_Name;
        string m_Value;
        string m_Type;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef string TParameter;

    // getters
    // setters

    /// mandatory
    /// typedef C_Attlist TAttlist
    ///  Check whether the Attlist data member has been assigned a value.
    bool IsSetAttlist(void) const;
    /// Check whether it is safe or not to call GetAttlist method.
    bool CanGetAttlist(void) const;
    void ResetAttlist(void);
    const TAttlist& GetAttlist(void) const;
    void SetAttlist(TAttlist& value);
    TAttlist& SetAttlist(void);

    /// mandatory
    /// typedef string TParameter
    ///  Check whether the Parameter data member has been assigned a value.
    bool IsSetParameter(void) const;
    /// Check whether it is safe or not to call GetParameter method.
    bool CanGetParameter(void) const;
    void ResetParameter(void);
    const TParameter& GetParameter(void) const;
    void SetParameter(const TParameter& value);
    TParameter& SetParameter(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CParameter_Base(const CParameter_Base&);
    CParameter_Base& operator=(const CParameter_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
    string m_Parameter;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CParameter_Base::C_Attlist::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CParameter_Base::C_Attlist::CanGetName(void) const
{
    return IsSetName();
}

inline
const CParameter_Base::C_Attlist::TName& CParameter_Base::C_Attlist::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CParameter_Base::C_Attlist::SetName(const CParameter_Base::C_Attlist::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CParameter_Base::C_Attlist::TName& CParameter_Base::C_Attlist::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CParameter_Base::C_Attlist::IsSetValue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CParameter_Base::C_Attlist::CanGetValue(void) const
{
    return IsSetValue();
}

inline
const CParameter_Base::C_Attlist::TValue& CParameter_Base::C_Attlist::GetValue(void) const
{
    if (!CanGetValue()) {
        ThrowUnassigned(1);
    }
    return m_Value;
}

inline
void CParameter_Base::C_Attlist::SetValue(const CParameter_Base::C_Attlist::TValue& value)
{
    m_Value = value;
    m_set_State[0] |= 0xc;
}

inline
CParameter_Base::C_Attlist::TValue& CParameter_Base::C_Attlist::SetValue(void)
{
#ifdef _DEBUG
    if (!IsSetValue()) {
        m_Value = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Value;
}

inline
bool CParameter_Base::C_Attlist::IsSetType(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CParameter_Base::C_Attlist::CanGetType(void) const
{
    return IsSetType();
}

inline
const CParameter_Base::C_Attlist::TType& CParameter_Base::C_Attlist::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(2);
    }
    return m_Type;
}

inline
void CParameter_Base::C_Attlist::SetType(const CParameter_Base::C_Attlist::TType& value)
{
    m_Type = value;
    m_set_State[0] |= 0x30;
}

inline
CParameter_Base::C_Attlist::TType& CParameter_Base::C_Attlist::SetType(void)
{
#ifdef _DEBUG
    if (!IsSetType()) {
        m_Type = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Type;
}

inline
bool CParameter_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CParameter_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CParameter_Base::TAttlist& CParameter_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CParameter_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CParameter_Base::TAttlist& CParameter_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CParameter_Base::IsSetParameter(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CParameter_Base::CanGetParameter(void) const
{
    return IsSetParameter();
}

inline
const CParameter_Base::TParameter& CParameter_Base::GetParameter(void) const
{
    if (!CanGetParameter()) {
        ThrowUnassigned(1);
    }
    return m_Parameter;
}

inline
void CParameter_Base::SetParameter(const CParameter_Base::TParameter& value)
{
    m_Parameter = value;
    m_set_State[0] |= 0xc;
}

inline
CParameter_Base::TParameter& CParameter_Base::SetParameter(void)
{
#ifdef _DEBUG
    if (!IsSetParameter()) {
        m_Parameter = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Parameter;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_PARAMETER_BASE_HPP
