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

/// @file Cn3d_molecule_location_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cn3d.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CN3D_CN3D_MOLECULE_LOCATION_BASE_HPP
#define OBJECTS_CN3D_CN3D_MOLECULE_LOCATION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/mmdb1/Molecule_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCn3d_residue_range;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// set of locations on a particular chain
class NCBI_CN3D_EXPORT CCn3d_molecule_location_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CCn3d_molecule_location_Base(void);
    // destructor
    virtual ~CCn3d_molecule_location_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CMolecule_id TMolecule_id;
    typedef list< CRef< CCn3d_residue_range > > TResidues;

    // getters
    // setters

    /// MMDB molecule id
    /// which residues; whole molecule implied if absent
    /// mandatory
    /// typedef CMolecule_id TMolecule_id
    ///  Check whether the Molecule_id data member has been assigned a value.
    bool IsSetMolecule_id(void) const;
    /// Check whether it is safe or not to call GetMolecule_id method.
    bool CanGetMolecule_id(void) const;
    void ResetMolecule_id(void);
    const TMolecule_id& GetMolecule_id(void) const;
    void SetMolecule_id(const TMolecule_id& value);
    TMolecule_id& SetMolecule_id(void);

    /// optional
    /// typedef list< CRef< CCn3d_residue_range > > TResidues
    ///  Check whether the Residues data member has been assigned a value.
    bool IsSetResidues(void) const;
    /// Check whether it is safe or not to call GetResidues method.
    bool CanGetResidues(void) const;
    void ResetResidues(void);
    const TResidues& GetResidues(void) const;
    TResidues& SetResidues(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CCn3d_molecule_location_Base(const CCn3d_molecule_location_Base&);
    CCn3d_molecule_location_Base& operator=(const CCn3d_molecule_location_Base&);

    // data
    Uint4 m_set_State[1];
    CMolecule_id m_Molecule_id;
    list< CRef< CCn3d_residue_range > > m_Residues;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CCn3d_molecule_location_Base::IsSetMolecule_id(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CCn3d_molecule_location_Base::CanGetMolecule_id(void) const
{
    return IsSetMolecule_id();
}

inline
void CCn3d_molecule_location_Base::ResetMolecule_id(void)
{
    m_Molecule_id = CMolecule_id(0);
    m_set_State[0] &= ~0x3;
}

inline
const CCn3d_molecule_location_Base::TMolecule_id& CCn3d_molecule_location_Base::GetMolecule_id(void) const
{
    if (!CanGetMolecule_id()) {
        ThrowUnassigned(0);
    }
    return m_Molecule_id;
}

inline
void CCn3d_molecule_location_Base::SetMolecule_id(const CCn3d_molecule_location_Base::TMolecule_id& value)
{
    m_Molecule_id = value;
    m_set_State[0] |= 0x3;
}

inline
CCn3d_molecule_location_Base::TMolecule_id& CCn3d_molecule_location_Base::SetMolecule_id(void)
{
    m_set_State[0] |= 0x1;
    return m_Molecule_id;
}

inline
bool CCn3d_molecule_location_Base::IsSetResidues(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CCn3d_molecule_location_Base::CanGetResidues(void) const
{
    return true;
}

inline
const CCn3d_molecule_location_Base::TResidues& CCn3d_molecule_location_Base::GetResidues(void) const
{
    return m_Residues;
}

inline
CCn3d_molecule_location_Base::TResidues& CCn3d_molecule_location_Base::SetResidues(void)
{
    m_set_State[0] |= 0x4;
    return m_Residues;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CN3D_CN3D_MOLECULE_LOCATION_BASE_HPP
