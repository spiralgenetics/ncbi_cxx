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

/// @file T3Data_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'taxon3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TAXON3_T3DATA_BASE_HPP
#define OBJECTS_TAXON3_T3DATA_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class COrg_ref;
class CT3RefreshFlags;
class CT3StatusFlags;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TAXON3_EXPORT CT3Data_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CT3Data_Base(void);
    // destructor
    virtual ~CT3Data_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef COrg_ref TOrg;
    typedef list< string > TBlast_name_lineage;
    typedef list< CRef< CT3StatusFlags > > TStatus;
    typedef CT3RefreshFlags TRefresh;

    // getters
    // setters

    /// mandatory
    /// typedef COrg_ref TOrg
    ///  Check whether the Org data member has been assigned a value.
    bool IsSetOrg(void) const;
    /// Check whether it is safe or not to call GetOrg method.
    bool CanGetOrg(void) const;
    void ResetOrg(void);
    const TOrg& GetOrg(void) const;
    void SetOrg(TOrg& value);
    TOrg& SetOrg(void);

    /// optional
    /// typedef list< string > TBlast_name_lineage
    ///  Check whether the Blast_name_lineage data member has been assigned a value.
    bool IsSetBlast_name_lineage(void) const;
    /// Check whether it is safe or not to call GetBlast_name_lineage method.
    bool CanGetBlast_name_lineage(void) const;
    void ResetBlast_name_lineage(void);
    const TBlast_name_lineage& GetBlast_name_lineage(void) const;
    TBlast_name_lineage& SetBlast_name_lineage(void);

    /// optional
    /// typedef list< CRef< CT3StatusFlags > > TStatus
    ///  Check whether the Status data member has been assigned a value.
    bool IsSetStatus(void) const;
    /// Check whether it is safe or not to call GetStatus method.
    bool CanGetStatus(void) const;
    void ResetStatus(void);
    const TStatus& GetStatus(void) const;
    TStatus& SetStatus(void);

    /// optional
    /// typedef CT3RefreshFlags TRefresh
    ///  Check whether the Refresh data member has been assigned a value.
    bool IsSetRefresh(void) const;
    /// Check whether it is safe or not to call GetRefresh method.
    bool CanGetRefresh(void) const;
    void ResetRefresh(void);
    const TRefresh& GetRefresh(void) const;
    void SetRefresh(TRefresh& value);
    TRefresh& SetRefresh(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CT3Data_Base(const CT3Data_Base&);
    CT3Data_Base& operator=(const CT3Data_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TOrg > m_Org;
    list< string > m_Blast_name_lineage;
    list< CRef< CT3StatusFlags > > m_Status;
    CRef< TRefresh > m_Refresh;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CT3Data_Base::IsSetOrg(void) const
{
    return m_Org.NotEmpty();
}

inline
bool CT3Data_Base::CanGetOrg(void) const
{
    return true;
}

inline
const CT3Data_Base::TOrg& CT3Data_Base::GetOrg(void) const
{
    if ( !m_Org ) {
        const_cast<CT3Data_Base*>(this)->ResetOrg();
    }
    return (*m_Org);
}

inline
CT3Data_Base::TOrg& CT3Data_Base::SetOrg(void)
{
    if ( !m_Org ) {
        ResetOrg();
    }
    return (*m_Org);
}

inline
bool CT3Data_Base::IsSetBlast_name_lineage(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CT3Data_Base::CanGetBlast_name_lineage(void) const
{
    return true;
}

inline
const CT3Data_Base::TBlast_name_lineage& CT3Data_Base::GetBlast_name_lineage(void) const
{
    return m_Blast_name_lineage;
}

inline
CT3Data_Base::TBlast_name_lineage& CT3Data_Base::SetBlast_name_lineage(void)
{
    m_set_State[0] |= 0x4;
    return m_Blast_name_lineage;
}

inline
bool CT3Data_Base::IsSetStatus(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CT3Data_Base::CanGetStatus(void) const
{
    return true;
}

inline
const CT3Data_Base::TStatus& CT3Data_Base::GetStatus(void) const
{
    return m_Status;
}

inline
CT3Data_Base::TStatus& CT3Data_Base::SetStatus(void)
{
    m_set_State[0] |= 0x10;
    return m_Status;
}

inline
bool CT3Data_Base::IsSetRefresh(void) const
{
    return m_Refresh.NotEmpty();
}

inline
bool CT3Data_Base::CanGetRefresh(void) const
{
    return IsSetRefresh();
}

inline
const CT3Data_Base::TRefresh& CT3Data_Base::GetRefresh(void) const
{
    if (!CanGetRefresh()) {
        ThrowUnassigned(3);
    }
    return (*m_Refresh);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TAXON3_T3DATA_BASE_HPP
