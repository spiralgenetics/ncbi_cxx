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

/// @file Phenotype_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_PHENOTYPE_BASE_HPP
#define OBJECTS_SEQFEAT_PHENOTYPE_BASE_HPP

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
class CDbtag;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQFEAT_EXPORT CPhenotype_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPhenotype_Base(void);
    // destructor
    virtual ~CPhenotype_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// does this variant have known clinical significance?
    enum EClinical_significance {
        eClinical_significance_unknown                 =   0,
        eClinical_significance_untested                =   1,
        eClinical_significance_non_pathogenic          =   2,
        eClinical_significance_probable_non_pathogenic =   3,
        eClinical_significance_probable_pathogenic     =   4,
        eClinical_significance_pathogenic              =   5,
        eClinical_significance_drug_response           =   6,
        eClinical_significance_histocompatibility      =   7,
        eClinical_significance_other                   = 255
    };
    
    /// Access to EClinical_significance's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EClinical_significance)(void);
    
    // types
    typedef string TSource;
    typedef string TTerm;
    typedef list< CRef< CDbtag > > TXref;
    typedef int TClinical_significance;

    // getters
    // setters

    /// optional
    /// typedef string TSource
    ///  Check whether the Source data member has been assigned a value.
    bool IsSetSource(void) const;
    /// Check whether it is safe or not to call GetSource method.
    bool CanGetSource(void) const;
    void ResetSource(void);
    const TSource& GetSource(void) const;
    void SetSource(const TSource& value);
    TSource& SetSource(void);

    /// optional
    /// typedef string TTerm
    ///  Check whether the Term data member has been assigned a value.
    bool IsSetTerm(void) const;
    /// Check whether it is safe or not to call GetTerm method.
    bool CanGetTerm(void) const;
    void ResetTerm(void);
    const TTerm& GetTerm(void) const;
    void SetTerm(const TTerm& value);
    TTerm& SetTerm(void);

    /// optional
    /// typedef list< CRef< CDbtag > > TXref
    ///  Check whether the Xref data member has been assigned a value.
    bool IsSetXref(void) const;
    /// Check whether it is safe or not to call GetXref method.
    bool CanGetXref(void) const;
    void ResetXref(void);
    const TXref& GetXref(void) const;
    TXref& SetXref(void);

    /// optional
    /// typedef int TClinical_significance
    ///  Check whether the Clinical_significance data member has been assigned a value.
    bool IsSetClinical_significance(void) const;
    /// Check whether it is safe or not to call GetClinical_significance method.
    bool CanGetClinical_significance(void) const;
    void ResetClinical_significance(void);
    TClinical_significance GetClinical_significance(void) const;
    void SetClinical_significance(TClinical_significance value);
    TClinical_significance& SetClinical_significance(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPhenotype_Base(const CPhenotype_Base&);
    CPhenotype_Base& operator=(const CPhenotype_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Source;
    string m_Term;
    list< CRef< CDbtag > > m_Xref;
    int m_Clinical_significance;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPhenotype_Base::IsSetSource(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPhenotype_Base::CanGetSource(void) const
{
    return IsSetSource();
}

inline
const CPhenotype_Base::TSource& CPhenotype_Base::GetSource(void) const
{
    if (!CanGetSource()) {
        ThrowUnassigned(0);
    }
    return m_Source;
}

inline
void CPhenotype_Base::SetSource(const CPhenotype_Base::TSource& value)
{
    m_Source = value;
    m_set_State[0] |= 0x3;
}

inline
CPhenotype_Base::TSource& CPhenotype_Base::SetSource(void)
{
#ifdef _DEBUG
    if (!IsSetSource()) {
        m_Source = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Source;
}

inline
bool CPhenotype_Base::IsSetTerm(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPhenotype_Base::CanGetTerm(void) const
{
    return IsSetTerm();
}

inline
const CPhenotype_Base::TTerm& CPhenotype_Base::GetTerm(void) const
{
    if (!CanGetTerm()) {
        ThrowUnassigned(1);
    }
    return m_Term;
}

inline
void CPhenotype_Base::SetTerm(const CPhenotype_Base::TTerm& value)
{
    m_Term = value;
    m_set_State[0] |= 0xc;
}

inline
CPhenotype_Base::TTerm& CPhenotype_Base::SetTerm(void)
{
#ifdef _DEBUG
    if (!IsSetTerm()) {
        m_Term = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Term;
}

inline
bool CPhenotype_Base::IsSetXref(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPhenotype_Base::CanGetXref(void) const
{
    return true;
}

inline
const CPhenotype_Base::TXref& CPhenotype_Base::GetXref(void) const
{
    return m_Xref;
}

inline
CPhenotype_Base::TXref& CPhenotype_Base::SetXref(void)
{
    m_set_State[0] |= 0x10;
    return m_Xref;
}

inline
bool CPhenotype_Base::IsSetClinical_significance(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CPhenotype_Base::CanGetClinical_significance(void) const
{
    return IsSetClinical_significance();
}

inline
void CPhenotype_Base::ResetClinical_significance(void)
{
    m_Clinical_significance = (EClinical_significance)(0);
    m_set_State[0] &= ~0xc0;
}

inline
CPhenotype_Base::TClinical_significance CPhenotype_Base::GetClinical_significance(void) const
{
    if (!CanGetClinical_significance()) {
        ThrowUnassigned(3);
    }
    return m_Clinical_significance;
}

inline
void CPhenotype_Base::SetClinical_significance(CPhenotype_Base::TClinical_significance value)
{
    m_Clinical_significance = value;
    m_set_State[0] |= 0xc0;
}

inline
CPhenotype_Base::TClinical_significance& CPhenotype_Base::SetClinical_significance(void)
{
#ifdef _DEBUG
    if (!IsSetClinical_significance()) {
        memset(&m_Clinical_significance,UnassignedByte(),sizeof(m_Clinical_significance));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Clinical_significance;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_PHENOTYPE_BASE_HPP
