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

/// @file Seque_const_mol_type_const_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_SEQUE_CONST_MOL_TYPE_CONST_BASE_HPP
#define OBJECTS_MACRO_SEQUE_CONST_MOL_TYPE_CONST_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Sequence_constraint_rnamol.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CSequence_constraint_mol_type_constraint_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSequence_constraint_mol_type_constraint_Base(void);
    // destructor
    virtual ~CSequence_constraint_mol_type_constraint_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Any,
        e_Nucleotide,
        e_Dna,
        e_Rna,
        e_Protein
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 6 ///< == e_Protein+1
    };

    /// Reset the whole object
    virtual void Reset(void);

    /// Reset the selection (set it to e_not_set).
    virtual void ResetSelection(void);

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
    typedef ESequence_constraint_rnamol TRna;

    // getters
    // setters


    bool IsAny(void) const;
    void SetAny(void);


    bool IsNucleotide(void) const;
    void SetNucleotide(void);


    bool IsDna(void) const;
    void SetDna(void);

    // typedef ESequence_constraint_rnamol TRna
    bool IsRna(void) const;
    TRna GetRna(void) const;
    TRna& SetRna(void);
    void SetRna(TRna value);


    bool IsProtein(void) const;
    void SetProtein(void);


private:
    // copy constructor and assignment operator
    CSequence_constraint_mol_type_constraint_Base(const CSequence_constraint_mol_type_constraint_Base& );
    CSequence_constraint_mol_type_constraint_Base& operator=(const CSequence_constraint_mol_type_constraint_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        TRna m_Rna;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CSequence_constraint_mol_type_constraint_Base::E_Choice CSequence_constraint_mol_type_constraint_Base::Which(void) const
{
    return m_choice;
}

inline
void CSequence_constraint_mol_type_constraint_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSequence_constraint_mol_type_constraint_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSequence_constraint_mol_type_constraint_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSequence_constraint_mol_type_constraint_Base::IsAny(void) const
{
    return m_choice == e_Any;
}

inline
void CSequence_constraint_mol_type_constraint_Base::SetAny(void)
{
    Select(e_Any, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CSequence_constraint_mol_type_constraint_Base::IsNucleotide(void) const
{
    return m_choice == e_Nucleotide;
}

inline
void CSequence_constraint_mol_type_constraint_Base::SetNucleotide(void)
{
    Select(e_Nucleotide, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CSequence_constraint_mol_type_constraint_Base::IsDna(void) const
{
    return m_choice == e_Dna;
}

inline
void CSequence_constraint_mol_type_constraint_Base::SetDna(void)
{
    Select(e_Dna, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CSequence_constraint_mol_type_constraint_Base::IsRna(void) const
{
    return m_choice == e_Rna;
}

inline
CSequence_constraint_mol_type_constraint_Base::TRna CSequence_constraint_mol_type_constraint_Base::GetRna(void) const
{
    CheckSelected(e_Rna);
    return m_Rna;
}

inline
CSequence_constraint_mol_type_constraint_Base::TRna& CSequence_constraint_mol_type_constraint_Base::SetRna(void)
{
    Select(e_Rna, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Rna;
}

inline
void CSequence_constraint_mol_type_constraint_Base::SetRna(CSequence_constraint_mol_type_constraint_Base::TRna value)
{
    Select(e_Rna, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Rna = value;
}

inline
bool CSequence_constraint_mol_type_constraint_Base::IsProtein(void) const
{
    return m_choice == e_Protein;
}

inline
void CSequence_constraint_mol_type_constraint_Base::SetProtein(void)
{
    Select(e_Protein, NCBI_NS_NCBI::eDoNotResetVariant);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_SEQUE_CONST_MOL_TYPE_CONST_BASE_HPP
