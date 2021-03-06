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

/// @file RNA_ref_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_RNA_REF_BASE_HPP
#define OBJECTS_SEQFEAT_RNA_REF_BASE_HPP

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
class CRNA_gen;
class CTrna_ext;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///*** rnas ***********************************************
///*
///*  various rnas
///*
/// minimal RNA sequence
class NCBI_SEQFEAT_EXPORT CRNA_ref_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CRNA_ref_Base(void);
    // destructor
    virtual ~CRNA_ref_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// type of RNA feature
    enum EType {
        eType_unknown =   0,
        eType_premsg  =   1,
        eType_mRNA    =   2,
        eType_tRNA    =   3,
        eType_rRNA    =   4,
        eType_snRNA   =   5,  ///< will become ncRNA, with RNA-gen.class = snRNA
        eType_scRNA   =   6,  ///< will become ncRNA, with RNA-gen.class = scRNA
        eType_snoRNA  =   7,  ///< will become ncRNA, with RNA-gen.class = snoRNA
        eType_ncRNA   =   8,  ///< non-coding RNA; subsumes snRNA, scRNA, snoRNA
        eType_tmRNA   =   9,
        eType_miscRNA =  10,
        eType_other   = 255
    };
    
    /// Access to EType's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EType)(void);
    
    /////////////////////////////////////////////////////////////////////////////
    class NCBI_SEQFEAT_EXPORT C_Ext : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Ext(void);
        // destructor
        ~C_Ext(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Name,         ///< for naming "other" type
            e_TRNA,         ///< for tRNAs
            e_Gen
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 4 ///< == e_Gen+1
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
        typedef string TName;
        typedef CTrna_ext TTRNA;
        typedef CRNA_gen TGen;
    
        // getters
        // setters
    
        // typedef string TName
        bool IsName(void) const;
        const TName& GetName(void) const;
        TName& SetName(void);
        void SetName(const TName& value);
    
        // typedef CTrna_ext TTRNA
        bool IsTRNA(void) const;
        const TTRNA& GetTRNA(void) const;
        TTRNA& SetTRNA(void);
        void SetTRNA(TTRNA& value);
    
        // typedef CRNA_gen TGen
        bool IsGen(void) const;
        const TGen& GetGen(void) const;
        TGen& SetGen(void);
        void SetGen(TGen& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Ext(const C_Ext& );
        C_Ext& operator=(const C_Ext& );
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
    // types
    typedef EType TType;
    typedef bool TPseudo;
    typedef C_Ext TExt;

    // getters
    // setters

    /// mandatory
    /// typedef EType TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// optional
    /// typedef bool TPseudo
    ///  Check whether the Pseudo data member has been assigned a value.
    bool IsSetPseudo(void) const;
    /// Check whether it is safe or not to call GetPseudo method.
    bool CanGetPseudo(void) const;
    void ResetPseudo(void);
    TPseudo GetPseudo(void) const;
    void SetPseudo(TPseudo value);
    TPseudo& SetPseudo(void);

    /// generic fields for ncRNA, tmRNA, miscRNA
    /// optional
    /// typedef C_Ext TExt
    ///  Check whether the Ext data member has been assigned a value.
    bool IsSetExt(void) const;
    /// Check whether it is safe or not to call GetExt method.
    bool CanGetExt(void) const;
    void ResetExt(void);
    const TExt& GetExt(void) const;
    void SetExt(TExt& value);
    TExt& SetExt(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CRNA_ref_Base(const CRNA_ref_Base&);
    CRNA_ref_Base& operator=(const CRNA_ref_Base&);

    // data
    Uint4 m_set_State[1];
    EType m_Type;
    bool m_Pseudo;
    CRef< TExt > m_Ext;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CRNA_ref_Base::C_Ext::E_Choice CRNA_ref_Base::C_Ext::Which(void) const
{
    return m_choice;
}

inline
void CRNA_ref_Base::C_Ext::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CRNA_ref_Base::C_Ext::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CRNA_ref_Base::C_Ext::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CRNA_ref_Base::C_Ext::IsName(void) const
{
    return m_choice == e_Name;
}

inline
const CRNA_ref_Base::C_Ext::TName& CRNA_ref_Base::C_Ext::GetName(void) const
{
    CheckSelected(e_Name);
    return *m_string;
}

inline
CRNA_ref_Base::C_Ext::TName& CRNA_ref_Base::C_Ext::SetName(void)
{
    Select(e_Name, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CRNA_ref_Base::C_Ext::IsTRNA(void) const
{
    return m_choice == e_TRNA;
}

inline
bool CRNA_ref_Base::C_Ext::IsGen(void) const
{
    return m_choice == e_Gen;
}

inline
bool CRNA_ref_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CRNA_ref_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CRNA_ref_Base::ResetType(void)
{
    m_Type = (EType)(0);
    m_set_State[0] &= ~0x3;
}

inline
CRNA_ref_Base::TType CRNA_ref_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(0);
    }
    return m_Type;
}

inline
void CRNA_ref_Base::SetType(CRNA_ref_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0x3;
}

inline
CRNA_ref_Base::TType& CRNA_ref_Base::SetType(void)
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
bool CRNA_ref_Base::IsSetPseudo(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CRNA_ref_Base::CanGetPseudo(void) const
{
    return IsSetPseudo();
}

inline
void CRNA_ref_Base::ResetPseudo(void)
{
    m_Pseudo = 0;
    m_set_State[0] &= ~0xc;
}

inline
CRNA_ref_Base::TPseudo CRNA_ref_Base::GetPseudo(void) const
{
    if (!CanGetPseudo()) {
        ThrowUnassigned(1);
    }
    return m_Pseudo;
}

inline
void CRNA_ref_Base::SetPseudo(CRNA_ref_Base::TPseudo value)
{
    m_Pseudo = value;
    m_set_State[0] |= 0xc;
}

inline
CRNA_ref_Base::TPseudo& CRNA_ref_Base::SetPseudo(void)
{
#ifdef _DEBUG
    if (!IsSetPseudo()) {
        memset(&m_Pseudo,UnassignedByte(),sizeof(m_Pseudo));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Pseudo;
}

inline
bool CRNA_ref_Base::IsSetExt(void) const
{
    return m_Ext.NotEmpty();
}

inline
bool CRNA_ref_Base::CanGetExt(void) const
{
    return IsSetExt();
}

inline
const CRNA_ref_Base::TExt& CRNA_ref_Base::GetExt(void) const
{
    if (!CanGetExt()) {
        ThrowUnassigned(2);
    }
    return (*m_Ext);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_RNA_REF_BASE_HPP
