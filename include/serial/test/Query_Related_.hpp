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

/// @file Query_Related_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'we_cpp.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SERIAL_TEST_QUERY_RELATED_BASE_HPP
#define SERIAL_TEST_QUERY_RELATED_BASE_HPP

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


// forward declarations
class CItem_Set;
class CQuery_Command;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CQuery_Related_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CQuery_Related_Base(void);
    // destructor
    virtual ~CQuery_Related_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class C_Items : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Items(void);
        // destructor
        ~C_Items(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Items,        ///< result items
            e_ItemCount     ///< 
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 3 ///< == e_ItemCount+1
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
        typedef CItem_Set TItems;
        typedef int TItemCount;
    
        // getters
        // setters
    
        // typedef CItem_Set TItems
        bool IsItems(void) const;
        const TItems& GetItems(void) const;
        TItems& SetItems(void);
        void SetItems(TItems& value);
    
        // typedef int TItemCount
        bool IsItemCount(void) const;
        TItemCount GetItemCount(void) const;
        TItemCount& SetItemCount(void);
        void SetItemCount(TItemCount value);
    
    
    private:
        // copy constructor and assignment operator
        C_Items(const C_Items& );
        C_Items& operator=(const C_Items& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            TItemCount m_ItemCount;
            NCBI_NS_NCBI::CSerialObject *m_object;
        };
    };
    // types
    typedef CQuery_Command TBase;
    typedef string TRelation;
    typedef string TDb;
    typedef C_Items TItems;

    // getters
    // setters

    /// base result
    /// mandatory
    /// typedef CQuery_Command TBase
    ///  Check whether the Base data member has been assigned a value.
    bool IsSetBase(void) const;
    /// Check whether it is safe or not to call GetBase method.
    bool CanGetBase(void) const;
    void ResetBase(void);
    const TBase& GetBase(void) const;
    void SetBase(TBase& value);
    TBase& SetBase(void);

    /// type of relation
    /// mandatory
    /// typedef string TRelation
    ///  Check whether the Relation data member has been assigned a value.
    bool IsSetRelation(void) const;
    /// Check whether it is safe or not to call GetRelation method.
    bool CanGetRelation(void) const;
    void ResetRelation(void);
    const TRelation& GetRelation(void) const;
    void SetRelation(const TRelation& value);
    TRelation& SetRelation(void);

    /// result db
    /// mandatory
    /// typedef string TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    const TDb& GetDb(void) const;
    void SetDb(const TDb& value);
    TDb& SetDb(void);

    /// mandatory
    /// typedef C_Items TItems
    ///  Check whether the Items data member has been assigned a value.
    bool IsSetItems(void) const;
    /// Check whether it is safe or not to call GetItems method.
    bool CanGetItems(void) const;
    void ResetItems(void);
    const TItems& GetItems(void) const;
    void SetItems(TItems& value);
    TItems& SetItems(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CQuery_Related_Base(const CQuery_Related_Base&);
    CQuery_Related_Base& operator=(const CQuery_Related_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TBase > m_Base;
    string m_Relation;
    string m_Db;
    CRef< TItems > m_Items;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CQuery_Related_Base::C_Items::E_Choice CQuery_Related_Base::C_Items::Which(void) const
{
    return m_choice;
}

inline
void CQuery_Related_Base::C_Items::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CQuery_Related_Base::C_Items::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CQuery_Related_Base::C_Items::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CQuery_Related_Base::C_Items::IsItems(void) const
{
    return m_choice == e_Items;
}

inline
bool CQuery_Related_Base::C_Items::IsItemCount(void) const
{
    return m_choice == e_ItemCount;
}

inline
CQuery_Related_Base::C_Items::TItemCount CQuery_Related_Base::C_Items::GetItemCount(void) const
{
    CheckSelected(e_ItemCount);
    return m_ItemCount;
}

inline
CQuery_Related_Base::C_Items::TItemCount& CQuery_Related_Base::C_Items::SetItemCount(void)
{
    Select(e_ItemCount, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_ItemCount;
}

inline
void CQuery_Related_Base::C_Items::SetItemCount(CQuery_Related_Base::C_Items::TItemCount value)
{
    Select(e_ItemCount, NCBI_NS_NCBI::eDoNotResetVariant);
    m_ItemCount = value;
}

inline
bool CQuery_Related_Base::IsSetBase(void) const
{
    return m_Base.NotEmpty();
}

inline
bool CQuery_Related_Base::CanGetBase(void) const
{
    return true;
}

inline
const CQuery_Related_Base::TBase& CQuery_Related_Base::GetBase(void) const
{
    if ( !m_Base ) {
        const_cast<CQuery_Related_Base*>(this)->ResetBase();
    }
    return (*m_Base);
}

inline
CQuery_Related_Base::TBase& CQuery_Related_Base::SetBase(void)
{
    if ( !m_Base ) {
        ResetBase();
    }
    return (*m_Base);
}

inline
bool CQuery_Related_Base::IsSetRelation(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CQuery_Related_Base::CanGetRelation(void) const
{
    return IsSetRelation();
}

inline
const CQuery_Related_Base::TRelation& CQuery_Related_Base::GetRelation(void) const
{
    if (!CanGetRelation()) {
        ThrowUnassigned(1);
    }
    return m_Relation;
}

inline
void CQuery_Related_Base::SetRelation(const CQuery_Related_Base::TRelation& value)
{
    m_Relation = value;
    m_set_State[0] |= 0xc;
}

inline
CQuery_Related_Base::TRelation& CQuery_Related_Base::SetRelation(void)
{
#ifdef _DEBUG
    if (!IsSetRelation()) {
        m_Relation = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Relation;
}

inline
bool CQuery_Related_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CQuery_Related_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
const CQuery_Related_Base::TDb& CQuery_Related_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(2);
    }
    return m_Db;
}

inline
void CQuery_Related_Base::SetDb(const CQuery_Related_Base::TDb& value)
{
    m_Db = value;
    m_set_State[0] |= 0x30;
}

inline
CQuery_Related_Base::TDb& CQuery_Related_Base::SetDb(void)
{
#ifdef _DEBUG
    if (!IsSetDb()) {
        m_Db = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Db;
}

inline
bool CQuery_Related_Base::IsSetItems(void) const
{
    return m_Items.NotEmpty();
}

inline
bool CQuery_Related_Base::CanGetItems(void) const
{
    return true;
}

inline
const CQuery_Related_Base::TItems& CQuery_Related_Base::GetItems(void) const
{
    if ( !m_Items ) {
        const_cast<CQuery_Related_Base*>(this)->ResetItems();
    }
    return (*m_Items);
}

inline
CQuery_Related_Base::TItems& CQuery_Related_Base::SetItems(void)
{
    if ( !m_Items ) {
        ResetItems();
    }
    return (*m_Items);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SERIAL_TEST_QUERY_RELATED_BASE_HPP
