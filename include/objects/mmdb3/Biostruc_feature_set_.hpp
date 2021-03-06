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

/// @file Biostruc_feature_set_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_BIOSTRUC_FEATURE_SET_BASE_HPP
#define OBJECTS_MMDB3_BIOSTRUC_FEATURE_SET_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <objects/mmdb3/Biostruc_feature_set_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CBiostruc_feature;
class CBiostruc_feature_set_descr;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Named model features refer to sets of residues or atoms, or a region in 
/// the model space.  A few specific feature types are allowed for compatibility
/// with PDB usage, but the purpose of a named model feature is simply to
/// associate various types of information with a set of atoms or 
/// residues, or a spatially-defined region of the model structure.  They also
/// support association of various properties with each residue or atom of a
/// set.
/// PDB-derived secondary structure defines a single feature, represented as a
/// sequence of residue motifs, as are the contents of PDB SITE and
/// FTNOTE records.  NCBI-assigned core and secondary structure descriptions
/// are also represented as a sequence of residue motifs.
class NCBI_MMDB3_EXPORT CBiostruc_feature_set_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBiostruc_feature_set_Base(void);
    // destructor
    virtual ~CBiostruc_feature_set_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CBiostruc_feature_set_id TId;
    typedef list< CRef< CBiostruc_feature_set_descr > > TDescr;
    typedef list< CRef< CBiostruc_feature > > TFeatures;

    // getters
    // setters

    /// mandatory
    /// typedef CBiostruc_feature_set_id TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    void SetId(const TId& value);
    TId& SetId(void);

    /// optional
    /// typedef list< CRef< CBiostruc_feature_set_descr > > TDescr
    ///  Check whether the Descr data member has been assigned a value.
    bool IsSetDescr(void) const;
    /// Check whether it is safe or not to call GetDescr method.
    bool CanGetDescr(void) const;
    void ResetDescr(void);
    const TDescr& GetDescr(void) const;
    TDescr& SetDescr(void);

    /// mandatory
    /// typedef list< CRef< CBiostruc_feature > > TFeatures
    ///  Check whether the Features data member has been assigned a value.
    bool IsSetFeatures(void) const;
    /// Check whether it is safe or not to call GetFeatures method.
    bool CanGetFeatures(void) const;
    void ResetFeatures(void);
    const TFeatures& GetFeatures(void) const;
    TFeatures& SetFeatures(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBiostruc_feature_set_Base(const CBiostruc_feature_set_Base&);
    CBiostruc_feature_set_Base& operator=(const CBiostruc_feature_set_Base&);

    // data
    Uint4 m_set_State[1];
    CBiostruc_feature_set_id m_Id;
    list< CRef< CBiostruc_feature_set_descr > > m_Descr;
    list< CRef< CBiostruc_feature > > m_Features;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBiostruc_feature_set_Base::IsSetId(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CBiostruc_feature_set_Base::CanGetId(void) const
{
    return IsSetId();
}

inline
void CBiostruc_feature_set_Base::ResetId(void)
{
    m_Id = CBiostruc_feature_set_id(0);
    m_set_State[0] &= ~0x3;
}

inline
const CBiostruc_feature_set_Base::TId& CBiostruc_feature_set_Base::GetId(void) const
{
    if (!CanGetId()) {
        ThrowUnassigned(0);
    }
    return m_Id;
}

inline
void CBiostruc_feature_set_Base::SetId(const CBiostruc_feature_set_Base::TId& value)
{
    m_Id = value;
    m_set_State[0] |= 0x3;
}

inline
CBiostruc_feature_set_Base::TId& CBiostruc_feature_set_Base::SetId(void)
{
    m_set_State[0] |= 0x1;
    return m_Id;
}

inline
bool CBiostruc_feature_set_Base::IsSetDescr(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CBiostruc_feature_set_Base::CanGetDescr(void) const
{
    return true;
}

inline
const CBiostruc_feature_set_Base::TDescr& CBiostruc_feature_set_Base::GetDescr(void) const
{
    return m_Descr;
}

inline
CBiostruc_feature_set_Base::TDescr& CBiostruc_feature_set_Base::SetDescr(void)
{
    m_set_State[0] |= 0x4;
    return m_Descr;
}

inline
bool CBiostruc_feature_set_Base::IsSetFeatures(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CBiostruc_feature_set_Base::CanGetFeatures(void) const
{
    return true;
}

inline
const CBiostruc_feature_set_Base::TFeatures& CBiostruc_feature_set_Base::GetFeatures(void) const
{
    return m_Features;
}

inline
CBiostruc_feature_set_Base::TFeatures& CBiostruc_feature_set_Base::SetFeatures(void)
{
    m_set_State[0] |= 0x10;
    return m_Features;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_BIOSTRUC_FEATURE_SET_BASE_HPP
