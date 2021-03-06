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

/// @file SeqEdit_Cmd_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqedit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQEDIT_SEQEDIT_CMD_BASE_HPP
#define OBJECTS_SEQEDIT_SEQEDIT_CMD_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CSeqEdit_Cmd_AddAnnot;
class CSeqEdit_Cmd_AddDesc;
class CSeqEdit_Cmd_AddDescr;
class CSeqEdit_Cmd_AddId;
class CSeqEdit_Cmd_AttachAnnot;
class CSeqEdit_Cmd_AttachSeq;
class CSeqEdit_Cmd_AttachSeqEntry;
class CSeqEdit_Cmd_AttachSet;
class CSeqEdit_Cmd_ChangeSeqAttr;
class CSeqEdit_Cmd_ChangeSetAttr;
class CSeqEdit_Cmd_RemoveAnnot;
class CSeqEdit_Cmd_RemoveDesc;
class CSeqEdit_Cmd_RemoveId;
class CSeqEdit_Cmd_RemoveSeqEntry;
class CSeqEdit_Cmd_ReplaceAnnot;
class CSeqEdit_Cmd_ResetDescr;
class CSeqEdit_Cmd_ResetIds;
class CSeqEdit_Cmd_ResetSeqAttr;
class CSeqEdit_Cmd_ResetSeqEntry;
class CSeqEdit_Cmd_ResetSetAttr;
class CSeqEdit_Cmd_SetDescr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///***************************************************************
class NCBI_SEQEDIT_EXPORT CSeqEdit_Cmd_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSeqEdit_Cmd_Base(void);
    // destructor
    virtual ~CSeqEdit_Cmd_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,      ///< No variant selected
        e_Add_id,           ///< Add a new seq-id to bioseq
        e_Remove_id,        ///< Remove a seq-id from bioseq
        e_Reset_ids,        ///< Reset ids field of bioseq
        e_Change_seqattr,   ///< Change bioseq's attribure
        e_Reset_seqattr,    ///< Reset bioseq's attribute
        e_Change_setattr,   ///< Change bioseq-set's attribure
        e_Reset_setattr,    ///< Reset bioseq-set's attribute
        e_Add_descr,        ///< Add descriptors to an object
        e_Set_descr,        ///< Set an objects's descriptors
        e_Reset_descr,      ///< Reset an objects's descriptors
        e_Add_desc,         ///< Add a descriptor ot an object
        e_Remove_desc,      ///< Remove a descripor from an object
        e_Attach_seq,       ///< Attach a bioseq to seq entry
        e_Attach_set,       ///< Attach a bioseq-set to seq entry
        e_Reset_seqentry,   ///< Detach an object from seq entry
        e_Attach_seqentry,  ///< Attach a seq entry to bioseq-set
        e_Remove_seqentry,  ///< Remove a seq entry from bioseq-set
        e_Attach_annot,     ///< Add a compelte annotation
        e_Remove_annot,     ///< Remove an annotation object
        e_Add_annot,        ///< Add an annotaion object
        e_Replace_annot     ///< Replace an annotation object
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 22 ///< == e_Replace_annot+1
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
    typedef CSeqEdit_Cmd_AddId TAdd_id;
    typedef CSeqEdit_Cmd_RemoveId TRemove_id;
    typedef CSeqEdit_Cmd_ResetIds TReset_ids;
    typedef CSeqEdit_Cmd_ChangeSeqAttr TChange_seqattr;
    typedef CSeqEdit_Cmd_ResetSeqAttr TReset_seqattr;
    typedef CSeqEdit_Cmd_ChangeSetAttr TChange_setattr;
    typedef CSeqEdit_Cmd_ResetSetAttr TReset_setattr;
    typedef CSeqEdit_Cmd_AddDescr TAdd_descr;
    typedef CSeqEdit_Cmd_SetDescr TSet_descr;
    typedef CSeqEdit_Cmd_ResetDescr TReset_descr;
    typedef CSeqEdit_Cmd_AddDesc TAdd_desc;
    typedef CSeqEdit_Cmd_RemoveDesc TRemove_desc;
    typedef CSeqEdit_Cmd_AttachSeq TAttach_seq;
    typedef CSeqEdit_Cmd_AttachSet TAttach_set;
    typedef CSeqEdit_Cmd_ResetSeqEntry TReset_seqentry;
    typedef CSeqEdit_Cmd_AttachSeqEntry TAttach_seqentry;
    typedef CSeqEdit_Cmd_RemoveSeqEntry TRemove_seqentry;
    typedef CSeqEdit_Cmd_AttachAnnot TAttach_annot;
    typedef CSeqEdit_Cmd_RemoveAnnot TRemove_annot;
    typedef CSeqEdit_Cmd_AddAnnot TAdd_annot;
    typedef CSeqEdit_Cmd_ReplaceAnnot TReplace_annot;

    // getters
    // setters

    // typedef CSeqEdit_Cmd_AddId TAdd_id
    bool IsAdd_id(void) const;
    const TAdd_id& GetAdd_id(void) const;
    TAdd_id& SetAdd_id(void);
    void SetAdd_id(TAdd_id& value);

    // typedef CSeqEdit_Cmd_RemoveId TRemove_id
    bool IsRemove_id(void) const;
    const TRemove_id& GetRemove_id(void) const;
    TRemove_id& SetRemove_id(void);
    void SetRemove_id(TRemove_id& value);

    // typedef CSeqEdit_Cmd_ResetIds TReset_ids
    bool IsReset_ids(void) const;
    const TReset_ids& GetReset_ids(void) const;
    TReset_ids& SetReset_ids(void);
    void SetReset_ids(TReset_ids& value);

    // typedef CSeqEdit_Cmd_ChangeSeqAttr TChange_seqattr
    bool IsChange_seqattr(void) const;
    const TChange_seqattr& GetChange_seqattr(void) const;
    TChange_seqattr& SetChange_seqattr(void);
    void SetChange_seqattr(TChange_seqattr& value);

    // typedef CSeqEdit_Cmd_ResetSeqAttr TReset_seqattr
    bool IsReset_seqattr(void) const;
    const TReset_seqattr& GetReset_seqattr(void) const;
    TReset_seqattr& SetReset_seqattr(void);
    void SetReset_seqattr(TReset_seqattr& value);

    // typedef CSeqEdit_Cmd_ChangeSetAttr TChange_setattr
    bool IsChange_setattr(void) const;
    const TChange_setattr& GetChange_setattr(void) const;
    TChange_setattr& SetChange_setattr(void);
    void SetChange_setattr(TChange_setattr& value);

    // typedef CSeqEdit_Cmd_ResetSetAttr TReset_setattr
    bool IsReset_setattr(void) const;
    const TReset_setattr& GetReset_setattr(void) const;
    TReset_setattr& SetReset_setattr(void);
    void SetReset_setattr(TReset_setattr& value);

    // typedef CSeqEdit_Cmd_AddDescr TAdd_descr
    bool IsAdd_descr(void) const;
    const TAdd_descr& GetAdd_descr(void) const;
    TAdd_descr& SetAdd_descr(void);
    void SetAdd_descr(TAdd_descr& value);

    // typedef CSeqEdit_Cmd_SetDescr TSet_descr
    bool IsSet_descr(void) const;
    const TSet_descr& GetSet_descr(void) const;
    TSet_descr& SetSet_descr(void);
    void SetSet_descr(TSet_descr& value);

    // typedef CSeqEdit_Cmd_ResetDescr TReset_descr
    bool IsReset_descr(void) const;
    const TReset_descr& GetReset_descr(void) const;
    TReset_descr& SetReset_descr(void);
    void SetReset_descr(TReset_descr& value);

    // typedef CSeqEdit_Cmd_AddDesc TAdd_desc
    bool IsAdd_desc(void) const;
    const TAdd_desc& GetAdd_desc(void) const;
    TAdd_desc& SetAdd_desc(void);
    void SetAdd_desc(TAdd_desc& value);

    // typedef CSeqEdit_Cmd_RemoveDesc TRemove_desc
    bool IsRemove_desc(void) const;
    const TRemove_desc& GetRemove_desc(void) const;
    TRemove_desc& SetRemove_desc(void);
    void SetRemove_desc(TRemove_desc& value);

    // typedef CSeqEdit_Cmd_AttachSeq TAttach_seq
    bool IsAttach_seq(void) const;
    const TAttach_seq& GetAttach_seq(void) const;
    TAttach_seq& SetAttach_seq(void);
    void SetAttach_seq(TAttach_seq& value);

    // typedef CSeqEdit_Cmd_AttachSet TAttach_set
    bool IsAttach_set(void) const;
    const TAttach_set& GetAttach_set(void) const;
    TAttach_set& SetAttach_set(void);
    void SetAttach_set(TAttach_set& value);

    // typedef CSeqEdit_Cmd_ResetSeqEntry TReset_seqentry
    bool IsReset_seqentry(void) const;
    const TReset_seqentry& GetReset_seqentry(void) const;
    TReset_seqentry& SetReset_seqentry(void);
    void SetReset_seqentry(TReset_seqentry& value);

    // typedef CSeqEdit_Cmd_AttachSeqEntry TAttach_seqentry
    bool IsAttach_seqentry(void) const;
    const TAttach_seqentry& GetAttach_seqentry(void) const;
    TAttach_seqentry& SetAttach_seqentry(void);
    void SetAttach_seqentry(TAttach_seqentry& value);

    // typedef CSeqEdit_Cmd_RemoveSeqEntry TRemove_seqentry
    bool IsRemove_seqentry(void) const;
    const TRemove_seqentry& GetRemove_seqentry(void) const;
    TRemove_seqentry& SetRemove_seqentry(void);
    void SetRemove_seqentry(TRemove_seqentry& value);

    // typedef CSeqEdit_Cmd_AttachAnnot TAttach_annot
    bool IsAttach_annot(void) const;
    const TAttach_annot& GetAttach_annot(void) const;
    TAttach_annot& SetAttach_annot(void);
    void SetAttach_annot(TAttach_annot& value);

    // typedef CSeqEdit_Cmd_RemoveAnnot TRemove_annot
    bool IsRemove_annot(void) const;
    const TRemove_annot& GetRemove_annot(void) const;
    TRemove_annot& SetRemove_annot(void);
    void SetRemove_annot(TRemove_annot& value);

    // typedef CSeqEdit_Cmd_AddAnnot TAdd_annot
    bool IsAdd_annot(void) const;
    const TAdd_annot& GetAdd_annot(void) const;
    TAdd_annot& SetAdd_annot(void);
    void SetAdd_annot(TAdd_annot& value);

    // typedef CSeqEdit_Cmd_ReplaceAnnot TReplace_annot
    bool IsReplace_annot(void) const;
    const TReplace_annot& GetReplace_annot(void) const;
    TReplace_annot& SetReplace_annot(void);
    void SetReplace_annot(TReplace_annot& value);


