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

/// @file Cdd_descr_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cdd.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CDD_CDD_DESCR_BASE_HPP
#define OBJECTS_CDD_CDD_DESCR_BASE_HPP

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
class CCdd_book_ref;
class CCdd_id_set;
class CCdd_repeat;
class CDate;
class COrg_ref;
class CPub;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// The description of CDD's refers to the specific set of aligned sequences,
/// the region that is being aligned and the information contained in the
/// alignment. It may contain a lengthy comment
/// describing the function of the domain as well as its origin and all
/// other anecdotal information that can't be pressed into a rigid scheme.
/// Crosslinks to reference papers available in PubMed are possible as well.
/// There can be as many of these as you want in the CDD.
class NCBI_CDD_EXPORT CCdd_descr_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CCdd_descr_Base(void);
    // destructor
    virtual ~CCdd_descr_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EStatus {
        eStatus_unassigned       =   0,
        eStatus_finished_ok      =   1,  ///< a public curated CD
        eStatus_pending_release  =   2,  ///< needs work done, not yet released
        eStatus_other_asis       =   3,  ///< imported as-is, immediate release
        eStatus_matrix_only      =   4,  ///< CD holds a Psi-Blast PSSM only,  does not contain alignment data
        eStatus_update_running   =   5,  ///< has been flagged for  update (in queue)
        eStatus_auto_updated     =   6,  ///< update finished, no  work necessary
        eStatus_claimed          =   7,  ///< is earmarked for curation
        eStatus_curated_complete =   8,  ///< public curated member of a  completed family
        eStatus_other            = 255  ///< for CD production?
    };
    
    /// Access to EStatus's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EStatus)(void);
    
    enum ECuration_status {
        eCuration_status_unassigned =   0,  ///< to record curation status
        eCuration_status_prein      =   1,  ///< when CD is checked out from
        eCuration_status_ofc        =   2,  ///< the tracking database, for 
        eCuration_status_iac        =   3,  ///< use within curation software
        eCuration_status_ofv1       =   4,
        eCuration_status_iav1       =   5,
        eCuration_status_ofv2       =   6,
        eCuration_status_iav2       =   7,
        eCuration_status_postin     =   8,
        eCuration_status_other      = 255
    };
    
    /// Access to ECuration_status's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ECuration_status)(void);
    
    enum EReadonly_status {
        eReadonly_status_unassigned =   0,  ///< to record read-only status
        eReadonly_status_readonly   =   1,  ///< when CD is checked out from
        eReadonly_status_readwrite  =   2,  ///< the tracking database, for
        eReadonly_status_other      = 255  ///< use within curation software
    };
    
    /// Access to EReadonly_status's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EReadonly_status)(void);
    

    /// Choice variants.
    enum E_Choice {
        e_not_set = 0,      ///< No variant selected
        e_Othername,        ///< alternative names for the CDD  if domain has several common names
        e_Category,         ///< intracellular, extracellular, etc.  to record spatial and/or temporal  expression in free-text format
        e_Comment,          ///< this is where descriptions go
        e_Reference,        ///< a citation describing the domain
        e_Create_date,      ///< Date of first creation/dump
        e_Tax_source,       ///< holds the highest common tax node
        e_Source,           ///< the database the seeds were created  from, e.g. SMART, PFAM, etc..
        e_Status,
        e_Update_date,      ///< Date of last version change
        e_Scrapbook,        ///< for storing curation notes  those won't make it into public  distributions
        e_Source_id,        ///< for linking back to source db
        e_Repeats,          ///< to record repeat counts
        e_Old_root,         ///< to record short-term history
        e_Curation_status,
        e_Readonly_status,
        e_Book_ref,         ///< links to Entrez/books
        e_Attribution,      ///< add citations and/or author names
        e_Title             ///< hold short descriptive text
    };
    /// Maximum+1 value of the choice variant enumerator.
    enum E_ChoiceStopper {
        e_MaxChoice = 19 ///< == e_Title+1
    };

    /// Reset the whole object
    virtual void Reset(void);

    /// Reset the selection (set it to e_not_set).
    virtual void ResetSelection(void);

    /// Which variant is currently selected.
    E_Choice Which(void) const;

    /// Verify selection, throw exception if it differs from the expected.
    void CheckSelected(E_Choice index) const;

    /// Throw 'InvalidSelection' exception.
    NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;

    /// Retrieve selection name (for diagnostic purposes).
    static string SelectionName(E_Choice index);

    /// Select the requested variant if needed.
    void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
    /// Select the requested variant if needed,
    /// allocating CObject variants from memory pool.
    void Select(E_Choice index,
                EResetVariant reset,
                CObjectMemoryPool* pool);

    // types
    typedef string TOthername;
    typedef string TCategory;
    typedef string TComment;
    typedef CPub TReference;
    typedef CDate TCreate_date;
    typedef COrg_ref TTax_source;
    typedef string TSource;
    typedef int TStatus;
    typedef CDate TUpdate_date;
    typedef list< string > TScrapbook;
    typedef CCdd_id_set TSource_id;
    typedef CCdd_repeat TRepeats;
    typedef CCdd_id_set TOld_root;
    typedef int TCuration_status;
    typedef int TReadonly_status;
    typedef CCdd_book_ref TBook_ref;
    typedef CPub TAttribution;
    typedef string TTitle;

    // getters
    // setters

    // typedef string TOthername
    bool IsOthername(void) const;
    const TOthername& GetOthername(void) const;
    TOthername& SetOthername(void);
    void SetOthername(const TOthername& value);

    // typedef string TCategory
    bool IsCategory(void) const;
    const TCategory& GetCategory(void) const;
    TCategory& SetCategory(void);
    void SetCategory(const TCategory& value);

    // typedef string TComment
    bool IsComment(void) const;
    const TComment& GetComment(void) const;
    TComment& SetComment(void);
    void SetComment(const TComment& value);

    // typedef CPub TReference
    bool IsReference(void) const;
    const TReference& GetReference(void) const;
    TReference& SetReference(void);
    void SetReference(TReference& value);

    // typedef CDate TCreate_date
    bool IsCreate_date(void) const;
    const TCreate_date& GetCreate_date(void) const;
    TCreate_date& SetCreate_date(void);
    void SetCreate_date(TCreate_date& value);

    // typedef COrg_ref TTax_source
    bool IsTax_source(void) const;
    const TTax_source& GetTax_source(void) const;
    TTax_source& SetTax_source(void);
    void SetTax_source(TTax_source& value);

    // typedef string TSource
    bool IsSource(void) const;
    const TSource& GetSource(void) const;
    TSource& SetSource(void);
    void SetSource(const TSource& value);

    // typedef int TStatus
    bool IsStatus(void) const;
    TStatus GetStatus(void) const;
    TStatus& SetStatus(void);
    void SetStatus(TStatus value);

    // typedef CDate TUpdate_date
    bool IsUpdate_date(void) const;
    const TUpdate_date& GetUpdate_date(void) const;
    TUpdate_date& SetUpdate_date(void);
    void SetUpdate_date(TUpdate_date& value);

    // typedef list< string > TScrapbook
    bool IsScrapbook(void) const;
    const TScrapbook& GetScrapbook(void) const;
    TScrapbook& SetScrapbook(void);

    // typedef CCdd_id_set TSource_id
    bool IsSource_id(void) const;
    const TSource_id& GetSource_id(void) const;
    TSource_id& SetSource_id(void);
    void SetSource_id(TSource_id& value);

    // typedef CCdd_repeat TRepeats
    bool IsRepeats(void) const;
    const TRepeats& GetRepeats(void) const;
    TRepeats& SetRepeats(void);
    void SetRepeats(TRepeats& value);

    // typedef CCdd_id_set TOld_root
    bool IsOld_root(void) const;
    const TOld_root& GetOld_root(void) const;
    TOld_root& SetOld_root(void);
    void SetOld_root(TOld_root& value);

    // typedef int TCuration_status
    bool IsCuration_status(void) const;
    TCuration_status GetCuration_status(void) const;
    TCuration_status& SetCuration_status(void);
    void SetCuration_status(TCuration_status value);

    // typedef int TReadonly_status
    bool IsReadonly_status(void) const;
    TReadonly_status GetReadonly_status(void) const;
    TReadonly_status& SetReadonly_status(void);
    void SetReadonly_status(TReadonly_status value);

    // typedef CCdd_book_ref TBook_ref
    bool IsBook_ref(void) const;
    const TBook_ref& GetBook_ref(void) const;
    TBook_ref& SetBook_ref(void);
    void SetBook_ref(TBook_ref& value);

    // typedef CPub TAttribution
    bool IsAttribution(void) const;
    const TAttribution& GetAttribution(void) const;
    TAttribution& SetAttribution(void);
    void SetAttribution(TAttribution& value);

    // typedef string TTitle
    bool IsTitle(void) const;
    const TTitle& GetTitle(void) const;
    TTitle& SetTitle(void);
    void SetTitle(const TTitle& value);


