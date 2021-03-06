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

/// @file Msms_pipeline_analysis_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'pepXML.xsd'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef ALGO_MS_FORMATS_PEPXML_MSMS_PIPELINE_ANALYSIS_BASE_HPP
#define ALGO_MS_FORMATS_PEPXML_MSMS_PIPELINE_ANALYSIS_BASE_HPP

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
class CAnalysis_summary;
class CDataset_derivation;
class CMsms_run_summary;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_PEPXML_EXPORT CMsms_pipeline_analysis_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CMsms_pipeline_analysis_Base(void);
    // destructor
    virtual ~CMsms_pipeline_analysis_Base(void);

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
        typedef string TName;
        typedef string TDate;
        typedef string TSummary_xml;
    
        // getters
        // setters
    
        /// optional
        /// typedef string TName
        ///  Check whether the Name data member has been assigned a value.
        bool IsSetName(void) const;
        /// Check whether it is safe or not to call GetName method.
        bool CanGetName(void) const;
        void ResetName(void);
        const TName& GetName(void) const;
        void SetName(const TName& value);
        TName& SetName(void);
    
        /// mandatory
        /// typedef string TDate
        ///  Check whether the Date data member has been assigned a value.
        bool IsSetDate(void) const;
        /// Check whether it is safe or not to call GetDate method.
        bool CanGetDate(void) const;
        void ResetDate(void);
        const TDate& GetDate(void) const;
        void SetDate(const TDate& value);
        TDate& SetDate(void);
    
        /// mandatory
        /// typedef string TSummary_xml
        ///  Check whether the Summary_xml data member has been assigned a value.
        bool IsSetSummary_xml(void) const;
        /// Check whether it is safe or not to call GetSummary_xml method.
        bool CanGetSummary_xml(void) const;
        void ResetSummary_xml(void);
        const TSummary_xml& GetSummary_xml(void) const;
        void SetSummary_xml(const TSummary_xml& value);
        TSummary_xml& SetSummary_xml(void);
    
        /// Reset the whole object
        void Reset(void);
    
    
    private:
        // Prohibit copy constructor and assignment operator
        C_Attlist(const C_Attlist&);
        C_Attlist& operator=(const C_Attlist&);
    
        // data
        Uint4 m_set_State[1];
        string m_Name;
        string m_Date;
        string m_Summary_xml;
    };
    // types
    typedef C_Attlist TAttlist;
    typedef list< CRef< CAnalysis_summary > > TAnalysis_summary;
    typedef CDataset_derivation TDataset_derivation;
    typedef list< CRef< CMsms_run_summary > > TMsms_run_summary;

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
    /// typedef list< CRef< CAnalysis_summary > > TAnalysis_summary
    ///  Check whether the Analysis_summary data member has been assigned a value.
    bool IsSetAnalysis_summary(void) const;
    /// Check whether it is safe or not to call GetAnalysis_summary method.
    bool CanGetAnalysis_summary(void) const;
    void ResetAnalysis_summary(void);
    const TAnalysis_summary& GetAnalysis_summary(void) const;
    TAnalysis_summary& SetAnalysis_summary(void);

    /// optional
    /// typedef CDataset_derivation TDataset_derivation
    ///  Check whether the Dataset_derivation data member has been assigned a value.
    bool IsSetDataset_derivation(void) const;
    /// Check whether it is safe or not to call GetDataset_derivation method.
    bool CanGetDataset_derivation(void) const;
    void ResetDataset_derivation(void);
    const TDataset_derivation& GetDataset_derivation(void) const;
    void SetDataset_derivation(TDataset_derivation& value);
    TDataset_derivation& SetDataset_derivation(void);

    /// mandatory
    /// typedef list< CRef< CMsms_run_summary > > TMsms_run_summary
    ///  Check whether the Msms_run_summary data member has been assigned a value.
    bool IsSetMsms_run_summary(void) const;
    /// Check whether it is safe or not to call GetMsms_run_summary method.
    bool CanGetMsms_run_summary(void) const;
    void ResetMsms_run_summary(void);
    const TMsms_run_summary& GetMsms_run_summary(void) const;
    TMsms_run_summary& SetMsms_run_summary(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CMsms_pipeline_analysis_Base(const CMsms_pipeline_analysis_Base&);
    CMsms_pipeline_analysis_Base& operator=(const CMsms_pipeline_analysis_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TAttlist > m_Attlist;
    list< CRef< CAnalysis_summary > > m_Analysis_summary;
    CRef< TDataset_derivation > m_Dataset_derivation;
    list< CRef< CMsms_run_summary > > m_Msms_run_summary;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CMsms_pipeline_analysis_Base::C_Attlist::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CMsms_pipeline_analysis_Base::C_Attlist::CanGetName(void) const
{
    return IsSetName();
}

inline
const CMsms_pipeline_analysis_Base::C_Attlist::TName& CMsms_pipeline_analysis_Base::C_Attlist::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CMsms_pipeline_analysis_Base::C_Attlist::SetName(const CMsms_pipeline_analysis_Base::C_Attlist::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CMsms_pipeline_analysis_Base::C_Attlist::TName& CMsms_pipeline_analysis_Base::C_Attlist::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CMsms_pipeline_analysis_Base::C_Attlist::IsSetDate(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMsms_pipeline_analysis_Base::C_Attlist::CanGetDate(void) const
{
    return IsSetDate();
}

inline
const CMsms_pipeline_analysis_Base::C_Attlist::TDate& CMsms_pipeline_analysis_Base::C_Attlist::GetDate(void) const
{
    if (!CanGetDate()) {
        ThrowUnassigned(1);
    }
    return m_Date;
}

inline
void CMsms_pipeline_analysis_Base::C_Attlist::SetDate(const CMsms_pipeline_analysis_Base::C_Attlist::TDate& value)
{
    m_Date = value;
    m_set_State[0] |= 0xc;
}

inline
CMsms_pipeline_analysis_Base::C_Attlist::TDate& CMsms_pipeline_analysis_Base::C_Attlist::SetDate(void)
{
#ifdef _DEBUG
    if (!IsSetDate()) {
        m_Date = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Date;
}

inline
bool CMsms_pipeline_analysis_Base::C_Attlist::IsSetSummary_xml(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CMsms_pipeline_analysis_Base::C_Attlist::CanGetSummary_xml(void) const
{
    return IsSetSummary_xml();
}

inline
const CMsms_pipeline_analysis_Base::C_Attlist::TSummary_xml& CMsms_pipeline_analysis_Base::C_Attlist::GetSummary_xml(void) const
{
    if (!CanGetSummary_xml()) {
        ThrowUnassigned(2);
    }
    return m_Summary_xml;
}

inline
void CMsms_pipeline_analysis_Base::C_Attlist::SetSummary_xml(const CMsms_pipeline_analysis_Base::C_Attlist::TSummary_xml& value)
{
    m_Summary_xml = value;
    m_set_State[0] |= 0x30;
}

inline
CMsms_pipeline_analysis_Base::C_Attlist::TSummary_xml& CMsms_pipeline_analysis_Base::C_Attlist::SetSummary_xml(void)
{
#ifdef _DEBUG
    if (!IsSetSummary_xml()) {
        m_Summary_xml = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Summary_xml;
}

inline
bool CMsms_pipeline_analysis_Base::IsSetAttlist(void) const
{
    return m_Attlist.NotEmpty();
}

inline
bool CMsms_pipeline_analysis_Base::CanGetAttlist(void) const
{
    return true;
}

inline
const CMsms_pipeline_analysis_Base::TAttlist& CMsms_pipeline_analysis_Base::GetAttlist(void) const
{
    if ( !m_Attlist ) {
        const_cast<CMsms_pipeline_analysis_Base*>(this)->ResetAttlist();
    }
    return (*m_Attlist);
}

inline
CMsms_pipeline_analysis_Base::TAttlist& CMsms_pipeline_analysis_Base::SetAttlist(void)
{
    if ( !m_Attlist ) {
        ResetAttlist();
    }
    return (*m_Attlist);
}

inline
bool CMsms_pipeline_analysis_Base::IsSetAnalysis_summary(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CMsms_pipeline_analysis_Base::CanGetAnalysis_summary(void) const
{
    return true;
}

inline
const CMsms_pipeline_analysis_Base::TAnalysis_summary& CMsms_pipeline_analysis_Base::GetAnalysis_summary(void) const
{
    return m_Analysis_summary;
}

inline
CMsms_pipeline_analysis_Base::TAnalysis_summary& CMsms_pipeline_analysis_Base::SetAnalysis_summary(void)
{
    m_set_State[0] |= 0x4;
    return m_Analysis_summary;
}

inline
bool CMsms_pipeline_analysis_Base::IsSetDataset_derivation(void) const
{
    return m_Dataset_derivation.NotEmpty();
}

inline
bool CMsms_pipeline_analysis_Base::CanGetDataset_derivation(void) const
{
    return IsSetDataset_derivation();
}

inline
const CMsms_pipeline_analysis_Base::TDataset_derivation& CMsms_pipeline_analysis_Base::GetDataset_derivation(void) const
{
    if (!CanGetDataset_derivation()) {
        ThrowUnassigned(2);
    }
    return (*m_Dataset_derivation);
}

inline
bool CMsms_pipeline_analysis_Base::IsSetMsms_run_summary(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CMsms_pipeline_analysis_Base::CanGetMsms_run_summary(void) const
{
    return true;
}

inline
const CMsms_pipeline_analysis_Base::TMsms_run_summary& CMsms_pipeline_analysis_Base::GetMsms_run_summary(void) const
{
    return m_Msms_run_summary;
}

inline
CMsms_pipeline_analysis_Base::TMsms_run_summary& CMsms_pipeline_analysis_Base::SetMsms_run_summary(void)
{
    m_set_State[0] |= 0x40;
    return m_Msms_run_summary;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // ALGO_MS_FORMATS_PEPXML_MSMS_PIPELINE_ANALYSIS_BASE_HPP
