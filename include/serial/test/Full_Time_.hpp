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

/// @file Full_Time_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'we_cpp.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SERIAL_TEST_FULL_TIME_BASE_HPP
#define SERIAL_TEST_FULL_TIME_BASE_HPP

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
class CFull_Time_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CFull_Time_Base(void);
    // destructor
    virtual ~CFull_Time_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TYear;
    typedef int TMonth;
    typedef int TDay;
    typedef int THour;
    typedef int TMinute;
    typedef int TSecond;

    // getters
    // setters

    /// mandatory
    /// typedef int TYear
    ///  Check whether the Year data member has been assigned a value.
    bool IsSetYear(void) const;
    /// Check whether it is safe or not to call GetYear method.
    bool CanGetYear(void) const;
    void ResetYear(void);
    TYear GetYear(void) const;
    void SetYear(TYear value);
    TYear& SetYear(void);

    /// mandatory
    /// typedef int TMonth
    ///  Check whether the Month data member has been assigned a value.
    bool IsSetMonth(void) const;
    /// Check whether it is safe or not to call GetMonth method.
    bool CanGetMonth(void) const;
    void ResetMonth(void);
    TMonth GetMonth(void) const;
    void SetMonth(TMonth value);
    TMonth& SetMonth(void);

    /// mandatory
    /// typedef int TDay
    ///  Check whether the Day data member has been assigned a value.
    bool IsSetDay(void) const;
    /// Check whether it is safe or not to call GetDay method.
    bool CanGetDay(void) const;
    void ResetDay(void);
    TDay GetDay(void) const;
    void SetDay(TDay value);
    TDay& SetDay(void);

    /// mandatory
    /// typedef int THour
    ///  Check whether the Hour data member has been assigned a value.
    bool IsSetHour(void) const;
    /// Check whether it is safe or not to call GetHour method.
    bool CanGetHour(void) const;
    void ResetHour(void);
    THour GetHour(void) const;
    void SetHour(THour value);
    THour& SetHour(void);

    /// mandatory
    /// typedef int TMinute
    ///  Check whether the Minute data member has been assigned a value.
    bool IsSetMinute(void) const;
    /// Check whether it is safe or not to call GetMinute method.
    bool CanGetMinute(void) const;
    void ResetMinute(void);
    TMinute GetMinute(void) const;
    void SetMinute(TMinute value);
    TMinute& SetMinute(void);

    /// mandatory
    /// typedef int TSecond
    ///  Check whether the Second data member has been assigned a value.
    bool IsSetSecond(void) const;
    /// Check whether it is safe or not to call GetSecond method.
    bool CanGetSecond(void) const;
    void ResetSecond(void);
    TSecond GetSecond(void) const;
    void SetSecond(TSecond value);
    TSecond& SetSecond(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CFull_Time_Base(const CFull_Time_Base&);
    CFull_Time_Base& operator=(const CFull_Time_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Year;
    int m_Month;
    int m_Day;
    int m_Hour;
    int m_Minute;
    int m_Second;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CFull_Time_Base::IsSetYear(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CFull_Time_Base::CanGetYear(void) const
{
    return IsSetYear();
}

inline
void CFull_Time_Base::ResetYear(void)
{
    m_Year = 0;
    m_set_State[0] &= ~0x3;
}

inline
CFull_Time_Base::TYear CFull_Time_Base::GetYear(void) const
{
    if (!CanGetYear()) {
        ThrowUnassigned(0);
    }
    return m_Year;
}

inline
void CFull_Time_Base::SetYear(CFull_Time_Base::TYear value)
{
    m_Year = value;
    m_set_State[0] |= 0x3;
}

inline
CFull_Time_Base::TYear& CFull_Time_Base::SetYear(void)
{
#ifdef _DEBUG
    if (!IsSetYear()) {
        memset(&m_Year,UnassignedByte(),sizeof(m_Year));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Year;
}

inline
bool CFull_Time_Base::IsSetMonth(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CFull_Time_Base::CanGetMonth(void) const
{
    return IsSetMonth();
}

inline
void CFull_Time_Base::ResetMonth(void)
{
    m_Month = 0;
    m_set_State[0] &= ~0xc;
}

inline
CFull_Time_Base::TMonth CFull_Time_Base::GetMonth(void) const
{
    if (!CanGetMonth()) {
        ThrowUnassigned(1);
    }
    return m_Month;
}

inline
void CFull_Time_Base::SetMonth(CFull_Time_Base::TMonth value)
{
    m_Month = value;
    m_set_State[0] |= 0xc;
}

inline
CFull_Time_Base::TMonth& CFull_Time_Base::SetMonth(void)
{
#ifdef _DEBUG
    if (!IsSetMonth()) {
        memset(&m_Month,UnassignedByte(),sizeof(m_Month));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Month;
}

inline
bool CFull_Time_Base::IsSetDay(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CFull_Time_Base::CanGetDay(void) const
{
    return IsSetDay();
}

inline
void CFull_Time_Base::ResetDay(void)
{
    m_Day = 0;
    m_set_State[0] &= ~0x30;
}

inline
CFull_Time_Base::TDay CFull_Time_Base::GetDay(void) const
{
    if (!CanGetDay()) {
        ThrowUnassigned(2);
    }
    return m_Day;
}

inline
void CFull_Time_Base::SetDay(CFull_Time_Base::TDay value)
{
    m_Day = value;
    m_set_State[0] |= 0x30;
}

inline
CFull_Time_Base::TDay& CFull_Time_Base::SetDay(void)
{
#ifdef _DEBUG
    if (!IsSetDay()) {
        memset(&m_Day,UnassignedByte(),sizeof(m_Day));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Day;
}

inline
bool CFull_Time_Base::IsSetHour(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CFull_Time_Base::CanGetHour(void) const
{
    return IsSetHour();
}

inline
void CFull_Time_Base::ResetHour(void)
{
    m_Hour = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CFull_Time_Base::THour CFull_Time_Base::GetHour(void) const
{
    if (!CanGetHour()) {
        ThrowUnassigned(3);
    }
    return m_Hour;
}

inline
void CFull_Time_Base::SetHour(CFull_Time_Base::THour value)
{
    m_Hour = value;
    m_set_State[0] |= 0xc0;
}

inline
CFull_Time_Base::THour& CFull_Time_Base::SetHour(void)
{
#ifdef _DEBUG
    if (!IsSetHour()) {
        memset(&m_Hour,UnassignedByte(),sizeof(m_Hour));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Hour;
}

inline
bool CFull_Time_Base::IsSetMinute(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CFull_Time_Base::CanGetMinute(void) const
{
    return IsSetMinute();
}

inline
void CFull_Time_Base::ResetMinute(void)
{
    m_Minute = 0;
    m_set_State[0] &= ~0x300;
}

inline
CFull_Time_Base::TMinute CFull_Time_Base::GetMinute(void) const
{
    if (!CanGetMinute()) {
        ThrowUnassigned(4);
    }
    return m_Minute;
}

inline
void CFull_Time_Base::SetMinute(CFull_Time_Base::TMinute value)
{
    m_Minute = value;
    m_set_State[0] |= 0x300;
}

inline
CFull_Time_Base::TMinute& CFull_Time_Base::SetMinute(void)
{
#ifdef _DEBUG
    if (!IsSetMinute()) {
        memset(&m_Minute,UnassignedByte(),sizeof(m_Minute));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Minute;
}

inline
bool CFull_Time_Base::IsSetSecond(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CFull_Time_Base::CanGetSecond(void) const
{
    return IsSetSecond();
}

inline
void CFull_Time_Base::ResetSecond(void)
{
    m_Second = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CFull_Time_Base::TSecond CFull_Time_Base::GetSecond(void) const
{
    if (!CanGetSecond()) {
        ThrowUnassigned(5);
    }
    return m_Second;
}

inline
void CFull_Time_Base::SetSecond(CFull_Time_Base::TSecond value)
{
    m_Second = value;
    m_set_State[0] |= 0xc00;
}

inline
CFull_Time_Base::TSecond& CFull_Time_Base::SetSecond(void)
{
#ifdef _DEBUG
    if (!IsSetSecond()) {
        memset(&m_Second,UnassignedByte(),sizeof(m_Second));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Second;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SERIAL_TEST_FULL_TIME_BASE_HPP
