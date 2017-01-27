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

/// @file SeqTable_multi_data_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqtable.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQTABLE_SEQTABLE_MULTI_DATA_BASE_HPP
#define OBJECTS_SEQTABLE_SEQTABLE_MULTI_DATA_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <vector>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCommonBytes_table;
class CCommonString_table;
class CSeq_id;
class CSeq_interval;
class CSeq_loc;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQ_EXPORT CSeqTable_multi_data_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSeqTable_multi_data_Base(void);
    // destructor
    virtual ~CSeqTable_multi_data_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();


    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,    ///< No variant selected
        e_Int,            ///< a set of integers, one per row
        e_Real,           ///< a set of reals, one per row
        e_String,         ///< a set of strings, one per row
        e_Bytes,          ///< a set of byte arrays, one per row
        e_Common_string,  ///< a set of string with small set of possible values
        e_Common_bytes,   ///< a set of byte arrays with small set of possible values
        e_Bit,            ///< a set of bits, one per row  this uses bm::bvector<> as its storage mechanism
        e_Loc,            ///< a set of locations, one per row
        e_Id,
        e_Interval
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 11 ///< == e_Interval+1
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
    typedef vector< int > TInt;
    typedef vector< double > TReal;
    typedef vector< CStringUTF8 > TString;
    typedef vector< vector< char >* > TBytes;
    typedef CCommonString_table TCommon_string;
    typedef CCommonBytes_table TCommon_bytes;
    typedef vector< char > TBit;
    typedef vector< CRef< CSeq_loc > > TLoc;
    typedef vector< CRef< CSeq_id > > TId;
    typedef vector< CRef< CSeq_interval > > TInterval;

    // getters
    // setters

    // typedef vector< int > TInt
    bool IsInt(void) const;
    const TInt& GetInt(void) const;
    TInt& SetInt(void);

    // typedef vector< double > TReal
    bool IsReal(void) const;
    const TReal& GetReal(void) const;
    TReal& SetReal(void);

    // typedef vector< CStringUTF8 > TString
    bool IsString(void) const;
    const TString& GetString(void) const;
    TString& SetString(void);

    // typedef vector< vector< char >* > TBytes
    bool IsBytes(void) const;
    const TBytes& GetBytes(void) const;
    TBytes& SetBytes(void);

    // typedef CCommonString_table TCommon_string
    bool IsCommon_string(void) const;
    const TCommon_string& GetCommon_string(void) const;
    TCommon_string& SetCommon_string(void);
    void SetCommon_string(TCommon_string& value);

    // typedef CCommonBytes_table TCommon_bytes
    bool IsCommon_bytes(void) const;
    const TCommon_bytes& GetCommon_bytes(void) const;
    TCommon_bytes& SetCommon_bytes(void);
    void SetCommon_bytes(TCommon_bytes& value);

    // typedef vector< char > TBit
    bool IsBit(void) const;
    const TBit& GetBit(void) const;
    TBit& SetBit(void);

    // typedef vector< CRef< CSeq_loc > > TLoc
    bool IsLoc(void) const;
    const TLoc& GetLoc(void) const;
    TLoc& SetLoc(void);

    // typedef vector< CRef< CSeq_id > > TId
    bool IsId(void) const;
    const TId& GetId(void) const;
    TId& SetId(void);

    // typedef vector< CRef< CSeq_interval > > TInterval
    bool IsInterval(void) const;
    const TInterval& GetInterval(void) const;
    TInterval& SetInterval(void);


