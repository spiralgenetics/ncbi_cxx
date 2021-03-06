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

/// @file Feature_field_pair_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_FEATURE_FIELD_PAIR_BASE_HPP
#define OBJECTS_MACRO_FEATURE_FIELD_PAIR_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Macro_feature_type.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CFeat_qual_choice;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CFeature_field_pair_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CFeature_field_pair_Base(void);
    // destructor
    virtual ~CFeature_field_pair_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef EMacro_feature_type TType;
    typedef CFeat_qual_choice TField_from;
    typedef CFeat_qual_choice TField_to;

    // getters
    // setters

    /// mandatory
    /// typedef EMacro_feature_type TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// mandatory
    /// typedef CFeat_qual_choice TField_from
    ///  Check whether the Field_from data member has been assigned a value.
    bool IsSetField_from(void) const;
    /// Check whether it is safe or not to call GetField_from method.
    bool CanGetField_from(void) const;
    void ResetField_from(void);
    const TField_from& GetField_from(void) const;
    void SetField_from(TField_from& value);
    TField_from& SetField_from(void);

    /// mandatory
    /// typedef CFeat_qual_choice TField_to
    ///  Check whether the Field_to data member has been assigned a value.
    bool IsSetField_to(void) const;
    /// Check whether it is safe or not to call GetField_to method.
    bool CanGetField_to(void) const;
    void ResetField_to(void);
    const TField_to& GetField_to(void) const;
    void SetField_to(TField_to& value);
    TField_to& SetField_to(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CFeature_field_pair_Base(const CFeature_field_pair_Base&);
    CFeature_field_pair_Base& operator=(const CFeature_field_pair_Base&);

    // data
    Uint4 m_set_State[1];
    EMacro_feature_type m_Type;
    CRef< TField_from > m_Field_from;
    CRef< TField_to > m_Field_to;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CFeature_field_pair_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CFeature_field_pair_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CFeature_field_pair_Base::ResetType(void)
{
    m_Type = (ncbi::objects::EMacro_feature_type)(0);
    m_set_State[0] &= ~0x3;
}

inline
CFeature_field_pair_Base::TType CFeature_field_pair_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(0);
    }
    return m_Type;
}

inline
void CFeature_field_pair_Base::SetType(CFeature_field_pair_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0x3;
}

inline
CFeature_field_pair_Base::TType& CFeature_field_pair_Base::SetType(void)
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
bool CFeature_field_pair_Base::IsSetField_from(void) const
{
    return m_Field_from.NotEmpty();
}

inline
bool CFeature_field_pair_Base::CanGetField_from(void) const
{
    return true;
}

inline
const CFeature_field_pair_Base::TField_from& CFeature_field_pair_Base::GetField_from(void) const
{
    if ( !m_Field_from ) {
        const_cast<CFeature_field_pair_Base*>(this)->ResetField_from();
    }
    return (*m_Field_from);
}

inline
CFeature_field_pair_Base::TField_from& CFeature_field_pair_Base::SetField_from(void)
{
    if ( !m_Field_from ) {
        ResetField_from();
    }
    return (*m_Field_from);
}

inline
bool CFeature_field_pair_Base::IsSetField_to(void) const
{
    return m_Field_to.NotEmpty();
}

inline
bool CFeature_field_pair_Base::CanGetField_to(void) const
{
    return true;
}

inline
const CFeature_field_pair_Base::TField_to& CFeature_field_pair_Base::GetField_to(void) const
{
    if ( !m_Field_to ) {
        const_cast<CFeature_field_pair_Base*>(this)->ResetField_to();
    }
    return (*m_Field_to);
}

inline
CFeature_field_pair_Base::TField_to& CFeature_field_pair_Base::SetField_to(void)
{
    if ( !m_Field_to ) {
        ResetField_to();
    }
    return (*m_Field_to);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_FEATURE_FIELD_PAIR_BASE_HPP
