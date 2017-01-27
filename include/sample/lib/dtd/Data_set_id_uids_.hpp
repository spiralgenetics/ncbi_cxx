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

/// @file Data_set_id_uids_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'dtd_sample_lib.dtd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SAMPLE_LIB_DTD_DATA_SET_ID_UIDS_BASE_HPP
#define SAMPLE_LIB_DTD_DATA_SET_ID_UIDS_BASE_HPP

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


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CData_set_id_uids_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CData_set_id_uids_Base(void);
    // destructor
    virtual ~CData_set_id_uids_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< string > TData_set_id_uids_E;

    // getters
    // setters

    /// optional
    /// typedef list< string > TData_set_id_uids_E
    ///  Check whether the Data_set_id_uids_E data member has been assigned a value.
    bool IsSetData_set_id_uids_E(void) const;
    /// Check whether it is safe or not to call GetData_set_id_uids_E method.
    bool CanGetData_set_id_uids_E(void) const;
    void ResetData_set_id_uids_E(void);
    const TData_set_id_uids_E& GetData_set_id_uids_E(void) const;
    TData_set_id_uids_E& SetData_set_id_uids_E(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CData_set_id_uids_Base(const CData_set_id_uids_Base&);
    CData_set_id_uids_Base& operator=(const CData_set_id_uids_Base&);

    // data
    Uint4 m_set_State[1];
    list< string > m_Data_set_id_uids_E;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CData_set_id_uids_Base::IsSetData_set_id_uids_E(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CData_set_id_uids_Base::CanGetData_set_id_uids_E(void) const
{
    return true;
}

inline
const CData_set_id_uids_Base::TData_set_id_uids_E& CData_set_id_uids_Base::GetData_set_id_uids_E(void) const
{
    return m_Data_set_id_uids_E;
}

inline
CData_set_id_uids_Base::TData_set_id_uids_E& CData_set_id_uids_Base::SetData_set_id_uids_E(void)
{
    m_set_State[0] |= 0x1;
    return m_Data_set_id_uids_E;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SAMPLE_LIB_DTD_DATA_SET_ID_UIDS_BASE_HPP