private:
    // copy constructor and assignment operator
    CSeqTable_multi_data_Base(const CSeqTable_multi_data_Base& );
    CSeqTable_multi_data_Base& operator=(const CSeqTable_multi_data_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        NCBI_NS_NCBI::CUnionBuffer<TInt> m_Int;
        NCBI_NS_NCBI::CUnionBuffer<TReal> m_Real;
        NCBI_NS_NCBI::CUnionBuffer<TString> m_String;
        NCBI_NS_NCBI::CUnionBuffer<TBytes> m_Bytes;
        NCBI_NS_NCBI::CUnionBuffer<TBit> m_Bit;
        NCBI_NS_NCBI::CUnionBuffer<TLoc> m_Loc;
        NCBI_NS_NCBI::CUnionBuffer<TId> m_Id;
        NCBI_NS_NCBI::CUnionBuffer<TInterval> m_Interval;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CSeqTable_multi_data_Base::E_Choice CSeqTable_multi_data_Base::Which(void) const
{
    return m_choice;
}

inline
void CSeqTable_multi_data_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSeqTable_multi_data_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSeqTable_multi_data_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSeqTable_multi_data_Base::IsInt(void) const
{
    return m_choice == e_Int;
}

inline
const CSeqTable_multi_data_Base::TInt& CSeqTable_multi_data_Base::GetInt(void) const
{
    CheckSelected(e_Int);
    return *m_Int;
}

inline
CSeqTable_multi_data_Base::TInt& CSeqTable_multi_data_Base::SetInt(void)
{
    Select(e_Int, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Int;
}

inline
bool CSeqTable_multi_data_Base::IsReal(void) const
{
    return m_choice == e_Real;
}

inline
const CSeqTable_multi_data_Base::TReal& CSeqTable_multi_data_Base::GetReal(void) const
{
    CheckSelected(e_Real);
    return *m_Real;
}

inline
CSeqTable_multi_data_Base::TReal& CSeqTable_multi_data_Base::SetReal(void)
{
    Select(e_Real, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Real;
}

inline
bool CSeqTable_multi_data_Base::IsString(void) const
{
    return m_choice == e_String;
}

inline
const CSeqTable_multi_data_Base::TString& CSeqTable_multi_data_Base::GetString(void) const
{
    CheckSelected(e_String);
    return *m_String;
}

inline
CSeqTable_multi_data_Base::TString& CSeqTable_multi_data_Base::SetString(void)
{
    Select(e_String, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_String;
}

inline
bool CSeqTable_multi_data_Base::IsBytes(void) const
{
    return m_choice == e_Bytes;
}

inline
const CSeqTable_multi_data_Base::TBytes& CSeqTable_multi_data_Base::GetBytes(void) const
{
    CheckSelected(e_Bytes);
    return *m_Bytes;
}

inline
CSeqTable_multi_data_Base::TBytes& CSeqTable_multi_data_Base::SetBytes(void)
{
    Select(e_Bytes, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Bytes;
}

inline
bool CSeqTable_multi_data_Base::IsCommon_string(void) const
{
    return m_choice == e_Common_string;
}

inline
bool CSeqTable_multi_data_Base::IsCommon_bytes(void) const
{
    return m_choice == e_Common_bytes;
}

inline
bool CSeqTable_multi_data_Base::IsBit(void) const
{
    return m_choice == e_Bit;
}

inline
const CSeqTable_multi_data_Base::TBit& CSeqTable_multi_data_Base::GetBit(void) const
{
    CheckSelected(e_Bit);
    return *m_Bit;
}

inline
CSeqTable_multi_data_Base::TBit& CSeqTable_multi_data_Base::SetBit(void)
{
    Select(e_Bit, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Bit;
}

inline
bool CSeqTable_multi_data_Base::IsLoc(void) const
{
    return m_choice == e_Loc;
}

inline
const CSeqTable_multi_data_Base::TLoc& CSeqTable_multi_data_Base::GetLoc(void) const
{
    CheckSelected(e_Loc);
    return *m_Loc;
}

inline
CSeqTable_multi_data_Base::TLoc& CSeqTable_multi_data_Base::SetLoc(void)
{
    Select(e_Loc, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Loc;
}

inline
bool CSeqTable_multi_data_Base::IsId(void) const
{
    return m_choice == e_Id;
}

inline
const CSeqTable_multi_data_Base::TId& CSeqTable_multi_data_Base::GetId(void) const
{
    CheckSelected(e_Id);
    return *m_Id;
}

inline
CSeqTable_multi_data_Base::TId& CSeqTable_multi_data_Base::SetId(void)
{
    Select(e_Id, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Id;
}

inline
bool CSeqTable_multi_data_Base::IsInterval(void) const
{
    return m_choice == e_Interval;
}

inline
const CSeqTable_multi_data_Base::TInterval& CSeqTable_multi_data_Base::GetInterval(void) const
{
    CheckSelected(e_Interval);
    return *m_Interval;
}

inline
CSeqTable_multi_data_Base::TInterval& CSeqTable_multi_data_Base::SetInterval(void)
{
    Select(e_Interval, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Interval;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQTABLE_SEQTABLE_MULTI_DATA_BASE_HPP