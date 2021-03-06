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

/// @file Site_annot_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'scoremat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SCOREMAT_SITE_ANNOT_BASE_HPP
#define OBJECTS_SCOREMAT_SITE_ANNOT_BASE_HPP

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
class NCBI_SCOREMAT_EXPORT CSite_annot_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSite_annot_Base(void);
    // destructor
    virtual ~CSite_annot_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TStartPosition;
    typedef int TStopPosition;
    typedef string TDescription;
    typedef int TType;
    typedef list< string > TAliases;
    typedef string TMotif;
    typedef int TMotifuse;

    // getters
    // setters

    /// location of the annotation,
    /// mandatory
    /// typedef int TStartPosition
    ///  Check whether the StartPosition data member has been assigned a value.
    bool IsSetStartPosition(void) const;
    /// Check whether it is safe or not to call GetStartPosition method.
    bool CanGetStartPosition(void) const;
    void ResetStartPosition(void);
    TStartPosition GetStartPosition(void) const;
    void SetStartPosition(TStartPosition value);
    TStartPosition& SetStartPosition(void);

    /// start and stop position in the
    /// PSSM
    /// mandatory
    /// typedef int TStopPosition
    ///  Check whether the StopPosition data member has been assigned a value.
    bool IsSetStopPosition(void) const;
    /// Check whether it is safe or not to call GetStopPosition method.
    bool CanGetStopPosition(void) const;
    void ResetStopPosition(void);
    TStopPosition GetStopPosition(void) const;
    void SetStopPosition(TStopPosition value);
    TStopPosition& SetStopPosition(void);

    /// holds description or names, that
    /// can be used for labels in
    /// visualization
    /// optional
    /// typedef string TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    void SetDescription(const TDescription& value);
    TDescription& SetDescription(void);

    /// type of the annotated feature,
    /// similarly to Align-annot in
    /// NCBI-Cdd
    /// optional
    /// typedef int TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// additional names for
    /// the annotation
    /// optional
    /// typedef list< string > TAliases
    ///  Check whether the Aliases data member has been assigned a value.
    bool IsSetAliases(void) const;
    /// Check whether it is safe or not to call GetAliases method.
    bool CanGetAliases(void) const;
    void ResetAliases(void);
    const TAliases& GetAliases(void) const;
    TAliases& SetAliases(void);

    /// motif to validate mapping of sites
    /// optional
    /// typedef string TMotif
    ///  Check whether the Motif data member has been assigned a value.
    bool IsSetMotif(void) const;
    /// Check whether it is safe or not to call GetMotif method.
    bool CanGetMotif(void) const;
    void ResetMotif(void);
    const TMotif& GetMotif(void) const;
    void SetMotif(const TMotif& value);
    TMotif& SetMotif(void);

    /// 0 for validation
    /// 1 for motif in seqloc
    /// 2 for multiple motifs in seqloc
    /// optional
    /// typedef int TMotifuse
    ///  Check whether the Motifuse data member has been assigned a value.
    bool IsSetMotifuse(void) const;
    /// Check whether it is safe or not to call GetMotifuse method.
    bool CanGetMotifuse(void) const;
    void ResetMotifuse(void);
    TMotifuse GetMotifuse(void) const;
    void SetMotifuse(TMotifuse value);
    TMotifuse& SetMotifuse(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSite_annot_Base(const CSite_annot_Base&);
    CSite_annot_Base& operator=(const CSite_annot_Base&);

    // data
    Uint4 m_set_State[1];
    int m_StartPosition;
    int m_StopPosition;
    string m_Description;
    int m_Type;
    list< string > m_Aliases;
    string m_Motif;
    int m_Motifuse;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSite_annot_Base::IsSetStartPosition(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSite_annot_Base::CanGetStartPosition(void) const
{
    return IsSetStartPosition();
}

inline
void CSite_annot_Base::ResetStartPosition(void)
{
    m_StartPosition = 0;
    m_set_State[0] &= ~0x3;
}

inline
CSite_annot_Base::TStartPosition CSite_annot_Base::GetStartPosition(void) const
{
    if (!CanGetStartPosition()) {
        ThrowUnassigned(0);
    }
    return m_StartPosition;
}

inline
void CSite_annot_Base::SetStartPosition(CSite_annot_Base::TStartPosition value)
{
    m_StartPosition = value;
    m_set_State[0] |= 0x3;
}

inline
CSite_annot_Base::TStartPosition& CSite_annot_Base::SetStartPosition(void)
{
#ifdef _DEBUG
    if (!IsSetStartPosition()) {
        memset(&m_StartPosition,UnassignedByte(),sizeof(m_StartPosition));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_StartPosition;
}

inline
bool CSite_annot_Base::IsSetStopPosition(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSite_annot_Base::CanGetStopPosition(void) const
{
    return IsSetStopPosition();
}

inline
void CSite_annot_Base::ResetStopPosition(void)
{
    m_StopPosition = 0;
    m_set_State[0] &= ~0xc;
}

inline
CSite_annot_Base::TStopPosition CSite_annot_Base::GetStopPosition(void) const
{
    if (!CanGetStopPosition()) {
        ThrowUnassigned(1);
    }
    return m_StopPosition;
}

inline
void CSite_annot_Base::SetStopPosition(CSite_annot_Base::TStopPosition value)
{
    m_StopPosition = value;
    m_set_State[0] |= 0xc;
}

inline
CSite_annot_Base::TStopPosition& CSite_annot_Base::SetStopPosition(void)
{
#ifdef _DEBUG
    if (!IsSetStopPosition()) {
        memset(&m_StopPosition,UnassignedByte(),sizeof(m_StopPosition));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_StopPosition;
}

inline
bool CSite_annot_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSite_annot_Base::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CSite_annot_Base::TDescription& CSite_annot_Base::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(2);
    }
    return m_Description;
}

inline
void CSite_annot_Base::SetDescription(const CSite_annot_Base::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0x30;
}

inline
CSite_annot_Base::TDescription& CSite_annot_Base::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Description;
}

inline
bool CSite_annot_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CSite_annot_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CSite_annot_Base::ResetType(void)
{
    m_Type = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CSite_annot_Base::TType CSite_annot_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(3);
    }
    return m_Type;
}

inline
void CSite_annot_Base::SetType(CSite_annot_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0xc0;
}

inline
CSite_annot_Base::TType& CSite_annot_Base::SetType(void)
{
#ifdef _DEBUG
    if (!IsSetType()) {
        memset(&m_Type,UnassignedByte(),sizeof(m_Type));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Type;
}

inline
bool CSite_annot_Base::IsSetAliases(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CSite_annot_Base::CanGetAliases(void) const
{
    return true;
}

inline
const CSite_annot_Base::TAliases& CSite_annot_Base::GetAliases(void) const
{
    return m_Aliases;
}

inline
CSite_annot_Base::TAliases& CSite_annot_Base::SetAliases(void)
{
    m_set_State[0] |= 0x100;
    return m_Aliases;
}

inline
bool CSite_annot_Base::IsSetMotif(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CSite_annot_Base::CanGetMotif(void) const
{
    return IsSetMotif();
}

inline
const CSite_annot_Base::TMotif& CSite_annot_Base::GetMotif(void) const
{
    if (!CanGetMotif()) {
        ThrowUnassigned(5);
    }
    return m_Motif;
}

inline
void CSite_annot_Base::SetMotif(const CSite_annot_Base::TMotif& value)
{
    m_Motif = value;
    m_set_State[0] |= 0xc00;
}

inline
CSite_annot_Base::TMotif& CSite_annot_Base::SetMotif(void)
{
#ifdef _DEBUG
    if (!IsSetMotif()) {
        m_Motif = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Motif;
}

inline
bool CSite_annot_Base::IsSetMotifuse(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CSite_annot_Base::CanGetMotifuse(void) const
{
    return IsSetMotifuse();
}

inline
void CSite_annot_Base::ResetMotifuse(void)
{
    m_Motifuse = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CSite_annot_Base::TMotifuse CSite_annot_Base::GetMotifuse(void) const
{
    if (!CanGetMotifuse()) {
        ThrowUnassigned(6);
    }
    return m_Motifuse;
}

inline
void CSite_annot_Base::SetMotifuse(CSite_annot_Base::TMotifuse value)
{
    m_Motifuse = value;
    m_set_State[0] |= 0x3000;
}

inline
CSite_annot_Base::TMotifuse& CSite_annot_Base::SetMotifuse(void)
{
#ifdef _DEBUG
    if (!IsSetMotifuse()) {
        memset(&m_Motifuse,UnassignedByte(),sizeof(m_Motifuse));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Motifuse;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SCOREMAT_SITE_ANNOT_BASE_HPP
