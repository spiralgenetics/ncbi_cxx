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

/// @file Feat_id_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_FEAT_ID_BASE_HPP
#define OBJECTS_SEQFEAT_FEAT_ID_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CDbtag;
class CGiimport_id;
class CObject_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///*** Feature identifiers ********************************
///*
class NCBI_SEQFEAT_EXPORT CFeat_id_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CFeat_id_Base(void);
    // destructor
    virtual ~CFeat_id_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Gibb,         ///< geninfo backbone
        e_Giim,         ///< geninfo import
        e_Local,        ///< for local software use
        e_General       ///< for use by various databases
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 5 ///< == e_General+1
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
    typedef int TGibb;
    typedef CGiimport_id TGiim;
    typedef CObject_id TLocal;
    typedef CDbtag TGeneral;

    // getters
    // setters

    // typedef int TGibb
    bool IsGibb(void) const;
    TGibb GetGibb(void) const;
    TGibb& SetGibb(void);
    void SetGibb(TGibb value);

    // typedef CGiimport_id TGiim
    bool IsGiim(void) const;
    const TGiim& GetGiim(void) const;
    TGiim& SetGiim(void);
    void SetGiim(TGiim& value);

    // typedef CObject_id TLocal
    bool IsLocal(void) const;
    const TLocal& GetLocal(void) const;
    TLocal& SetLocal(void);
    void SetLocal(TLocal& value);

    // typedef CDbtag TGeneral
    bool IsGeneral(void) const;
    const TGeneral& GetGeneral(void) const;
    TGeneral& SetGeneral(void);
    void SetGeneral(TGeneral& value);


private:
    // copy constructor and assignment operator
    CFeat_id_Base(const CFeat_id_Base& );
    CFeat_id_Base& operator=(const CFeat_id_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        TGibb m_Gibb;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CFeat_id_Base::E_Choice CFeat_id_Base::Which(void) const
{
    return m_choice;
}

inline
void CFeat_id_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CFeat_id_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CFeat_id_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CFeat_id_Base::IsGibb(void) const
{
    return m_choice == e_Gibb;
}

inline
CFeat_id_Base::TGibb CFeat_id_Base::GetGibb(void) const
{
    CheckSelected(e_Gibb);
    return m_Gibb;
}

inline
CFeat_id_Base::TGibb& CFeat_id_Base::SetGibb(void)
{
    Select(e_Gibb, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Gibb;
}

inline
void CFeat_id_Base::SetGibb(CFeat_id_Base::TGibb value)
{
    Select(e_Gibb, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Gibb = value;
}

inline
bool CFeat_id_Base::IsGiim(void) const
{
    return m_choice == e_Giim;
}

inline
bool CFeat_id_Base::IsLocal(void) const
{
    return m_choice == e_Local;
}

inline
bool CFeat_id_Base::IsGeneral(void) const
{
    return m_choice == e_General;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_FEAT_ID_BASE_HPP
