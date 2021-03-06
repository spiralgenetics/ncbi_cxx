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

/// @file Parse_src_general_id_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_PARSE_SRC_GENERAL_ID_BASE_HPP
#define OBJECTS_MACRO_PARSE_SRC_GENERAL_ID_BASE_HPP

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
/// For Parse-src-general-id tag, specify the db of the id from which you
/// want to retrieve the tag.  If empty or null, any db will do.
class CParse_src_general_id_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CParse_src_general_id_Base(void);
    // destructor
    virtual ~CParse_src_general_id_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Whole_text,
        e_Db,
        e_Tag
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 4 ///< == e_Tag+1
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
    typedef string TTag;

    // getters
    // setters


    bool IsWhole_text(void) const;
    void SetWhole_text(void);


    bool IsDb(void) const;
    void SetDb(void);

    // typedef string TTag
    bool IsTag(void) const;
    const TTag& GetTag(void) const;
    TTag& SetTag(void);
    void SetTag(const TTag& value);


private:
    // copy constructor and assignment operator
    CParse_src_general_id_Base(const CParse_src_general_id_Base& );
    CParse_src_general_id_Base& operator=(const CParse_src_general_id_Base& );
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






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CParse_src_general_id_Base::E_Choice CParse_src_general_id_Base::Which(void) const
{
    return m_choice;
}

inline
void CParse_src_general_id_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CParse_src_general_id_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CParse_src_general_id_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CParse_src_general_id_Base::IsWhole_text(void) const
{
    return m_choice == e_Whole_text;
}

inline
void CParse_src_general_id_Base::SetWhole_text(void)
{
    Select(e_Whole_text, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CParse_src_general_id_Base::IsDb(void) const
{
    return m_choice == e_Db;
}

inline
void CParse_src_general_id_Base::SetDb(void)
{
    Select(e_Db, NCBI_NS_NCBI::eDoNotResetVariant);
}

inline
bool CParse_src_general_id_Base::IsTag(void) const
{
    return m_choice == e_Tag;
}

inline
const CParse_src_general_id_Base::TTag& CParse_src_general_id_Base::GetTag(void) const
{
    CheckSelected(e_Tag);
    return *m_string;
}

inline
CParse_src_general_id_Base::TTag& CParse_src_general_id_Base::SetTag(void)
{
    Select(e_Tag, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_PARSE_SRC_GENERAL_ID_BASE_HPP
