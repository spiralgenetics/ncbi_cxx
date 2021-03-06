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

/// @file ID2_Request_Get_Blob_Id_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'id2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ID2_ID2_REQUEST_GET_BLOB_ID_BASE_HPP
#define OBJECTS_ID2_ID2_REQUEST_GET_BLOB_ID_BASE_HPP

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
class CID2_Request_Get_Seq_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Return blob-id with specified seq-id.
/// This request with be replied with one or more ID2-Reply-Get-Blob-Id.
class NCBI_ID2_EXPORT CID2_Request_Get_Blob_Id_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2_Request_Get_Blob_Id_Base(void);
    // destructor
    virtual ~CID2_Request_Get_Blob_Id_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CID2_Request_Get_Seq_id TSeq_id;
    typedef list< string > TSources;

    // getters
    // setters

    /// id can be supplied by inner request
    /// mandatory
    /// typedef CID2_Request_Get_Seq_id TSeq_id
    ///  Check whether the Seq_id data member has been assigned a value.
    bool IsSetSeq_id(void) const;
    /// Check whether it is safe or not to call GetSeq_id method.
    bool CanGetSeq_id(void) const;
    void ResetSeq_id(void);
    const TSeq_id& GetSeq_id(void) const;
    void SetSeq_id(TSeq_id& value);
    TSeq_id& SetSeq_id(void);

    /// return id of blob with sequence
    /// optional
    /// typedef list< string > TSources
    ///  Check whether the Sources data member has been assigned a value.
    bool IsSetSources(void) const;
    /// Check whether it is safe or not to call GetSources method.
    bool CanGetSources(void) const;
    void ResetSources(void);
    const TSources& GetSources(void) const;
    TSources& SetSources(void);

    /// return Blob-Ids with external features on this Seq-id
    /// optional
    ///  Check whether the External data member has been assigned a value.
    bool IsSetExternal(void) const;
    /// Check whether it is safe or not to call GetExternal method.
    bool CanGetExternal(void) const;
    void ResetExternal(void);
    void SetExternal(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2_Request_Get_Blob_Id_Base(const CID2_Request_Get_Blob_Id_Base&);
    CID2_Request_Get_Blob_Id_Base& operator=(const CID2_Request_Get_Blob_Id_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TSeq_id > m_Seq_id;
    list< string > m_Sources;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2_Request_Get_Blob_Id_Base::IsSetSeq_id(void) const
{
    return m_Seq_id.NotEmpty();
}

inline
bool CID2_Request_Get_Blob_Id_Base::CanGetSeq_id(void) const
{
    return true;
}

inline
const CID2_Request_Get_Blob_Id_Base::TSeq_id& CID2_Request_Get_Blob_Id_Base::GetSeq_id(void) const
{
    if ( !m_Seq_id ) {
        const_cast<CID2_Request_Get_Blob_Id_Base*>(this)->ResetSeq_id();
    }
    return (*m_Seq_id);
}

inline
CID2_Request_Get_Blob_Id_Base::TSeq_id& CID2_Request_Get_Blob_Id_Base::SetSeq_id(void)
{
    if ( !m_Seq_id ) {
        ResetSeq_id();
    }
    return (*m_Seq_id);
}

inline
bool CID2_Request_Get_Blob_Id_Base::IsSetSources(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2_Request_Get_Blob_Id_Base::CanGetSources(void) const
{
    return true;
}

inline
const CID2_Request_Get_Blob_Id_Base::TSources& CID2_Request_Get_Blob_Id_Base::GetSources(void) const
{
    return m_Sources;
}

inline
CID2_Request_Get_Blob_Id_Base::TSources& CID2_Request_Get_Blob_Id_Base::SetSources(void)
{
    m_set_State[0] |= 0x4;
    return m_Sources;
}

inline
bool CID2_Request_Get_Blob_Id_Base::IsSetExternal(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CID2_Request_Get_Blob_Id_Base::CanGetExternal(void) const
{
    return false;
}

inline
void CID2_Request_Get_Blob_Id_Base::ResetExternal(void)
{
    m_set_State[0] &= ~0x30;
}

inline
void CID2_Request_Get_Blob_Id_Base::SetExternal(void)
{
    m_set_State[0] |= 0x30;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ID2_ID2_REQUEST_GET_BLOB_ID_BASE_HPP
