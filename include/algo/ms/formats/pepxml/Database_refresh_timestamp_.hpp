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

/// @file Database_refresh_timestamp_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_DATABASE_REFRESH_TIMESTAMP_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_DATABASE_REFRESH_TIMESTAMP_BASE_HPP

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
class NCBI_PEPXML_EXPORT CDatabase_refresh_timestamp_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CDatabase_refresh_timestamp_Base(void);
    // destructor
    virtual ~CDatabase_refresh_timestamp_Base(void);

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
        typedef string TDatabase;
        typedef int TMin_num_enz_term;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef string TDatabase
        ///  Check whether the Database data member has been assigned a value.
        bool IsSetDatabase(void) const;
        /// Check whether it is safe or not to call GetDatabase method.
        bool CanGetDatabase(void) const;
        void ResetDatabase(void);
        const TDatabase& GetDatabase(void) const;
        void SetDatabase(const TDatabase& value);
        TDatabase& SetDatabase(void);
    
        /// optional
        /// typedef int TMin_num_enz_term
        ///  Check whether the Min_num_enz_term data member has been assigned a value.
        bool IsSetMin_num_enz_term(void) const;
        /// Check whether it is safe or not to call GetMin_num_enz_term method.
        bool CanGetMin_num_enz_term(void) const;
        void ResetMin_num_enz_term(void);
        TMin_num_enz_term GetMin_num_enz_term(void) const;
        void SetMin_num_enz_term(TMin_num_enz_term value);
        TMin_num_enz_term& SetMin_num_enz_term(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        string m_Database;
        int m_Min_num_enz_term;
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
    ///  Check whether the Database_refresh_timestamp data member has been assigned a value.
    bool IsSetDatabase_refresh_timestamp(void) const;
    /// Check whether it is safe or not to call GetDatabase_refresh_timestamp method.
    bool CanGetDatabase_refresh_timestamp(void) const;
    void ResetDatabase_refresh_timestamp(void);
    void SetDatabase_refresh_timestamp(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CDatabase_refresh_timestamp_Base(const CDatabase_refresh_timestamp_Base&);
    CDatabase_refresh_timestamp_Base& operator=(const CDatabase_refresh_timestamp_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CDatabase_refresh_timestamp_Base::C_Attlist::IsSetDatabase(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CDatabase_refresh_timestamp_Base::C_Attlist::CanGetDatabase(void) const
{
    return IsSetDatabase();
}

inline
const CDatabase_refresh_timestamp_Base::C_Attlist::TDatabase& CDatabase_refresh_timestamp_Base::C_Attlist::GetDatabase(void) const
{
    if (!CanGetDatabase()) {
        ThrowUnassigned(0);
    }
    return m_Database;
}

inline
void CDatabase_refresh_timestamp_Base::C_Attlist::SetDatabase(const CDatabase_refresh_timestamp_Base::C_Attlist::TDatabase& value)
{
    m_Database = value;
    m_set_State[0] |= 0x3;
}

inline
CDatabase_refresh_timestamp_Base::C_Attlist::TDatabase& CDatabase_refresh_timestamp_Base::C_Attlist::SetDatabase(void)
{
#ifdef _DEBUG
    if (!IsSetDatabase()) {
        m_Database = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Database;
}

inline
bool CDatabase_refresh_timestamp_Base::C_Attlist::IsSetMin_num_enz_term(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CDatabase_refresh_timestamp_Base::C_Attlist::CanGetMin_num_enz_term(void) const
{
    return IsSetMin_num_enz_term();
}

inline
void CDatabase_refresh_timestamp_Base::C_Attlist::ResetMin_num_enz_term(void)
{
    m_Min_num_enz_term = 0;
    m_set_State[0] &= ~0xc;
}

inline
CDatabase_refresh_timestamp_Base::C_Attlist::TMin_num_enz_term CDatabase_refresh_timestamp_Base::C_Attlist::GetMin_num_enz_term(void) const
{
    if (!CanGetMin_num_enz_term()) {
        ThrowUnassigned(1);
    }
    return m_Min_num_enz_term;
}

inline
void CDatabase_refresh_timestamp_Base::C_Attlist::SetMin_num_enz_term(CDatabase_refresh_timestamp_Base::C_Attlist::TMin_num_enz_term value)
{
    m_Min_num_enz_term = value;
    m_set_State[0] |= 0xc;
}

inline
CDatabase_refresh_timestamp_Base::C_Attlist::TMin_num_enz_term& CDatabase_refresh_timestamp_Base::C_Attlist::SetMin_num_enz_term(void)
{
#ifdef _DEBUG
    if (!IsSetMin_num_enz_term()) {
        memset(&m_Min_num_enz_term,UnassignedByte(),sizeof(m_Min_num_enz_term));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Min_num_enz_term;
}

inline
bool CDatabase_refresh_timestamp_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CDatabase_refresh_timestamp_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CDatabase_refresh_timestamp_Base::TAttlist& CDatabase_refresh_timestamp_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CDatabase_refresh_timestamp_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CDatabase_refresh_timestamp_Base::TAttlist& CDatabase_refresh_timestamp_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    SetDatabase_refresh_timestamp();
    return (*m_Attlist);
}

inline
bool CDatabase_refresh_timestamp_Base::IsSetDatabase_refresh_timestamp(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CDatabase_refresh_timestamp_Base::CanGetDatabase_refresh_timestamp(void) const
{
    return false;
}

inline
void CDatabase_refresh_timestamp_Base::ResetDatabase_refresh_timestamp(void)
{
    m_set_State[0] &= ~0xc;
}

inline
void CDatabase_refresh_timestamp_Base::SetDatabase_refresh_timestamp(void)
{
    m_set_State[0] |= 0xc;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_DATABASE_REFRESH_TIMESTAMP_BASE_HPP
