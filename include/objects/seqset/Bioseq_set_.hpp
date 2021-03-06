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

/// @file Bioseq_set_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqset.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQSET_BIOSEQ_SET_BASE_HPP
#define OBJECTS_SEQSET_BIOSEQ_SET_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CDate;
class CDbtag;
class CObject_id;
class CSeq_annot;
class CSeq_descr;
class CSeq_entry;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///*** Sequence Collections ********************************
///*
/// just a collection
class NCBI_SEQSET_EXPORT CBioseq_set_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBioseq_set_Base(void);
    // destructor
    virtual ~CBioseq_set_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EClass {
        eClass_not_set          =   0,
        eClass_nuc_prot         =   1,  ///< nuc acid and coded proteins
        eClass_segset           =   2,  ///< segmented sequence + parts
        eClass_conset           =   3,  ///< constructed sequence + parts
        eClass_parts            =   4,  ///< parts for 2 or 3
        eClass_gibb             =   5,  ///< geninfo backbone
        eClass_gi               =   6,  ///< geninfo
        eClass_genbank          =   7,  ///< converted genbank
        eClass_pir              =   8,  ///< converted pir
        eClass_pub_set          =   9,  ///< all the seqs from a single publication
        eClass_equiv            =  10,  ///< a set of equivalent maps or seqs
        eClass_swissprot        =  11,  ///< converted SWISSPROT
        eClass_pdb_entry        =  12,  ///< a complete PDB entry
        eClass_mut_set          =  13,  ///< set of mutations
        eClass_pop_set          =  14,  ///< population study
        eClass_phy_set          =  15,  ///< phylogenetic study
        eClass_eco_set          =  16,  ///< ecological sample study
        eClass_gen_prod_set     =  17,  ///< genomic products, chrom+mRNA+protein
        eClass_wgs_set          =  18,  ///< whole genome shotgun project
        eClass_named_annot      =  19,  ///< named annotation set
        eClass_named_annot_prod =  20,  ///< with instantiated mRNA+protein
        eClass_read_set         =  21,  ///< set from a single read
        eClass_paired_end_reads =  22,  ///< paired sequences within a read-set
        eClass_small_genome_set =  23,  ///< viral segments or mitochondrial minicircles
        eClass_other            = 255
    };
    
    /// Access to EClass's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EClass)(void);
    
    // types
    typedef CObject_id TId;
    typedef CDbtag TColl;
    typedef int TLevel;
    typedef EClass TClass;
    typedef string TRelease;
    typedef CDate TDate;
    typedef CSeq_descr TDescr;
    typedef list< CRef< CSeq_entry > > TSeq_set;
    typedef list< CRef< CSeq_annot > > TAnnot;

    // getters
    // setters

    /// optional
    /// typedef CObject_id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(TId& value);
    TId& SetId(void);

    /// to identify a collection
    /// optional
    /// typedef CDbtag TColl
    ///  Check whether the Coll data member has been assigned a value.
    bool IsSetColl(void) const;
    /// Check whether it is safe or not to call GetColl method.
    bool CanGetColl(void) const;
    void ResetColl(void);
    const TColl& GetColl(void) const;
    void SetColl(TColl& value);
    TColl& SetColl(void);

    /// nesting level
    /// optional
    /// typedef int TLevel
    ///  Check whether the Level data member has been assigned a value.
    bool IsSetLevel(void) const;
    /// Check whether it is safe or not to call GetLevel method.
    bool CanGetLevel(void) const;
    void ResetLevel(void);
    TLevel GetLevel(void) const;
    void SetLevel(TLevel value);
    TLevel& SetLevel(void);

    /// optional with default eClass_not_set
    /// typedef EClass TClass
    ///  Check whether the Class data member has been assigned a value.
    bool IsSetClass(void) const;
    /// Check whether it is safe or not to call GetClass method.
    bool CanGetClass(void) const;
    void ResetClass(void);
    void SetDefaultClass(void);
    TClass GetClass(void) const;
    void SetClass(TClass value);
    TClass& SetClass(void);

    /// optional
    /// typedef string TRelease
    ///  Check whether the Release data member has been assigned a value.
    bool IsSetRelease(void) const;
    /// Check whether it is safe or not to call GetRelease method.
    bool CanGetRelease(void) const;
    void ResetRelease(void);
    const TRelease& GetRelease(void) const;
    void SetRelease(const TRelease& value);
    TRelease& SetRelease(void);

    /// optional
    /// typedef CDate TDate
    ///  Check whether the Date data member has been assigned a value.
    bool IsSetDate(void) const;
    /// Check whether it is safe or not to call GetDate method.
    bool CanGetDate(void) const;
    void ResetDate(void);
    const TDate& GetDate(void) const;
    void SetDate(TDate& value);
    TDate& SetDate(void);

    /// optional
    /// typedef CSeq_descr TDescr
    ///  Check whether the Descr data member has been assigned a value.
    bool IsSetDescr(void) const;
    /// Check whether it is safe or not to call GetDescr method.
    bool CanGetDescr(void) const;
    void ResetDescr(void);
    const TDescr& GetDescr(void) const;
    void SetDescr(TDescr& value);
    TDescr& SetDescr(void);

    /// mandatory
    /// typedef list< CRef< CSeq_entry > > TSeq_set
    ///  Check whether the Seq_set data member has been assigned a value.
    bool IsSetSeq_set(void) const;
    /// Check whether it is safe or not to call GetSeq_set method.
    bool CanGetSeq_set(void) const;
    void ResetSeq_set(void);
    const TSeq_set& GetSeq_set(void) const;
    TSeq_set& SetSeq_set(void);

    /// optional
    /// typedef list< CRef< CSeq_annot > > TAnnot
    ///  Check whether the Annot data member has been assigned a value.
    bool IsSetAnnot(void) const;
    /// Check whether it is safe or not to call GetAnnot method.
    bool CanGetAnnot(void) const;
    void ResetAnnot(void);
    const TAnnot& GetAnnot(void) const;
    TAnnot& SetAnnot(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBioseq_set_Base(const CBioseq_set_Base&);
    CBioseq_set_Base& operator=(const CBioseq_set_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TId > m_Id;
    CRef< TColl > m_Coll;
    int m_Level;
    EClass m_Class;
    string m_Release;
    CRef< TDate > m_Date;
    CRef< TDescr > m_Descr;
    list< CRef< CSeq_entry > > m_Seq_set;
    list< CRef< CSeq_annot > > m_Annot;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBioseq_set_Base::IsSetId(void) const
{
    return m_Id.NotEmpty();
}

inline
bool CBioseq_set_Base::CanGetId(void) const
{
    return IsSetId();
}

inline
const CBioseq_set_Base::TId& CBioseq_set_Base::GetId(void) const
{
    if (!CanGetId()) {
        ThrowUnassigned(0);
    }
    return (*m_Id);
}

inline
bool CBioseq_set_Base::IsSetColl(void) const
{
    return m_Coll.NotEmpty();
}

inline
bool CBioseq_set_Base::CanGetColl(void) const
{
    return IsSetColl();
}

inline
const CBioseq_set_Base::TColl& CBioseq_set_Base::GetColl(void) const
{
    if (!CanGetColl()) {
        ThrowUnassigned(1);
    }
    return (*m_Coll);
}

inline
bool CBioseq_set_Base::IsSetLevel(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CBioseq_set_Base::CanGetLevel(void) const
{
    return IsSetLevel();
}

inline
void CBioseq_set_Base::ResetLevel(void)
{
    m_Level = 0;
    m_set_State[0] &= ~0x30;
}

inline
CBioseq_set_Base::TLevel CBioseq_set_Base::GetLevel(void) const
{
    if (!CanGetLevel()) {
        ThrowUnassigned(2);
    }
    return m_Level;
}

inline
void CBioseq_set_Base::SetLevel(CBioseq_set_Base::TLevel value)
{
    m_Level = value;
    m_set_State[0] |= 0x30;
}

inline
CBioseq_set_Base::TLevel& CBioseq_set_Base::SetLevel(void)
{
#ifdef _DEBUG
    if (!IsSetLevel()) {
        memset(&m_Level,UnassignedByte(),sizeof(m_Level));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Level;
}

inline
bool CBioseq_set_Base::IsSetClass(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CBioseq_set_Base::CanGetClass(void) const
{
    return true;
}

inline
void CBioseq_set_Base::ResetClass(void)
{
    m_Class = eClass_not_set;
    m_set_State[0] &= ~0xc0;
}

inline
void CBioseq_set_Base::SetDefaultClass(void)
{
    ResetClass();
}

inline
CBioseq_set_Base::TClass CBioseq_set_Base::GetClass(void) const
{
    return m_Class;
}

inline
void CBioseq_set_Base::SetClass(CBioseq_set_Base::TClass value)
{
    m_Class = value;
    m_set_State[0] |= 0xc0;
}

inline
CBioseq_set_Base::TClass& CBioseq_set_Base::SetClass(void)
{
#ifdef _DEBUG
    if (!IsSetClass()) {
        memset(&m_Class,UnassignedByte(),sizeof(m_Class));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Class;
}

inline
bool CBioseq_set_Base::IsSetRelease(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CBioseq_set_Base::CanGetRelease(void) const
{
    return IsSetRelease();
}

inline
const CBioseq_set_Base::TRelease& CBioseq_set_Base::GetRelease(void) const
{
    if (!CanGetRelease()) {
        ThrowUnassigned(4);
    }
    return m_Release;
}

inline
void CBioseq_set_Base::SetRelease(const CBioseq_set_Base::TRelease& value)
{
    m_Release = value;
    m_set_State[0] |= 0x300;
}

inline
CBioseq_set_Base::TRelease& CBioseq_set_Base::SetRelease(void)
{
#ifdef _DEBUG
    if (!IsSetRelease()) {
        m_Release = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Release;
}

inline
bool CBioseq_set_Base::IsSetDate(void) const
{
    return m_Date.NotEmpty();
}

inline
bool CBioseq_set_Base::CanGetDate(void) const
{
    return IsSetDate();
}

inline
const CBioseq_set_Base::TDate& CBioseq_set_Base::GetDate(void) const
{
    if (!CanGetDate()) {
        ThrowUnassigned(5);
    }
    return (*m_Date);
}

inline
bool CBioseq_set_Base::IsSetDescr(void) const
{
    return m_Descr.NotEmpty();
}

inline
bool CBioseq_set_Base::CanGetDescr(void) const
{
    return IsSetDescr();
}

inline
const CBioseq_set_Base::TDescr& CBioseq_set_Base::GetDescr(void) const
{
    if (!CanGetDescr()) {
        ThrowUnassigned(6);
    }
    return (*m_Descr);
}

inline
bool CBioseq_set_Base::IsSetSeq_set(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CBioseq_set_Base::CanGetSeq_set(void) const
{
    return true;
}

inline
const CBioseq_set_Base::TSeq_set& CBioseq_set_Base::GetSeq_set(void) const
{
    return m_Seq_set;
}

inline
CBioseq_set_Base::TSeq_set& CBioseq_set_Base::SetSeq_set(void)
{
    m_set_State[0] |= 0x4000;
    return m_Seq_set;
}

inline
bool CBioseq_set_Base::IsSetAnnot(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CBioseq_set_Base::CanGetAnnot(void) const
{
    return true;
}

inline
const CBioseq_set_Base::TAnnot& CBioseq_set_Base::GetAnnot(void) const
{
    return m_Annot;
}

inline
CBioseq_set_Base::TAnnot& CBioseq_set_Base::SetAnnot(void)
{
    m_set_State[0] |= 0x10000;
    return m_Annot;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSET_BIOSEQ_SET_BASE_HPP
