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

/// @file Packed_seg_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqalign.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQALIGN_PACKED_SEG_BASE_HPP
#define OBJECTS_SEQALIGN_PACKED_SEG_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <vector>
#include <objects/seqloc/Na_strand.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CScore;
class CSeq_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// for (multiway) global or partial alignments
class NCBI_SEQALIGN_EXPORT CPacked_seg_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPacked_seg_Base(void);
    // destructor
    virtual ~CPacked_seg_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TDim;
    typedef int TNumseg;
    typedef vector< CRef< CSeq_id > > TIds;
    typedef vector< TSeqPos > TStarts;
    typedef vector< char > TPresent;
    typedef vector< TSeqPos > TLens;
    typedef vector< ENa_strand > TStrands;
    typedef vector< CRef< CScore > > TScores;

    // getters
    // setters

    /// dimensionality
    /// optional with default 2
    /// typedef int TDim
    ///  Check whether the Dim data member has been assigned a value.
    bool IsSetDim(void) const;
    /// Check whether it is safe or not to call GetDim method.
    bool CanGetDim(void) const;
    void ResetDim(void);
    void SetDefaultDim(void);
    TDim GetDim(void) const;
    void SetDim(TDim value);
    TDim& SetDim(void);

    /// number of segments here
    /// mandatory
    /// typedef int TNumseg
    ///  Check whether the Numseg data member has been assigned a value.
    bool IsSetNumseg(void) const;
    /// Check whether it is safe or not to call GetNumseg method.
    bool CanGetNumseg(void) const;
    void ResetNumseg(void);
    TNumseg GetNumseg(void) const;
    void SetNumseg(TNumseg value);
    TNumseg& SetNumseg(void);

    /// sequences in order
    /// mandatory
    /// typedef vector< CRef< CSeq_id > > TIds
    ///  Check whether the Ids data member has been assigned a value.
    bool IsSetIds(void) const;
    /// Check whether it is safe or not to call GetIds method.
    bool CanGetIds(void) const;
    void ResetIds(void);
    const TIds& GetIds(void) const;
    TIds& SetIds(void);

    /// start OFFSETS in ids order for whole alignment
    /// mandatory
    /// typedef vector< TSeqPos > TStarts
    ///  Check whether the Starts data member has been assigned a value.
    bool IsSetStarts(void) const;
    /// Check whether it is safe or not to call GetStarts method.
    bool CanGetStarts(void) const;
    void ResetStarts(void);
    const TStarts& GetStarts(void) const;
    TStarts& SetStarts(void);

    /// Boolean if each sequence present or absent in
    ///   each segment
    /// mandatory
    /// typedef vector< char > TPresent
    ///  Check whether the Present data member has been assigned a value.
    bool IsSetPresent(void) const;
    /// Check whether it is safe or not to call GetPresent method.
    bool CanGetPresent(void) const;
    void ResetPresent(void);
    const TPresent& GetPresent(void) const;
    TPresent& SetPresent(void);

    /// length of each segment
    /// mandatory
    /// typedef vector< TSeqPos > TLens
    ///  Check whether the Lens data member has been assigned a value.
    bool IsSetLens(void) const;
    /// Check whether it is safe or not to call GetLens method.
    bool CanGetLens(void) const;
    void ResetLens(void);
    const TLens& GetLens(void) const;
    TLens& SetLens(void);

    /// optional
    /// typedef vector< ENa_strand > TStrands
    ///  Check whether the Strands data member has been assigned a value.
    bool IsSetStrands(void) const;
    /// Check whether it is safe or not to call GetStrands method.
    bool CanGetStrands(void) const;
    void ResetStrands(void);
    const TStrands& GetStrands(void) const;
    TStrands& SetStrands(void);

    /// score for each segment
    /// optional
    /// typedef vector< CRef< CScore > > TScores
    ///  Check whether the Scores data member has been assigned a value.
    bool IsSetScores(void) const;
    /// Check whether it is safe or not to call GetScores method.
    bool CanGetScores(void) const;
    void ResetScores(void);
    const TScores& GetScores(void) const;
    TScores& SetScores(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPacked_seg_Base(const CPacked_seg_Base&);
    CPacked_seg_Base& operator=(const CPacked_seg_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Dim;
    int m_Numseg;
    vector< CRef< CSeq_id > > m_Ids;
    vector< TSeqPos > m_Starts;
    vector< char > m_Present;
    vector< TSeqPos > m_Lens;
    vector< ENa_strand > m_Strands;
    vector< CRef< CScore > > m_Scores;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPacked_seg_Base::IsSetDim(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPacked_seg_Base::CanGetDim(void) const
{
    return true;
}

inline
void CPacked_seg_Base::ResetDim(void)
{
    m_Dim = 2;
    m_set_State[0] &= ~0x3;
}

inline
void CPacked_seg_Base::SetDefaultDim(void)
{
    ResetDim();
}

inline
CPacked_seg_Base::TDim CPacked_seg_Base::GetDim(void) const
{
    return m_Dim;
}

inline
void CPacked_seg_Base::SetDim(CPacked_seg_Base::TDim value)
{
    m_Dim = value;
    m_set_State[0] |= 0x3;
}

inline
CPacked_seg_Base::TDim& CPacked_seg_Base::SetDim(void)
{
#ifdef _DEBUG
    if (!IsSetDim()) {
        memset(&m_Dim,UnassignedByte(),sizeof(m_Dim));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Dim;
}

inline
bool CPacked_seg_Base::IsSetNumseg(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPacked_seg_Base::CanGetNumseg(void) const
{
    return IsSetNumseg();
}

inline
void CPacked_seg_Base::ResetNumseg(void)
{
    m_Numseg = 0;
    m_set_State[0] &= ~0xc;
}

inline
CPacked_seg_Base::TNumseg CPacked_seg_Base::GetNumseg(void) const
{
    if (!CanGetNumseg()) {
        ThrowUnassigned(1);
    }
    return m_Numseg;
}

inline
void CPacked_seg_Base::SetNumseg(CPacked_seg_Base::TNumseg value)
{
    m_Numseg = value;
    m_set_State[0] |= 0xc;
}

inline
CPacked_seg_Base::TNumseg& CPacked_seg_Base::SetNumseg(void)
{
#ifdef _DEBUG
    if (!IsSetNumseg()) {
        memset(&m_Numseg,UnassignedByte(),sizeof(m_Numseg));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Numseg;
}

inline
bool CPacked_seg_Base::IsSetIds(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPacked_seg_Base::CanGetIds(void) const
{
    return true;
}

inline
const CPacked_seg_Base::TIds& CPacked_seg_Base::GetIds(void) const
{
    return m_Ids;
}

inline
CPacked_seg_Base::TIds& CPacked_seg_Base::SetIds(void)
{
    m_set_State[0] |= 0x10;
    return m_Ids;
}

inline
bool CPacked_seg_Base::IsSetStarts(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CPacked_seg_Base::CanGetStarts(void) const
{
    return true;
}

inline
const CPacked_seg_Base::TStarts& CPacked_seg_Base::GetStarts(void) const
{
    return m_Starts;
}

inline
CPacked_seg_Base::TStarts& CPacked_seg_Base::SetStarts(void)
{
    m_set_State[0] |= 0x40;
    return m_Starts;
}

inline
bool CPacked_seg_Base::IsSetPresent(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CPacked_seg_Base::CanGetPresent(void) const
{
    return IsSetPresent();
}

inline
const CPacked_seg_Base::TPresent& CPacked_seg_Base::GetPresent(void) const
{
    if (!CanGetPresent()) {
        ThrowUnassigned(4);
    }
    return m_Present;
}

inline
CPacked_seg_Base::TPresent& CPacked_seg_Base::SetPresent(void)
{
    m_set_State[0] |= 0x100;
    return m_Present;
}

inline
bool CPacked_seg_Base::IsSetLens(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CPacked_seg_Base::CanGetLens(void) const
{
    return true;
}

inline
const CPacked_seg_Base::TLens& CPacked_seg_Base::GetLens(void) const
{
    return m_Lens;
}

inline
CPacked_seg_Base::TLens& CPacked_seg_Base::SetLens(void)
{
    m_set_State[0] |= 0x400;
    return m_Lens;
}

inline
bool CPacked_seg_Base::IsSetStrands(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CPacked_seg_Base::CanGetStrands(void) const
{
    return true;
}

inline
const CPacked_seg_Base::TStrands& CPacked_seg_Base::GetStrands(void) const
{
    return m_Strands;
}

inline
CPacked_seg_Base::TStrands& CPacked_seg_Base::SetStrands(void)
{
    m_set_State[0] |= 0x1000;
    return m_Strands;
}

inline
bool CPacked_seg_Base::IsSetScores(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CPacked_seg_Base::CanGetScores(void) const
{
    return true;
}

inline
const CPacked_seg_Base::TScores& CPacked_seg_Base::GetScores(void) const
{
    return m_Scores;
}

inline
CPacked_seg_Base::TScores& CPacked_seg_Base::SetScores(void)
{
    m_set_State[0] |= 0x4000;
    return m_Scores;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQALIGN_PACKED_SEG_BASE_HPP
