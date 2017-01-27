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

/// @file Constraint_choice_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_CONSTRAINT_CHOICE_BASE_HPP
#define OBJECTS_MACRO_CONSTRAINT_CHOICE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCDSGeneProt_pseudo_constraint;
class CCDSGeneProt_qual_constraint;
class CField_constraint;
class CField_type;
class CLocation_constraint;
class CMolinfo_field_constraint;
class CPublication_constraint;
class CSequence_constraint;
class CSource_constraint;
class CString_constraint;
class CTranslation_constraint;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CConstraint_choice_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CConstraint_choice_Base(void);
    // destructor
    virtual ~CConstraint_choice_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,         ///< No variant selected
        e_String,
        e_Location,
        e_Field,
        e_Source,
        e_Cdsgeneprot_qual,
        e_Cdsgeneprot_pseudo,
        e_Sequence,
        e_Pub,
        e_Molinfo,
        e_Field_missing,
        e_Translation
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 12 ///< == e_Translation+1
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
    typedef CString_constraint TString;
    typedef CLocation_constraint TLocation;
    typedef CField_constraint TField;
    typedef CSource_constraint TSource;
    typedef CCDSGeneProt_qual_constraint TCdsgeneprot_qual;
    typedef CCDSGeneProt_pseudo_constraint TCdsgeneprot_pseudo;
    typedef CSequence_constraint TSequence;
    typedef CPublication_constraint TPub;
    typedef CMolinfo_field_constraint TMolinfo;
    typedef CField_type TField_missing;
    typedef CTranslation_constraint TTranslation;

    // getters
    // setters

    // typedef CString_constraint TString
    bool IsString(void) const;
    const TString& GetString(void) const;
    TString& SetString(void);
    void SetString(TString& value);

    // typedef CLocation_constraint TLocation
    bool IsLocation(void) const;
    const TLocation& GetLocation(void) const;
    TLocation& SetLocation(void);
    void SetLocation(TLocation& value);

    // typedef CField_constraint TField
    bool IsField(void) const;
    const TField& GetField(void) const;
    TField& SetField(void);
    void SetField(TField& value);

    // typedef CSource_constraint TSource
    bool IsSource(void) const;
    const TSource& GetSource(void) const;
    TSource& SetSource(void);
    void SetSource(TSource& value);

    // typedef CCDSGeneProt_qual_constraint TCdsgeneprot_qual
    bool IsCdsgeneprot_qual(void) const;
    const TCdsgeneprot_qual& GetCdsgeneprot_qual(void) const;
    TCdsgeneprot_qual& SetCdsgeneprot_qual(void);
    void SetCdsgeneprot_qual(TCdsgeneprot_qual& value);

    // typedef CCDSGeneProt_pseudo_constraint TCdsgeneprot_pseudo
    bool IsCdsgeneprot_pseudo(void) const;
    const TCdsgeneprot_pseudo& GetCdsgeneprot_pseudo(void) const;
    TCdsgeneprot_pseudo& SetCdsgeneprot_pseudo(void);
    void SetCdsgeneprot_pseudo(TCdsgeneprot_pseudo& value);

    // typedef CSequence_constraint TSequence
    bool IsSequence(void) const;
    const TSequence& GetSequence(void) const;
    TSequence& SetSequence(void);
    void SetSequence(TSequence& value);

    // typedef CPublication_constraint TPub
    bool IsPub(void) const;
    const TPub& GetPub(void) const;
    TPub& SetPub(void);
    void SetPub(TPub& value);

    // typedef CMolinfo_field_constraint TMolinfo
    bool IsMolinfo(void) const;
    const TMolinfo& GetMolinfo(void) const;
    TMolinfo& SetMolinfo(void);
    void SetMolinfo(TMolinfo& value);

    // typedef CField_type TField_missing
    bool IsField_missing(void) const;
    const TField_missing& GetField_missing(void) const;
    TField_missing& SetField_missing(void);
    void SetField_missing(TField_missing& value);

    // typedef CTranslation_constraint TTranslation
    bool IsTranslation(void) const;
    const TTranslation& GetTranslation(void) const;
    TTranslation& SetTranslation(void);
    void SetTranslation(TTranslation& value);


private:
    // copy constructor and assignment operator
    CConstraint_choice_Base(const CConstraint_choice_Base& );
    CConstraint_choice_Base& operator=(const CConstraint_choice_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    NCBI_NS_NCBI::CSerialObject *m_object;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CConstraint_choice_Base::E_Choice CConstraint_choice_Base::Which(void) const
{
    return m_choice;
}

inline
void CConstraint_choice_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CConstraint_choice_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CConstraint_choice_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CConstraint_choice_Base::IsString(void) const
{
    return m_choice == e_String;
}

inline
bool CConstraint_choice_Base::IsLocation(void) const
{
    return m_choice == e_Location;
}

inline
bool CConstraint_choice_Base::IsField(void) const
{
    return m_choice == e_Field;
}

inline
bool CConstraint_choice_Base::IsSource(void) const
{
    return m_choice == e_Source;
}

inline
bool CConstraint_choice_Base::IsCdsgeneprot_qual(void) const
{
    return m_choice == e_Cdsgeneprot_qual;
}

inline
bool CConstraint_choice_Base::IsCdsgeneprot_pseudo(void) const
{
    return m_choice == e_Cdsgeneprot_pseudo;
}

inline
bool CConstraint_choice_Base::IsSequence(void) const
{
    return m_choice == e_Sequence;
}

inline
bool CConstraint_choice_Base::IsPub(void) const
{
    return m_choice == e_Pub;
}

inline
bool CConstraint_choice_Base::IsMolinfo(void) const
{
    return m_choice == e_Molinfo;
}

inline
bool CConstraint_choice_Base::IsField_missing(void) const
{
    return m_choice == e_Field_missing;
}

inline
bool CConstraint_choice_Base::IsTranslation(void) const
{
    return m_choice == e_Translation;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_CONSTRAINT_CHOICE_BASE_HPP