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

/// @file Textannot_id_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seq.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQ_TEXTANNOT_ID_BASE_HPP
#define OBJECTS_SEQ_TEXTANNOT_ID_BASE_HPP

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
///*** Sequence Annotation *************************************
///*
/// This is a replica of Textseq-id
/// This is specific for annotations, and exists to maintain a semantic
/// difference between IDs assigned to annotations and IDs assigned to
/// sequences
class NCBI_SEQ_EXPORT CTextannot_id_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTextannot_id_Base(void);
    // destructor
    virtual ~CTextannot_id_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TName;
    typedef string TAccession;
    typedef string TRelease;
    typedef int TVersion;

    // getters
    // setters

    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// optional
    /// typedef string TAccession
    ///  Check whether the Accession data member has been assigned a value.
    bool IsSetAccession(void) const;
    /// Check whether it is safe or not to call GetAccession method.
    bool CanGetAccession(void) const;
    void ResetAccession(void);
    const TAccession& GetAccession(void) const;
    void SetAccession(const TAccession& value);
    TAccession& SetAccession(void);

    /// optional
    /// typedef string TRelease
    ///  Check whether the Release data member has been assigned a value.
    bool IsSetRelease(void) const;
    /// Check whether it is safe or not to call GetRelease method.
    bool CanGetRelease(void) const;
    void ResetRelease(void);
    const TRelease& GetRelease(void) const;
    void SetRelease(const TRelease& value);
    TRelease& SetRelease(void);

    /// optional
    /// typedef int TVersion
    ///  Check whether the Version data member has been assigned a value.
    bool IsSetVersion(void) const;
    /// Check whether it is safe or not to call GetVersion method.
    bool CanGetVersion(void) const;
    void ResetVersion(void);
    TVersion GetVersion(void) const;
    void SetVersion(TVersion value);
    TVersion& SetVersion(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTextannot_id_Base(const CTextannot_id_Base&);
    CTextannot_id_Base& operator=(const CTextannot_id_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    string m_Accession;
    string m_Release;
    int m_Version;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTextannot_id_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTextannot_id_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CTextannot_id_Base::TName& CTextannot_id_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CTextannot_id_Base::SetName(const CTextannot_id_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CTextannot_id_Base::TName& CTextannot_id_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CTextannot_id_Base::IsSetAccession(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTextannot_id_Base::CanGetAccession(void) const
{
    return IsSetAccession();
}

inline
const CTextannot_id_Base::TAccession& CTextannot_id_Base::GetAccession(void) const
{
    if (!CanGetAccession()) {
        ThrowUnassigned(1);
    }
    return m_Accession;
}

inline
void CTextannot_id_Base::SetAccession(const CTextannot_id_Base::TAccession& value)
{
    m_Accession = value;
    m_set_State[0] |= 0xc;
}

inline
CTextannot_id_Base::TAccession& CTextannot_id_Base::SetAccession(void)
{
#ifdef _DEBUG
    if (!IsSetAccession()) {
        m_Accession = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Accession;
}

inline
bool CTextannot_id_Base::IsSetRelease(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CTextannot_id_Base::CanGetRelease(void) const
{
    return IsSetRelease();
}

inline
const CTextannot_id_Base::TRelease& CTextannot_id_Base::GetRelease(void) const
{
    if (!CanGetRelease()) {
        ThrowUnassigned(2);
    }
    return m_Release;
}

inline
void CTextannot_id_Base::SetRelease(const CTextannot_id_Base::TRelease& value)
{
    m_Release = value;
    m_set_State[0] |= 0x30;
}

inline
CTextannot_id_Base::TRelease& CTextannot_id_Base::SetRelease(void)
{
#ifdef _DEBUG
    if (!IsSetRelease()) {
        m_Release = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Release;
}

inline
bool CTextannot_id_Base::IsSetVersion(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CTextannot_id_Base::CanGetVersion(void) const
{
    return IsSetVersion();
}

inline
void CTextannot_id_Base::ResetVersion(void)
{
    m_Version = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CTextannot_id_Base::TVersion CTextannot_id_Base::GetVersion(void) const
{
    if (!CanGetVersion()) {
        ThrowUnassigned(3);
    }
    return m_Version;
}

inline
void CTextannot_id_Base::SetVersion(CTextannot_id_Base::TVersion value)
{
    m_Version = value;
    m_set_State[0] |= 0xc0;
}

inline
CTextannot_id_Base::TVersion& CTextannot_id_Base::SetVersion(void)
{
#ifdef _DEBUG
    if (!IsSetVersion()) {
        memset(&m_Version,UnassignedByte(),sizeof(m_Version));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Version;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQ_TEXTANNOT_ID_BASE_HPP
