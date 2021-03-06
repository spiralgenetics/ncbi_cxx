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

/// @file Blast4_common_options_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAST4_COMMON_OPTIONS_BASE_HPP
#define OBJECTS_BLAST_BLAST4_COMMON_OPTIONS_BASE_HPP

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
class CBlast4_common_options_db_restriction;
class CBlast4_common_options_nucleotide_query;
class CBlast4_common_options_query_filtering;
class CBlast4_common_options_scoring;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_common_options_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBlast4_common_options_Base(void);
    // destructor
    virtual ~CBlast4_common_options_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef double TPercent_identity;
    typedef double TEvalue;
    typedef int TWord_size;
    typedef int THitlist_size;
    typedef CBlast4_common_options_db_restriction TDb_restriction;
    typedef CBlast4_common_options_query_filtering TQuery_filtering;
    typedef CBlast4_common_options_nucleotide_query TNucl_query_options;
    typedef CBlast4_common_options_scoring TScoring_options;
    typedef string TPhi_pattern;
    typedef double TEff_search_space;
    typedef int TComp_based_statistics;

    // getters
    // setters

    /// percent identity of matches (0-100)
    /// optional
    /// typedef double TPercent_identity
    ///  Check whether the Percent_identity data member has been assigned a value.
    bool IsSetPercent_identity(void) const;
    /// Check whether it is safe or not to call GetPercent_identity method.
    bool CanGetPercent_identity(void) const;
    void ResetPercent_identity(void);
    TPercent_identity GetPercent_identity(void) const;
    void SetPercent_identity(TPercent_identity value);
    TPercent_identity& SetPercent_identity(void);

    /// e-value threshold
    /// optional
    /// typedef double TEvalue
    ///  Check whether the Evalue data member has been assigned a value.
    bool IsSetEvalue(void) const;
    /// Check whether it is safe or not to call GetEvalue method.
    bool CanGetEvalue(void) const;
    void ResetEvalue(void);
    TEvalue GetEvalue(void) const;
    void SetEvalue(TEvalue value);
    TEvalue& SetEvalue(void);

    /// word size to use in lookup table construction
    /// optional
    /// typedef int TWord_size
    ///  Check whether the Word_size data member has been assigned a value.
    bool IsSetWord_size(void) const;
    /// Check whether it is safe or not to call GetWord_size method.
    bool CanGetWord_size(void) const;
    void ResetWord_size(void);
    TWord_size GetWord_size(void) const;
    void SetWord_size(TWord_size value);
    TWord_size& SetWord_size(void);

    /// max number of database sequences to align
    /// optional
    /// typedef int THitlist_size
    ///  Check whether the Hitlist_size data member has been assigned a value.
    bool IsSetHitlist_size(void) const;
    /// Check whether it is safe or not to call GetHitlist_size method.
    bool CanGetHitlist_size(void) const;
    void ResetHitlist_size(void);
    THitlist_size GetHitlist_size(void) const;
    void SetHitlist_size(THitlist_size value);
    THitlist_size& SetHitlist_size(void);

    /// optional
    /// typedef CBlast4_common_options_db_restriction TDb_restriction
    ///  Check whether the Db_restriction data member has been assigned a value.
    bool IsSetDb_restriction(void) const;
    /// Check whether it is safe or not to call GetDb_restriction method.
    bool CanGetDb_restriction(void) const;
    void ResetDb_restriction(void);
    const TDb_restriction& GetDb_restriction(void) const;
    void SetDb_restriction(TDb_restriction& value);
    TDb_restriction& SetDb_restriction(void);

    /// optional
    /// typedef CBlast4_common_options_query_filtering TQuery_filtering
    ///  Check whether the Query_filtering data member has been assigned a value.
    bool IsSetQuery_filtering(void) const;
    /// Check whether it is safe or not to call GetQuery_filtering method.
    bool CanGetQuery_filtering(void) const;
    void ResetQuery_filtering(void);
    const TQuery_filtering& GetQuery_filtering(void) const;
    void SetQuery_filtering(TQuery_filtering& value);
    TQuery_filtering& SetQuery_filtering(void);

    /// optional
    /// typedef CBlast4_common_options_nucleotide_query TNucl_query_options
    ///  Check whether the Nucl_query_options data member has been assigned a value.
    bool IsSetNucl_query_options(void) const;
    /// Check whether it is safe or not to call GetNucl_query_options method.
    bool CanGetNucl_query_options(void) const;
    void ResetNucl_query_options(void);
    const TNucl_query_options& GetNucl_query_options(void) const;
    void SetNucl_query_options(TNucl_query_options& value);
    TNucl_query_options& SetNucl_query_options(void);

    /// optional
    /// typedef CBlast4_common_options_scoring TScoring_options
    ///  Check whether the Scoring_options data member has been assigned a value.
    bool IsSetScoring_options(void) const;
    /// Check whether it is safe or not to call GetScoring_options method.
    bool CanGetScoring_options(void) const;
    void ResetScoring_options(void);
    const TScoring_options& GetScoring_options(void) const;
    void SetScoring_options(TScoring_options& value);
    TScoring_options& SetScoring_options(void);

    /// PHI-BLAST pattern
    /// optional
    /// typedef string TPhi_pattern
    ///  Check whether the Phi_pattern data member has been assigned a value.
    bool IsSetPhi_pattern(void) const;
    /// Check whether it is safe or not to call GetPhi_pattern method.
    bool CanGetPhi_pattern(void) const;
    void ResetPhi_pattern(void);
    const TPhi_pattern& GetPhi_pattern(void) const;
    void SetPhi_pattern(const TPhi_pattern& value);
    TPhi_pattern& SetPhi_pattern(void);

    /// effective search space
    /// optional
    /// typedef double TEff_search_space
    ///  Check whether the Eff_search_space data member has been assigned a value.
    bool IsSetEff_search_space(void) const;
    /// Check whether it is safe or not to call GetEff_search_space method.
    bool CanGetEff_search_space(void) const;
    void ResetEff_search_space(void);
    TEff_search_space GetEff_search_space(void) const;
    void SetEff_search_space(TEff_search_space value);
    TEff_search_space& SetEff_search_space(void);

    /// Composition based statistics
    /// optional
    /// typedef int TComp_based_statistics
    ///  Check whether the Comp_based_statistics data member has been assigned a value.
    bool IsSetComp_based_statistics(void) const;
    /// Check whether it is safe or not to call GetComp_based_statistics method.
    bool CanGetComp_based_statistics(void) const;
    void ResetComp_based_statistics(void);
    TComp_based_statistics GetComp_based_statistics(void) const;
    void SetComp_based_statistics(TComp_based_statistics value);
    TComp_based_statistics& SetComp_based_statistics(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBlast4_common_options_Base(const CBlast4_common_options_Base&);
    CBlast4_common_options_Base& operator=(const CBlast4_common_options_Base&);

    // data
    Uint4 m_set_State[1];
    double m_Percent_identity;
    double m_Evalue;
    int m_Word_size;
    int m_Hitlist_size;
    CRef< TDb_restriction > m_Db_restriction;
    CRef< TQuery_filtering > m_Query_filtering;
    CRef< TNucl_query_options > m_Nucl_query_options;
    CRef< TScoring_options > m_Scoring_options;
    string m_Phi_pattern;
    double m_Eff_search_space;
    int m_Comp_based_statistics;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBlast4_common_options_Base::IsSetPercent_identity(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetPercent_identity(void) const
{
    return IsSetPercent_identity();
}

inline
void CBlast4_common_options_Base::ResetPercent_identity(void)
{
    m_Percent_identity = 0;
    m_set_State[0] &= ~0x3;
}

inline
CBlast4_common_options_Base::TPercent_identity CBlast4_common_options_Base::GetPercent_identity(void) const
{
    if (!CanGetPercent_identity()) {
        ThrowUnassigned(0);
    }
    return m_Percent_identity;
}

inline
void CBlast4_common_options_Base::SetPercent_identity(CBlast4_common_options_Base::TPercent_identity value)
{
    m_Percent_identity = value;
    m_set_State[0] |= 0x3;
}

inline
CBlast4_common_options_Base::TPercent_identity& CBlast4_common_options_Base::SetPercent_identity(void)
{
#ifdef _DEBUG
    if (!IsSetPercent_identity()) {
        memset(&m_Percent_identity,UnassignedByte(),sizeof(m_Percent_identity));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Percent_identity;
}

inline
bool CBlast4_common_options_Base::IsSetEvalue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetEvalue(void) const
{
    return IsSetEvalue();
}

inline
void CBlast4_common_options_Base::ResetEvalue(void)
{
    m_Evalue = 0;
    m_set_State[0] &= ~0xc;
}

inline
CBlast4_common_options_Base::TEvalue CBlast4_common_options_Base::GetEvalue(void) const
{
    if (!CanGetEvalue()) {
        ThrowUnassigned(1);
    }
    return m_Evalue;
}

inline
void CBlast4_common_options_Base::SetEvalue(CBlast4_common_options_Base::TEvalue value)
{
    m_Evalue = value;
    m_set_State[0] |= 0xc;
}

inline
CBlast4_common_options_Base::TEvalue& CBlast4_common_options_Base::SetEvalue(void)
{
#ifdef _DEBUG
    if (!IsSetEvalue()) {
        memset(&m_Evalue,UnassignedByte(),sizeof(m_Evalue));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Evalue;
}

inline
bool CBlast4_common_options_Base::IsSetWord_size(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetWord_size(void) const
{
    return IsSetWord_size();
}

inline
void CBlast4_common_options_Base::ResetWord_size(void)
{
    m_Word_size = 0;
    m_set_State[0] &= ~0x30;
}

inline
CBlast4_common_options_Base::TWord_size CBlast4_common_options_Base::GetWord_size(void) const
{
    if (!CanGetWord_size()) {
        ThrowUnassigned(2);
    }
    return m_Word_size;
}

inline
void CBlast4_common_options_Base::SetWord_size(CBlast4_common_options_Base::TWord_size value)
{
    m_Word_size = value;
    m_set_State[0] |= 0x30;
}

inline
CBlast4_common_options_Base::TWord_size& CBlast4_common_options_Base::SetWord_size(void)
{
#ifdef _DEBUG
    if (!IsSetWord_size()) {
        memset(&m_Word_size,UnassignedByte(),sizeof(m_Word_size));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Word_size;
}

inline
bool CBlast4_common_options_Base::IsSetHitlist_size(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetHitlist_size(void) const
{
    return IsSetHitlist_size();
}

inline
void CBlast4_common_options_Base::ResetHitlist_size(void)
{
    m_Hitlist_size = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CBlast4_common_options_Base::THitlist_size CBlast4_common_options_Base::GetHitlist_size(void) const
{
    if (!CanGetHitlist_size()) {
        ThrowUnassigned(3);
    }
    return m_Hitlist_size;
}

inline
void CBlast4_common_options_Base::SetHitlist_size(CBlast4_common_options_Base::THitlist_size value)
{
    m_Hitlist_size = value;
    m_set_State[0] |= 0xc0;
}

inline
CBlast4_common_options_Base::THitlist_size& CBlast4_common_options_Base::SetHitlist_size(void)
{
#ifdef _DEBUG
    if (!IsSetHitlist_size()) {
        memset(&m_Hitlist_size,UnassignedByte(),sizeof(m_Hitlist_size));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Hitlist_size;
}

inline
bool CBlast4_common_options_Base::IsSetDb_restriction(void) const
{
    return m_Db_restriction.NotEmpty();
}

inline
bool CBlast4_common_options_Base::CanGetDb_restriction(void) const
{
    return IsSetDb_restriction();
}

inline
const CBlast4_common_options_Base::TDb_restriction& CBlast4_common_options_Base::GetDb_restriction(void) const
{
    if (!CanGetDb_restriction()) {
        ThrowUnassigned(4);
    }
    return (*m_Db_restriction);
}

inline
bool CBlast4_common_options_Base::IsSetQuery_filtering(void) const
{
    return m_Query_filtering.NotEmpty();
}

inline
bool CBlast4_common_options_Base::CanGetQuery_filtering(void) const
{
    return IsSetQuery_filtering();
}

inline
const CBlast4_common_options_Base::TQuery_filtering& CBlast4_common_options_Base::GetQuery_filtering(void) const
{
    if (!CanGetQuery_filtering()) {
        ThrowUnassigned(5);
    }
    return (*m_Query_filtering);
}

inline
bool CBlast4_common_options_Base::IsSetNucl_query_options(void) const
{
    return m_Nucl_query_options.NotEmpty();
}

inline
bool CBlast4_common_options_Base::CanGetNucl_query_options(void) const
{
    return IsSetNucl_query_options();
}

inline
const CBlast4_common_options_Base::TNucl_query_options& CBlast4_common_options_Base::GetNucl_query_options(void) const
{
    if (!CanGetNucl_query_options()) {
        ThrowUnassigned(6);
    }
    return (*m_Nucl_query_options);
}

inline
bool CBlast4_common_options_Base::IsSetScoring_options(void) const
{
    return m_Scoring_options.NotEmpty();
}

inline
bool CBlast4_common_options_Base::CanGetScoring_options(void) const
{
    return IsSetScoring_options();
}

inline
const CBlast4_common_options_Base::TScoring_options& CBlast4_common_options_Base::GetScoring_options(void) const
{
    if (!CanGetScoring_options()) {
        ThrowUnassigned(7);
    }
    return (*m_Scoring_options);
}

inline
bool CBlast4_common_options_Base::IsSetPhi_pattern(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetPhi_pattern(void) const
{
    return IsSetPhi_pattern();
}

inline
const CBlast4_common_options_Base::TPhi_pattern& CBlast4_common_options_Base::GetPhi_pattern(void) const
{
    if (!CanGetPhi_pattern()) {
        ThrowUnassigned(8);
    }
    return m_Phi_pattern;
}

inline
void CBlast4_common_options_Base::SetPhi_pattern(const CBlast4_common_options_Base::TPhi_pattern& value)
{
    m_Phi_pattern = value;
    m_set_State[0] |= 0x30000;
}

inline
CBlast4_common_options_Base::TPhi_pattern& CBlast4_common_options_Base::SetPhi_pattern(void)
{
#ifdef _DEBUG
    if (!IsSetPhi_pattern()) {
        m_Phi_pattern = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10000;
    return m_Phi_pattern;
}

inline
bool CBlast4_common_options_Base::IsSetEff_search_space(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetEff_search_space(void) const
{
    return IsSetEff_search_space();
}

inline
void CBlast4_common_options_Base::ResetEff_search_space(void)
{
    m_Eff_search_space = 0;
    m_set_State[0] &= ~0xc0000;
}

inline
CBlast4_common_options_Base::TEff_search_space CBlast4_common_options_Base::GetEff_search_space(void) const
{
    if (!CanGetEff_search_space()) {
        ThrowUnassigned(9);
    }
    return m_Eff_search_space;
}

inline
void CBlast4_common_options_Base::SetEff_search_space(CBlast4_common_options_Base::TEff_search_space value)
{
    m_Eff_search_space = value;
    m_set_State[0] |= 0xc0000;
}

inline
CBlast4_common_options_Base::TEff_search_space& CBlast4_common_options_Base::SetEff_search_space(void)
{
#ifdef _DEBUG
    if (!IsSetEff_search_space()) {
        memset(&m_Eff_search_space,UnassignedByte(),sizeof(m_Eff_search_space));
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Eff_search_space;
}

inline
bool CBlast4_common_options_Base::IsSetComp_based_statistics(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CBlast4_common_options_Base::CanGetComp_based_statistics(void) const
{
    return IsSetComp_based_statistics();
}

inline
void CBlast4_common_options_Base::ResetComp_based_statistics(void)
{
    m_Comp_based_statistics = 0;
    m_set_State[0] &= ~0x300000;
}

inline
CBlast4_common_options_Base::TComp_based_statistics CBlast4_common_options_Base::GetComp_based_statistics(void) const
{
    if (!CanGetComp_based_statistics()) {
        ThrowUnassigned(10);
    }
    return m_Comp_based_statistics;
}

inline
void CBlast4_common_options_Base::SetComp_based_statistics(CBlast4_common_options_Base::TComp_based_statistics value)
{
    m_Comp_based_statistics = value;
    m_set_State[0] |= 0x300000;
}

inline
CBlast4_common_options_Base::TComp_based_statistics& CBlast4_common_options_Base::SetComp_based_statistics(void)
{
#ifdef _DEBUG
    if (!IsSetComp_based_statistics()) {
        memset(&m_Comp_based_statistics,UnassignedByte(),sizeof(m_Comp_based_statistics));
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Comp_based_statistics;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_COMMON_OPTIONS_BASE_HPP
