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

/// @file Model_descr_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB2_MODEL_DESCR_BASE_HPP
#define OBJECTS_MMDB2_MODEL_DESCR_BASE_HPP

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
class CPub;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_MMDB2_EXPORT CModel_descr_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CModel_descr_Base(void);
    // destructor
    virtual ~CModel_descr_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,    ///< No variant selected
        e_Name,
        e_Pdb_reso,
        e_Pdb_method,
        e_Pdb_comment,
        e_Other_comment,
        e_Attribution
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 7 ///< == e_Attribution+1
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
    typedef string TName;
    typedef string TPdb_reso;
    typedef string TPdb_method;
    typedef string TPdb_comment;
    typedef string TOther_comment;
    typedef CPub TAttribution;

    // getters
    // setters

    // typedef string TName
    bool IsName(void) const;
    const TName& GetName(void) const;
    TName& SetName(void);
    void SetName(const TName& value);

    // typedef string TPdb_reso
    bool IsPdb_reso(void) const;
    const TPdb_reso& GetPdb_reso(void) const;
    TPdb_reso& SetPdb_reso(void);
    void SetPdb_reso(const TPdb_reso& value);

    // typedef string TPdb_method
    bool IsPdb_method(void) const;
    const TPdb_method& GetPdb_method(void) const;
    TPdb_method& SetPdb_method(void);
    void SetPdb_method(const TPdb_method& value);

    // typedef string TPdb_comment
    bool IsPdb_comment(void) const;
    const TPdb_comment& GetPdb_comment(void) const;
    TPdb_comment& SetPdb_comment(void);
    void SetPdb_comment(const TPdb_comment& value);

    // typedef string TOther_comment
    bool IsOther_comment(void) const;
    const TOther_comment& GetOther_comment(void) const;
    TOther_comment& SetOther_comment(void);
    void SetOther_comment(const TOther_comment& value);

    // typedef CPub TAttribution
    bool IsAttribution(void) const;
    const TAttribution& GetAttribution(void) const;
    TAttribution& SetAttribution(void);
    void SetAttribution(TAttribution& value);


private:
    // copy constructor and assignment operator
    CModel_descr_Base(const CModel_descr_Base& );
    CModel_descr_Base& operator=(const CModel_descr_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        NCBI_NS_NCBI::CUnionBuffer<NCBI_NS_STD::string> m_string;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CModel_descr_Base::E_Choice CModel_descr_Base::Which(void) const
{
    return m_choice;
}

inline
void CModel_descr_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CModel_descr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CModel_descr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CModel_descr_Base::IsName(void) const
{
    return m_choice == e_Name;
}

inline
const CModel_descr_Base::TName& CModel_descr_Base::GetName(void) const
{
    CheckSelected(e_Name);
    return *m_string;
}

inline
CModel_descr_Base::TName& CModel_descr_Base::SetName(void)
{
    Select(e_Name, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CModel_descr_Base::IsPdb_reso(void) const
{
    return m_choice == e_Pdb_reso;
}

inline
const CModel_descr_Base::TPdb_reso& CModel_descr_Base::GetPdb_reso(void) const
{
    CheckSelected(e_Pdb_reso);
    return *m_string;
}

inline
CModel_descr_Base::TPdb_reso& CModel_descr_Base::SetPdb_reso(void)
{
    Select(e_Pdb_reso, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CModel_descr_Base::IsPdb_method(void) const
{
    return m_choice == e_Pdb_method;
}

inline
const CModel_descr_Base::TPdb_method& CModel_descr_Base::GetPdb_method(void) const
{
    CheckSelected(e_Pdb_method);
    return *m_string;
}

inline
CModel_descr_Base::TPdb_method& CModel_descr_Base::SetPdb_method(void)
{
    Select(e_Pdb_method, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CModel_descr_Base::IsPdb_comment(void) const
{
    return m_choice == e_Pdb_comment;
}

inline
const CModel_descr_Base::TPdb_comment& CModel_descr_Base::GetPdb_comment(void) const
{
    CheckSelected(e_Pdb_comment);
    return *m_string;
}

inline
CModel_descr_Base::TPdb_comment& CModel_descr_Base::SetPdb_comment(void)
{
    Select(e_Pdb_comment, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CModel_descr_Base::IsOther_comment(void) const
{
    return m_choice == e_Other_comment;
}

inline
const CModel_descr_Base::TOther_comment& CModel_descr_Base::GetOther_comment(void) const
{
    CheckSelected(e_Other_comment);
    return *m_string;
}

inline
CModel_descr_Base::TOther_comment& CModel_descr_Base::SetOther_comment(void)
{
    Select(e_Other_comment, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CModel_descr_Base::IsAttribution(void) const
{
    return m_choice == e_Attribution;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB2_MODEL_DESCR_BASE_HPP
