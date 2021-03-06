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

/// @file SeqEdit_Cmd_ReplaceAnnot_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqedit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQEDIT_SEQEDIT_CMD_REPLACEANNOT_BASE_HPP
#define OBJECTS_SEQEDIT_SEQEDIT_CMD_REPLACEANNOT_BASE_HPP

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
class CSeqEdit_Id;
class CSeq_align;
class CSeq_feat;
class CSeq_graph;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Replace an annotation object of a bioseq or a bioseq-set
class NCBI_SEQEDIT_EXPORT CSeqEdit_Cmd_ReplaceAnnot_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSeqEdit_Cmd_ReplaceAnnot_Base(void);
    // destructor
    virtual ~CSeqEdit_Cmd_ReplaceAnnot_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_SEQEDIT_EXPORT C_Data : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Data(void);
        // destructor
        ~C_Data(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
        /////////////////////////////////////////////////////////////////////////////
        class NCBI_SEQEDIT_EXPORT C_Feat : public CSerialObject
        {
            typedef CSerialObject Tparent;
        public:
            // constructor
            C_Feat(void);
            // destructor
            ~C_Feat(void);
        
            // type info
            DECLARE_INTERNAL_TYPE_INFO();
        
            // types
            typedef CSeq_feat TOvalue;
            typedef CSeq_feat TNvalue;
        
            // getters
            // setters
        
            /// old value
            /// mandatory
            /// typedef CSeq_feat TOvalue
            ///  Check whether the Ovalue data member has been assigned a value.
            bool IsSetOvalue(void) const;
            /// Check whether it is safe or not to call GetOvalue method.
            bool CanGetOvalue(void) const;
            void ResetOvalue(void);
            const TOvalue& GetOvalue(void) const;
            void SetOvalue(TOvalue& value);
            TOvalue& SetOvalue(void);
        
            /// new value
            /// mandatory
            /// typedef CSeq_feat TNvalue
            ///  Check whether the Nvalue data member has been assigned a value.
            bool IsSetNvalue(void) const;
            /// Check whether it is safe or not to call GetNvalue method.
            bool CanGetNvalue(void) const;
            void ResetNvalue(void);
            const TNvalue& GetNvalue(void) const;
            void SetNvalue(TNvalue& value);
            TNvalue& SetNvalue(void);
        
            /// Reset the whole object
            void Reset(void);
        
        
        private:
            // Prohibit copy constructor and assignment operator
            C_Feat(const C_Feat&);
            C_Feat& operator=(const C_Feat&);
        
            // data
            Uint4 m_set_State[1];
            CRef< TOvalue > m_Ovalue;
            CRef< TNvalue > m_Nvalue;
        };
        /////////////////////////////////////////////////////////////////////////////
        class NCBI_SEQEDIT_EXPORT C_Align : public CSerialObject
        {
            typedef CSerialObject Tparent;
        public:
            // constructor
            C_Align(void);
            // destructor
            ~C_Align(void);
        
            // type info
            DECLARE_INTERNAL_TYPE_INFO();
        
            // types
            typedef CSeq_align TOvalue;
            typedef CSeq_align TNvalue;
        
            // getters
            // setters
        
            /// old value
            /// mandatory
            /// typedef CSeq_align TOvalue
            ///  Check whether the Ovalue data member has been assigned a value.
            bool IsSetOvalue(void) const;
            /// Check whether it is safe or not to call GetOvalue method.
            bool CanGetOvalue(void) const;
            void ResetOvalue(void);
            const TOvalue& GetOvalue(void) const;
            void SetOvalue(TOvalue& value);
            TOvalue& SetOvalue(void);
        
            /// new value
            /// mandatory
            /// typedef CSeq_align TNvalue
            ///  Check whether the Nvalue data member has been assigned a value.
            bool IsSetNvalue(void) const;
            /// Check whether it is safe or not to call GetNvalue method.
            bool CanGetNvalue(void) const;
            void ResetNvalue(void);
            const TNvalue& GetNvalue(void) const;
            void SetNvalue(TNvalue& value);
            TNvalue& SetNvalue(void);
        
            /// Reset the whole object
            void Reset(void);
        
        
        private:
            // Prohibit copy constructor and assignment operator
            C_Align(const C_Align&);
            C_Align& operator=(const C_Align&);
        
            // data
            Uint4 m_set_State[1];
            CRef< TOvalue > m_Ovalue;
            CRef< TNvalue > m_Nvalue;
        };
        /////////////////////////////////////////////////////////////////////////////
        class NCBI_SEQEDIT_EXPORT C_Graph : public CSerialObject
        {
            typedef CSerialObject Tparent;
        public:
            // constructor
            C_Graph(void);
            // destructor
            ~C_Graph(void);
        
            // type info
            DECLARE_INTERNAL_TYPE_INFO();
        
            // types
            typedef CSeq_graph TOvalue;
            typedef CSeq_graph TNvalue;
        
            // getters
            // setters
        
            /// old value
            /// mandatory
            /// typedef CSeq_graph TOvalue
            ///  Check whether the Ovalue data member has been assigned a value.
            bool IsSetOvalue(void) const;
            /// Check whether it is safe or not to call GetOvalue method.
            bool CanGetOvalue(void) const;
            void ResetOvalue(void);
            const TOvalue& GetOvalue(void) const;
            void SetOvalue(TOvalue& value);
            TOvalue& SetOvalue(void);
        
            /// new value
            /// mandatory
            /// typedef CSeq_graph TNvalue
            ///  Check whether the Nvalue data member has been assigned a value.
            bool IsSetNvalue(void) const;
            /// Check whether it is safe or not to call GetNvalue method.
            bool CanGetNvalue(void) const;
            void ResetNvalue(void);
            const TNvalue& GetNvalue(void) const;
            void SetNvalue(TNvalue& value);
            TNvalue& SetNvalue(void);
        
            /// Reset the whole object
            void Reset(void);
        
        
        private:
            // Prohibit copy constructor and assignment operator
            C_Graph(const C_Graph&);
            C_Graph& operator=(const C_Graph&);
        
            // data
            Uint4 m_set_State[1];
            CRef< TOvalue > m_Ovalue;
            CRef< TNvalue > m_Nvalue;
        };
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Feat,
            e_Align,
            e_Graph
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 4 ///< == e_Graph+1
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
        typedef C_Feat TFeat;
        typedef C_Align TAlign;
        typedef C_Graph TGraph;
    
        // getters
        // setters
    
        // typedef C_Feat TFeat
        bool IsFeat(void) const;
        const TFeat& GetFeat(void) const;
        TFeat& SetFeat(void);
        void SetFeat(TFeat& value);
    
        // typedef C_Align TAlign
        bool IsAlign(void) const;
        const TAlign& GetAlign(void) const;
        TAlign& SetAlign(void);
        void SetAlign(TAlign& value);
    
        // typedef C_Graph TGraph
        bool IsGraph(void) const;
        const TGraph& GetGraph(void) const;
        TGraph& SetGraph(void);
        void SetGraph(TGraph& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Data(const C_Data& );
        C_Data& operator=(const C_Data& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
    // types
    typedef CSeqEdit_Id TId;
    typedef string TName;
    typedef bool TNamed;
    typedef C_Data TData;

    // getters
    // setters

    /// Bioseq or Bioseq_set id
    /// mandatory
    /// typedef CSeqEdit_Id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(TId& value);
    TId& SetId(void);

    /// Annotation's name
    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// TRUE if an annotation is named
    /// mandatory
    /// typedef bool TNamed
    ///  Check whether the Named data member has been assigned a value.
    bool IsSetNamed(void) const;
    /// Check whether it is safe or not to call GetNamed method.
    bool CanGetNamed(void) const;
    void ResetNamed(void);
    TNamed GetNamed(void) const;
    void SetNamed(TNamed value);
    TNamed& SetNamed(void);

    /// mandatory
    /// typedef C_Data TData
    ///  Check whether the Data data member has been assigned a value.
    bool IsSetData(void) const;
    /// Check whether it is safe or not to call GetData method.
    bool CanGetData(void) const;
    void ResetData(void);
    const TData& GetData(void) const;
    void SetData(TData& value);
    TData& SetData(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSeqEdit_Cmd_ReplaceAnnot_Base(const CSeqEdit_Cmd_ReplaceAnnot_Base&);
    CSeqEdit_Cmd_ReplaceAnnot_Base& operator=(const CSeqEdit_Cmd_ReplaceAnnot_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TId > m_Id;
    string m_Name;
    bool m_Named;
    CRef< TData > m_Data;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::IsSetOvalue(void) const
{
    return m_Ovalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::CanGetOvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::GetOvalue(void) const
{
    if ( !m_Ovalue ) {
        const_cast<C_Feat*>(this)->ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::SetOvalue(void)
{
    if ( !m_Ovalue ) {
        ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::IsSetNvalue(void) const
{
    return m_Nvalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::CanGetNvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::GetNvalue(void) const
{
    if ( !m_Nvalue ) {
        const_cast<C_Feat*>(this)->ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Feat::SetNvalue(void)
{
    if ( !m_Nvalue ) {
        ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::IsSetOvalue(void) const
{
    return m_Ovalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::CanGetOvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::GetOvalue(void) const
{
    if ( !m_Ovalue ) {
        const_cast<C_Align*>(this)->ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::SetOvalue(void)
{
    if ( !m_Ovalue ) {
        ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::IsSetNvalue(void) const
{
    return m_Nvalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::CanGetNvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::GetNvalue(void) const
{
    if ( !m_Nvalue ) {
        const_cast<C_Align*>(this)->ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Align::SetNvalue(void)
{
    if ( !m_Nvalue ) {
        ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::IsSetOvalue(void) const
{
    return m_Ovalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::CanGetOvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::GetOvalue(void) const
{
    if ( !m_Ovalue ) {
        const_cast<C_Graph*>(this)->ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::TOvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::SetOvalue(void)
{
    if ( !m_Ovalue ) {
        ResetOvalue();
    }
    return (*m_Ovalue);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::IsSetNvalue(void) const
{
    return m_Nvalue.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::CanGetNvalue(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::GetNvalue(void) const
{
    if ( !m_Nvalue ) {
        const_cast<C_Graph*>(this)->ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::TNvalue& CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::C_Graph::SetNvalue(void)
{
    if ( !m_Nvalue ) {
        ResetNvalue();
    }
    return (*m_Nvalue);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::E_Choice CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::Which(void) const
{
    return m_choice;
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::IsFeat(void) const
{
    return m_choice == e_Feat;
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::IsAlign(void) const
{
    return m_choice == e_Align;
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::C_Data::IsGraph(void) const
{
    return m_choice == e_Graph;
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::IsSetId(void) const
{
    return m_Id.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::CanGetId(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::TId& CSeqEdit_Cmd_ReplaceAnnot_Base::GetId(void) const
{
    if ( !m_Id ) {
        const_cast<CSeqEdit_Cmd_ReplaceAnnot_Base*>(this)->ResetId();
    }
    return (*m_Id);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::TId& CSeqEdit_Cmd_ReplaceAnnot_Base::SetId(void)
{
    if ( !m_Id ) {
        ResetId();
    }
    return (*m_Id);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::TName& CSeqEdit_Cmd_ReplaceAnnot_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(1);
    }
    return m_Name;
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::SetName(const CSeqEdit_Cmd_ReplaceAnnot_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0xc;
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::TName& CSeqEdit_Cmd_ReplaceAnnot_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Name;
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::IsSetNamed(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::CanGetNamed(void) const
{
    return IsSetNamed();
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::ResetNamed(void)
{
    m_Named = 0;
    m_set_State[0] &= ~0x30;
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::TNamed CSeqEdit_Cmd_ReplaceAnnot_Base::GetNamed(void) const
{
    if (!CanGetNamed()) {
        ThrowUnassigned(2);
    }
    return m_Named;
}

inline
void CSeqEdit_Cmd_ReplaceAnnot_Base::SetNamed(CSeqEdit_Cmd_ReplaceAnnot_Base::TNamed value)
{
    m_Named = value;
    m_set_State[0] |= 0x30;
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::TNamed& CSeqEdit_Cmd_ReplaceAnnot_Base::SetNamed(void)
{
#ifdef _DEBUG
    if (!IsSetNamed()) {
        memset(&m_Named,UnassignedByte(),sizeof(m_Named));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Named;
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::IsSetData(void) const
{
    return m_Data.NotEmpty();
}

inline
bool CSeqEdit_Cmd_ReplaceAnnot_Base::CanGetData(void) const
{
    return true;
}

inline
const CSeqEdit_Cmd_ReplaceAnnot_Base::TData& CSeqEdit_Cmd_ReplaceAnnot_Base::GetData(void) const
{
    if ( !m_Data ) {
        const_cast<CSeqEdit_Cmd_ReplaceAnnot_Base*>(this)->ResetData();
    }
    return (*m_Data);
}

inline
CSeqEdit_Cmd_ReplaceAnnot_Base::TData& CSeqEdit_Cmd_ReplaceAnnot_Base::SetData(void)
{
    if ( !m_Data ) {
        ResetData();
    }
    return (*m_Data);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQEDIT_SEQEDIT_CMD_REPLACEANNOT_BASE_HPP
