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

/// @file Contributing_channel_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_CONTRIBUTING_CHANNEL_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_CONTRIBUTING_CHANNEL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CAffected_channel;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///channel donor 
class NCBI_PEPXML_EXPORT CContributing_channel_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CContributing_channel_Base(void);
    // destructor
    virtual ~CContributing_channel_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_PEPXML_EXPORT C_Attlist : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Attlist(void);
        // destructor
        ~C_Attlist(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
        // types
        typedef int TChannel;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef int TChannel
        ///  Check whether the Channel data member has been assigned a value.
        bool IsSetChannel(void) const;
        /// Check whether it is safe or not to call GetChannel method.
        bool CanGetChannel(void) const;
        void ResetChannel(void);
        TChannel GetChannel(void) const;
        void SetChannel(TChannel value);
        TChannel& SetChannel(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        int m_Channel;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef list< CRef< CAffected_channel > > TAffected_channel;

    // getters
    // setters

    /// mandatory
    /// typedef C_Attlist TAttlist
    ///  Check whether the Attlist data member has been assigned a value.
    bool IsSetAttlist(void) const;
    /// Check whether it is safe or not to call GetAttlist method.
    bool CanGetAttlist(void) const;
    void ResetAttlist(void);
    const TAttlist& GetAttlist(void) const;
    void SetAttlist(TAttlist& value);
    TAttlist& SetAttlist(void);

    /// mandatory
    /// typedef list< CRef< CAffected_channel > > TAffected_channel
    ///  Check whether the Affected_channel data member has been assigned a value.
    bool IsSetAffected_channel(void) const;
    /// Check whether it is safe or not to call GetAffected_channel method.
    bool CanGetAffected_channel(void) const;
    void ResetAffected_channel(void);
    const TAffected_channel& GetAffected_channel(void) const;
    TAffected_channel& SetAffected_channel(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CContributing_channel_Base(const CContributing_channel_Base&);
    CContributing_channel_Base& operator=(const CContributing_channel_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
    list< CRef< CAffected_channel > > m_Affected_channel;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CContributing_channel_Base::C_Attlist::IsSetChannel(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CContributing_channel_Base::C_Attlist::CanGetChannel(void) const
{
    return IsSetChannel();
}

inline
void CContributing_channel_Base::C_Attlist::ResetChannel(void)
{
    m_Channel = 0;
    m_set_State[0] &= ~0x3;
}

inline
CContributing_channel_Base::C_Attlist::TChannel CContributing_channel_Base::C_Attlist::GetChannel(void) const
{
    if (!CanGetChannel()) {
        ThrowUnassigned(0);
    }
    return m_Channel;
}

inline
void CContributing_channel_Base::C_Attlist::SetChannel(CContributing_channel_Base::C_Attlist::TChannel value)
{
    m_Channel = value;
    m_set_State[0] |= 0x3;
}

inline
CContributing_channel_Base::C_Attlist::TChannel& CContributing_channel_Base::C_Attlist::SetChannel(void)
{
#ifdef _DEBUG
    if (!IsSetChannel()) {
        memset(&m_Channel,UnassignedByte(),sizeof(m_Channel));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Channel;
}

inline
bool CContributing_channel_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CContributing_channel_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CContributing_channel_Base::TAttlist& CContributing_channel_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CContributing_channel_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CContributing_channel_Base::TAttlist& CContributing_channel_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CContributing_channel_Base::IsSetAffected_channel(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CContributing_channel_Base::CanGetAffected_channel(void) const
{
    return true;
}

inline
const CContributing_channel_Base::TAffected_channel& CContributing_channel_Base::GetAffected_channel(void) const
{
    return m_Affected_channel;
}

inline
CContributing_channel_Base::TAffected_channel& CContributing_channel_Base::SetAffected_channel(void)
{
    m_set_State[0] |= 0x4;
    return m_Affected_channel;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_CONTRIBUTING_CHANNEL_BASE_HPP
