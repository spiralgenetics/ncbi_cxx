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

/// @file Xpressratio_timestamp_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_TIMESTAMP_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_TIMESTAMP_BASE_HPP

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
class NCBI_PEPXML_EXPORT CXpressratio_timestamp_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CXpressratio_timestamp_Base(void);
    // destructor
    virtual ~CXpressratio_timestamp_Base(void);

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
        typedef int TXpress_light;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef int TXpress_light
        ///  Check whether the Xpress_light data member has been assigned a value.
        bool IsSetXpress_light(void) const;
        /// Check whether it is safe or not to call GetXpress_light method.
        bool CanGetXpress_light(void) const;
        void ResetXpress_light(void);
        TXpress_light GetXpress_light(void) const;
        void SetXpress_light(TXpress_light value);
        TXpress_light& SetXpress_light(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        int m_Xpress_light;
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
    ///  Check whether the Xpressratio_timestamp data member has been assigned a value.
    bool IsSetXpressratio_timestamp(void) const;
    /// Check whether it is safe or not to call GetXpressratio_timestamp method.
    bool CanGetXpressratio_timestamp(void) const;
    void ResetXpressratio_timestamp(void);
    void SetXpressratio_timestamp(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CXpressratio_timestamp_Base(const CXpressratio_timestamp_Base&);
    CXpressratio_timestamp_Base& operator=(const CXpressratio_timestamp_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CXpressratio_timestamp_Base::C_Attlist::IsSetXpress_light(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CXpressratio_timestamp_Base::C_Attlist::CanGetXpress_light(void) const
{
    return IsSetXpress_light();
}

inline
void CXpressratio_timestamp_Base::C_Attlist::ResetXpress_light(void)
{
    m_Xpress_light = 0;
    m_set_State[0] &= ~0x3;
}

inline
CXpressratio_timestamp_Base::C_Attlist::TXpress_light CXpressratio_timestamp_Base::C_Attlist::GetXpress_light(void) const
{
    if (!CanGetXpress_light()) {
        ThrowUnassigned(0);
    }
    return m_Xpress_light;
}

inline
void CXpressratio_timestamp_Base::C_Attlist::SetXpress_light(CXpressratio_timestamp_Base::C_Attlist::TXpress_light value)
{
    m_Xpress_light = value;
    m_set_State[0] |= 0x3;
}

inline
CXpressratio_timestamp_Base::C_Attlist::TXpress_light& CXpressratio_timestamp_Base::C_Attlist::SetXpress_light(void)
{
#ifdef _DEBUG
    if (!IsSetXpress_light()) {
        memset(&m_Xpress_light,UnassignedByte(),sizeof(m_Xpress_light));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Xpress_light;
}

inline
bool CXpressratio_timestamp_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CXpressratio_timestamp_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CXpressratio_timestamp_Base::TAttlist& CXpressratio_timestamp_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CXpressratio_timestamp_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CXpressratio_timestamp_Base::TAttlist& CXpressratio_timestamp_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    SetXpressratio_timestamp();
    return (*m_Attlist);
}

inline
bool CXpressratio_timestamp_Base::IsSetXpressratio_timestamp(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CXpressratio_timestamp_Base::CanGetXpressratio_timestamp(void) const
{
    return false;
}

inline
void CXpressratio_timestamp_Base::ResetXpressratio_timestamp(void)
{
    m_set_State[0] &= ~0xc;
}

inline
void CXpressratio_timestamp_Base::SetXpressratio_timestamp(void)
{
    m_set_State[0] |= 0xc;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_XPRESSRATIO_TIMESTAMP_BASE_HPP
