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

/// @file ID2_Reply_Get_Blob_Seq_ids_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'id2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ID2_ID2_REPLY_GET_BLOB_SEQ_IDS_BASE_HPP
#define OBJECTS_ID2_ID2_REPLY_GET_BLOB_SEQ_IDS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CID2_Blob_Id;
class CID2_Reply_Data;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Reply to ID2-Request-Get-Blob-Info.
class NCBI_ID2_EXPORT CID2_Reply_Get_Blob_Seq_ids_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2_Reply_Get_Blob_Seq_ids_Base(void);
    // destructor
    virtual ~CID2_Reply_Get_Blob_Seq_ids_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CID2_Blob_Id TBlob_id;
    typedef CID2_Reply_Data TIds;

    // getters
    // setters

    /// mandatory
    /// typedef CID2_Blob_Id TBlob_id
    ///  Check whether the Blob_id data member has been assigned a value.
    bool IsSetBlob_id(void) const;
    /// Check whether it is safe or not to call GetBlob_id method.
    bool CanGetBlob_id(void) const;
    void ResetBlob_id(void);
    const TBlob_id& GetBlob_id(void) const;
    void SetBlob_id(TBlob_id& value);
    TBlob_id& SetBlob_id(void);

    /// list of Seq-id resolving to this Blob-Id
    /// in compressed format
    /// optional
    /// typedef CID2_Reply_Data TIds
    ///  Check whether the Ids data member has been assigned a value.
    bool IsSetIds(void) const;
    /// Check whether it is safe or not to call GetIds method.
    bool CanGetIds(void) const;
    void ResetIds(void);
    const TIds& GetIds(void) const;
    void SetIds(TIds& value);
    TIds& SetIds(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2_Reply_Get_Blob_Seq_ids_Base(const CID2_Reply_Get_Blob_Seq_ids_Base&);
    CID2_Reply_Get_Blob_Seq_ids_Base& operator=(const CID2_Reply_Get_Blob_Seq_ids_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TBlob_id > m_Blob_id;
    CRef< TIds > m_Ids;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2_Reply_Get_Blob_Seq_ids_Base::IsSetBlob_id(void) const
{
    return m_Blob_id.NotEmpty();
}

inline
bool CID2_Reply_Get_Blob_Seq_ids_Base::CanGetBlob_id(void) const
{
    return true;
}

inline
const CID2_Reply_Get_Blob_Seq_ids_Base::TBlob_id& CID2_Reply_Get_Blob_Seq_ids_Base::GetBlob_id(void) const
{
    if ( !m_Blob_id ) {
        const_cast<CID2_Reply_Get_Blob_Seq_ids_Base*>(this)->ResetBlob_id();
    }
    return (*m_Blob_id);
}

inline
CID2_Reply_Get_Blob_Seq_ids_Base::TBlob_id& CID2_Reply_Get_Blob_Seq_ids_Base::SetBlob_id(void)
{
    if ( !m_Blob_id ) {
        ResetBlob_id();
    }
    return (*m_Blob_id);
}

inline
bool CID2_Reply_Get_Blob_Seq_ids_Base::IsSetIds(void) const
{
    return m_Ids.NotEmpty();
}

inline
bool CID2_Reply_Get_Blob_Seq_ids_Base::CanGetIds(void) const
{
    return IsSetIds();
}

inline
const CID2_Reply_Get_Blob_Seq_ids_Base::TIds& CID2_Reply_Get_Blob_Seq_ids_Base::GetIds(void) const
{
    if (!CanGetIds()) {
        ThrowUnassigned(1);
    }
    return (*m_Ids);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ID2_ID2_REPLY_GET_BLOB_SEQ_IDS_BASE_HPP
