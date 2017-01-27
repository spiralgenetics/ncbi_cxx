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

/// @file TMgr_Message_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_MESSAGE_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_MESSAGE_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>
#include <objects/trackmgr/TMgr_MessageLevel.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_Message_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_Message_Base(void);
    // destructor
    virtual ~CTMgr_Message_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TLevel;
    typedef string TMessage;

    // getters
    // setters

    /// mandatory
    /// typedef int TLevel
    ///  Check whether the Level data member has been assigned a value.
    bool IsSetLevel(void) const;
    /// Check whether it is safe or not to call GetLevel method.
    bool CanGetLevel(void) const;
    void ResetLevel(void);
    TLevel GetLevel(void) const;
    void SetLevel(TLevel value);
    TLevel& SetLevel(void);

    /// mandatory
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
    CTMgr_Message_Base(const CTMgr_Message_Base&);
    CTMgr_Message_Base& operator=(const CTMgr_Message_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Level;
    string m_Message;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTMgr_Message_Base::IsSetLevel(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTMgr_Message_Base::CanGetLevel(void) const
{
    return IsSetLevel();
}

inline
void CTMgr_Message_Base::ResetLevel(void)
{
    m_Level = (int)(0);
    m_set_State[0] &= ~0x3;
}

inline
CTMgr_Message_Base::TLevel CTMgr_Message_Base::GetLevel(void) const
{
    if (!CanGetLevel()) {
        ThrowUnassigned(0);
    }
    return m_Level;
}

inline
void CTMgr_Message_Base::SetLevel(CTMgr_Message_Base::TLevel value)
{
    m_Level = value;
    m_set_State[0] |= 0x3;
}

inline
CTMgr_Message_Base::TLevel& CTMgr_Message_Base::SetLevel(void)
{
#ifdef _DEBUG
    if (!IsSetLevel()) {
        memset(&m_Level,UnassignedByte(),sizeof(m_Level));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Level;
}

inline
bool CTMgr_Message_Base::IsSetMessage(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTMgr_Message_Base::CanGetMessage(void) const
{
    return IsSetMessage();
}

inline
const CTMgr_Message_Base::TMessage& CTMgr_Message_Base::GetMessage(void) const
{
    if (!CanGetMessage()) {
        ThrowUnassigned(1);
    }
    return m_Message;
}

inline
void CTMgr_Message_Base::SetMessage(const CTMgr_Message_Base::TMessage& value)
{
    m_Message = value;
    m_set_State[0] |= 0xc;
}

inline
CTMgr_Message_Base::TMessage& CTMgr_Message_Base::SetMessage(void)
{
#ifdef _DEBUG
    if (!IsSetMessage()) {
        m_Message = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Message;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_MESSAGE_BASE_HPP