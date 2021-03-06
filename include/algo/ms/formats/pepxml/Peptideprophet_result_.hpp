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

/// @file Peptideprophet_result_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_PEPTIDEPROPHET_RESULT_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_PEPTIDEPROPHET_RESULT_BASE_HPP

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


// forward declarations
class CSearch_score_summary;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///PeptideProphet validation results for search hit 
class NCBI_PEPXML_EXPORT CPeptideprophet_result_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPeptideprophet_result_Base(void);
    // destructor
    virtual ~CPeptideprophet_result_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    class NCBI_PEPXML_EXPORT C_Attlist : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Attlist(void);
        // destructor
        ~C_Attlist(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
        // types
        typedef string TProbability;
        typedef string TAll_ntt_prob;
        typedef string TAnalysis;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef string TProbability
        ///  Check whether the Probability data member has been assigned a value.
        bool IsSetProbability(void) const;
        /// Check whether it is safe or not to call GetProbability method.
        bool CanGetProbability(void) const;
        void ResetProbability(void);
        const TProbability& GetProbability(void) const;
        void SetProbability(const TProbability& value);
        TProbability& SetProbability(void);
    
        /// optional
        /// typedef string TAll_ntt_prob
        ///  Check whether the All_ntt_prob data member has been assigned a value.
        bool IsSetAll_ntt_prob(void) const;
        /// Check whether it is safe or not to call GetAll_ntt_prob method.
        bool CanGetAll_ntt_prob(void) const;
        void ResetAll_ntt_prob(void);
        const TAll_ntt_prob& GetAll_ntt_prob(void) const;
        void SetAll_ntt_prob(const TAll_ntt_prob& value);
        TAll_ntt_prob& SetAll_ntt_prob(void);
    
        /// optional
        /// typedef string TAnalysis
        ///  Check whether the Analysis data member has been assigned a value.
        bool IsSetAnalysis(void) const;
        /// Check whether it is safe or not to call GetAnalysis method.
        bool CanGetAnalysis(void) const;
        void ResetAnalysis(void);
        const TAnalysis& GetAnalysis(void) const;
        void SetAnalysis(const TAnalysis& value);
        TAnalysis& SetAnalysis(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        string m_Probability;
        string m_All_ntt_prob;
        string m_Analysis;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef CSearch_score_summary TSearch_score_summary;

    // getters
    // setters

    /// mandatory
    /// typedef C_Attlist TAttlist
    ///  Check whether the Attlist data member has been assigned a value.
    bool IsSetAttlist(void) const;
    /// Check whether it is safe or not to call GetAttlist method.
    bool CanGetAttlist(void) const;
    void ResetAttlist(void);
    const TAttlist& GetAttlist(void) const;
    void SetAttlist(TAttlist& value);
    TAttlist& SetAttlist(void);

    /// optional
    /// typedef CSearch_score_summary TSearch_score_summary
    ///  Check whether the Search_score_summary data member has been assigned a value.
    bool IsSetSearch_score_summary(void) const;
    /// Check whether it is safe or not to call GetSearch_score_summary method.
    bool CanGetSearch_score_summary(void) const;
    void ResetSearch_score_summary(void);
    const TSearch_score_summary& GetSearch_score_summary(void) const;
    void SetSearch_score_summary(TSearch_score_summary& value);
    TSearch_score_summary& SetSearch_score_summary(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPeptideprophet_result_Base(const CPeptideprophet_result_Base&);
    CPeptideprophet_result_Base& operator=(const CPeptideprophet_result_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
    CRef< TSearch_score_summary > m_Search_score_summary;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPeptideprophet_result_Base::C_Attlist::IsSetProbability(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPeptideprophet_result_Base::C_Attlist::CanGetProbability(void) const
{
    return IsSetProbability();
}

inline
const CPeptideprophet_result_Base::C_Attlist::TProbability& CPeptideprophet_result_Base::C_Attlist::GetProbability(void) const
{
    if (!CanGetProbability()) {
        ThrowUnassigned(0);
    }
    return m_Probability;
}

inline
void CPeptideprophet_result_Base::C_Attlist::SetProbability(const CPeptideprophet_result_Base::C_Attlist::TProbability& value)
{
    m_Probability = value;
    m_set_State[0] |= 0x3;
}

inline
CPeptideprophet_result_Base::C_Attlist::TProbability& CPeptideprophet_result_Base::C_Attlist::SetProbability(void)
{
#ifdef _DEBUG
    if (!IsSetProbability()) {
        m_Probability = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Probability;
}

inline
bool CPeptideprophet_result_Base::C_Attlist::IsSetAll_ntt_prob(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPeptideprophet_result_Base::C_Attlist::CanGetAll_ntt_prob(void) const
{
    return IsSetAll_ntt_prob();
}

inline
const CPeptideprophet_result_Base::C_Attlist::TAll_ntt_prob& CPeptideprophet_result_Base::C_Attlist::GetAll_ntt_prob(void) const
{
    if (!CanGetAll_ntt_prob()) {
        ThrowUnassigned(1);
    }
    return m_All_ntt_prob;
}

inline
void CPeptideprophet_result_Base::C_Attlist::SetAll_ntt_prob(const CPeptideprophet_result_Base::C_Attlist::TAll_ntt_prob& value)
{
    m_All_ntt_prob = value;
    m_set_State[0] |= 0xc;
}

inline
CPeptideprophet_result_Base::C_Attlist::TAll_ntt_prob& CPeptideprophet_result_Base::C_Attlist::SetAll_ntt_prob(void)
{
#ifdef _DEBUG
    if (!IsSetAll_ntt_prob()) {
        m_All_ntt_prob = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_All_ntt_prob;
}

inline
bool CPeptideprophet_result_Base::C_Attlist::IsSetAnalysis(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPeptideprophet_result_Base::C_Attlist::CanGetAnalysis(void) const
{
    return IsSetAnalysis();
}

inline
const CPeptideprophet_result_Base::C_Attlist::TAnalysis& CPeptideprophet_result_Base::C_Attlist::GetAnalysis(void) const
{
    if (!CanGetAnalysis()) {
        ThrowUnassigned(2);
    }
    return m_Analysis;
}

inline
void CPeptideprophet_result_Base::C_Attlist::SetAnalysis(const CPeptideprophet_result_Base::C_Attlist::TAnalysis& value)
{
    m_Analysis = value;
    m_set_State[0] |= 0x30;
}

inline
CPeptideprophet_result_Base::C_Attlist::TAnalysis& CPeptideprophet_result_Base::C_Attlist::SetAnalysis(void)
{
#ifdef _DEBUG
    if (!IsSetAnalysis()) {
        m_Analysis = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Analysis;
}

inline
bool CPeptideprophet_result_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CPeptideprophet_result_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CPeptideprophet_result_Base::TAttlist& CPeptideprophet_result_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CPeptideprophet_result_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CPeptideprophet_result_Base::TAttlist& CPeptideprophet_result_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CPeptideprophet_result_Base::IsSetSearch_score_summary(void) const
{
    return m_Search_score_summary.NotEmpty();
}

inline
bool CPeptideprophet_result_Base::CanGetSearch_score_summary(void) const
{
    return IsSetSearch_score_summary();
}

inline
const CPeptideprophet_result_Base::TSearch_score_summary& CPeptideprophet_result_Base::GetSearch_score_summary(void) const
{
    if (!CanGetSearch_score_summary()) {
        ThrowUnassigned(1);
    }
    return (*m_Search_score_summary);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_PEPTIDEPROPHET_RESULT_BASE_HPP
