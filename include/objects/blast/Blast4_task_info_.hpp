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

/// @file Blast4_task_info_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_BLAST_BLAST4_TASK_INFO_BASE_HPP
#define OBJECTS_BLAST_BLAST4_TASK_INFO_BASE_HPP

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
/// Self documenting task structure
class NCBI_BLAST_EXPORT CBlast4_task_info_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBlast4_task_info_Base(void);
    // destructor
    virtual ~CBlast4_task_info_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TName;
    typedef string TDocumentation;

    // getters
    // setters

    /// Name of this task
    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// Description of the task
    /// mandatory
    /// typedef string TDocumentation
    ///  Check whether the Documentation data member has been assigned a value.
    bool IsSetDocumentation(void) const;
    /// Check whether it is safe or not to call GetDocumentation method.
    bool CanGetDocumentation(void) const;
    void ResetDocumentation(void);
    const TDocumentation& GetDocumentation(void) const;
    void SetDocumentation(const TDocumentation& value);
    TDocumentation& SetDocumentation(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CBlast4_task_info_Base(const CBlast4_task_info_Base&);
    CBlast4_task_info_Base& operator=(const CBlast4_task_info_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    string m_Documentation;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBlast4_task_info_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CBlast4_task_info_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CBlast4_task_info_Base::TName& CBlast4_task_info_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CBlast4_task_info_Base::SetName(const CBlast4_task_info_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CBlast4_task_info_Base::TName& CBlast4_task_info_Base::SetName(void)
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
bool CBlast4_task_info_Base::IsSetDocumentation(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CBlast4_task_info_Base::CanGetDocumentation(void) const
{
    return IsSetDocumentation();
}

inline
const CBlast4_task_info_Base::TDocumentation& CBlast4_task_info_Base::GetDocumentation(void) const
{
    if (!CanGetDocumentation()) {
        ThrowUnassigned(1);
    }
    return m_Documentation;
}

inline
void CBlast4_task_info_Base::SetDocumentation(const CBlast4_task_info_Base::TDocumentation& value)
{
    m_Documentation = value;
    m_set_State[0] |= 0xc;
}

inline
CBlast4_task_info_Base::TDocumentation& CBlast4_task_info_Base::SetDocumentation(void)
{
#ifdef _DEBUG
    if (!IsSetDocumentation()) {
        m_Documentation = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Documentation;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_TASK_INFO_BASE_HPP
