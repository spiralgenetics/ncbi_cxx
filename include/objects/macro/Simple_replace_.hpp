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

/// @file Simple_replace_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_SIMPLE_REPLACE_BASE_HPP
#define OBJECTS_MACRO_SIMPLE_REPLACE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CSimple_replace_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSimple_replace_Base(void);
    // destructor
    virtual ~CSimple_replace_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TReplace;
    typedef bool TWhole_string;
    typedef bool TWeasel_to_putative;

    // getters
    // setters

    /// optional
    /// typedef string TReplace
    ///  Check whether the Replace data member has been assigned a value.
    bool IsSetReplace(void) const;
    /// Check whether it is safe or not to call GetReplace method.
    bool CanGetReplace(void) const;
    void ResetReplace(void);
    const TReplace& GetReplace(void) const;
    void SetReplace(const TReplace& value);
    TReplace& SetReplace(void);

    /// optional with default false
    /// typedef bool TWhole_string
    ///  Check whether the Whole_string data member has been assigned a value.
    bool IsSetWhole_string(void) const;
    /// Check whether it is safe or not to call GetWhole_string method.
    bool CanGetWhole_string(void) const;
    void ResetWhole_string(void);
    void SetDefaultWhole_string(void);
    TWhole_string GetWhole_string(void) const;
    void SetWhole_string(TWhole_string value);
    TWhole_string& SetWhole_string(void);

    /// optional with default false
    /// typedef bool TWeasel_to_putative
    ///  Check whether the Weasel_to_putative data member has been assigned a value.
    bool IsSetWeasel_to_putative(void) const;
    /// Check whether it is safe or not to call GetWeasel_to_putative method.
    bool CanGetWeasel_to_putative(void) const;
    void ResetWeasel_to_putative(void);
    void SetDefaultWeasel_to_putative(void);
    TWeasel_to_putative GetWeasel_to_putative(void) const;
    void SetWeasel_to_putative(TWeasel_to_putative value);
    TWeasel_to_putative& SetWeasel_to_putative(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSimple_replace_Base(const CSimple_replace_Base&);
    CSimple_replace_Base& operator=(const CSimple_replace_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Replace;
    bool m_Whole_string;
    bool m_Weasel_to_putative;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSimple_replace_Base::IsSetReplace(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSimple_replace_Base::CanGetReplace(void) const
{
    return IsSetReplace();
}

inline
const CSimple_replace_Base::TReplace& CSimple_replace_Base::GetReplace(void) const
{
    if (!CanGetReplace()) {
        ThrowUnassigned(0);
    }
    return m_Replace;
}

inline
void CSimple_replace_Base::SetReplace(const CSimple_replace_Base::TReplace& value)
{
    m_Replace = value;
    m_set_State[0] |= 0x3;
}

inline
CSimple_replace_Base::TReplace& CSimple_replace_Base::SetReplace(void)
{
#ifdef _DEBUG
    if (!IsSetReplace()) {
        m_Replace = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Replace;
}

inline
bool CSimple_replace_Base::IsSetWhole_string(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSimple_replace_Base::CanGetWhole_string(void) const
{
    return true;
}

inline
void CSimple_replace_Base::ResetWhole_string(void)
{
    m_Whole_string = false;
    m_set_State[0] &= ~0xc;
}

inline
void CSimple_replace_Base::SetDefaultWhole_string(void)
{
    ResetWhole_string();
}

inline
CSimple_replace_Base::TWhole_string CSimple_replace_Base::GetWhole_string(void) const
{
    return m_Whole_string;
}

inline
void CSimple_replace_Base::SetWhole_string(CSimple_replace_Base::TWhole_string value)
{
    m_Whole_string = value;
    m_set_State[0] |= 0xc;
}

inline
CSimple_replace_Base::TWhole_string& CSimple_replace_Base::SetWhole_string(void)
{
#ifdef _DEBUG
    if (!IsSetWhole_string()) {
        memset(&m_Whole_string,UnassignedByte(),sizeof(m_Whole_string));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Whole_string;
}

inline
bool CSimple_replace_Base::IsSetWeasel_to_putative(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSimple_replace_Base::CanGetWeasel_to_putative(void) const
{
    return true;
}

inline
void CSimple_replace_Base::ResetWeasel_to_putative(void)
{
    m_Weasel_to_putative = false;
    m_set_State[0] &= ~0x30;
}

inline
void CSimple_replace_Base::SetDefaultWeasel_to_putative(void)
{
    ResetWeasel_to_putative();
}

inline
CSimple_replace_Base::TWeasel_to_putative CSimple_replace_Base::GetWeasel_to_putative(void) const
{
    return m_Weasel_to_putative;
}

inline
void CSimple_replace_Base::SetWeasel_to_putative(CSimple_replace_Base::TWeasel_to_putative value)
{
    m_Weasel_to_putative = value;
    m_set_State[0] |= 0x30;
}

inline
CSimple_replace_Base::TWeasel_to_putative& CSimple_replace_Base::SetWeasel_to_putative(void)
{
#ifdef _DEBUG
    if (!IsSetWeasel_to_putative()) {
        memset(&m_Weasel_to_putative,UnassignedByte(),sizeof(m_Weasel_to_putative));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Weasel_to_putative;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_SIMPLE_REPLACE_BASE_HPP