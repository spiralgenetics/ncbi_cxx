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

/// @file Id_pat_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'biblio.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BIBLIO_ID_PAT_BASE_HPP
#define OBJECTS_BIBLIO_ID_PAT_BASE_HPP

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
/// just to identify a patent
class NCBI_BIBLIO_EXPORT CId_pat_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CId_pat_Base(void);
    // destructor
    virtual ~CId_pat_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_BIBLIO_EXPORT C_Id : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Id(void);
        // destructor
        ~C_Id(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Number,       ///< Patent Document Number
            e_App_number    ///< Patent Doc Appl Number
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 3 ///< == e_App_number+1
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
        typedef string TNumber;
        typedef string TApp_number;
    
        // getters
        // setters
    
        // typedef string TNumber
        bool IsNumber(void) const;
        const TNumber& GetNumber(void) const;
        TNumber& SetNumber(void);
        void SetNumber(const TNumber& value);
    
        // typedef string TApp_number
        bool IsApp_number(void) const;
        const TApp_number& GetApp_number(void) const;
        TApp_number& SetApp_number(void);
        void SetApp_number(const TApp_number& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Id(const C_Id& );
        C_Id& operator=(const C_Id& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            NCBI_NS_NCBI::CUnionBuffer<NCBI_NS_STD::string> m_string;
            void* m_dummy_pointer_for_alignment;
        };
    };
    // types
    typedef string TCountry;
    typedef C_Id TId;
    typedef string TDoc_type;

    // getters
    // setters

    /// Patent Document Country
    /// mandatory
    /// typedef string TCountry
    ///  Check whether the Country data member has been assigned a value.
    bool IsSetCountry(void) const;
    /// Check whether it is safe or not to call GetCountry method.
    bool CanGetCountry(void) const;
    void ResetCountry(void);
    const TCountry& GetCountry(void) const;
    void SetCountry(const TCountry& value);
    TCountry& SetCountry(void);

    /// mandatory
    /// typedef C_Id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(TId& value);
    TId& SetId(void);

    /// Patent Doc Type
    /// optional
    /// typedef string TDoc_type
    ///  Check whether the Doc_type data member has been assigned a value.
    bool IsSetDoc_type(void) const;
    /// Check whether it is safe or not to call GetDoc_type method.
    bool CanGetDoc_type(void) const;
    void ResetDoc_type(void);
    const TDoc_type& GetDoc_type(void) const;
    void SetDoc_type(const TDoc_type& value);
    TDoc_type& SetDoc_type(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CId_pat_Base(const CId_pat_Base&);
    CId_pat_Base& operator=(const CId_pat_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Country;
    CRef< TId > m_Id;
    string m_Doc_type;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CId_pat_Base::C_Id::E_Choice CId_pat_Base::C_Id::Which(void) const
{
    return m_choice;
}

inline
void CId_pat_Base::C_Id::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CId_pat_Base::C_Id::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CId_pat_Base::C_Id::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CId_pat_Base::C_Id::IsNumber(void) const
{
    return m_choice == e_Number;
}

inline
const CId_pat_Base::C_Id::TNumber& CId_pat_Base::C_Id::GetNumber(void) const
{
    CheckSelected(e_Number);
    return *m_string;
}

inline
CId_pat_Base::C_Id::TNumber& CId_pat_Base::C_Id::SetNumber(void)
{
    Select(e_Number, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CId_pat_Base::C_Id::IsApp_number(void) const
{
    return m_choice == e_App_number;
}

inline
const CId_pat_Base::C_Id::TApp_number& CId_pat_Base::C_Id::GetApp_number(void) const
{
    CheckSelected(e_App_number);
    return *m_string;
}

inline
CId_pat_Base::C_Id::TApp_number& CId_pat_Base::C_Id::SetApp_number(void)
{
    Select(e_App_number, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CId_pat_Base::IsSetCountry(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CId_pat_Base::CanGetCountry(void) const
{
    return IsSetCountry();
}

inline
const CId_pat_Base::TCountry& CId_pat_Base::GetCountry(void) const
{
    if (!CanGetCountry()) {
        ThrowUnassigned(0);
    }
    return m_Country;
}

inline
void CId_pat_Base::SetCountry(const CId_pat_Base::TCountry& value)
{
    m_Country = value;
    m_set_State[0] |= 0x3;
}

inline
CId_pat_Base::TCountry& CId_pat_Base::SetCountry(void)
{
#ifdef _DEBUG
    if (!IsSetCountry()) {
        m_Country = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Country;
}

inline
bool CId_pat_Base::IsSetId(void) const
{
    return m_Id.NotEmpty();
}

inline
bool CId_pat_Base::CanGetId(void) const
{
    return true;
}

inline
const CId_pat_Base::TId& CId_pat_Base::GetId(void) const
{
    if ( !m_Id ) {
        const_cast<CId_pat_Base*>(this)->ResetId();
    }
    return (*m_Id);
}

inline
CId_pat_Base::TId& CId_pat_Base::SetId(void)
{
    if ( !m_Id ) {
        ResetId();
    }
    return (*m_Id);
}

inline
bool CId_pat_Base::IsSetDoc_type(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CId_pat_Base::CanGetDoc_type(void) const
{
    return IsSetDoc_type();
}

inline
const CId_pat_Base::TDoc_type& CId_pat_Base::GetDoc_type(void) const
{
    if (!CanGetDoc_type()) {
        ThrowUnassigned(2);
    }
    return m_Doc_type;
}

inline
void CId_pat_Base::SetDoc_type(const CId_pat_Base::TDoc_type& value)
{
    m_Doc_type = value;
    m_set_State[0] |= 0x30;
}

inline
CId_pat_Base::TDoc_type& CId_pat_Base::SetDoc_type(void)
{
#ifdef _DEBUG
    if (!IsSetDoc_type()) {
        m_Doc_type = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Doc_type;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BIBLIO_ID_PAT_BASE_HPP
