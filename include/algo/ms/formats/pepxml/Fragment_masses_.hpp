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

/// @file Fragment_masses_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_FRAGMENT_MASSES_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_FRAGMENT_MASSES_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
///quantitation channel 
class NCBI_PEPXML_EXPORT CFragment_masses_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CFragment_masses_Base(void);
    // destructor
    virtual ~CFragment_masses_Base(void);

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
        typedef double TMz;
        typedef double TOffset;
    
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
    
        /// mandatory
        /// typedef double TMz
        ///  Check whether the Mz data member has been assigned a value.
        bool IsSetMz(void) const;
        /// Check whether it is safe or not to call GetMz method.
        bool CanGetMz(void) const;
        void ResetMz(void);
        TMz GetMz(void) const;
        void SetMz(TMz value);
        TMz& SetMz(void);
    
        /// optional
        /// typedef double TOffset
        ///  Check whether the Offset data member has been assigned a value.
        bool IsSetOffset(void) const;
        /// Check whether it is safe or not to call GetOffset method.
        bool CanGetOffset(void) const;
        void ResetOffset(void);
        TOffset GetOffset(void) const;
        void SetOffset(TOffset value);
        TOffset& SetOffset(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        int m_Channel;
        double m_Mz;
        double m_Offset;
    };
    // types
    typedef C_Attlist TAttlist;

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
    ///  Check whether the Fragment_masses data member has been assigned a value.
    bool IsSetFragment_masses(void) const;
    /// Check whether it is safe or not to call GetFragment_masses method.
    bool CanGetFragment_masses(void) const;
    void ResetFragment_masses(void);
    void SetFragment_masses(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CFragment_masses_Base(const CFragment_masses_Base&);
    CFragment_masses_Base& operator=(const CFragment_masses_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CFragment_masses_Base::C_Attlist::IsSetChannel(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CFragment_masses_Base::C_Attlist::CanGetChannel(void) const
{
    return IsSetChannel();
}

inline
void CFragment_masses_Base::C_Attlist::ResetChannel(void)
{
    m_Channel = 0;
    m_set_State[0] &= ~0x3;
}

inline
CFragment_masses_Base::C_Attlist::TChannel CFragment_masses_Base::C_Attlist::GetChannel(void) const
{
    if (!CanGetChannel()) {
        ThrowUnassigned(0);
    }
    return m_Channel;
}

inline
void CFragment_masses_Base::C_Attlist::SetChannel(CFragment_masses_Base::C_Attlist::TChannel value)
{
    m_Channel = value;
    m_set_State[0] |= 0x3;
}

inline
CFragment_masses_Base::C_Attlist::TChannel& CFragment_masses_Base::C_Attlist::SetChannel(void)
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
bool CFragment_masses_Base::C_Attlist::IsSetMz(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CFragment_masses_Base::C_Attlist::CanGetMz(void) const
{
    return IsSetMz();
}

inline
void CFragment_masses_Base::C_Attlist::ResetMz(void)
{
    m_Mz = 0;
    m_set_State[0] &= ~0xc;
}

inline
CFragment_masses_Base::C_Attlist::TMz CFragment_masses_Base::C_Attlist::GetMz(void) const
{
    if (!CanGetMz()) {
        ThrowUnassigned(1);
    }
    return m_Mz;
}

inline
void CFragment_masses_Base::C_Attlist::SetMz(CFragment_masses_Base::C_Attlist::TMz value)
{
    m_Mz = value;
    m_set_State[0] |= 0xc;
}

inline
CFragment_masses_Base::C_Attlist::TMz& CFragment_masses_Base::C_Attlist::SetMz(void)
{
#ifdef _DEBUG
    if (!IsSetMz()) {
        memset(&m_Mz,UnassignedByte(),sizeof(m_Mz));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Mz;
}

inline
bool CFragment_masses_Base::C_Attlist::IsSetOffset(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CFragment_masses_Base::C_Attlist::CanGetOffset(void) const
{
    return IsSetOffset();
}

inline
void CFragment_masses_Base::C_Attlist::ResetOffset(void)
{
    m_Offset = 0;
    m_set_State[0] &= ~0x30;
}

inline
CFragment_masses_Base::C_Attlist::TOffset CFragment_masses_Base::C_Attlist::GetOffset(void) const
{
    if (!CanGetOffset()) {
        ThrowUnassigned(2);
    }
    return m_Offset;
}

inline
void CFragment_masses_Base::C_Attlist::SetOffset(CFragment_masses_Base::C_Attlist::TOffset value)
{
    m_Offset = value;
    m_set_State[0] |= 0x30;
}

inline
CFragment_masses_Base::C_Attlist::TOffset& CFragment_masses_Base::C_Attlist::SetOffset(void)
{
#ifdef _DEBUG
    if (!IsSetOffset()) {
        memset(&m_Offset,UnassignedByte(),sizeof(m_Offset));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Offset;
}

inline
bool CFragment_masses_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CFragment_masses_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CFragment_masses_Base::TAttlist& CFragment_masses_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CFragment_masses_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CFragment_masses_Base::TAttlist& CFragment_masses_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    SetFragment_masses();
    return (*m_Attlist);
}

inline
bool CFragment_masses_Base::IsSetFragment_masses(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CFragment_masses_Base::CanGetFragment_masses(void) const
{
    return false;
}

inline
void CFragment_masses_Base::ResetFragment_masses(void)
{
    m_set_State[0] &= ~0xc;
}

inline
void CFragment_masses_Base::SetFragment_masses(void)
{
    m_set_State[0] |= 0xc;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_FRAGMENT_MASSES_BASE_HPP