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

/// @file T3StatusFlags_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'taxon3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TAXON3_T3STATUSFLAGS_BASE_HPP
#define OBJECTS_TAXON3_T3STATUSFLAGS_BASE_HPP

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
class NCBI_TAXON3_EXPORT CT3StatusFlags_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CT3StatusFlags_Base(void);
    // destructor
    virtual ~CT3StatusFlags_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_TAXON3_EXPORT C_Value : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Value(void);
        // destructor
        ~C_Value(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Bool,
            e_Int,
            e_Str
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 4 ///< == e_Str+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
        /// Which variant is currently selected.
        E_Choice Which(void) const;
    
        /// Verify selection, throw exception if it differs from the expected.
        void CheckSelected(E_Choice index) const;
    
        /// Throw 'InvalidSelection' exception.
        NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;
    
        /// Retrieve selection name (for diagnostic purposes).
        static string SelectionName(E_Choice index);
    
        /// Select the requested variant if needed.
        void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
        /// Select the requested variant if needed,
        /// allocating CObject variants from memory pool.
        void Select(E_Choice index,
                    EResetVariant reset,
                    CObjectMemoryPool* pool);
    
        // types
        typedef bool TBool;
        typedef int TInt;
        typedef string TStr;
    
        // getters
        // setters
    
        // typedef bool TBool
        bool IsBool(void) const;
        TBool GetBool(void) const;
        TBool& SetBool(void);
        void SetBool(TBool value);
    
        // typedef int TInt
        bool IsInt(void) const;
        TInt GetInt(void) const;
        TInt& SetInt(void);
        void SetInt(TInt value);
    
        // typedef string TStr
        bool IsStr(void) const;
        const TStr& GetStr(void) const;
        TStr& SetStr(void);
        void SetStr(const TStr& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Value(const C_Value& );
        C_Value& operator=(const C_Value& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            TBool m_Bool;
            TInt m_Int;
            NCBI_NS_NCBI::CUnionBuffer<NCBI_NS_STD::string> m_string;
            void* m_dummy_pointer_for_alignment;
        };
    };
    // types
    typedef string TProperty;
    typedef C_Value TValue;

    // getters
    // setters

    /// mandatory
    /// typedef string TProperty
    ///  Check whether the Property data member has been assigned a value.
    bool IsSetProperty(void) const;
    /// Check whether it is safe or not to call GetProperty method.
    bool CanGetProperty(void) const;
    void ResetProperty(void);
    const TProperty& GetProperty(void) const;
    void SetProperty(const TProperty& value);
    TProperty& SetProperty(void);

    /// mandatory
    /// typedef C_Value TValue
    ///  Check whether the Value data member has been assigned a value.
    bool IsSetValue(void) const;
    /// Check whether it is safe or not to call GetValue method.
    bool CanGetValue(void) const;
    void ResetValue(void);
    const TValue& GetValue(void) const;
    void SetValue(TValue& value);
    TValue& SetValue(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CT3StatusFlags_Base(const CT3StatusFlags_Base&);
    CT3StatusFlags_Base& operator=(const CT3StatusFlags_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Property;
    CRef< TValue > m_Value;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CT3StatusFlags_Base::C_Value::E_Choice CT3StatusFlags_Base::C_Value::Which(void) const
{
    return m_choice;
}

inline
void CT3StatusFlags_Base::C_Value::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CT3StatusFlags_Base::C_Value::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CT3StatusFlags_Base::C_Value::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CT3StatusFlags_Base::C_Value::IsBool(void) const
{
    return m_choice == e_Bool;
}

inline
CT3StatusFlags_Base::C_Value::TBool CT3StatusFlags_Base::C_Value::GetBool(void) const
{
    CheckSelected(e_Bool);
    return m_Bool;
}

inline
CT3StatusFlags_Base::C_Value::TBool& CT3StatusFlags_Base::C_Value::SetBool(void)
{
    Select(e_Bool, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Bool;
}

inline
void CT3StatusFlags_Base::C_Value::SetBool(CT3StatusFlags_Base::C_Value::TBool value)
{
    Select(e_Bool, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Bool = value;
}

inline
bool CT3StatusFlags_Base::C_Value::IsInt(void) const
{
    return m_choice == e_Int;
}

inline
CT3StatusFlags_Base::C_Value::TInt CT3StatusFlags_Base::C_Value::GetInt(void) const
{
    CheckSelected(e_Int);
    return m_Int;
}

inline
CT3StatusFlags_Base::C_Value::TInt& CT3StatusFlags_Base::C_Value::SetInt(void)
{
    Select(e_Int, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Int;
}

inline
void CT3StatusFlags_Base::C_Value::SetInt(CT3StatusFlags_Base::C_Value::TInt value)
{
    Select(e_Int, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Int = value;
}

inline
bool CT3StatusFlags_Base::C_Value::IsStr(void) const
{
    return m_choice == e_Str;
}

inline
const CT3StatusFlags_Base::C_Value::TStr& CT3StatusFlags_Base::C_Value::GetStr(void) const
{
    CheckSelected(e_Str);
    return *m_string;
}

inline
CT3StatusFlags_Base::C_Value::TStr& CT3StatusFlags_Base::C_Value::SetStr(void)
{
    Select(e_Str, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CT3StatusFlags_Base::IsSetProperty(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CT3StatusFlags_Base::CanGetProperty(void) const
{
    return IsSetProperty();
}

inline
const CT3StatusFlags_Base::TProperty& CT3StatusFlags_Base::GetProperty(void) const
{
    if (!CanGetProperty()) {
        ThrowUnassigned(0);
    }
    return m_Property;
}

inline
void CT3StatusFlags_Base::SetProperty(const CT3StatusFlags_Base::TProperty& value)
{
    m_Property = value;
    m_set_State[0] |= 0x3;
}

inline
CT3StatusFlags_Base::TProperty& CT3StatusFlags_Base::SetProperty(void)
{
#ifdef _DEBUG
    if (!IsSetProperty()) {
        m_Property = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Property;
}

inline
bool CT3StatusFlags_Base::IsSetValue(void) const
{
    return m_Value.NotEmpty();
}

inline
bool CT3StatusFlags_Base::CanGetValue(void) const
{
    return true;
}

inline
const CT3StatusFlags_Base::TValue& CT3StatusFlags_Base::GetValue(void) const
{
    if ( !m_Value ) {
        const_cast<CT3StatusFlags_Base*>(this)->ResetValue();
    }
    return (*m_Value);
}

inline
CT3StatusFlags_Base::TValue& CT3StatusFlags_Base::SetValue(void)
{
    if ( !m_Value ) {
        ResetValue();
    }
    return (*m_Value);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TAXON3_T3STATUSFLAGS_BASE_HPP
