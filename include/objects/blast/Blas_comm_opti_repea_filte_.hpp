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

/// @file Blas_comm_opti_repea_filte_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAS_COMM_OPTI_REPEA_FILTE_BASE_HPP
#define OBJECTS_BLAST_BLAS_COMM_OPTI_REPEA_FILTE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_common_options_repeats_filtering_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBlast4_common_options_repeats_filtering_Base(void);
    // destructor
    virtual ~CBlast4_common_options_repeats_filtering_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef int TOrganism_taxid;

    // getters
    // setters

    /// defaults to human
    /// optional with default 9606
    /// typedef int TOrganism_taxid
    ///  Check whether the Organism_taxid data member has been assigned a value.
    bool IsSetOrganism_taxid(void) const;
    /// Check whether it is safe or not to call GetOrganism_taxid method.
    bool CanGetOrganism_taxid(void) const;
    void ResetOrganism_taxid(void);
    void SetDefaultOrganism_taxid(void);
    TOrganism_taxid GetOrganism_taxid(void) const;
    void SetOrganism_taxid(TOrganism_taxid value);
    TOrganism_taxid& SetOrganism_taxid(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBlast4_common_options_repeats_filtering_Base(const CBlast4_common_options_repeats_filtering_Base&);
    CBlast4_common_options_repeats_filtering_Base& operator=(const CBlast4_common_options_repeats_filtering_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Organism_taxid;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBlast4_common_options_repeats_filtering_Base::IsSetOrganism_taxid(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CBlast4_common_options_repeats_filtering_Base::CanGetOrganism_taxid(void) const
{
    return true;
}

inline
void CBlast4_common_options_repeats_filtering_Base::ResetOrganism_taxid(void)
{
    m_Organism_taxid = 9606;
    m_set_State[0] &= ~0x3;
}

inline
void CBlast4_common_options_repeats_filtering_Base::SetDefaultOrganism_taxid(void)
{
    ResetOrganism_taxid();
}

inline
CBlast4_common_options_repeats_filtering_Base::TOrganism_taxid CBlast4_common_options_repeats_filtering_Base::GetOrganism_taxid(void) const
{
    return m_Organism_taxid;
}

inline
void CBlast4_common_options_repeats_filtering_Base::SetOrganism_taxid(CBlast4_common_options_repeats_filtering_Base::TOrganism_taxid value)
{
    m_Organism_taxid = value;
    m_set_State[0] |= 0x3;
}

inline
CBlast4_common_options_repeats_filtering_Base::TOrganism_taxid& CBlast4_common_options_repeats_filtering_Base::SetOrganism_taxid(void)
{
#ifdef _DEBUG
    if (!IsSetOrganism_taxid()) {
        memset(&m_Organism_taxid,UnassignedByte(),sizeof(m_Organism_taxid));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Organism_taxid;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAS_COMM_OPTI_REPEA_FILTE_BASE_HPP
