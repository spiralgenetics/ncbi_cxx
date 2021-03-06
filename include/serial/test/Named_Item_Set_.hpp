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

/// @file Named_Item_Set_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'we_cpp.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SERIAL_TEST_NAMED_ITEM_SET_BASE_HPP
#define SERIAL_TEST_NAMED_ITEM_SET_BASE_HPP

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


// forward declarations
class CItem_Set;
class CName;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CNamed_Item_Set_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CNamed_Item_Set_Base(void);
    // destructor
    virtual ~CNamed_Item_Set_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CName TName;
    typedef string TDb;
    typedef CItem_Set TItem_Set;

    // getters
    // setters

    /// mandatory
    /// typedef CName TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(TName& value);
    TName& SetName(void);

    /// mandatory
    /// typedef string TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    const TDb& GetDb(void) const;
    void SetDb(const TDb& value);
    TDb& SetDb(void);

    /// mandatory
    /// typedef CItem_Set TItem_Set
    ///  Check whether the Item_Set data member has been assigned a value.
    bool IsSetItem_Set(void) const;
    /// Check whether it is safe or not to call GetItem_Set method.
    bool CanGetItem_Set(void) const;
    void ResetItem_Set(void);
    const TItem_Set& GetItem_Set(void) const;
    void SetItem_Set(TItem_Set& value);
    TItem_Set& SetItem_Set(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CNamed_Item_Set_Base(const CNamed_Item_Set_Base&);
    CNamed_Item_Set_Base& operator=(const CNamed_Item_Set_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TName > m_Name;
    string m_Db;
    CRef< TItem_Set > m_Item_Set;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CNamed_Item_Set_Base::IsSetName(void) const
{
    return m_Name.NotEmpty();
}

inline
bool CNamed_Item_Set_Base::CanGetName(void) const
{
    return true;
}

inline
const CNamed_Item_Set_Base::TName& CNamed_Item_Set_Base::GetName(void) const
{
    if ( !m_Name ) {
        const_cast<CNamed_Item_Set_Base*>(this)->ResetName();
    }
    return (*m_Name);
}

inline
CNamed_Item_Set_Base::TName& CNamed_Item_Set_Base::SetName(void)
{
    if ( !m_Name ) {
        ResetName();
    }
    return (*m_Name);
}

inline
bool CNamed_Item_Set_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CNamed_Item_Set_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
const CNamed_Item_Set_Base::TDb& CNamed_Item_Set_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(1);
    }
    return m_Db;
}

inline
void CNamed_Item_Set_Base::SetDb(const CNamed_Item_Set_Base::TDb& value)
{
    m_Db = value;
    m_set_State[0] |= 0xc;
}

inline
CNamed_Item_Set_Base::TDb& CNamed_Item_Set_Base::SetDb(void)
{
#ifdef _DEBUG
    if (!IsSetDb()) {
        m_Db = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Db;
}

inline
bool CNamed_Item_Set_Base::IsSetItem_Set(void) const
{
    return m_Item_Set.NotEmpty();
}

inline
bool CNamed_Item_Set_Base::CanGetItem_Set(void) const
{
    return true;
}

inline
const CNamed_Item_Set_Base::TItem_Set& CNamed_Item_Set_Base::GetItem_Set(void) const
{
    if ( !m_Item_Set ) {
        const_cast<CNamed_Item_Set_Base*>(this)->ResetItem_Set();
    }
    return (*m_Item_Set);
}

inline
CNamed_Item_Set_Base::TItem_Set& CNamed_Item_Set_Base::SetItem_Set(void)
{
    if ( !m_Item_Set ) {
        ResetItem_Set();
    }
    return (*m_Item_Set);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SERIAL_TEST_NAMED_ITEM_SET_BASE_HPP