private:
    // copy constructor and assignment operator
    CCdd_descr_Base(const CCdd_descr_Base& );
    CCdd_descr_Base& operator=(const CCdd_descr_Base& );
    // choice state
    E_Choice m_choice;
    // helper methods
    void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);

    static const char* const sm_SelectionNames[];
    // data
    union {
        TStatus m_Status;
        NCBI_NS_NCBI::CUnionBuffer<TScrapbook> m_Scrapbook;
        TCuration_status m_Curation_status;
        TReadonly_status m_Readonly_status;
        NCBI_NS_NCBI::CUnionBuffer<NCBI_NS_STD::string> m_string;
        NCBI_NS_NCBI::CSerialObject *m_object;
    };
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CCdd_descr_Base::E_Choice CCdd_descr_Base::Which(void) const
{
    return m_choice;
}

inline
void CCdd_descr_Base::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CCdd_descr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CCdd_descr_Base::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CCdd_descr_Base::IsOthername(void) const
{
    return m_choice == e_Othername;
}

inline
const CCdd_descr_Base::TOthername& CCdd_descr_Base::GetOthername(void) const
{
    CheckSelected(e_Othername);
    return *m_string;
}

inline
CCdd_descr_Base::TOthername& CCdd_descr_Base::SetOthername(void)
{
    Select(e_Othername, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CCdd_descr_Base::IsCategory(void) const
{
    return m_choice == e_Category;
}

inline
const CCdd_descr_Base::TCategory& CCdd_descr_Base::GetCategory(void) const
{
    CheckSelected(e_Category);
    return *m_string;
}

inline
CCdd_descr_Base::TCategory& CCdd_descr_Base::SetCategory(void)
{
    Select(e_Category, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CCdd_descr_Base::IsComment(void) const
{
    return m_choice == e_Comment;
}

inline
const CCdd_descr_Base::TComment& CCdd_descr_Base::GetComment(void) const
{
    CheckSelected(e_Comment);
    return *m_string;
}

inline
CCdd_descr_Base::TComment& CCdd_descr_Base::SetComment(void)
{
    Select(e_Comment, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CCdd_descr_Base::IsReference(void) const
{
    return m_choice == e_Reference;
}

inline
bool CCdd_descr_Base::IsCreate_date(void) const
{
    return m_choice == e_Create_date;
}

inline
bool CCdd_descr_Base::IsTax_source(void) const
{
    return m_choice == e_Tax_source;
}

inline
bool CCdd_descr_Base::IsSource(void) const
{
    return m_choice == e_Source;
}

inline
const CCdd_descr_Base::TSource& CCdd_descr_Base::GetSource(void) const
{
    CheckSelected(e_Source);
    return *m_string;
}

inline
CCdd_descr_Base::TSource& CCdd_descr_Base::SetSource(void)
{
    Select(e_Source, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

inline
bool CCdd_descr_Base::IsStatus(void) const
{
    return m_choice == e_Status;
}

inline
CCdd_descr_Base::TStatus CCdd_descr_Base::GetStatus(void) const
{
    CheckSelected(e_Status);
    return m_Status;
}

inline
CCdd_descr_Base::TStatus& CCdd_descr_Base::SetStatus(void)
{
    Select(e_Status, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Status;
}

inline
void CCdd_descr_Base::SetStatus(CCdd_descr_Base::TStatus value)
{
    Select(e_Status, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Status = value;
}

inline
bool CCdd_descr_Base::IsUpdate_date(void) const
{
    return m_choice == e_Update_date;
}

inline
bool CCdd_descr_Base::IsScrapbook(void) const
{
    return m_choice == e_Scrapbook;
}

inline
const CCdd_descr_Base::TScrapbook& CCdd_descr_Base::GetScrapbook(void) const
{
    CheckSelected(e_Scrapbook);
    return *m_Scrapbook;
}

inline
CCdd_descr_Base::TScrapbook& CCdd_descr_Base::SetScrapbook(void)
{
    Select(e_Scrapbook, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Scrapbook;
}

inline
bool CCdd_descr_Base::IsSource_id(void) const
{
    return m_choice == e_Source_id;
}

inline
bool CCdd_descr_Base::IsRepeats(void) const
{
    return m_choice == e_Repeats;
}

inline
bool CCdd_descr_Base::IsOld_root(void) const
{
    return m_choice == e_Old_root;
}

inline
bool CCdd_descr_Base::IsCuration_status(void) const
{
    return m_choice == e_Curation_status;
}

inline
CCdd_descr_Base::TCuration_status CCdd_descr_Base::GetCuration_status(void) const
{
    CheckSelected(e_Curation_status);
    return m_Curation_status;
}

inline
CCdd_descr_Base::TCuration_status& CCdd_descr_Base::SetCuration_status(void)
{
    Select(e_Curation_status, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Curation_status;
}

inline
void CCdd_descr_Base::SetCuration_status(CCdd_descr_Base::TCuration_status value)
{
    Select(e_Curation_status, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Curation_status = value;
}

inline
bool CCdd_descr_Base::IsReadonly_status(void) const
{
    return m_choice == e_Readonly_status;
}

inline
CCdd_descr_Base::TReadonly_status CCdd_descr_Base::GetReadonly_status(void) const
{
    CheckSelected(e_Readonly_status);
    return m_Readonly_status;
}

inline
CCdd_descr_Base::TReadonly_status& CCdd_descr_Base::SetReadonly_status(void)
{
    Select(e_Readonly_status, NCBI_NS_NCBI::eDoNotResetVariant);
    return m_Readonly_status;
}

inline
void CCdd_descr_Base::SetReadonly_status(CCdd_descr_Base::TReadonly_status value)
{
    Select(e_Readonly_status, NCBI_NS_NCBI::eDoNotResetVariant);
    m_Readonly_status = value;
}

inline
bool CCdd_descr_Base::IsBook_ref(void) const
{
    return m_choice == e_Book_ref;
}

inline
bool CCdd_descr_Base::IsAttribution(void) const
{
    return m_choice == e_Attribution;
}

inline
bool CCdd_descr_Base::IsTitle(void) const
{
    return m_choice == e_Title;
}

inline
const CCdd_descr_Base::TTitle& CCdd_descr_Base::GetTitle(void) const
{
    CheckSelected(e_Title);
    return *m_string;
}

inline
CCdd_descr_Base::TTitle& CCdd_descr_Base::SetTitle(void)
{
    Select(e_Title, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_string;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CDD_CDD_DESCR_BASE_HPP