private:
    // copy constructor and assignment operator
    CSeqEdit_Cmd_Base(const CSeqEdit_Cmd_Base& );
    CSeqEdit_Cmd_Base& operator=(const CSeqEdit_Cmd_Base& );
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
CSeqEdit_Cmd_Base::E_Choice CSeqEdit_Cmd_Base::Which(void) const
{
    return m_choice;
}

inline
void CSeqEdit_Cmd_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSeqEdit_Cmd_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSeqEdit_Cmd_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSeqEdit_Cmd_Base::IsAdd_id(void) const
{
    return m_choice == e_Add_id;
}

inline
bool CSeqEdit_Cmd_Base::IsRemove_id(void) const
{
    return m_choice == e_Remove_id;
}

inline
bool CSeqEdit_Cmd_Base::IsReset_ids(void) const
{
    return m_choice == e_Reset_ids;
}

inline
bool CSeqEdit_Cmd_Base::IsChange_seqattr(void) const
{
    return m_choice == e_Change_seqattr;
}

inline
bool CSeqEdit_Cmd_Base::IsReset_seqattr(void) const
{
    return m_choice == e_Reset_seqattr;
}

inline
bool CSeqEdit_Cmd_Base::IsChange_setattr(void) const
{
    return m_choice == e_Change_setattr;
}

