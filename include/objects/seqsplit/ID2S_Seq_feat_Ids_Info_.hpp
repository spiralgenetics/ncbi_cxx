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

/// @file ID2S_Seq_feat_Ids_Info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqsplit.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQSPLIT_ID2S_SEQ_FEAT_IDS_INFO_BASE_HPP
#define OBJECTS_SEQSPLIT_ID2S_SEQ_FEAT_IDS_INFO_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>
#include <vector>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CID2S_Feat_type_Info;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_ID2_EXPORT CID2S_Seq_feat_Ids_Info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2S_Seq_feat_Ids_Info_Base(void);
    // destructor
    virtual ~CID2S_Seq_feat_Ids_Info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CID2S_Feat_type_Info > > TFeat_types;
    typedef list< CRef< CID2S_Feat_type_Info > > TXref_types;
    typedef vector< int > TLocal_ids;
    typedef list< string > TLocal_str_ids;

    // getters
    // setters

    /// optional
    /// typedef list< CRef< CID2S_Feat_type_Info > > TFeat_types
    ///  Check whether the Feat_types data member has been assigned a value.
    bool IsSetFeat_types(void) const;
    /// Check whether it is safe or not to call GetFeat_types method.
    bool CanGetFeat_types(void) const;
    void ResetFeat_types(void);
    const TFeat_types& GetFeat_types(void) const;
    TFeat_types& SetFeat_types(void);

    /// optional
    /// typedef list< CRef< CID2S_Feat_type_Info > > TXref_types
    ///  Check whether the Xref_types data member has been assigned a value.
    bool IsSetXref_types(void) const;
    /// Check whether it is safe or not to call GetXref_types method.
    bool CanGetXref_types(void) const;
    void ResetXref_types(void);
    const TXref_types& GetXref_types(void) const;
    TXref_types& SetXref_types(void);

    /// optional
    /// typedef vector< int > TLocal_ids
    ///  Check whether the Local_ids data member has been assigned a value.
    bool IsSetLocal_ids(void) const;
    /// Check whether it is safe or not to call GetLocal_ids method.
    bool CanGetLocal_ids(void) const;
    void ResetLocal_ids(void);
    const TLocal_ids& GetLocal_ids(void) const;
    TLocal_ids& SetLocal_ids(void);

    /// optional
    /// typedef list< string > TLocal_str_ids
    ///  Check whether the Local_str_ids data member has been assigned a value.
    bool IsSetLocal_str_ids(void) const;
    /// Check whether it is safe or not to call GetLocal_str_ids method.
    bool CanGetLocal_str_ids(void) const;
    void ResetLocal_str_ids(void);
    const TLocal_str_ids& GetLocal_str_ids(void) const;
    TLocal_str_ids& SetLocal_str_ids(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2S_Seq_feat_Ids_Info_Base(const CID2S_Seq_feat_Ids_Info_Base&);
    CID2S_Seq_feat_Ids_Info_Base& operator=(const CID2S_Seq_feat_Ids_Info_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CID2S_Feat_type_Info > > m_Feat_types;
    list< CRef< CID2S_Feat_type_Info > > m_Xref_types;
    vector< int > m_Local_ids;
    list< string > m_Local_str_ids;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2S_Seq_feat_Ids_Info_Base::IsSetFeat_types(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::CanGetFeat_types(void) const
{
    return true;
}

inline
const CID2S_Seq_feat_Ids_Info_Base::TFeat_types& CID2S_Seq_feat_Ids_Info_Base::GetFeat_types(void) const
{
    return m_Feat_types;
}

inline
CID2S_Seq_feat_Ids_Info_Base::TFeat_types& CID2S_Seq_feat_Ids_Info_Base::SetFeat_types(void)
{
    m_set_State[0] |= 0x1;
    return m_Feat_types;
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::IsSetXref_types(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::CanGetXref_types(void) const
{
    return true;
}

inline
const CID2S_Seq_feat_Ids_Info_Base::TXref_types& CID2S_Seq_feat_Ids_Info_Base::GetXref_types(void) const
{
    return m_Xref_types;
}

inline
CID2S_Seq_feat_Ids_Info_Base::TXref_types& CID2S_Seq_feat_Ids_Info_Base::SetXref_types(void)
{
    m_set_State[0] |= 0x4;
    return m_Xref_types;
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::IsSetLocal_ids(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::CanGetLocal_ids(void) const
{
    return true;
}

inline
const CID2S_Seq_feat_Ids_Info_Base::TLocal_ids& CID2S_Seq_feat_Ids_Info_Base::GetLocal_ids(void) const
{
    return m_Local_ids;
}

inline
CID2S_Seq_feat_Ids_Info_Base::TLocal_ids& CID2S_Seq_feat_Ids_Info_Base::SetLocal_ids(void)
{
    m_set_State[0] |= 0x10;
    return m_Local_ids;
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::IsSetLocal_str_ids(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CID2S_Seq_feat_Ids_Info_Base::CanGetLocal_str_ids(void) const
{
    return true;
}

inline
const CID2S_Seq_feat_Ids_Info_Base::TLocal_str_ids& CID2S_Seq_feat_Ids_Info_Base::GetLocal_str_ids(void) const
{
    return m_Local_str_ids;
}

inline
CID2S_Seq_feat_Ids_Info_Base::TLocal_str_ids& CID2S_Seq_feat_Ids_Info_Base::SetLocal_str_ids(void)
{
    m_set_State[0] |= 0x40;
    return m_Local_str_ids;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQSPLIT_ID2S_SEQ_FEAT_IDS_INFO_BASE_HPP
