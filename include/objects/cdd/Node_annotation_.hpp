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

/// @file Node_annotation_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cdd.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CDD_NODE_ANNOTATION_BASE_HPP
#define OBJECTS_CDD_NODE_ANNOTATION_BASE_HPP

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
class NCBI_CDD_EXPORT CNode_annotation_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CNode_annotation_Base(void);
    // destructor
    virtual ~CNode_annotation_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TPresentInChildCD;
    typedef string TNote;

    // getters
    // setters

    /// optional
    /// typedef string TPresentInChildCD
    ///  Check whether the PresentInChildCD data member has been assigned a value.
    bool IsSetPresentInChildCD(void) const;
    /// Check whether it is safe or not to call GetPresentInChildCD method.
    bool CanGetPresentInChildCD(void) const;
    void ResetPresentInChildCD(void);
    const TPresentInChildCD& GetPresentInChildCD(void) const;
    void SetPresentInChildCD(const TPresentInChildCD& value);
    TPresentInChildCD& SetPresentInChildCD(void);

    /// optional
    /// typedef string TNote
    ///  Check whether the Note data member has been assigned a value.
    bool IsSetNote(void) const;
    /// Check whether it is safe or not to call GetNote method.
    bool CanGetNote(void) const;
    void ResetNote(void);
    const TNote& GetNote(void) const;
    void SetNote(const TNote& value);
    TNote& SetNote(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CNode_annotation_Base(const CNode_annotation_Base&);
    CNode_annotation_Base& operator=(const CNode_annotation_Base&);

    // data
    Uint4 m_set_State[1];
    string m_PresentInChildCD;
    string m_Note;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CNode_annotation_Base::IsSetPresentInChildCD(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CNode_annotation_Base::CanGetPresentInChildCD(void) const
{
    return IsSetPresentInChildCD();
}

inline
const CNode_annotation_Base::TPresentInChildCD& CNode_annotation_Base::GetPresentInChildCD(void) const
{
    if (!CanGetPresentInChildCD()) {
        ThrowUnassigned(0);
    }
    return m_PresentInChildCD;
}

inline
void CNode_annotation_Base::SetPresentInChildCD(const CNode_annotation_Base::TPresentInChildCD& value)
{
    m_PresentInChildCD = value;
    m_set_State[0] |= 0x3;
}

inline
CNode_annotation_Base::TPresentInChildCD& CNode_annotation_Base::SetPresentInChildCD(void)
{
#ifdef _DEBUG
    if (!IsSetPresentInChildCD()) {
        m_PresentInChildCD = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_PresentInChildCD;
}

inline
bool CNode_annotation_Base::IsSetNote(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CNode_annotation_Base::CanGetNote(void) const
{
    return IsSetNote();
}

inline
const CNode_annotation_Base::TNote& CNode_annotation_Base::GetNote(void) const
{
    if (!CanGetNote()) {
        ThrowUnassigned(1);
    }
    return m_Note;
}

inline
void CNode_annotation_Base::SetNote(const CNode_annotation_Base::TNote& value)
{
    m_Note = value;
    m_set_State[0] |= 0xc;
}

inline
CNode_annotation_Base::TNote& CNode_annotation_Base::SetNote(void)
{
#ifdef _DEBUG
    if (!IsSetNote()) {
        m_Note = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Note;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CDD_NODE_ANNOTATION_BASE_HPP