inline
bool CSeqEdit_Cmd_Base::IsReset_setattr(void) const
{
    return m_choice == e_Reset_setattr;
}

inline
bool CSeqEdit_Cmd_Base::IsAdd_descr(void) const
{
    return m_choice == e_Add_descr;
}

inline
bool CSeqEdit_Cmd_Base::IsSet_descr(void) const
{
    return m_choice == e_Set_descr;
}

inline
bool CSeqEdit_Cmd_Base::IsReset_descr(void) const
{
    return m_choice == e_Reset_descr;
}

inline
bool CSeqEdit_Cmd_Base::IsAdd_desc(void) const
{
    return m_choice == e_Add_desc;
}

inline
bool CSeqEdit_Cmd_Base::IsRemove_desc(void) const
{
    return m_choice == e_Remove_desc;
}

inline
bool CSeqEdit_Cmd_Base::IsAttach_seq(void) const
{
    return m_choice == e_Attach_seq;
}

inline
bool CSeqEdit_Cmd_Base::IsAttach_set(void) const
{
    return m_choice == e_Attach_set;
}

inline
bool CSeqEdit_Cmd_Base::IsReset_seqentry(void) const
{
    return m_choice == e_Reset_seqentry;
}

inline
bool CSeqEdit_Cmd_Base::IsAttach_seqentry(void) const
{
    return m_choice == e_Attach_seqentry;
}

inline
bool CSeqEdit_Cmd_Base::IsRemove_seqentry(void) const
{
    return m_choice == e_Remove_seqentry;
}

inline
bool CSeqEdit_Cmd_Base::IsAttach_annot(void) const
{
    return m_choice == e_Attach_annot;
}

inline
bool CSeqEdit_Cmd_Base::IsRemove_annot(void) const
{
    return m_choice == e_Remove_annot;
}

inline
bool CSeqEdit_Cmd_Base::IsAdd_annot(void) const
{
    return m_choice == e_Add_annot;
}

inline
bool CSeqEdit_Cmd_Base::IsReplace_annot(void) const
{
    return m_choice == e_Replace_annot;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQEDIT_SEQEDIT_CMD_BASE_HPP
