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

/// @file VariantProperties_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_VARIANTPROPERTIES_BASE_HPP
#define OBJECTS_SEQFEAT_VARIANTPROPERTIES_BASE_HPP

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
/// 
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
/// Historically, the dbSNP definitions document data structures used in the
/// processing and annotation of variations by the dbSNP group.  The intention
/// is to provide information to clients that reflect internal information
/// produced during the mapping of SNPs
/// 
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
///
class NCBI_SEQFEAT_EXPORT CVariantProperties_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CVariantProperties_Base(void);
    // destructor
    virtual ~CVariantProperties_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// NOTE:
    /// The format for most of these values is as an integer
    /// Unless otherwise noted, these integers represent a bitwise OR (= simple
    /// sum) of the possible values, and as such, these values represent the
    /// specific bit flags that may be set for each of the possible attributes
    /// here.
    enum EResource_link {
        eResource_link_preserved        =  1,  ///< Clinical, Pubmed, Cited, (0x01)
        eResource_link_provisional      =  2,  ///< Provisional Third Party Annotations (0x02)
        eResource_link_has3D            =  4,  ///< Has 3D strcture SNP3D table (0x04)
        eResource_link_submitterLinkout =  8,  ///< SNP->SubSNP->Batch link_out (0x08)
        eResource_link_clinical         = 16,  ///< Clinical if LSDB, OMIM, TPA, Diagnostic (0x10)
        eResource_link_genotypeKit      = 32  ///< Marker exists on high density genotyping kit  (0x20)
    };
    
    /// Access to EResource_link's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EResource_link)(void);
    
    enum EGene_location {
        eGene_location_in_gene             =    1,  ///< Sequence intervals covered by a gene ID but not  having an aligned transcript (0x01)
        eGene_location_near_gene_5         =    2,  ///< Within 2kb of the 5' end of a gene feature
        eGene_location_near_gene_3         =    4,  ///< Within 0.5kb of the 3' end of a gene feature
        eGene_location_intron              =    8,  ///< In Intron (0x08)
        eGene_location_donor               =   16,  ///< In donor splice-site (0x10)
        eGene_location_acceptor            =   32,  ///< In acceptor splice-site (0x20)
        eGene_location_utr_5               =   64,  ///< In 5' UTR (0x40)
        eGene_location_utr_3               =  128,  ///< In 3' UTR (0x80)
        eGene_location_in_start_codon      =  256,  ///< the variant is observed in a start codon  (0x100)
        eGene_location_in_stop_codon       =  512,  ///< the variant is observed in a stop codon  (0x200)
        eGene_location_intergenic          = 1024,  ///< variant located between genes (0x400)
        eGene_location_conserved_noncoding = 2048  ///< variant is located in a conserved  non-coding region (0x800)
    };
    
    /// Access to EGene_location's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EGene_location)(void);
    
    enum EEffect {
        eEffect_no_change      =   0,  ///< known to cause no functional changes  since 0 does not combine with any other bit  value, 'no-change' specifically implies that  there are no consequences
        eEffect_synonymous     =   1,  ///< one allele in the set does not change the encoded  amino acid (0x1)
        eEffect_nonsense       =   2,  ///< one allele in the set changes to STOP codon  (TER).  (0x2)
        eEffect_missense       =   4,  ///< one allele in the set changes protein peptide  (0x4)
        eEffect_frameshift     =   8,  ///< one allele in the set changes all downstream  amino acids (0x8)
        eEffect_up_regulator   =  16,  ///< the variant causes increased transcription  (0x10)
        eEffect_down_regulator =  32,  ///< the variant causes decreased transcription  (0x20)
        eEffect_methylation    =  64,
        eEffect_stop_gain      = 128,  ///< reference codon is not stop codon, but the snp  variant allele changes the codon to a  terminating codon.
        eEffect_stop_loss      = 256  ///< reverse of STOP-GAIN: reference codon is a  stop codon, but a snp variant allele changes  the codon to a non-terminating codon.
    };
    
    /// Access to EEffect's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EEffect)(void);
    
    enum EMapping {
        eMapping_has_other_snp         = 1,  ///< Another SNP has the same mapped positions  on reference assembly (0x01)
        eMapping_has_assembly_conflict = 2,  ///< Weight 1 or 2 SNPs that map to different  chromosomes on different assemblies (0x02)
        eMapping_is_assembly_specific  = 4  ///< Only maps to 1 assembly (0x04)
    };
    
    /// Access to EMapping's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EMapping)(void);
    
    /// map-weight captures specificity of placement
    /// NOTE: This is *NOT* a bitfield
    enum EMap_weight {
        eMap_weight_is_uniquely_placed         =  1,
        eMap_weight_placed_twice_on_same_chrom =  2,
        eMap_weight_placed_twice_on_diff_chrom =  3,
        eMap_weight_many_placements            = 10
    };
    
    /// Access to EMap_weight's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EMap_weight)(void);
    
    enum EFrequency_based_validation {
        eFrequency_based_validation_is_mutation      =  1,  ///< low frequency variation that is cited in  journal or other reputable sources (0x01)
        eFrequency_based_validation_above_5pct_all   =  2,  ///< >5% minor allele freq in each and all  populations (0x02)
        eFrequency_based_validation_above_5pct_1plus =  4,  ///< >5% minor allele freq in 1+ populations (0x04)
        eFrequency_based_validation_validated        =  8,  ///< Bit is set if the variant has a minor allele  observed in two or more separate chromosomes
        eFrequency_based_validation_above_1pct_all   = 16,  ///< >1% minor allele freq in each and all  populations (0x10)
        eFrequency_based_validation_above_1pct_1plus = 32  ///< >1% minor allele freq in 1+ populations (0x20)
    };
    
    /// Access to EFrequency_based_validation's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EFrequency_based_validation)(void);
    
    enum EGenotype {
        eGenotype_in_haplotype_set = 1,  ///< Exists in a haplotype tagging set (0x01)
        eGenotype_has_genotypes    = 2  ///< SNP has individual genotype (0x02)
    };
    
    /// Access to EGenotype's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EGenotype)(void);
    
    enum EQuality_check {
        eQuality_check_contig_allele_missing   =  1,  ///< Reference sequence allele at the mapped  position is not present in the SNP  allele list, adjusted for orientation  (0x01)
        eQuality_check_withdrawn_by_submitter  =  2,  ///< One member SS is withdrawn by submitter  (0x02)
        eQuality_check_non_overlapping_alleles =  4,  ///< RS set has 2+ alleles from different  submissions and these sets share no  alleles in common (0x04)
        eQuality_check_strain_specific         =  8,  ///< Straing specific fixed difference (0x08)
        eQuality_check_genotype_conflict       = 16  ///< Has Genotype Conflict (0x10)
    };
    
    /// Access to EQuality_check's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EQuality_check)(void);
    
    enum EConfidence {
        eConfidence_unknown         =   0,
        eConfidence_likely_artifact =   1,
        eConfidence_other           = 255
    };
    
    /// Access to EConfidence's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EConfidence)(void);
    
    /// origin of this allele, if known
    /// note that these are powers-of-two, and represent bits; thus, we can
    /// represent more than one state simultaneously through a bitwise OR
    enum EAllele_origin {
        eAllele_origin_unknown             =          0,
        eAllele_origin_germline            =          1,
        eAllele_origin_somatic             =          2,
        eAllele_origin_inherited           =          4,
        eAllele_origin_paternal            =          8,
        eAllele_origin_maternal            =         16,
        eAllele_origin_de_novo             =         32,
        eAllele_origin_biparental          =         64,
        eAllele_origin_uniparental         =        128,
        eAllele_origin_not_tested          =        256,
        eAllele_origin_tested_inconclusive =        512,
        eAllele_origin_not_reported        =       1024,
        eAllele_origin_other               = 1073741824  ///< stopper - 2^31
    };
    
    /// Access to EAllele_origin's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EAllele_origin)(void);
    
    /// observed allele state, if known
    /// NOTE: THIS IS NOT A BITFIELD!
    enum EAllele_state {
        eAllele_state_unknown      =   0,
        eAllele_state_homozygous   =   1,
        eAllele_state_heterozygous =   2,
        eAllele_state_hemizygous   =   3,
        eAllele_state_nullizygous  =   4,
        eAllele_state_other        = 255
    };
    
    /// Access to EAllele_state's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EAllele_state)(void);
    
    // types
    typedef int TVersion;
    typedef int TResource_link;
    typedef int TGene_location;
    typedef int TEffect;
    typedef int TMapping;
    typedef int TMap_weight;
    typedef int TFrequency_based_validation;
    typedef int TGenotype;
    typedef list< int > TProject_data;
    typedef int TQuality_check;
    typedef int TConfidence;
    typedef bool TOther_validation;
    typedef int TAllele_origin;
    typedef int TAllele_state;
    typedef double TAllele_frequency;
    typedef bool TIs_ancestral_allele;

    // getters
    // setters

    /// mandatory
    /// typedef int TVersion
    ///  Check whether the Version data member has been assigned a value.
    bool IsSetVersion(void) const;
    /// Check whether it is safe or not to call GetVersion method.
    bool CanGetVersion(void) const;
    void ResetVersion(void);
    TVersion GetVersion(void) const;
    void SetVersion(TVersion value);
    TVersion& SetVersion(void);

    /// optional
    /// typedef int TResource_link
    ///  Check whether the Resource_link data member has been assigned a value.
    bool IsSetResource_link(void) const;
    /// Check whether it is safe or not to call GetResource_link method.
    bool CanGetResource_link(void) const;
    void ResetResource_link(void);
    TResource_link GetResource_link(void) const;
    void SetResource_link(TResource_link value);
    TResource_link& SetResource_link(void);

    /// optional
    /// typedef int TGene_location
    ///  Check whether the Gene_location data member has been assigned a value.
    bool IsSetGene_location(void) const;
    /// Check whether it is safe or not to call GetGene_location method.
    bool CanGetGene_location(void) const;
    void ResetGene_location(void);
    TGene_location GetGene_location(void) const;
    void SetGene_location(TGene_location value);
    TGene_location& SetGene_location(void);

    /// optional
    /// typedef int TEffect
    ///  Check whether the Effect data member has been assigned a value.
    bool IsSetEffect(void) const;
    /// Check whether it is safe or not to call GetEffect method.
    bool CanGetEffect(void) const;
    void ResetEffect(void);
    TEffect GetEffect(void) const;
    void SetEffect(TEffect value);
    TEffect& SetEffect(void);

    /// optional
    /// typedef int TMapping
    ///  Check whether the Mapping data member has been assigned a value.
    bool IsSetMapping(void) const;
    /// Check whether it is safe or not to call GetMapping method.
    bool CanGetMapping(void) const;
    void ResetMapping(void);
    TMapping GetMapping(void) const;
    void SetMapping(TMapping value);
    TMapping& SetMapping(void);

    /// optional
    /// typedef int TMap_weight
    ///  Check whether the Map_weight data member has been assigned a value.
    bool IsSetMap_weight(void) const;
    /// Check whether it is safe or not to call GetMap_weight method.
    bool CanGetMap_weight(void) const;
    void ResetMap_weight(void);
    TMap_weight GetMap_weight(void) const;
    void SetMap_weight(TMap_weight value);
    TMap_weight& SetMap_weight(void);

    /// optional
    /// typedef int TFrequency_based_validation
    ///  Check whether the Frequency_based_validation data member has been assigned a value.
    bool IsSetFrequency_based_validation(void) const;
    /// Check whether it is safe or not to call GetFrequency_based_validation method.
    bool CanGetFrequency_based_validation(void) const;
    void ResetFrequency_based_validation(void);
    TFrequency_based_validation GetFrequency_based_validation(void) const;
    void SetFrequency_based_validation(TFrequency_based_validation value);
    TFrequency_based_validation& SetFrequency_based_validation(void);

    /// optional
    /// typedef int TGenotype
    ///  Check whether the Genotype data member has been assigned a value.
    bool IsSetGenotype(void) const;
    /// Check whether it is safe or not to call GetGenotype method.
    bool CanGetGenotype(void) const;
    void ResetGenotype(void);
    TGenotype GetGenotype(void) const;
    void SetGenotype(TGenotype value);
    TGenotype& SetGenotype(void);

    /// project IDs are IDs from BioProjects
    /// in order to report information about project relationships, we
    /// require projects to be registered
    /// This field in many ways duplicates dbxrefs; however, the
    /// intention of this field is to more adequately reflect
    /// ownership and data source
    ///
    /// 11/9/2010: DO NOT USE
    /// This field was changed in the spec in a breaking way; using it will
    /// break clients.  We are officially suppressing / abandoning this field.
    /// Clients who need to use this should instead place the data in
    /// Seq-feat.dbxref, using the db name 'BioProject'
    /// optional
    /// typedef list< int > TProject_data
    ///  Check whether the Project_data data member has been assigned a value.
    bool IsSetProject_data(void) const;
    /// Check whether it is safe or not to call GetProject_data method.
    bool CanGetProject_data(void) const;
    void ResetProject_data(void);
    const TProject_data& GetProject_data(void) const;
    TProject_data& SetProject_data(void);

    /// optional
    /// typedef int TQuality_check
    ///  Check whether the Quality_check data member has been assigned a value.
    bool IsSetQuality_check(void) const;
    /// Check whether it is safe or not to call GetQuality_check method.
    bool CanGetQuality_check(void) const;
    void ResetQuality_check(void);
    TQuality_check GetQuality_check(void) const;
    void SetQuality_check(TQuality_check value);
    TQuality_check& SetQuality_check(void);

    /// optional
    /// typedef int TConfidence
    ///  Check whether the Confidence data member has been assigned a value.
    bool IsSetConfidence(void) const;
    /// Check whether it is safe or not to call GetConfidence method.
    bool CanGetConfidence(void) const;
    void ResetConfidence(void);
    TConfidence GetConfidence(void) const;
    void SetConfidence(TConfidence value);
    TConfidence& SetConfidence(void);

    /// has this variant been validated?
    /// While a boolean flag offers no subtle distinctions of validation
    /// methods, occasionally it is only known as a single boolean value
    /// NOTE: this flag is redundant and should be omitted if more comprehensive
    /// validation information is present
    /// optional
    /// typedef bool TOther_validation
    ///  Check whether the Other_validation data member has been assigned a value.
    bool IsSetOther_validation(void) const;
    /// Check whether it is safe or not to call GetOther_validation method.
    bool CanGetOther_validation(void) const;
    void ResetOther_validation(void);
    TOther_validation GetOther_validation(void) const;
    void SetOther_validation(TOther_validation value);
    TOther_validation& SetOther_validation(void);

    /// optional
    /// typedef int TAllele_origin
    ///  Check whether the Allele_origin data member has been assigned a value.
    bool IsSetAllele_origin(void) const;
    /// Check whether it is safe or not to call GetAllele_origin method.
    bool CanGetAllele_origin(void) const;
    void ResetAllele_origin(void);
    TAllele_origin GetAllele_origin(void) const;
    void SetAllele_origin(TAllele_origin value);
    TAllele_origin& SetAllele_origin(void);

    /// optional
    /// typedef int TAllele_state
    ///  Check whether the Allele_state data member has been assigned a value.
    bool IsSetAllele_state(void) const;
    /// Check whether it is safe or not to call GetAllele_state method.
    bool CanGetAllele_state(void) const;
    void ResetAllele_state(void);
    TAllele_state GetAllele_state(void) const;
    void SetAllele_state(TAllele_state value);
    TAllele_state& SetAllele_state(void);

    /// NOTE:
    /// 'allele-frequency' here refers to the minor allele frequency of the
    /// default population
    /// optional
    /// typedef double TAllele_frequency
    ///  Check whether the Allele_frequency data member has been assigned a value.
    bool IsSetAllele_frequency(void) const;
    /// Check whether it is safe or not to call GetAllele_frequency method.
    bool CanGetAllele_frequency(void) const;
    void ResetAllele_frequency(void);
    TAllele_frequency GetAllele_frequency(void) const;
    void SetAllele_frequency(TAllele_frequency value);
    TAllele_frequency& SetAllele_frequency(void);

    /// is this variant the ancestral allele?
    /// optional
    /// typedef bool TIs_ancestral_allele
    ///  Check whether the Is_ancestral_allele data member has been assigned a value.
    bool IsSetIs_ancestral_allele(void) const;
    /// Check whether it is safe or not to call GetIs_ancestral_allele method.
    bool CanGetIs_ancestral_allele(void) const;
    void ResetIs_ancestral_allele(void);
    TIs_ancestral_allele GetIs_ancestral_allele(void) const;
    void SetIs_ancestral_allele(TIs_ancestral_allele value);
    TIs_ancestral_allele& SetIs_ancestral_allele(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CVariantProperties_Base(const CVariantProperties_Base&);
    CVariantProperties_Base& operator=(const CVariantProperties_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Version;
    int m_Resource_link;
    int m_Gene_location;
    int m_Effect;
    int m_Mapping;
    int m_Map_weight;
    int m_Frequency_based_validation;
    int m_Genotype;
    list< int > m_Project_data;
    int m_Quality_check;
    int m_Confidence;
    bool m_Other_validation;
    int m_Allele_origin;
    int m_Allele_state;
    double m_Allele_frequency;
    bool m_Is_ancestral_allele;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CVariantProperties_Base::IsSetVersion(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CVariantProperties_Base::CanGetVersion(void) const
{
    return IsSetVersion();
}

inline
void CVariantProperties_Base::ResetVersion(void)
{
    m_Version = 0;
    m_set_State[0] &= ~0x3;
}

inline
CVariantProperties_Base::TVersion CVariantProperties_Base::GetVersion(void) const
{
    if (!CanGetVersion()) {
        ThrowUnassigned(0);
    }
    return m_Version;
}

inline
void CVariantProperties_Base::SetVersion(CVariantProperties_Base::TVersion value)
{
    m_Version = value;
    m_set_State[0] |= 0x3;
}

inline
CVariantProperties_Base::TVersion& CVariantProperties_Base::SetVersion(void)
{
#ifdef _DEBUG
    if (!IsSetVersion()) {
        memset(&m_Version,UnassignedByte(),sizeof(m_Version));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Version;
}

inline
bool CVariantProperties_Base::IsSetResource_link(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CVariantProperties_Base::CanGetResource_link(void) const
{
    return IsSetResource_link();
}

inline
void CVariantProperties_Base::ResetResource_link(void)
{
    m_Resource_link = (EResource_link)(0);
    m_set_State[0] &= ~0xc;
}

inline
CVariantProperties_Base::TResource_link CVariantProperties_Base::GetResource_link(void) const
{
    if (!CanGetResource_link()) {
        ThrowUnassigned(1);
    }
    return m_Resource_link;
}

inline
void CVariantProperties_Base::SetResource_link(CVariantProperties_Base::TResource_link value)
{
    m_Resource_link = value;
    m_set_State[0] |= 0xc;
}

inline
CVariantProperties_Base::TResource_link& CVariantProperties_Base::SetResource_link(void)
{
#ifdef _DEBUG
    if (!IsSetResource_link()) {
        memset(&m_Resource_link,UnassignedByte(),sizeof(m_Resource_link));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Resource_link;
}

inline
bool CVariantProperties_Base::IsSetGene_location(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CVariantProperties_Base::CanGetGene_location(void) const
{
    return IsSetGene_location();
}

inline
void CVariantProperties_Base::ResetGene_location(void)
{
    m_Gene_location = (EGene_location)(0);
    m_set_State[0] &= ~0x30;
}

inline
CVariantProperties_Base::TGene_location CVariantProperties_Base::GetGene_location(void) const
{
    if (!CanGetGene_location()) {
        ThrowUnassigned(2);
    }
    return m_Gene_location;
}

inline
void CVariantProperties_Base::SetGene_location(CVariantProperties_Base::TGene_location value)
{
    m_Gene_location = value;
    m_set_State[0] |= 0x30;
}

inline
CVariantProperties_Base::TGene_location& CVariantProperties_Base::SetGene_location(void)
{
#ifdef _DEBUG
    if (!IsSetGene_location()) {
        memset(&m_Gene_location,UnassignedByte(),sizeof(m_Gene_location));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Gene_location;
}

inline
bool CVariantProperties_Base::IsSetEffect(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CVariantProperties_Base::CanGetEffect(void) const
{
    return IsSetEffect();
}

inline
void CVariantProperties_Base::ResetEffect(void)
{
    m_Effect = (EEffect)(0);
    m_set_State[0] &= ~0xc0;
}

inline
CVariantProperties_Base::TEffect CVariantProperties_Base::GetEffect(void) const
{
    if (!CanGetEffect()) {
        ThrowUnassigned(3);
    }
    return m_Effect;
}

inline
void CVariantProperties_Base::SetEffect(CVariantProperties_Base::TEffect value)
{
    m_Effect = value;
    m_set_State[0] |= 0xc0;
}

inline
CVariantProperties_Base::TEffect& CVariantProperties_Base::SetEffect(void)
{
#ifdef _DEBUG
    if (!IsSetEffect()) {
        memset(&m_Effect,UnassignedByte(),sizeof(m_Effect));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Effect;
}

inline
bool CVariantProperties_Base::IsSetMapping(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CVariantProperties_Base::CanGetMapping(void) const
{
    return IsSetMapping();
}

inline
void CVariantProperties_Base::ResetMapping(void)
{
    m_Mapping = (EMapping)(0);
    m_set_State[0] &= ~0x300;
}

inline
CVariantProperties_Base::TMapping CVariantProperties_Base::GetMapping(void) const
{
    if (!CanGetMapping()) {
        ThrowUnassigned(4);
    }
    return m_Mapping;
}

inline
void CVariantProperties_Base::SetMapping(CVariantProperties_Base::TMapping value)
{
    m_Mapping = value;
    m_set_State[0] |= 0x300;
}

inline
CVariantProperties_Base::TMapping& CVariantProperties_Base::SetMapping(void)
{
#ifdef _DEBUG
    if (!IsSetMapping()) {
        memset(&m_Mapping,UnassignedByte(),sizeof(m_Mapping));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Mapping;
}

inline
bool CVariantProperties_Base::IsSetMap_weight(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CVariantProperties_Base::CanGetMap_weight(void) const
{
    return IsSetMap_weight();
}

inline
void CVariantProperties_Base::ResetMap_weight(void)
{
    m_Map_weight = (EMap_weight)(0);
    m_set_State[0] &= ~0xc00;
}

inline
CVariantProperties_Base::TMap_weight CVariantProperties_Base::GetMap_weight(void) const
{
    if (!CanGetMap_weight()) {
        ThrowUnassigned(5);
    }
    return m_Map_weight;
}

inline
void CVariantProperties_Base::SetMap_weight(CVariantProperties_Base::TMap_weight value)
{
    m_Map_weight = value;
    m_set_State[0] |= 0xc00;
}

inline
CVariantProperties_Base::TMap_weight& CVariantProperties_Base::SetMap_weight(void)
{
#ifdef _DEBUG
    if (!IsSetMap_weight()) {
        memset(&m_Map_weight,UnassignedByte(),sizeof(m_Map_weight));
    }
#endif
    m_set_State[0] |= 0x400;
    return m_Map_weight;
}

inline
bool CVariantProperties_Base::IsSetFrequency_based_validation(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CVariantProperties_Base::CanGetFrequency_based_validation(void) const
{
    return IsSetFrequency_based_validation();
}

inline
void CVariantProperties_Base::ResetFrequency_based_validation(void)
{
    m_Frequency_based_validation = (EFrequency_based_validation)(0);
    m_set_State[0] &= ~0x3000;
}

inline
CVariantProperties_Base::TFrequency_based_validation CVariantProperties_Base::GetFrequency_based_validation(void) const
{
    if (!CanGetFrequency_based_validation()) {
        ThrowUnassigned(6);
    }
    return m_Frequency_based_validation;
}

inline
void CVariantProperties_Base::SetFrequency_based_validation(CVariantProperties_Base::TFrequency_based_validation value)
{
    m_Frequency_based_validation = value;
    m_set_State[0] |= 0x3000;
}

inline
CVariantProperties_Base::TFrequency_based_validation& CVariantProperties_Base::SetFrequency_based_validation(void)
{
#ifdef _DEBUG
    if (!IsSetFrequency_based_validation()) {
        memset(&m_Frequency_based_validation,UnassignedByte(),sizeof(m_Frequency_based_validation));
    }
#endif
    m_set_State[0] |= 0x1000;
    return m_Frequency_based_validation;
}

inline
bool CVariantProperties_Base::IsSetGenotype(void) const
{
    return ((m_set_State[0] & 0xc000) != 0);
}

inline
bool CVariantProperties_Base::CanGetGenotype(void) const
{
    return IsSetGenotype();
}

inline
void CVariantProperties_Base::ResetGenotype(void)
{
    m_Genotype = (EGenotype)(0);
    m_set_State[0] &= ~0xc000;
}

inline
CVariantProperties_Base::TGenotype CVariantProperties_Base::GetGenotype(void) const
{
    if (!CanGetGenotype()) {
        ThrowUnassigned(7);
    }
    return m_Genotype;
}

inline
void CVariantProperties_Base::SetGenotype(CVariantProperties_Base::TGenotype value)
{
    m_Genotype = value;
    m_set_State[0] |= 0xc000;
}

inline
CVariantProperties_Base::TGenotype& CVariantProperties_Base::SetGenotype(void)
{
#ifdef _DEBUG
    if (!IsSetGenotype()) {
        memset(&m_Genotype,UnassignedByte(),sizeof(m_Genotype));
    }
#endif
    m_set_State[0] |= 0x4000;
    return m_Genotype;
}

inline
bool CVariantProperties_Base::IsSetProject_data(void) const
{
    return ((m_set_State[0] & 0x30000) != 0);
}

inline
bool CVariantProperties_Base::CanGetProject_data(void) const
{
    return true;
}

inline
const CVariantProperties_Base::TProject_data& CVariantProperties_Base::GetProject_data(void) const
{
    return m_Project_data;
}

inline
CVariantProperties_Base::TProject_data& CVariantProperties_Base::SetProject_data(void)
{
    m_set_State[0] |= 0x10000;
    return m_Project_data;
}

inline
bool CVariantProperties_Base::IsSetQuality_check(void) const
{
    return ((m_set_State[0] & 0xc0000) != 0);
}

inline
bool CVariantProperties_Base::CanGetQuality_check(void) const
{
    return IsSetQuality_check();
}

inline
void CVariantProperties_Base::ResetQuality_check(void)
{
    m_Quality_check = (EQuality_check)(0);
    m_set_State[0] &= ~0xc0000;
}

inline
CVariantProperties_Base::TQuality_check CVariantProperties_Base::GetQuality_check(void) const
{
    if (!CanGetQuality_check()) {
        ThrowUnassigned(9);
    }
    return m_Quality_check;
}

inline
void CVariantProperties_Base::SetQuality_check(CVariantProperties_Base::TQuality_check value)
{
    m_Quality_check = value;
    m_set_State[0] |= 0xc0000;
}

inline
CVariantProperties_Base::TQuality_check& CVariantProperties_Base::SetQuality_check(void)
{
#ifdef _DEBUG
    if (!IsSetQuality_check()) {
        memset(&m_Quality_check,UnassignedByte(),sizeof(m_Quality_check));
    }
#endif
    m_set_State[0] |= 0x40000;
    return m_Quality_check;
}

inline
bool CVariantProperties_Base::IsSetConfidence(void) const
{
    return ((m_set_State[0] & 0x300000) != 0);
}

inline
bool CVariantProperties_Base::CanGetConfidence(void) const
{
    return IsSetConfidence();
}

inline
void CVariantProperties_Base::ResetConfidence(void)
{
    m_Confidence = (EConfidence)(0);
    m_set_State[0] &= ~0x300000;
}

inline
CVariantProperties_Base::TConfidence CVariantProperties_Base::GetConfidence(void) const
{
    if (!CanGetConfidence()) {
        ThrowUnassigned(10);
    }
    return m_Confidence;
}

inline
void CVariantProperties_Base::SetConfidence(CVariantProperties_Base::TConfidence value)
{
    m_Confidence = value;
    m_set_State[0] |= 0x300000;
}

inline
CVariantProperties_Base::TConfidence& CVariantProperties_Base::SetConfidence(void)
{
#ifdef _DEBUG
    if (!IsSetConfidence()) {
        memset(&m_Confidence,UnassignedByte(),sizeof(m_Confidence));
    }
#endif
    m_set_State[0] |= 0x100000;
    return m_Confidence;
}

inline
bool CVariantProperties_Base::IsSetOther_validation(void) const
{
    return ((m_set_State[0] & 0xc00000) != 0);
}

inline
bool CVariantProperties_Base::CanGetOther_validation(void) const
{
    return IsSetOther_validation();
}

inline
void CVariantProperties_Base::ResetOther_validation(void)
{
    m_Other_validation = 0;
    m_set_State[0] &= ~0xc00000;
}

inline
CVariantProperties_Base::TOther_validation CVariantProperties_Base::GetOther_validation(void) const
{
    if (!CanGetOther_validation()) {
        ThrowUnassigned(11);
    }
    return m_Other_validation;
}

inline
void CVariantProperties_Base::SetOther_validation(CVariantProperties_Base::TOther_validation value)
{
    m_Other_validation = value;
    m_set_State[0] |= 0xc00000;
}

inline
CVariantProperties_Base::TOther_validation& CVariantProperties_Base::SetOther_validation(void)
{
#ifdef _DEBUG
    if (!IsSetOther_validation()) {
        memset(&m_Other_validation,UnassignedByte(),sizeof(m_Other_validation));
    }
#endif
    m_set_State[0] |= 0x400000;
    return m_Other_validation;
}

inline
bool CVariantProperties_Base::IsSetAllele_origin(void) const
{
    return ((m_set_State[0] & 0x3000000) != 0);
}

inline
bool CVariantProperties_Base::CanGetAllele_origin(void) const
{
    return IsSetAllele_origin();
}

inline
void CVariantProperties_Base::ResetAllele_origin(void)
{
    m_Allele_origin = (EAllele_origin)(0);
    m_set_State[0] &= ~0x3000000;
}

inline
CVariantProperties_Base::TAllele_origin CVariantProperties_Base::GetAllele_origin(void) const
{
    if (!CanGetAllele_origin()) {
        ThrowUnassigned(12);
    }
    return m_Allele_origin;
}

inline
void CVariantProperties_Base::SetAllele_origin(CVariantProperties_Base::TAllele_origin value)
{
    m_Allele_origin = value;
    m_set_State[0] |= 0x3000000;
}

inline
CVariantProperties_Base::TAllele_origin& CVariantProperties_Base::SetAllele_origin(void)
{
#ifdef _DEBUG
    if (!IsSetAllele_origin()) {
        memset(&m_Allele_origin,UnassignedByte(),sizeof(m_Allele_origin));
    }
#endif
    m_set_State[0] |= 0x1000000;
    return m_Allele_origin;
}

inline
bool CVariantProperties_Base::IsSetAllele_state(void) const
{
    return ((m_set_State[0] & 0xc000000) != 0);
}

inline
bool CVariantProperties_Base::CanGetAllele_state(void) const
{
    return IsSetAllele_state();
}

inline
void CVariantProperties_Base::ResetAllele_state(void)
{
    m_Allele_state = (EAllele_state)(0);
    m_set_State[0] &= ~0xc000000;
}

inline
CVariantProperties_Base::TAllele_state CVariantProperties_Base::GetAllele_state(void) const
{
    if (!CanGetAllele_state()) {
        ThrowUnassigned(13);
    }
    return m_Allele_state;
}

inline
void CVariantProperties_Base::SetAllele_state(CVariantProperties_Base::TAllele_state value)
{
    m_Allele_state = value;
    m_set_State[0] |= 0xc000000;
}

inline
CVariantProperties_Base::TAllele_state& CVariantProperties_Base::SetAllele_state(void)
{
#ifdef _DEBUG
    if (!IsSetAllele_state()) {
        memset(&m_Allele_state,UnassignedByte(),sizeof(m_Allele_state));
    }
#endif
    m_set_State[0] |= 0x4000000;
    return m_Allele_state;
}

inline
bool CVariantProperties_Base::IsSetAllele_frequency(void) const
{
    return ((m_set_State[0] & 0x30000000) != 0);
}

inline
bool CVariantProperties_Base::CanGetAllele_frequency(void) const
{
    return IsSetAllele_frequency();
}

inline
void CVariantProperties_Base::ResetAllele_frequency(void)
{
    m_Allele_frequency = 0;
    m_set_State[0] &= ~0x30000000;
}

inline
CVariantProperties_Base::TAllele_frequency CVariantProperties_Base::GetAllele_frequency(void) const
{
    if (!CanGetAllele_frequency()) {
        ThrowUnassigned(14);
    }
    return m_Allele_frequency;
}

inline
void CVariantProperties_Base::SetAllele_frequency(CVariantProperties_Base::TAllele_frequency value)
{
    m_Allele_frequency = value;
    m_set_State[0] |= 0x30000000;
}

inline
CVariantProperties_Base::TAllele_frequency& CVariantProperties_Base::SetAllele_frequency(void)
{
#ifdef _DEBUG
    if (!IsSetAllele_frequency()) {
        memset(&m_Allele_frequency,UnassignedByte(),sizeof(m_Allele_frequency));
    }
#endif
    m_set_State[0] |= 0x10000000;
    return m_Allele_frequency;
}

inline
bool CVariantProperties_Base::IsSetIs_ancestral_allele(void) const
{
    return ((m_set_State[0] & 0xc0000000) != 0);
}

inline
bool CVariantProperties_Base::CanGetIs_ancestral_allele(void) const
{
    return IsSetIs_ancestral_allele();
}

inline
void CVariantProperties_Base::ResetIs_ancestral_allele(void)
{
    m_Is_ancestral_allele = 0;
    m_set_State[0] &= ~0xc0000000;
}

inline
CVariantProperties_Base::TIs_ancestral_allele CVariantProperties_Base::GetIs_ancestral_allele(void) const
{
    if (!CanGetIs_ancestral_allele()) {
        ThrowUnassigned(15);
    }
    return m_Is_ancestral_allele;
}

inline
void CVariantProperties_Base::SetIs_ancestral_allele(CVariantProperties_Base::TIs_ancestral_allele value)
{
    m_Is_ancestral_allele = value;
    m_set_State[0] |= 0xc0000000;
}

inline
CVariantProperties_Base::TIs_ancestral_allele& CVariantProperties_Base::SetIs_ancestral_allele(void)
{
#ifdef _DEBUG
    if (!IsSetIs_ancestral_allele()) {
        memset(&m_Is_ancestral_allele,UnassignedByte(),sizeof(m_Is_ancestral_allele));
    }
#endif
    m_set_State[0] |= 0x40000000;
    return m_Is_ancestral_allele;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_VARIANTPROPERTIES_BASE_HPP
