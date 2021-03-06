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

/// @file Iteration_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blastxml.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLASTXML_ITERATION_BASE_HPP
#define OBJECTS_BLASTXML_ITERATION_BASE_HPP

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
class CHit;
class CStatistics;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLASTXML_EXPORT CIteration_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CIteration_Base(void);
    // destructor
    virtual ~CIteration_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TIter_num;
    typedef string TQuery_ID;
    typedef string TQuery_def;
    typedef int TQuery_len;
    typedef list< CRef< CHit > > THits;
    typedef CStatistics TStat;
    typedef string TMessage;

    // getters
    // setters

    /// iteration number
    /// mandatory
    /// typedef int TIter_num
    ///  Check whether the Iter_num data member has been assigned a value.
    bool IsSetIter_num(void) const;
    /// Check whether it is safe or not to call GetIter_num method.
    bool CanGetIter_num(void) const;
    void ResetIter_num(void);
    TIter_num GetIter_num(void) const;
    void SetIter_num(TIter_num value);
    TIter_num& SetIter_num(void);

    /// SeqId of query
    /// optional
    /// typedef string TQuery_ID
    ///  Check whether the Query_ID data member has been assigned a value.
    bool IsSetQuery_ID(void) const;
    /// Check whether it is safe or not to call GetQuery_ID method.
    bool CanGetQuery_ID(void) const;
    void ResetQuery_ID(void);
    const TQuery_ID& GetQuery_ID(void) const;
    void SetQuery_ID(const TQuery_ID& value);
    TQuery_ID& SetQuery_ID(void);

    /// Definition line of query
    /// optional
    /// typedef string TQuery_def
    ///  Check whether the Query_def data member has been assigned a value.
    bool IsSetQuery_def(void) const;
    /// Check whether it is safe or not to call GetQuery_def method.
    bool CanGetQuery_def(void) const;
    void ResetQuery_def(void);
    const TQuery_def& GetQuery_def(void) const;
    void SetQuery_def(const TQuery_def& value);
    TQuery_def& SetQuery_def(void);

    /// length of query sequence
    /// optional
    /// typedef int TQuery_len
    ///  Check whether the Query_len data member has been assigned a value.
    bool IsSetQuery_len(void) const;
    /// Check whether it is safe or not to call GetQuery_len method.
    bool CanGetQuery_len(void) const;
    void ResetQuery_len(void);
    TQuery_len GetQuery_len(void) const;
    void SetQuery_len(TQuery_len value);
    TQuery_len& SetQuery_len(void);

    /// Hits one for every db sequence
    /// optional
    /// typedef list< CRef< CHit > > THits
    ///  Check whether the Hits data member has been assigned a value.
    bool IsSetHits(void) const;
    /// Check whether it is safe or not to call GetHits method.
    bool CanGetHits(void) const;
    void ResetHits(void);
    const THits& GetHits(void) const;
    THits& SetHits(void);

    /// search statistics            
    /// optional
    /// typedef CStatistics TStat
    ///  Check whether the Stat data member has been assigned a value.
    bool IsSetStat(void) const;
    /// Check whether it is safe or not to call GetStat method.
    bool CanGetStat(void) const;
    void ResetStat(void);
    const TStat& GetStat(void) const;
    void SetStat(TStat& value);
    TStat& SetStat(void);

    /// Some (error?) information
    /// optional
    /// typedef string TMessage
    ///  Check whether the Message data member has been assigned a value.
    bool IsSetMessage(void) const;
    /// Check whether it is safe or not to call GetMessage method.
    bool CanGetMessage(void) const;
    void ResetMessage(void);
    const TMessage& GetMessage(void) const;
    void SetMessage(const TMessage& value);
    TMessage& SetMessage(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CIteration_Base(const CIteration_Base&);
    CIteration_Base& operator=(const CIteration_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Iter_num;
    string m_Query_ID;
    string m_Query_def;
    int m_Query_len;
    list< CRef< CHit > > m_Hits;
    CRef< TStat > m_Stat;
    string m_Message;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CIteration_Base::IsSetIter_num(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CIteration_Base::CanGetIter_num(void) const
{
    return IsSetIter_num();
}

inline
void CIteration_Base::ResetIter_num(void)
{
    m_Iter_num = 0;
    m_set_State[0] &= ~0x3;
}

inline
CIteration_Base::TIter_num CIteration_Base::GetIter_num(void) const
{
    if (!CanGetIter_num()) {
        ThrowUnassigned(0);
    }
    return m_Iter_num;
}

inline
void CIteration_Base::SetIter_num(CIteration_Base::TIter_num value)
{
    m_Iter_num = value;
    m_set_State[0] |= 0x3;
}

inline
CIteration_Base::TIter_num& CIteration_Base::SetIter_num(void)
{
#ifdef _DEBUG
    if (!IsSetIter_num()) {
        memset(&m_Iter_num,UnassignedByte(),sizeof(m_Iter_num));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Iter_num;
}

inline
bool CIteration_Base::IsSetQuery_ID(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CIteration_Base::CanGetQuery_ID(void) const
{
    return IsSetQuery_ID();
}

inline
const CIteration_Base::TQuery_ID& CIteration_Base::GetQuery_ID(void) const
{
    if (!CanGetQuery_ID()) {
        ThrowUnassigned(1);
    }
    return m_Query_ID;
}

inline
void CIteration_Base::SetQuery_ID(const CIteration_Base::TQuery_ID& value)
{
    m_Query_ID = value;
    m_set_State[0] |= 0xc;
}

inline
CIteration_Base::TQuery_ID& CIteration_Base::SetQuery_ID(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_ID()) {
        m_Query_ID = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Query_ID;
}

inline
bool CIteration_Base::IsSetQuery_def(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CIteration_Base::CanGetQuery_def(void) const
{
    return IsSetQuery_def();
}

inline
const CIteration_Base::TQuery_def& CIteration_Base::GetQuery_def(void) const
{
    if (!CanGetQuery_def()) {
        ThrowUnassigned(2);
    }
    return m_Query_def;
}

inline
void CIteration_Base::SetQuery_def(const CIteration_Base::TQuery_def& value)
{
    m_Query_def = value;
    m_set_State[0] |= 0x30;
}

inline
CIteration_Base::TQuery_def& CIteration_Base::SetQuery_def(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_def()) {
        m_Query_def = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Query_def;
}

inline
bool CIteration_Base::IsSetQuery_len(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CIteration_Base::CanGetQuery_len(void) const
{
    return IsSetQuery_len();
}

inline
void CIteration_Base::ResetQuery_len(void)
{
    m_Query_len = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CIteration_Base::TQuery_len CIteration_Base::GetQuery_len(void) const
{
    if (!CanGetQuery_len()) {
        ThrowUnassigned(3);
    }
    return m_Query_len;
}

inline
void CIteration_Base::SetQuery_len(CIteration_Base::TQuery_len value)
{
    m_Query_len = value;
    m_set_State[0] |= 0xc0;
}

inline
CIteration_Base::TQuery_len& CIteration_Base::SetQuery_len(void)
{
#ifdef _DEBUG
    if (!IsSetQuery_len()) {
        memset(&m_Query_len,UnassignedByte(),sizeof(m_Query_len));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Query_len;
}

inline
bool CIteration_Base::IsSetHits(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CIteration_Base::CanGetHits(void) const
{
    return true;
}

inline
const CIteration_Base::THits& CIteration_Base::GetHits(void) const
{
    return m_Hits;
}

inline
CIteration_Base::THits& CIteration_Base::SetHits(void)
{
    m_set_State[0] |= 0x100;
    return m_Hits;
}

inline
bool CIteration_Base::IsSetStat(void) const
{
    return m_Stat.NotEmpty();
}

inline
bool CIteration_Base::CanGetStat(void) const
{
    return IsSetStat();
}

inline
const CIteration_Base::TStat& CIteration_Base::GetStat(void) const
{
    if (!CanGetStat()) {
        ThrowUnassigned(5);
    }
    return (*m_Stat);
}

inline
bool CIteration_Base::IsSetMessage(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CIteration_Base::CanGetMessage(void) const
{
    return IsSetMessage();
}

inline
const CIteration_Base::TMessage& CIteration_Base::GetMessage(void) const
{
    if (!CanGetMessage()) {
        ThrowUnassigned(6);
    }
    return m_Message;
}

inline
void CIteration_Base::SetMessage(const CIteration_Base::TMessage& value)
{
    m_Message = value;
    m_set_State[0] |= 0x3000;
}

inline
CIteration_Base::TMessage& CIteration_Base::SetMessage(void)
{
#ifdef _DEBUG
    if (!IsSetMessage()) {
        m_Message = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Message;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLASTXML_ITERATION_BASE_HPP
