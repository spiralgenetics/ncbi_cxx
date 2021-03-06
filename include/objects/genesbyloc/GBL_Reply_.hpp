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

/// @file GBL_Reply_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'genesbyloc.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENESBYLOC_GBL_REPLY_BASE_HPP
#define OBJECTS_GENESBYLOC_GBL_REPLY_BASE_HPP

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
class CGBL_Data;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_GENESBYLOC_EXPORT CGBL_Reply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGBL_Reply_Base(void);
    // destructor
    virtual ~CGBL_Reply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,  ///< No variant selected
        e_Data,
        e_Error
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 3 ///< == e_Error+1
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
    typedef CGBL_Data TData;
    typedef string TError;

    // getters
    // setters

    // typedef CGBL_Data TData
    bool IsData(void) const;
    const TData& GetData(void) const;
    TData& SetData(void);
    void SetData(TData& value);

    // typedef string TError
    bool IsError(void) const;
    const TError& GetError(void) const;
    TError& SetError(void);
    void SetError(const TError& value);


private:
    // copy constructor and assignment operator
    CGBL_Reply_Base(const CGBL_Reply_Base& );
    CGBL_Reply_Base& operator=(const CGBL_Reply_Base& );
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
CGBL_Reply_Base::E_Choice CGBL_Reply_Base::Which(void) const
{
    return m_choice;
}

inline
void CGBL_Reply_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CGBL_Reply_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CGBL_Reply_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CGBL_Reply_Base::IsData(void) const
{
    return m_choice == e_Data;
}

inline
bool CGBL_Reply_Base::IsError(void) const
{
    return m_choice == e_Error;
}

inline
const CGBL_Reply_Base::TError& CGBL_Reply_Base::GetError(void) const
{
    CheckSelected(e_Error);
    return *m_string;
}

inline
CGBL_Reply_Base::TError& CGBL_Reply_Base::SetError(void)
{
    Select(e_Error, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENESBYLOC_GBL_REPLY_BASE_HPP
