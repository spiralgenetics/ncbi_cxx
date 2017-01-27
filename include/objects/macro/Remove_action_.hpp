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

/// @file Remove_action_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_REMOVE_ACTION_BASE_HPP
#define OBJECTS_MACRO_REMOVE_ACTION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CField_type;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class CRemove_action_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CRemove_action_Base(void);
    // destructor
    virtual ~CRemove_action_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CField_type TField;

    // getters
    // setters

    /// mandatory
    /// typedef CField_type TField
    ///  Check whether the Field data member has been assigned a value.
    bool IsSetField(void) const;
    /// Check whether it is safe or not to call GetField method.
    bool CanGetField(void) const;
    void ResetField(void);
    const TField& GetField(void) const;
    void SetField(TField& value);
    TField& SetField(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CRemove_action_Base(const CRemove_action_Base&);
    CRemove_action_Base& operator=(const CRemove_action_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TField > m_Field;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CRemove_action_Base::IsSetField(void) const
{
    return m_Field.NotEmpty();
}

inline
bool CRemove_action_Base::CanGetField(void) const
{
    return true;
}

inline
const CRemove_action_Base::TField& CRemove_action_Base::GetField(void) const
{
    if ( !m_Field ) {
        const_cast<CRemove_action_Base*>(this)->ResetField();
    }
    return (*m_Field);
}

inline
CRemove_action_Base::TField& CRemove_action_Base::SetField(void)
{
    if ( !m_Field ) {
        ResetField();
    }
    return (*m_Field);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_REMOVE_ACTION_BASE_HPP