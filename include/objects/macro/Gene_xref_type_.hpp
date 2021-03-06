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

/// @file Gene_xref_type_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_GENE_XREF_TYPE_BASE_HPP
#define OBJECTS_MACRO_GENE_XREF_TYPE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <objects/macro/Gene_xref_necessary_type.hpp>
#include <objects/macro/Gene_xref_suppression_type.hpp>
#include <objects/macro/Macro_feature_type.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CGene_xref_type_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGene_xref_type_Base(void);
    // destructor
    virtual ~CGene_xref_type_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef EMacro_feature_type TFeature;
    typedef EGene_xref_suppression_type TSuppression;
    typedef EGene_xref_necessary_type TNecessary;

    // getters
    // setters

    /// mandatory
    /// typedef EMacro_feature_type TFeature
    ///  Check whether the Feature data member has been assigned a value.
    bool IsSetFeature(void) const;
    /// Check whether it is safe or not to call GetFeature method.
    bool CanGetFeature(void) const;
    void ResetFeature(void);
    TFeature GetFeature(void) const;
    void SetFeature(TFeature value);
    TFeature& SetFeature(void);

    /// mandatory
    /// typedef EGene_xref_suppression_type TSuppression
    ///  Check whether the Suppression data member has been assigned a value.
    bool IsSetSuppression(void) const;
    /// Check whether it is safe or not to call GetSuppression method.
    bool CanGetSuppression(void) const;
    void ResetSuppression(void);
    TSuppression GetSuppression(void) const;
    void SetSuppression(TSuppression value);
    TSuppression& SetSuppression(void);

    /// mandatory
    /// typedef EGene_xref_necessary_type TNecessary
    ///  Check whether the Necessary data member has been assigned a value.
    bool IsSetNecessary(void) const;
    /// Check whether it is safe or not to call GetNecessary method.
    bool CanGetNecessary(void) const;
    void ResetNecessary(void);
    TNecessary GetNecessary(void) const;
    void SetNecessary(TNecessary value);
    TNecessary& SetNecessary(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGene_xref_type_Base(const CGene_xref_type_Base&);
    CGene_xref_type_Base& operator=(const CGene_xref_type_Base&);

    // data
    Uint4 m_set_State[1];
    EMacro_feature_type m_Feature;
    EGene_xref_suppression_type m_Suppression;
    EGene_xref_necessary_type m_Necessary;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGene_xref_type_Base::IsSetFeature(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGene_xref_type_Base::CanGetFeature(void) const
{
    return IsSetFeature();
}

inline
void CGene_xref_type_Base::ResetFeature(void)
{
    m_Feature = (ncbi::objects::EMacro_feature_type)(0);
    m_set_State[0] &= ~0x3;
}

inline
CGene_xref_type_Base::TFeature CGene_xref_type_Base::GetFeature(void) const
{
    if (!CanGetFeature()) {
        ThrowUnassigned(0);
    }
    return m_Feature;
}

inline
void CGene_xref_type_Base::SetFeature(CGene_xref_type_Base::TFeature value)
{
    m_Feature = value;
    m_set_State[0] |= 0x3;
}

inline
CGene_xref_type_Base::TFeature& CGene_xref_type_Base::SetFeature(void)
{
#ifdef _DEBUG
    if (!IsSetFeature()) {
        memset(&m_Feature,UnassignedByte(),sizeof(m_Feature));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Feature;
}

inline
bool CGene_xref_type_Base::IsSetSuppression(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGene_xref_type_Base::CanGetSuppression(void) const
{
    return IsSetSuppression();
}

inline
void CGene_xref_type_Base::ResetSuppression(void)
{
    m_Suppression = (ncbi::objects::EGene_xref_suppression_type)(0);
    m_set_State[0] &= ~0xc;
}

inline
CGene_xref_type_Base::TSuppression CGene_xref_type_Base::GetSuppression(void) const
{
    if (!CanGetSuppression()) {
        ThrowUnassigned(1);
    }
    return m_Suppression;
}

inline
void CGene_xref_type_Base::SetSuppression(CGene_xref_type_Base::TSuppression value)
{
    m_Suppression = value;
    m_set_State[0] |= 0xc;
}

inline
CGene_xref_type_Base::TSuppression& CGene_xref_type_Base::SetSuppression(void)
{
#ifdef _DEBUG
    if (!IsSetSuppression()) {
        memset(&m_Suppression,UnassignedByte(),sizeof(m_Suppression));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Suppression;
}

inline
bool CGene_xref_type_Base::IsSetNecessary(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CGene_xref_type_Base::CanGetNecessary(void) const
{
    return IsSetNecessary();
}

inline
void CGene_xref_type_Base::ResetNecessary(void)
{
    m_Necessary = (ncbi::objects::EGene_xref_necessary_type)(0);
    m_set_State[0] &= ~0x30;
}

inline
CGene_xref_type_Base::TNecessary CGene_xref_type_Base::GetNecessary(void) const
{
    if (!CanGetNecessary()) {
        ThrowUnassigned(2);
    }
    return m_Necessary;
}

inline
void CGene_xref_type_Base::SetNecessary(CGene_xref_type_Base::TNecessary value)
{
    m_Necessary = value;
    m_set_State[0] |= 0x30;
}

inline
CGene_xref_type_Base::TNecessary& CGene_xref_type_Base::SetNecessary(void)
{
#ifdef _DEBUG
    if (!IsSetNecessary()) {
        memset(&m_Necessary,UnassignedByte(),sizeof(m_Necessary));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Necessary;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_GENE_XREF_TYPE_BASE_HPP
