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

/// @file Search_hit_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_SEARCH_HIT_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_SEARCH_HIT_BASE_HPP

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
class CAlternative_protein;
class CAnalysis_result;
class CModification_info;
class CParameter;
class CSearch_score;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///Peptide assignment 
class NCBI_PEPXML_EXPORT CSearch_hit_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSearch_hit_Base(void);
    // destructor
    virtual ~CSearch_hit_Base(void);

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
    
        enum EAttlist_is_rejected {
            eAttlist_is_rejected_0 = 1,
            eAttlist_is_rejected_1 = 2
        };
        
        /// Access to EAttlist_is_rejected's attributes (values, names) as defined in spec
        static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EAttlist_is_rejected)(void);
        
        // types
        typedef int THit_rank;
        typedef string TPeptide;
        typedef string TPeptide_prev_aa;
        typedef string TPeptide_next_aa;
        typedef string TProtein;
        typedef int TNum_tot_proteins;
        typedef int TNum_matched_ions;
        typedef int TTot_num_ions;
        typedef double TCalc_neutral_pep_mass;
        typedef string TMassdiff;
        typedef int TNum_tol_term;
        typedef int TNum_missed_cleavages;
        typedef EAttlist_is_rejected TIs_rejected;
        typedef string TProtein_descr;
        typedef string TCalc_pI;
        typedef double TProtein_mw;
    
        // getters
        // setters
    
        /// mandatory
        /// typedef int THit_rank
        ///  Check whether the Hit_rank data member has been assigned a value.
        bool IsSetHit_rank(void) const;
        /// Check whether it is safe or not to call GetHit_rank method.
        bool CanGetHit_rank(void) const;
        void ResetHit_rank(void);
        THit_rank GetHit_rank(void) const;
        void SetHit_rank(THit_rank value);
        THit_rank& SetHit_rank(void);
    
        /// mandatory
        /// typedef string TPeptide
        ///  Check whether the Peptide data member has been assigned a value.
        bool IsSetPeptide(void) const;
        /// Check whether it is safe or not to call GetPeptide method.
        bool CanGetPeptide(void) const;
        void ResetPeptide(void);
        const TPeptide& GetPeptide(void) const;
        void SetPeptide(const TPeptide& value);
        TPeptide& SetPeptide(void);
    
        /// optional
        /// typedef string TPeptide_prev_aa
        ///  Check whether the Peptide_prev_aa data member has been assigned a value.
        bool IsSetPeptide_prev_aa(void) const;
        /// Check whether it is safe or not to call GetPeptide_prev_aa method.
        bool CanGetPeptide_prev_aa(void) const;
        void ResetPeptide_prev_aa(void);
        const TPeptide_prev_aa& GetPeptide_prev_aa(void) const;
        void SetPeptide_prev_aa(const TPeptide_prev_aa& value);
        TPeptide_prev_aa& SetPeptide_prev_aa(void);
    
        /// optional
        /// typedef string TPeptide_next_aa
        ///  Check whether the Peptide_next_aa data member has been assigned a value.
        bool IsSetPeptide_next_aa(void) const;
        /// Check whether it is safe or not to call GetPeptide_next_aa method.
        bool CanGetPeptide_next_aa(void) const;
        void ResetPeptide_next_aa(void);
        const TPeptide_next_aa& GetPeptide_next_aa(void) const;
        void SetPeptide_next_aa(const TPeptide_next_aa& value);
        TPeptide_next_aa& SetPeptide_next_aa(void);
    
        /// mandatory
        /// typedef string TProtein
        ///  Check whether the Protein data member has been assigned a value.
        bool IsSetProtein(void) const;
        /// Check whether it is safe or not to call GetProtein method.
        bool CanGetProtein(void) const;
        void ResetProtein(void);
        const TProtein& GetProtein(void) const;
        void SetProtein(const TProtein& value);
        TProtein& SetProtein(void);
    
        /// mandatory
        /// typedef int TNum_tot_proteins
        ///  Check whether the Num_tot_proteins data member has been assigned a value.
        bool IsSetNum_tot_proteins(void) const;
        /// Check whether it is safe or not to call GetNum_tot_proteins method.
        bool CanGetNum_tot_proteins(void) const;
        void ResetNum_tot_proteins(void);
        TNum_tot_proteins GetNum_tot_proteins(void) const;
        void SetNum_tot_proteins(TNum_tot_proteins value);
        TNum_tot_proteins& SetNum_tot_proteins(void);
    
        /// optional
        /// typedef int TNum_matched_ions
        ///  Check whether the Num_matched_ions data member has been assigned a value.
        bool IsSetNum_matched_ions(void) const;
        /// Check whether it is safe or not to call GetNum_matched_ions method.
        bool CanGetNum_matched_ions(void) const;
        void ResetNum_matched_ions(void);
        TNum_matched_ions GetNum_matched_ions(void) const;
        void SetNum_matched_ions(TNum_matched_ions value);
        TNum_matched_ions& SetNum_matched_ions(void);
    
        /// optional
        /// typedef int TTot_num_ions
        ///  Check whether the Tot_num_ions data member has been assigned a value.
        bool IsSetTot_num_ions(void) const;
        /// Check whether it is safe or not to call GetTot_num_ions method.
        bool CanGetTot_num_ions(void) const;
        void ResetTot_num_ions(void);
        TTot_num_ions GetTot_num_ions(void) const;
        void SetTot_num_ions(TTot_num_ions value);
        TTot_num_ions& SetTot_num_ions(void);
    
        /// mandatory
        /// typedef double TCalc_neutral_pep_mass
        ///  Check whether the Calc_neutral_pep_mass data member has been assigned a value.
        bool IsSetCalc_neutral_pep_mass(void) const;
        /// Check whether it is safe or not to call GetCalc_neutral_pep_mass method.
        bool CanGetCalc_neutral_pep_mass(void) const;
        void ResetCalc_neutral_pep_mass(void);
        TCalc_neutral_pep_mass GetCalc_neutral_pep_mass(void) const;
        void SetCalc_neutral_pep_mass(TCalc_neutral_pep_mass value);
        TCalc_neutral_pep_mass& SetCalc_neutral_pep_mass(void);
    
        ///Mass(precursor ion) - Mass(peptide)
        /// mandatory
        /// typedef string TMassdiff
        ///  Check whether the Massdiff data member has been assigned a value.
        bool IsSetMassdiff(void) const;
        /// Check whether it is safe or not to call GetMassdiff method.
        bool CanGetMassdiff(void) const;
        void ResetMassdiff(void);
        const TMassdiff& GetMassdiff(void) const;
        void SetMassdiff(const TMassdiff& value);
        TMassdiff& SetMassdiff(void);
    
        /// optional
        /// typedef int TNum_tol_term
        ///  Check whether the Num_tol_term data member has been assigned a value.
        bool IsSetNum_tol_term(void) const;
        /// Check whether it is safe or not to call GetNum_tol_term method.
        bool CanGetNum_tol_term(void) const;
        void ResetNum_tol_term(void);
        TNum_tol_term GetNum_tol_term(void) const;
        void SetNum_tol_term(TNum_tol_term value);
        TNum_tol_term& SetNum_tol_term(void);
    
        /// optional
        /// typedef int TNum_missed_cleavages
        ///  Check whether the Num_missed_cleavages data member has been assigned a value.
        bool IsSetNum_missed_cleavages(void) const;
        /// Check whether it is safe or not to call GetNum_missed_cleavages method.
        bool CanGetNum_missed_cleavages(void) const;
        void ResetNum_missed_cleavages(void);
        TNum_missed_cleavages GetNum_missed_cleavages(void) const;
        void SetNum_missed_cleavages(TNum_missed_cleavages value);
        TNum_missed_cleavages& SetNum_missed_cleavages(void);
    
        ///Potential use in future for user manual validation (0 or 1)
        /// optional with default eAttlist_is_rejected_0
        /// typedef EAttlist_is_rejected TIs_rejected
        ///  Check whether the Is_rejected data member has been assigned a value.
        bool IsSetIs_rejected(void) const;
        /// Check whether it is safe or not to call GetIs_rejected method.
        bool CanGetIs_rejected(void) const;
        void ResetIs_rejected(void);
        void SetDefaultIs_rejected(void);
        TIs_rejected GetIs_rejected(void) const;
        void SetIs_rejected(TIs_rejected value);
        TIs_rejected& SetIs_rejected(void);
    
        /// optional
        /// typedef string TProtein_descr
        ///  Check whether the Protein_descr data member has been assigned a value.
        bool IsSetProtein_descr(void) const;
        /// Check whether it is safe or not to call GetProtein_descr method.
        bool CanGetProtein_descr(void) const;
        void ResetProtein_descr(void);
        const TProtein_descr& GetProtein_descr(void) const;
        void SetProtein_descr(const TProtein_descr& value);
        TProtein_descr& SetProtein_descr(void);
    
        /// optional
        /// typedef string TCalc_pI
        ///  Check whether the Calc_pI data member has been assigned a value.
        bool IsSetCalc_pI(void) const;
        /// Check whether it is safe or not to call GetCalc_pI method.
        bool CanGetCalc_pI(void) const;
        void ResetCalc_pI(void);
        const TCalc_pI& GetCalc_pI(void) const;
        void SetCalc_pI(const TCalc_pI& value);
        TCalc_pI& SetCalc_pI(void);
    
        /// optional
        /// typedef double TProtein_mw
        ///  Check whether the Protein_mw data member has been assigned a value.
        bool IsSetProtein_mw(void) const;
        /// Check whether it is safe or not to call GetProtein_mw method.
        bool CanGetProtein_mw(void) const;
        void ResetProtein_mw(void);
        TProtein_mw GetProtein_mw(void) const;
        void SetProtein_mw(TProtein_mw value);
        TProtein_mw& SetProtein_mw(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        int m_Hit_rank;
        string m_Peptide;
        string m_Peptide_prev_aa;
        string m_Peptide_next_aa;
        string m_Protein;
        int m_Num_tot_proteins;
        int m_Num_matched_ions;
        int m_Tot_num_ions;
        double m_Calc_neutral_pep_mass;
        string m_Massdiff;
        int m_Num_tol_term;
        int m_Num_missed_cleavages;
        EAttlist_is_rejected m_Is_rejected;
        string m_Protein_descr;
        string m_Calc_pI;
        double m_Protein_mw;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef list< CRef< CAlternative_protein > > TAlternative_protein;
    typedef CModification_info TModification_info;
    typedef list< CRef< CSearch_score > > TSearch_score;
    typedef list< CRef< CAnalysis_result > > TAnalysis_result;
    typedef list< CRef< CParameter > > TParameter;

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
    /// typedef list< CRef< CAlternative_protein > > TAlternative_protein
    ///  Check whether the Alternative_protein data member has been assigned a value.
    bool IsSetAlternative_protein(void) const;
    /// Check whether it is safe or not to call GetAlternative_protein method.
    bool CanGetAlternative_protein(void) const;
    void ResetAlternative_protein(void);
    const TAlternative_protein& GetAlternative_protein(void) const;
    TAlternative_protein& SetAlternative_protein(void);

    /// optional
    /// typedef CModification_info TModification_info
    ///  Check whether the Modification_info data member has been assigned a value.
    bool IsSetModification_info(void) const;
    /// Check whether it is safe or not to call GetModification_info method.
    bool CanGetModification_info(void) const;
    void ResetModification_info(void);
    const TModification_info& GetModification_info(void) const;
    void SetModification_info(TModification_info& value);
    TModification_info& SetModification_info(void);

    /// optional
    /// typedef list< CRef< CSearch_score > > TSearch_score
    ///  Check whether the Search_score data member has been assigned a value.
    bool IsSetSearch_score(void) const;
    /// Check whether it is safe or not to call GetSearch_score method.
    bool CanGetSearch_score(void) const;
    void ResetSearch_score(void);
    const TSearch_score& GetSearch_score(void) const;
    TSearch_score& SetSearch_score(void);

    /// optional
    /// typedef list< CRef< CAnalysis_result > > TAnalysis_result
    ///  Check whether the Analysis_result data member has been assigned a value.
    bool IsSetAnalysis_result(void) const;
    /// Check whether it is safe or not to call GetAnalysis_result method.
    bool CanGetAnalysis_result(void) const;
    void ResetAnalysis_result(void);
    const TAnalysis_result& GetAnalysis_result(void) const;
    TAnalysis_result& SetAnalysis_result(void);

    /// optional
    /// typedef list< CRef< CParameter > > TParameter
    ///  Check whether the Parameter data member has been assigned a value.
    bool IsSetParameter(void) const;
    /// Check whether it is safe or not to call GetParameter method.
    bool CanGetParameter(void) const;
    void ResetParameter(void);
    const TParameter& GetParameter(void) const;
    TParameter& SetParameter(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSearch_hit_Base(const CSearch_hit_Base&);
    CSearch_hit_Base& operator=(const CSearch_hit_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
    list< CRef< CAlternative_protein > > m_Alternative_protein;
    CRef< TModification_info > m_Modification_info;
    list< CRef< CSearch_score > > m_Search_score;
    list< CRef< CAnalysis_result > > m_Analysis_result;
    list< CRef< CParameter > > m_Parameter;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSearch_hit_Base::C_Attlist::IsSetHit_rank(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetHit_rank(void) const
{
    return IsSetHit_rank();
}

inline
void CSearch_hit_Base::C_Attlist::ResetHit_rank(void)
{
    m_Hit_rank = 0;
    m_set_State[0] &= ~0x3;
}

inline
CSearch_hit_Base::C_Attlist::THit_rank CSearch_hit_Base::C_Attlist::GetHit_rank(void) const
{
    if (!CanGetHit_rank()) {
        ThrowUnassigned(0);
    }
    return m_Hit_rank;
}

inline
void CSearch_hit_Base::C_Attlist::SetHit_rank(CSearch_hit_Base::C_Attlist::THit_rank value)
{
    m_Hit_rank = value;
    m_set_State[0] |= 0x3;
}

inline
CSearch_hit_Base::C_Attlist::THit_rank& CSearch_hit_Base::C_Attlist::SetHit_rank(void)
{
#ifdef _DEBUG
    if (!IsSetHit_rank()) {
        memset(&m_Hit_rank,UnassignedByte(),sizeof(m_Hit_rank));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Hit_rank;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetPeptide(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetPeptide(void) const
{
    return IsSetPeptide();
}

inline
const CSearch_hit_Base::C_Attlist::TPeptide& CSearch_hit_Base::C_Attlist::GetPeptide(void) const
{
    if (!CanGetPeptide()) {
        ThrowUnassigned(1);
    }
    return m_Peptide;
}

inline
void CSearch_hit_Base::C_Attlist::SetPeptide(const CSearch_hit_Base::C_Attlist::TPeptide& value)
{
    m_Peptide = value;
    m_set_State[0] |= 0xc;
}

inline
CSearch_hit_Base::C_Attlist::TPeptide& CSearch_hit_Base::C_Attlist::SetPeptide(void)
{
#ifdef _DEBUG
    if (!IsSetPeptide()) {
        m_Peptide = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Peptide;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetPeptide_prev_aa(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetPeptide_prev_aa(void) const
{
    return IsSetPeptide_prev_aa();
}

inline
const CSearch_hit_Base::C_Attlist::TPeptide_prev_aa& CSearch_hit_Base::C_Attlist::GetPeptide_prev_aa(void) const
{
    if (!CanGetPeptide_prev_aa()) {
        ThrowUnassigned(2);
    }
    return m_Peptide_prev_aa;
}

inline
void CSearch_hit_Base::C_Attlist::SetPeptide_prev_aa(const CSearch_hit_Base::C_Attlist::TPeptide_prev_aa& value)
{
    m_Peptide_prev_aa = value;
    m_set_State[0] |= 0x30;
}

inline
CSearch_hit_Base::C_Attlist::TPeptide_prev_aa& CSearch_hit_Base::C_Attlist::SetPeptide_prev_aa(void)
{
#ifdef _DEBUG
    if (!IsSetPeptide_prev_aa()) {
        m_Peptide_prev_aa = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Peptide_prev_aa;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetPeptide_next_aa(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetPeptide_next_aa(void) const
{
    return IsSetPeptide_next_aa();
}

inline
const CSearch_hit_Base::C_Attlist::TPeptide_next_aa& CSearch_hit_Base::C_Attlist::GetPeptide_next_aa(void) const
{
    if (!CanGetPeptide_next_aa()) {
        ThrowUnassigned(3);
    }
    return m_Peptide_next_aa;
}

inline
void CSearch_hit_Base::C_Attlist::SetPeptide_next_aa(const CSearch_hit_Base::C_Attlist::TPeptide_next_aa& value)
{
    m_Peptide_next_aa = value;
    m_set_State[0] |= 0xc0;
}

inline
CSearch_hit_Base::C_Attlist::TPeptide_next_aa& CSearch_hit_Base::C_Attlist::SetPeptide_next_aa(void)
{
#ifdef _DEBUG
    if (!IsSetPeptide_next_aa()) {
        m_Peptide_next_aa = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Peptide_next_aa;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetProtein(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetProtein(void) const
{
    return IsSetProtein();
}

inline
const CSearch_hit_Base::C_Attlist::TProtein& CSearch_hit_Base::C_Attlist::GetProtein(void) const
{
    if (!CanGetProtein()) {
        ThrowUnassigned(4);
    }
    return m_Protein;
}

inline
void CSearch_hit_Base::C_Attlist::SetProtein(const CSearch_hit_Base::C_Attlist::TProtein& value)
{
    m_Protein = value;
    m_set_State[0] |= 0x300;
}

inline
CSearch_hit_Base::C_Attlist::TProtein& CSearch_hit_Base::C_Attlist::SetProtein(void)
{
#ifdef _DEBUG
    if (!IsSetProtein()) {
        m_Protein = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Protein;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetNum_tot_proteins(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetNum_tot_proteins(void) const
{
    return IsSetNum_tot_proteins();
}

inline
void CSearch_hit_Base::C_Attlist::ResetNum_tot_proteins(void)
{
    m_Num_tot_proteins = 0;
    m_set_State[0] &= ~0xc00;
}

inline
CSearch_hit_Base::C_Attlist::TNum_tot_proteins CSearch_hit_Base::C_Attlist::GetNum_tot_proteins(void) const
{
    if (!CanGetNum_tot_proteins()) {
        ThrowUnassigned(5);
    }
    return m_Num_tot_proteins;
}

inline
void CSearch_hit_Base::C_Attlist::SetNum_tot_proteins(CSearch_hit_Base::C_Attlist::TNum_tot_proteins value)
{
    m_Num_tot_proteins = value;
    m_set_State[0] |= 0xc00;
}

inline
CSearch_hit_Base::C_Attlist::TNum_tot_proteins& CSearch_hit_Base::C_Attlist::SetNum_tot_proteins(void)
{
#ifdef _DEBUG
    if (!IsSetNum_tot_proteins()) {
        memset(&m_Num_tot_proteins,UnassignedByte(),sizeof(m_Num_tot_proteins));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Num_tot_proteins;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetNum_matched_ions(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetNum_matched_ions(void) const
{
    return IsSetNum_matched_ions();
}

inline
void CSearch_hit_Base::C_Attlist::ResetNum_matched_ions(void)
{
    m_Num_matched_ions = 0;
    m_set_State[0] &= ~0x3000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_matched_ions CSearch_hit_Base::C_Attlist::GetNum_matched_ions(void) const
{
    if (!CanGetNum_matched_ions()) {
        ThrowUnassigned(6);
    }
    return m_Num_matched_ions;
}

inline
void CSearch_hit_Base::C_Attlist::SetNum_matched_ions(CSearch_hit_Base::C_Attlist::TNum_matched_ions value)
{
    m_Num_matched_ions = value;
    m_set_State[0] |= 0x3000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_matched_ions& CSearch_hit_Base::C_Attlist::SetNum_matched_ions(void)
{
#ifdef _DEBUG
    if (!IsSetNum_matched_ions()) {
        memset(&m_Num_matched_ions,UnassignedByte(),sizeof(m_Num_matched_ions));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Num_matched_ions;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetTot_num_ions(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetTot_num_ions(void) const
{
    return IsSetTot_num_ions();
}

inline
void CSearch_hit_Base::C_Attlist::ResetTot_num_ions(void)
{
    m_Tot_num_ions = 0;
    m_set_State[0] &= ~0xc000;
}

inline
CSearch_hit_Base::C_Attlist::TTot_num_ions CSearch_hit_Base::C_Attlist::GetTot_num_ions(void) const
{
    if (!CanGetTot_num_ions()) {
        ThrowUnassigned(7);
    }
    return m_Tot_num_ions;
}

inline
void CSearch_hit_Base::C_Attlist::SetTot_num_ions(CSearch_hit_Base::C_Attlist::TTot_num_ions value)
{
    m_Tot_num_ions = value;
    m_set_State[0] |= 0xc000;
}

inline
CSearch_hit_Base::C_Attlist::TTot_num_ions& CSearch_hit_Base::C_Attlist::SetTot_num_ions(void)
{
#ifdef _DEBUG
    if (!IsSetTot_num_ions()) {
        memset(&m_Tot_num_ions,UnassignedByte(),sizeof(m_Tot_num_ions));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Tot_num_ions;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetCalc_neutral_pep_mass(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetCalc_neutral_pep_mass(void) const
{
    return IsSetCalc_neutral_pep_mass();
}

inline
void CSearch_hit_Base::C_Attlist::ResetCalc_neutral_pep_mass(void)
{
    m_Calc_neutral_pep_mass = 0;
    m_set_State[0] &= ~0x30000;
}

inline
CSearch_hit_Base::C_Attlist::TCalc_neutral_pep_mass CSearch_hit_Base::C_Attlist::GetCalc_neutral_pep_mass(void) const
{
    if (!CanGetCalc_neutral_pep_mass()) {
        ThrowUnassigned(8);
    }
    return m_Calc_neutral_pep_mass;
}

inline
void CSearch_hit_Base::C_Attlist::SetCalc_neutral_pep_mass(CSearch_hit_Base::C_Attlist::TCalc_neutral_pep_mass value)
{
    m_Calc_neutral_pep_mass = value;
    m_set_State[0] |= 0x30000;
}

inline
CSearch_hit_Base::C_Attlist::TCalc_neutral_pep_mass& CSearch_hit_Base::C_Attlist::SetCalc_neutral_pep_mass(void)
{
#ifdef _DEBUG
    if (!IsSetCalc_neutral_pep_mass()) {
        memset(&m_Calc_neutral_pep_mass,UnassignedByte(),sizeof(m_Calc_neutral_pep_mass));
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Calc_neutral_pep_mass;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetMassdiff(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetMassdiff(void) const
{
    return IsSetMassdiff();
}

inline
const CSearch_hit_Base::C_Attlist::TMassdiff& CSearch_hit_Base::C_Attlist::GetMassdiff(void) const
{
    if (!CanGetMassdiff()) {
        ThrowUnassigned(9);
    }
    return m_Massdiff;
}

inline
void CSearch_hit_Base::C_Attlist::SetMassdiff(const CSearch_hit_Base::C_Attlist::TMassdiff& value)
{
    m_Massdiff = value;
    m_set_State[0] |= 0xc0000;
}

inline
CSearch_hit_Base::C_Attlist::TMassdiff& CSearch_hit_Base::C_Attlist::SetMassdiff(void)
{
#ifdef _DEBUG
    if (!IsSetMassdiff()) {
        m_Massdiff = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Massdiff;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetNum_tol_term(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetNum_tol_term(void) const
{
    return IsSetNum_tol_term();
}

inline
void CSearch_hit_Base::C_Attlist::ResetNum_tol_term(void)
{
    m_Num_tol_term = 0;
    m_set_State[0] &= ~0x300000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_tol_term CSearch_hit_Base::C_Attlist::GetNum_tol_term(void) const
{
    if (!CanGetNum_tol_term()) {
        ThrowUnassigned(10);
    }
    return m_Num_tol_term;
}

inline
void CSearch_hit_Base::C_Attlist::SetNum_tol_term(CSearch_hit_Base::C_Attlist::TNum_tol_term value)
{
    m_Num_tol_term = value;
    m_set_State[0] |= 0x300000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_tol_term& CSearch_hit_Base::C_Attlist::SetNum_tol_term(void)
{
#ifdef _DEBUG
    if (!IsSetNum_tol_term()) {
        memset(&m_Num_tol_term,UnassignedByte(),sizeof(m_Num_tol_term));
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Num_tol_term;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetNum_missed_cleavages(void) const
{
    return ((m_set_State[0] & 0xc00000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetNum_missed_cleavages(void) const
{
    return IsSetNum_missed_cleavages();
}

inline
void CSearch_hit_Base::C_Attlist::ResetNum_missed_cleavages(void)
{
    m_Num_missed_cleavages = 0;
    m_set_State[0] &= ~0xc00000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_missed_cleavages CSearch_hit_Base::C_Attlist::GetNum_missed_cleavages(void) const
{
    if (!CanGetNum_missed_cleavages()) {
        ThrowUnassigned(11);
    }
    return m_Num_missed_cleavages;
}

inline
void CSearch_hit_Base::C_Attlist::SetNum_missed_cleavages(CSearch_hit_Base::C_Attlist::TNum_missed_cleavages value)
{
    m_Num_missed_cleavages = value;
    m_set_State[0] |= 0xc00000;
}

inline
CSearch_hit_Base::C_Attlist::TNum_missed_cleavages& CSearch_hit_Base::C_Attlist::SetNum_missed_cleavages(void)
{
#ifdef _DEBUG
    if (!IsSetNum_missed_cleavages()) {
        memset(&m_Num_missed_cleavages,UnassignedByte(),sizeof(m_Num_missed_cleavages));
    }
#endif
    m_set_State[0] |= 0x400000;
    return m_Num_missed_cleavages;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetIs_rejected(void) const
{
    return ((m_set_State[0] & 0x3000000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetIs_rejected(void) const
{
    return true;
}

inline
void CSearch_hit_Base::C_Attlist::ResetIs_rejected(void)
{
    m_Is_rejected = eAttlist_is_rejected_0;
    m_set_State[0] &= ~0x3000000;
}

inline
void CSearch_hit_Base::C_Attlist::SetDefaultIs_rejected(void)
{
    ResetIs_rejected();
    m_set_State[0] |= 0x1000000;
}

inline
CSearch_hit_Base::C_Attlist::TIs_rejected CSearch_hit_Base::C_Attlist::GetIs_rejected(void) const
{
    return m_Is_rejected;
}

inline
void CSearch_hit_Base::C_Attlist::SetIs_rejected(CSearch_hit_Base::C_Attlist::TIs_rejected value)
{
    m_Is_rejected = value;
    m_set_State[0] |= 0x3000000;
}

inline
CSearch_hit_Base::C_Attlist::TIs_rejected& CSearch_hit_Base::C_Attlist::SetIs_rejected(void)
{
#ifdef _DEBUG
    if (!IsSetIs_rejected()) {
        memset(&m_Is_rejected,UnassignedByte(),sizeof(m_Is_rejected));
    }
#endif
    m_set_State[0] |= 0x1000000;
    return m_Is_rejected;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetProtein_descr(void) const
{
    return ((m_set_State[0] & 0xc000000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetProtein_descr(void) const
{
    return IsSetProtein_descr();
}

inline
const CSearch_hit_Base::C_Attlist::TProtein_descr& CSearch_hit_Base::C_Attlist::GetProtein_descr(void) const
{
    if (!CanGetProtein_descr()) {
        ThrowUnassigned(13);
    }
    return m_Protein_descr;
}

inline
void CSearch_hit_Base::C_Attlist::SetProtein_descr(const CSearch_hit_Base::C_Attlist::TProtein_descr& value)
{
    m_Protein_descr = value;
    m_set_State[0] |= 0xc000000;
}

inline
CSearch_hit_Base::C_Attlist::TProtein_descr& CSearch_hit_Base::C_Attlist::SetProtein_descr(void)
{
#ifdef _DEBUG
    if (!IsSetProtein_descr()) {
        m_Protein_descr = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4000000;
    return m_Protein_descr;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetCalc_pI(void) const
{
    return ((m_set_State[0] & 0x30000000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetCalc_pI(void) const
{
    return IsSetCalc_pI();
}

inline
const CSearch_hit_Base::C_Attlist::TCalc_pI& CSearch_hit_Base::C_Attlist::GetCalc_pI(void) const
{
    if (!CanGetCalc_pI()) {
        ThrowUnassigned(14);
    }
    return m_Calc_pI;
}

inline
void CSearch_hit_Base::C_Attlist::SetCalc_pI(const CSearch_hit_Base::C_Attlist::TCalc_pI& value)
{
    m_Calc_pI = value;
    m_set_State[0] |= 0x30000000;
}

inline
CSearch_hit_Base::C_Attlist::TCalc_pI& CSearch_hit_Base::C_Attlist::SetCalc_pI(void)
{
#ifdef _DEBUG
    if (!IsSetCalc_pI()) {
        m_Calc_pI = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10000000;
    return m_Calc_pI;
}

inline
bool CSearch_hit_Base::C_Attlist::IsSetProtein_mw(void) const
{
    return ((m_set_State[0] & 0xc0000000) != 0);
}

inline
bool CSearch_hit_Base::C_Attlist::CanGetProtein_mw(void) const
{
    return IsSetProtein_mw();
}

inline
void CSearch_hit_Base::C_Attlist::ResetProtein_mw(void)
{
    m_Protein_mw = 0;
    m_set_State[0] &= ~0xc0000000;
}

inline
CSearch_hit_Base::C_Attlist::TProtein_mw CSearch_hit_Base::C_Attlist::GetProtein_mw(void) const
{
    if (!CanGetProtein_mw()) {
        ThrowUnassigned(15);
    }
    return m_Protein_mw;
}

inline
void CSearch_hit_Base::C_Attlist::SetProtein_mw(CSearch_hit_Base::C_Attlist::TProtein_mw value)
{
    m_Protein_mw = value;
    m_set_State[0] |= 0xc0000000;
}

inline
CSearch_hit_Base::C_Attlist::TProtein_mw& CSearch_hit_Base::C_Attlist::SetProtein_mw(void)
{
#ifdef _DEBUG
    if (!IsSetProtein_mw()) {
        memset(&m_Protein_mw,UnassignedByte(),sizeof(m_Protein_mw));
    }
#endif
    m_set_State[0] |= 0x40000000;
    return m_Protein_mw;
}

inline
bool CSearch_hit_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CSearch_hit_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CSearch_hit_Base::TAttlist& CSearch_hit_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CSearch_hit_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CSearch_hit_Base::TAttlist& CSearch_hit_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CSearch_hit_Base::IsSetAlternative_protein(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSearch_hit_Base::CanGetAlternative_protein(void) const
{
    return true;
}

inline
const CSearch_hit_Base::TAlternative_protein& CSearch_hit_Base::GetAlternative_protein(void) const
{
    return m_Alternative_protein;
}

inline
CSearch_hit_Base::TAlternative_protein& CSearch_hit_Base::SetAlternative_protein(void)
{
    m_set_State[0] |= 0x4;
    return m_Alternative_protein;
}

inline
bool CSearch_hit_Base::IsSetModification_info(void) const
{
    return m_Modification_info.NotEmpty();
}

inline
bool CSearch_hit_Base::CanGetModification_info(void) const
{
    return IsSetModification_info();
}

inline
const CSearch_hit_Base::TModification_info& CSearch_hit_Base::GetModification_info(void) const
{
    if (!CanGetModification_info()) {
        ThrowUnassigned(2);
    }
    return (*m_Modification_info);
}

inline
bool CSearch_hit_Base::IsSetSearch_score(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CSearch_hit_Base::CanGetSearch_score(void) const
{
    return true;
}

inline
const CSearch_hit_Base::TSearch_score& CSearch_hit_Base::GetSearch_score(void) const
{
    return m_Search_score;
}

inline
CSearch_hit_Base::TSearch_score& CSearch_hit_Base::SetSearch_score(void)
{
    m_set_State[0] |= 0x40;
    return m_Search_score;
}

inline
bool CSearch_hit_Base::IsSetAnalysis_result(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CSearch_hit_Base::CanGetAnalysis_result(void) const
{
    return true;
}

inline
const CSearch_hit_Base::TAnalysis_result& CSearch_hit_Base::GetAnalysis_result(void) const
{
    return m_Analysis_result;
}

inline
CSearch_hit_Base::TAnalysis_result& CSearch_hit_Base::SetAnalysis_result(void)
{
    m_set_State[0] |= 0x100;
    return m_Analysis_result;
}

inline
bool CSearch_hit_Base::IsSetParameter(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CSearch_hit_Base::CanGetParameter(void) const
{
    return true;
}

inline
const CSearch_hit_Base::TParameter& CSearch_hit_Base::GetParameter(void) const
{
    return m_Parameter;
}

inline
CSearch_hit_Base::TParameter& CSearch_hit_Base::SetParameter(void)
{
    m_set_State[0] |= 0x400;
    return m_Parameter;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_SEARCH_HIT_BASE_HPP
