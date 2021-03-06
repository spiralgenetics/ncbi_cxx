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

/// @file Entrez2_boolean_reply_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_REPLY_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_REPLY_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CEntrez2_boolean_exp;
class CEntrez2_id_list;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_ENTREZ2_EXPORT CEntrez2_boolean_reply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_boolean_reply_Base(void);
    // destructor
    virtual ~CEntrez2_boolean_reply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TCount;
    typedef CEntrez2_id_list TUids;
    typedef CEntrez2_boolean_exp TQuery;

    // getters
    // setters

    /// records hit
    /// mandatory
    /// typedef int TCount
    ///  Check whether the Count data member has been assigned a value.
    bool IsSetCount(void) const;
    /// Check whether it is safe or not to call GetCount method.
    bool CanGetCount(void) const;
    void ResetCount(void);
    TCount GetCount(void) const;
    void SetCount(TCount value);
    TCount& SetCount(void);

    /// if uids requested
    /// optional
    /// typedef CEntrez2_id_list TUids
    ///  Check whether the Uids data member has been assigned a value.
    bool IsSetUids(void) const;
    /// Check whether it is safe or not to call GetUids method.
    bool CanGetUids(void) const;
    void ResetUids(void);
    const TUids& GetUids(void) const;
    void SetUids(TUids& value);
    TUids& SetUids(void);

    /// if parsed query requested
    /// optional
    /// typedef CEntrez2_boolean_exp TQuery
    ///  Check whether the Query data member has been assigned a value.
    bool IsSetQuery(void) const;
    /// Check whether it is safe or not to call GetQuery method.
    bool CanGetQuery(void) const;
    void ResetQuery(void);
    const TQuery& GetQuery(void) const;
    void SetQuery(TQuery& value);
    TQuery& SetQuery(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_boolean_reply_Base(const CEntrez2_boolean_reply_Base&);
    CEntrez2_boolean_reply_Base& operator=(const CEntrez2_boolean_reply_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Count;
    CRef< TUids > m_Uids;
    CRef< TQuery > m_Query;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_boolean_reply_Base::IsSetCount(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_boolean_reply_Base::CanGetCount(void) const
{
    return IsSetCount();
}

inline
void CEntrez2_boolean_reply_Base::ResetCount(void)
{
    m_Count = 0;
    m_set_State[0] &= ~0x3;
}

inline
CEntrez2_boolean_reply_Base::TCount CEntrez2_boolean_reply_Base::GetCount(void) const
{
    if (!CanGetCount()) {
        ThrowUnassigned(0);
    }
    return m_Count;
}

inline
void CEntrez2_boolean_reply_Base::SetCount(CEntrez2_boolean_reply_Base::TCount value)
{
    m_Count = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_boolean_reply_Base::TCount& CEntrez2_boolean_reply_Base::SetCount(void)
{
#ifdef _DEBUG
    if (!IsSetCount()) {
        memset(&m_Count,UnassignedByte(),sizeof(m_Count));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Count;
}

inline
bool CEntrez2_boolean_reply_Base::IsSetUids(void) const
{
    return m_Uids.NotEmpty();
}

inline
bool CEntrez2_boolean_reply_Base::CanGetUids(void) const
{
    return IsSetUids();
}

inline
const CEntrez2_boolean_reply_Base::TUids& CEntrez2_boolean_reply_Base::GetUids(void) const
{
    if (!CanGetUids()) {
        ThrowUnassigned(1);
    }
    return (*m_Uids);
}

inline
bool CEntrez2_boolean_reply_Base::IsSetQuery(void) const
{
    return m_Query.NotEmpty();
}

inline
bool CEntrez2_boolean_reply_Base::CanGetQuery(void) const
{
    return IsSetQuery();
}

inline
const CEntrez2_boolean_reply_Base::TQuery& CEntrez2_boolean_reply_Base::GetQuery(void) const
{
    if (!CanGetQuery()) {
        ThrowUnassigned(2);
    }
    return (*m_Query);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_BOOLEAN_REPLY_BASE_HPP
