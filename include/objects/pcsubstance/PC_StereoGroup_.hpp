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

/// @file PC_StereoGroup_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pcsubstance.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_PCSUBSTANCE_PC_STEREOGROUP_BASE_HPP
#define OBJECTS_PCSUBSTANCE_PC_STEREOGROUP_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// List of atom identifiers which are in a common stereochemistry group.
/// All atoms in this group possess the characteristic of the type specified.
/// The convention adopted is intended to be compatible with MDL's Enhanced
/// Stereochemical Representation white paper.
/// An atom can only be member of a single stereo group, and all atoms
/// in a stereo group must have a stereo descriptor.
/// Stereogroups only apply to stereocenters that can have parity.
class NCBI_PCSUBSTANCE_EXPORT CPC_StereoGroup_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPC_StereoGroup_Base(void);
    // destructor
    virtual ~CPC_StereoGroup_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EType {
        eType_absolute =   1,  ///< Absolute configuration is known
        eType_or       =   2,  ///< Relative configuration is known (absolute configuration is unknown)
        eType_and      =   3,  ///< Mixture of stereoisomers
        eType_unknown  = 255  ///< Unknown configuration type
    };
    
    /// Access to EType's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EType)(void);
    
    // types
    typedef int TType;
    typedef list< int > TAid;

    // getters
    // setters

    /// mandatory
    /// typedef int TType
    ///  Check whether the Type data member has been assigned a value.
    bool IsSetType(void) const;
    /// Check whether it is safe or not to call GetType method.
    bool CanGetType(void) const;
    void ResetType(void);
    TType GetType(void) const;
    void SetType(TType value);
    TType& SetType(void);

    /// Atom Identifiers of atoms in this group
    ///   Note: Atom ID's must be greater than "0"
    /// mandatory
    /// typedef list< int > TAid
    ///  Check whether the Aid data member has been assigned a value.
    bool IsSetAid(void) const;
    /// Check whether it is safe or not to call GetAid method.
    bool CanGetAid(void) const;
    void ResetAid(void);
    const TAid& GetAid(void) const;
    TAid& SetAid(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPC_StereoGroup_Base(const CPC_StereoGroup_Base&);
    CPC_StereoGroup_Base& operator=(const CPC_StereoGroup_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Type;
    list< int > m_Aid;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPC_StereoGroup_Base::IsSetType(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPC_StereoGroup_Base::CanGetType(void) const
{
    return IsSetType();
}

inline
void CPC_StereoGroup_Base::ResetType(void)
{
    m_Type = (EType)(0);
    m_set_State[0] &= ~0x3;
}

inline
CPC_StereoGroup_Base::TType CPC_StereoGroup_Base::GetType(void) const
{
    if (!CanGetType()) {
        ThrowUnassigned(0);
    }
    return m_Type;
}

inline
void CPC_StereoGroup_Base::SetType(CPC_StereoGroup_Base::TType value)
{
    m_Type = value;
    m_set_State[0] |= 0x3;
}

inline
CPC_StereoGroup_Base::TType& CPC_StereoGroup_Base::SetType(void)
{
#ifdef _DEBUG
    if (!IsSetType()) {
        memset(&m_Type,UnassignedByte(),sizeof(m_Type));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Type;
}

inline
bool CPC_StereoGroup_Base::IsSetAid(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPC_StereoGroup_Base::CanGetAid(void) const
{
    return true;
}

inline
const CPC_StereoGroup_Base::TAid& CPC_StereoGroup_Base::GetAid(void) const
{
    return m_Aid;
}

inline
CPC_StereoGroup_Base::TAid& CPC_StereoGroup_Base::SetAid(void)
{
    m_set_State[0] |= 0x4;
    return m_Aid;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PCSUBSTANCE_PC_STEREOGROUP_BASE_HPP
