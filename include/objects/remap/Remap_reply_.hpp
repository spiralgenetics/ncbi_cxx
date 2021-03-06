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

/// @file Remap_reply_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'remap.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_REMAP_REMAP_REPLY_BASE_HPP
#define OBJECTS_REMAP_REMAP_REPLY_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/remap/Remap_dt.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CRMReply;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///**********************************************************
/// Replies from the server
///  all replies contain the date/time stamp when they were executed
///**********************************************************
class NCBI_REMAP_EXPORT CRemap_reply_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CRemap_reply_Base(void);
    // destructor
    virtual ~CRemap_reply_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CRMReply TReply;
    typedef CRemap_dt TDt;
    typedef string TServer;
    typedef string TMsg;

    // getters
    // setters

    /// the actual reply
    /// mandatory
    /// typedef CRMReply TReply
    ///  Check whether the Reply data member has been assigned a value.
    bool IsSetReply(void) const;
    /// Check whether it is safe or not to call GetReply method.
    bool CanGetReply(void) const;
    void ResetReply(void);
    const TReply& GetReply(void) const;
    void SetReply(TReply& value);
    TReply& SetReply(void);

    /// date/time stamp from server
    /// mandatory
    /// typedef CRemap_dt TDt
    ///  Check whether the Dt data member has been assigned a value.
    bool IsSetDt(void) const;
    /// Check whether it is safe or not to call GetDt method.
    bool CanGetDt(void) const;
    void ResetDt(void);
    const TDt& GetDt(void) const;
    void SetDt(const TDt& value);
    TDt& SetDt(void);

    /// server version info
    /// mandatory
    /// typedef string TServer
    ///  Check whether the Server data member has been assigned a value.
    bool IsSetServer(void) const;
    /// Check whether it is safe or not to call GetServer method.
    bool CanGetServer(void) const;
    void ResetServer(void);
    const TServer& GetServer(void) const;
    void SetServer(const TServer& value);
    TServer& SetServer(void);

    /// possibly a message to the user
    /// optional
    /// typedef string TMsg
    ///  Check whether the Msg data member has been assigned a value.
    bool IsSetMsg(void) const;
    /// Check whether it is safe or not to call GetMsg method.
    bool CanGetMsg(void) const;
    void ResetMsg(void);
    const TMsg& GetMsg(void) const;
    void SetMsg(const TMsg& value);
    TMsg& SetMsg(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CRemap_reply_Base(const CRemap_reply_Base&);
    CRemap_reply_Base& operator=(const CRemap_reply_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TReply > m_Reply;
    CRemap_dt m_Dt;
    string m_Server;
    string m_Msg;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CRemap_reply_Base::IsSetReply(void) const
{
    return m_Reply.NotEmpty();
}

inline
bool CRemap_reply_Base::CanGetReply(void) const
{
    return true;
}

inline
const CRemap_reply_Base::TReply& CRemap_reply_Base::GetReply(void) const
{
    if ( !m_Reply ) {
        const_cast<CRemap_reply_Base*>(this)->ResetReply();
    }
    return (*m_Reply);
}

inline
CRemap_reply_Base::TReply& CRemap_reply_Base::SetReply(void)
{
    if ( !m_Reply ) {
        ResetReply();
    }
    return (*m_Reply);
}

inline
bool CRemap_reply_Base::IsSetDt(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CRemap_reply_Base::CanGetDt(void) const
{
    return IsSetDt();
}

inline
void CRemap_reply_Base::ResetDt(void)
{
    m_Dt = CRemap_dt(0);
    m_set_State[0] &= ~0xc;
}

inline
const CRemap_reply_Base::TDt& CRemap_reply_Base::GetDt(void) const
{
    if (!CanGetDt()) {
        ThrowUnassigned(1);
    }
    return m_Dt;
}

inline
void CRemap_reply_Base::SetDt(const CRemap_reply_Base::TDt& value)
{
    m_Dt = value;
    m_set_State[0] |= 0xc;
}

inline
CRemap_reply_Base::TDt& CRemap_reply_Base::SetDt(void)
{
    m_set_State[0] |= 0x4;
    return m_Dt;
}

inline
bool CRemap_reply_Base::IsSetServer(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CRemap_reply_Base::CanGetServer(void) const
{
    return IsSetServer();
}

inline
const CRemap_reply_Base::TServer& CRemap_reply_Base::GetServer(void) const
{
    if (!CanGetServer()) {
        ThrowUnassigned(2);
    }
    return m_Server;
}

inline
void CRemap_reply_Base::SetServer(const CRemap_reply_Base::TServer& value)
{
    m_Server = value;
    m_set_State[0] |= 0x30;
}

inline
CRemap_reply_Base::TServer& CRemap_reply_Base::SetServer(void)
{
#ifdef _DEBUG
    if (!IsSetServer()) {
        m_Server = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Server;
}

inline
bool CRemap_reply_Base::IsSetMsg(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CRemap_reply_Base::CanGetMsg(void) const
{
    return IsSetMsg();
}

inline
const CRemap_reply_Base::TMsg& CRemap_reply_Base::GetMsg(void) const
{
    if (!CanGetMsg()) {
        ThrowUnassigned(3);
    }
    return m_Msg;
}

inline
void CRemap_reply_Base::SetMsg(const CRemap_reply_Base::TMsg& value)
{
    m_Msg = value;
    m_set_State[0] |= 0xc0;
}

inline
CRemap_reply_Base::TMsg& CRemap_reply_Base::SetMsg(void)
{
#ifdef _DEBUG
    if (!IsSetMsg()) {
        m_Msg = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Msg;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_REMAP_REMAP_REPLY_BASE_HPP
