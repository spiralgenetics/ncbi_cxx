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

/// @file Data_filter_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_DATA_FILTER_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_DATA_FILTER_BASE_HPP

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
class NCBI_PEPXML_EXPORT CData_filter_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CData_filter_Base(void);
    // destructor
    virtual ~CData_filter_Base(void);

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
        typedef int TNumber;
        typedef string TParent_file;
        typedef string TWindows_parent;
        typedef string TDescription;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef int TNumber
        ///  Check whether the Number data member has been assigned a value.
        bool IsSetNumber(void) const;
        /// Check whether it is safe or not to call GetNumber method.
        bool CanGetNumber(void) const;
        void ResetNumber(void);
        TNumber GetNumber(void) const;
        void SetNumber(TNumber value);
        TNumber& SetNumber(void);
    
        /// mandatory
        /// typedef string TParent_file
        ///  Check whether the Parent_file data member has been assigned a value.
        bool IsSetParent_file(void) const;
        /// Check whether it is safe or not to call GetParent_file method.
        bool CanGetParent_file(void) const;
        void ResetParent_file(void);
        const TParent_file& GetParent_file(void) const;
        void SetParent_file(const TParent_file& value);
        TParent_file& SetParent_file(void);
    
        /// optional
        /// typedef string TWindows_parent
        ///  Check whether the Windows_parent data member has been assigned a value.
        bool IsSetWindows_parent(void) const;
        /// Check whether it is safe or not to call GetWindows_parent method.
        bool CanGetWindows_parent(void) const;
        void ResetWindows_parent(void);
        const TWindows_parent& GetWindows_parent(void) const;
        void SetWindows_parent(const TWindows_parent& value);
        TWindows_parent& SetWindows_parent(void);
    
        /// mandatory
        /// typedef string TDescription
        ///  Check whether the Description data member has been assigned a value.
        bool IsSetDescription(void) const;
        /// Check whether it is safe or not to call GetDescription method.
        bool CanGetDescription(void) const;
        void ResetDescription(void);
        const TDescription& GetDescription(void) const;
        void SetDescription(const TDescription& value);
        TDescription& SetDescription(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        int m_Number;
        string m_Parent_file;
        string m_Windows_parent;
        string m_Description;
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
    ///  Check whether the Data_filter data member has been assigned a value.
    bool IsSetData_filter(void) const;
    /// Check whether it is safe or not to call GetData_filter method.
    bool CanGetData_filter(void) const;
    void ResetData_filter(void);
    void SetData_filter(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CData_filter_Base(const CData_filter_Base&);
    CData_filter_Base& operator=(const CData_filter_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CData_filter_Base::C_Attlist::IsSetNumber(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CData_filter_Base::C_Attlist::CanGetNumber(void) const
{
    return IsSetNumber();
}

inline
void CData_filter_Base::C_Attlist::ResetNumber(void)
{
    m_Number = 0;
    m_set_State[0] &= ~0x3;
}

inline
CData_filter_Base::C_Attlist::TNumber CData_filter_Base::C_Attlist::GetNumber(void) const
{
    if (!CanGetNumber()) {
        ThrowUnassigned(0);
    }
    return m_Number;
}

inline
void CData_filter_Base::C_Attlist::SetNumber(CData_filter_Base::C_Attlist::TNumber value)
{
    m_Number = value;
    m_set_State[0] |= 0x3;
}

inline
CData_filter_Base::C_Attlist::TNumber& CData_filter_Base::C_Attlist::SetNumber(void)
{
#ifdef _DEBUG
    if (!IsSetNumber()) {
        memset(&m_Number,UnassignedByte(),sizeof(m_Number));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Number;
}

inline
bool CData_filter_Base::C_Attlist::IsSetParent_file(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CData_filter_Base::C_Attlist::CanGetParent_file(void) const
{
    return IsSetParent_file();
}

inline
const CData_filter_Base::C_Attlist::TParent_file& CData_filter_Base::C_Attlist::GetParent_file(void) const
{
    if (!CanGetParent_file()) {
        ThrowUnassigned(1);
    }
    return m_Parent_file;
}

inline
void CData_filter_Base::C_Attlist::SetParent_file(const CData_filter_Base::C_Attlist::TParent_file& value)
{
    m_Parent_file = value;
    m_set_State[0] |= 0xc;
}

inline
CData_filter_Base::C_Attlist::TParent_file& CData_filter_Base::C_Attlist::SetParent_file(void)
{
#ifdef _DEBUG
    if (!IsSetParent_file()) {
        m_Parent_file = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Parent_file;
}

inline
bool CData_filter_Base::C_Attlist::IsSetWindows_parent(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CData_filter_Base::C_Attlist::CanGetWindows_parent(void) const
{
    return IsSetWindows_parent();
}

inline
const CData_filter_Base::C_Attlist::TWindows_parent& CData_filter_Base::C_Attlist::GetWindows_parent(void) const
{
    if (!CanGetWindows_parent()) {
        ThrowUnassigned(2);
    }
    return m_Windows_parent;
}

inline
void CData_filter_Base::C_Attlist::SetWindows_parent(const CData_filter_Base::C_Attlist::TWindows_parent& value)
{
    m_Windows_parent = value;
    m_set_State[0] |= 0x30;
}

inline
CData_filter_Base::C_Attlist::TWindows_parent& CData_filter_Base::C_Attlist::SetWindows_parent(void)
{
#ifdef _DEBUG
    if (!IsSetWindows_parent()) {
        m_Windows_parent = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Windows_parent;
}

inline
bool CData_filter_Base::C_Attlist::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CData_filter_Base::C_Attlist::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CData_filter_Base::C_Attlist::TDescription& CData_filter_Base::C_Attlist::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(3);
    }
    return m_Description;
}

inline
void CData_filter_Base::C_Attlist::SetDescription(const CData_filter_Base::C_Attlist::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0xc0;
}

inline
CData_filter_Base::C_Attlist::TDescription& CData_filter_Base::C_Attlist::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Description;
}

inline
bool CData_filter_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CData_filter_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CData_filter_Base::TAttlist& CData_filter_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CData_filter_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CData_filter_Base::TAttlist& CData_filter_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    SetData_filter();
    return (*m_Attlist);
}

inline
bool CData_filter_Base::IsSetData_filter(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CData_filter_Base::CanGetData_filter(void) const
{
    return false;
}

inline
void CData_filter_Base::ResetData_filter(void)
{
    m_set_State[0] &= ~0xc;
}

inline
void CData_filter_Base::SetData_filter(void)
{
    m_set_State[0] |= 0xc;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_DATA_FILTER_BASE_HPP