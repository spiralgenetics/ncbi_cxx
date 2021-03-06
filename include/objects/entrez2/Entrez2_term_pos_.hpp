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

/// @file Entrez2_term_pos_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'entrez2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ENTREZ2_ENTREZ2_TERM_POS_BASE_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_TERM_POS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/entrez2/Entrez2_db_id.hpp>
#include <objects/entrez2/Entrez2_field_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// request portions of term list
class NCBI_ENTREZ2_EXPORT CEntrez2_term_pos_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CEntrez2_term_pos_Base(void);
    // destructor
    virtual ~CEntrez2_term_pos_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CEntrez2_db_id TDb;
    typedef CEntrez2_field_id TField;
    typedef int TFirst_term_pos;
    typedef int TNumber_of_terms;

    // getters
    // setters

    /// mandatory
    /// typedef CEntrez2_db_id TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    const TDb& GetDb(void) const;
    void SetDb(const TDb& value);
    TDb& SetDb(void);

    /// mandatory
    /// typedef CEntrez2_field_id TField
    ///  Check whether the Field data member has been assigned a value.
    bool IsSetField(void) const;
    /// Check whether it is safe or not to call GetField method.
    bool CanGetField(void) const;
    void ResetField(void);
    const TField& GetField(void) const;
    void SetField(const TField& value);
    TField& SetField(void);

    /// mandatory
    /// typedef int TFirst_term_pos
    ///  Check whether the First_term_pos data member has been assigned a value.
    bool IsSetFirst_term_pos(void) const;
    /// Check whether it is safe or not to call GetFirst_term_pos method.
    bool CanGetFirst_term_pos(void) const;
    void ResetFirst_term_pos(void);
    TFirst_term_pos GetFirst_term_pos(void) const;
    void SetFirst_term_pos(TFirst_term_pos value);
    TFirst_term_pos& SetFirst_term_pos(void);

    /// optional for hierarchy only
    /// optional
    /// typedef int TNumber_of_terms
    ///  Check whether the Number_of_terms data member has been assigned a value.
    bool IsSetNumber_of_terms(void) const;
    /// Check whether it is safe or not to call GetNumber_of_terms method.
    bool CanGetNumber_of_terms(void) const;
    void ResetNumber_of_terms(void);
    TNumber_of_terms GetNumber_of_terms(void) const;
    void SetNumber_of_terms(TNumber_of_terms value);
    TNumber_of_terms& SetNumber_of_terms(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CEntrez2_term_pos_Base(const CEntrez2_term_pos_Base&);
    CEntrez2_term_pos_Base& operator=(const CEntrez2_term_pos_Base&);

    // data
    Uint4 m_set_State[1];
    CEntrez2_db_id m_Db;
    CEntrez2_field_id m_Field;
    int m_First_term_pos;
    int m_Number_of_terms;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CEntrez2_term_pos_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CEntrez2_term_pos_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
const CEntrez2_term_pos_Base::TDb& CEntrez2_term_pos_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(0);
    }
    return m_Db;
}

inline
void CEntrez2_term_pos_Base::SetDb(const CEntrez2_term_pos_Base::TDb& value)
{
    m_Db = value;
    m_set_State[0] |= 0x3;
}

inline
CEntrez2_term_pos_Base::TDb& CEntrez2_term_pos_Base::SetDb(void)
{
    m_set_State[0] |= 0x1;
    return m_Db;
}

inline
bool CEntrez2_term_pos_Base::IsSetField(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CEntrez2_term_pos_Base::CanGetField(void) const
{
    return IsSetField();
}

inline
const CEntrez2_term_pos_Base::TField& CEntrez2_term_pos_Base::GetField(void) const
{
    if (!CanGetField()) {
        ThrowUnassigned(1);
    }
    return m_Field;
}

inline
void CEntrez2_term_pos_Base::SetField(const CEntrez2_term_pos_Base::TField& value)
{
    m_Field = value;
    m_set_State[0] |= 0xc;
}

inline
CEntrez2_term_pos_Base::TField& CEntrez2_term_pos_Base::SetField(void)
{
    m_set_State[0] |= 0x4;
    return m_Field;
}

inline
bool CEntrez2_term_pos_Base::IsSetFirst_term_pos(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CEntrez2_term_pos_Base::CanGetFirst_term_pos(void) const
{
    return IsSetFirst_term_pos();
}

inline
void CEntrez2_term_pos_Base::ResetFirst_term_pos(void)
{
    m_First_term_pos = 0;
    m_set_State[0] &= ~0x30;
}

inline
CEntrez2_term_pos_Base::TFirst_term_pos CEntrez2_term_pos_Base::GetFirst_term_pos(void) const
{
    if (!CanGetFirst_term_pos()) {
        ThrowUnassigned(2);
    }
    return m_First_term_pos;
}

inline
void CEntrez2_term_pos_Base::SetFirst_term_pos(CEntrez2_term_pos_Base::TFirst_term_pos value)
{
    m_First_term_pos = value;
    m_set_State[0] |= 0x30;
}

inline
CEntrez2_term_pos_Base::TFirst_term_pos& CEntrez2_term_pos_Base::SetFirst_term_pos(void)
{
#ifdef _DEBUG
    if (!IsSetFirst_term_pos()) {
        memset(&m_First_term_pos,UnassignedByte(),sizeof(m_First_term_pos));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_First_term_pos;
}

inline
bool CEntrez2_term_pos_Base::IsSetNumber_of_terms(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CEntrez2_term_pos_Base::CanGetNumber_of_terms(void) const
{
    return IsSetNumber_of_terms();
}

inline
void CEntrez2_term_pos_Base::ResetNumber_of_terms(void)
{
    m_Number_of_terms = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CEntrez2_term_pos_Base::TNumber_of_terms CEntrez2_term_pos_Base::GetNumber_of_terms(void) const
{
    if (!CanGetNumber_of_terms()) {
        ThrowUnassigned(3);
    }
    return m_Number_of_terms;
}

inline
void CEntrez2_term_pos_Base::SetNumber_of_terms(CEntrez2_term_pos_Base::TNumber_of_terms value)
{
    m_Number_of_terms = value;
    m_set_State[0] |= 0xc0;
}

inline
CEntrez2_term_pos_Base::TNumber_of_terms& CEntrez2_term_pos_Base::SetNumber_of_terms(void)
{
#ifdef _DEBUG
    if (!IsSetNumber_of_terms()) {
        memset(&m_Number_of_terms,UnassignedByte(),sizeof(m_Number_of_terms));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Number_of_terms;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ENTREZ2_ENTREZ2_TERM_POS_BASE_HPP
