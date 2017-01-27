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

/// @file VariationException_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'variation.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_VARIATION_VARIATIONEXCEPTION_BASE_HPP
#define OBJECTS_VARIATION_VARIATIONEXCEPTION_BASE_HPP

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
class NCBI_VARIATION_EXPORT CVariationException_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CVariationException_Base(void);
    // destructor
    virtual ~CVariationException_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum ECode {
        eCode_hgvs_parsing                  =  1,  ///<invalid hgvs expression
        eCode_hgvs_exon_boundary            =  2,  ///<anchor position in an intronic HGVS expression is not at an exon boundary
        eCode_inconsistent_consequence      =  3,  ///<consequence protein variation attached to precursor variation's consequence could not be derived from it.
        eCode_inconsistent_asserted_allele  =  4,  ///<asserted allele is inconsistent with the reference
        eCode_no_mapping                    =  5,  ///<could not remap
        eCode_partial_mapping               =  6,  ///<mapped location is shorter than the query
        eCode_split_mapping                 =  7,  ///<a source interval maps to multiple non-abutting intervals.
        eCode_mismatches_in_mapping         =  8,  ///<the source sequence differs from sequence at mapped loc
        eCode_inconsistent_asserted_moltype =  9,  ///<asserted mol-type is inconsistent with seq-id (e.g. NM_12345.6:g.)
        eCode_bioseq_state                  = 10,
        eCode_ambiguous_sequence            = 11,
        eCode_ref_same_as_variant           = 12,  ///<reference sequence at the location is same as variant sequence in the variation
        eCode_seqfetch_too_long             = 13,  ///<can't fetch sequence because location is longer than specified threshold
        eCode_seqfetch_intronic             = 14,  ///<can't fetch sequence for an intronic (anchor+offset)-based location
        eCode_seqfetch_invalid              = 15  ///<can't fetch sequence because location is invalid (e.g. extends past the end)
    };
    
    /// Access to ECode's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ECode)(void);
    
    // types
    typedef int TCode;
    typedef string TMessage;

    // getters
    // setters

    /// optional
    /// typedef int TCode
    ///  Check whether the Code data member has been assigned a value.
    bool IsSetCode(void) const;
    /// Check whether it is safe or not to call GetCode method.
    bool CanGetCode(void) const;
    void ResetCode(void);
    TCode GetCode(void) const;
    void SetCode(TCode value);
    TCode& SetCode(void);

    /// mandatory
    /// typedef string TMessage
    ///  Check whether the Message data member has been assigned a value.
    bool IsSetMessage(void) const;
    /// Check whether it is safe or not to call GetMessage method.
    bool CanGetMessage(void) const;
    void ResetMessage(void);
    const TMessage& GetMessage(void) const;
    void SetMessage(const TMessage& value);
    TMessage& SetMessage(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CVariationException_Base(const CVariationException_Base&);
    CVariationException_Base& operator=(const CVariationException_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Code;
    string m_Message;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CVariationException_Base::IsSetCode(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CVariationException_Base::CanGetCode(void) const
{
    return IsSetCode();
}

inline
void CVariationException_Base::ResetCode(void)
{
    m_Code = (ECode)(0);
    m_set_State[0] &= ~0x3;
}

inline
CVariationException_Base::TCode CVariationException_Base::GetCode(void) const
{
    if (!CanGetCode()) {
        ThrowUnassigned(0);
    }
    return m_Code;
}

inline
void CVariationException_Base::SetCode(CVariationException_Base::TCode value)
{
    m_Code = value;
    m_set_State[0] |= 0x3;
}

inline
CVariationException_Base::TCode& CVariationException_Base::SetCode(void)
{
#ifdef _DEBUG
    if (!IsSetCode()) {
        memset(&m_Code,UnassignedByte(),sizeof(m_Code));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Code;
}

inline
bool CVariationException_Base::IsSetMessage(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CVariationException_Base::CanGetMessage(void) const
{
    return IsSetMessage();
}

inline
const CVariationException_Base::TMessage& CVariationException_Base::GetMessage(void) const
{
    if (!CanGetMessage()) {
        ThrowUnassigned(1);
    }
    return m_Message;
}

inline
void CVariationException_Base::SetMessage(const CVariationException_Base::TMessage& value)
{
    m_Message = value;
    m_set_State[0] |= 0xc;
}

inline
CVariationException_Base::TMessage& CVariationException_Base::SetMessage(void)
{
#ifdef _DEBUG
    if (!IsSetMessage()) {
        m_Message = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Message;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_VARIATION_VARIATIONEXCEPTION_BASE_HPP