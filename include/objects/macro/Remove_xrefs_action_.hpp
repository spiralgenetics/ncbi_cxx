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

/// @file Remove_xrefs_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_REMOVE_XREFS_ACTION_BASE_HPP
#define OBJECTS_MACRO_REMOVE_XREFS_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CConstraint_choice_set;
class CXref_type;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CRemove_xrefs_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CRemove_xrefs_action_Base(void);
    // destructor
    virtual ~CRemove_xrefs_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CXref_type TXref_type;
    typedef CConstraint_choice_set TConstraint;

    // getters
    // setters

    /// mandatory
    /// typedef CXref_type TXref_type
    ///  Check whether the Xref_type data member has been assigned a value.
    bool IsSetXref_type(void) const;
    /// Check whether it is safe or not to call GetXref_type method.
    bool CanGetXref_type(void) const;
    void ResetXref_type(void);
    const TXref_type& GetXref_type(void) const;
    void SetXref_type(TXref_type& value);
    TXref_type& SetXref_type(void);

    /// optional
    /// typedef CConstraint_choice_set TConstraint
    ///  Check whether the Constraint data member has been assigned a value.
    bool IsSetConstraint(void) const;
    /// Check whether it is safe or not to call GetConstraint method.
    bool CanGetConstraint(void) const;
    void ResetConstraint(void);
    const TConstraint& GetConstraint(void) const;
    void SetConstraint(TConstraint& value);
    TConstraint& SetConstraint(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CRemove_xrefs_action_Base(const CRemove_xrefs_action_Base&);
    CRemove_xrefs_action_Base& operator=(const CRemove_xrefs_action_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TXref_type > m_Xref_type;
    CRef< TConstraint > m_Constraint;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CRemove_xrefs_action_Base::IsSetXref_type(void) const
{
    return m_Xref_type.NotEmpty();
}

inline
bool CRemove_xrefs_action_Base::CanGetXref_type(void) const
{
    return true;
}

inline
const CRemove_xrefs_action_Base::TXref_type& CRemove_xrefs_action_Base::GetXref_type(void) const
{
    if ( !m_Xref_type ) {
        const_cast<CRemove_xrefs_action_Base*>(this)->ResetXref_type();
    }
    return (*m_Xref_type);
}

inline
CRemove_xrefs_action_Base::TXref_type& CRemove_xrefs_action_Base::SetXref_type(void)
{
    if ( !m_Xref_type ) {
        ResetXref_type();
    }
    return (*m_Xref_type);
}

inline
bool CRemove_xrefs_action_Base::IsSetConstraint(void) const
{
    return m_Constraint.NotEmpty();
}

inline
bool CRemove_xrefs_action_Base::CanGetConstraint(void) const
{
    return IsSetConstraint();
}

inline
const CRemove_xrefs_action_Base::TConstraint& CRemove_xrefs_action_Base::GetConstraint(void) const
{
    if (!CanGetConstraint()) {
        ThrowUnassigned(1);
    }
    return (*m_Constraint);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_REMOVE_XREFS_ACTION_BASE_HPP