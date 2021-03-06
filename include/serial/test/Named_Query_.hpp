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

/// @file Named_Query_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'we_cpp.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef SERIAL_TEST_NAMED_QUERY_BASE_HPP
#define SERIAL_TEST_NAMED_QUERY_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CName;
class CQuery_Command;
class CTime;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Web settings definition
class CNamed_Query_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CNamed_Query_Base(void);
    // destructor
    virtual ~CNamed_Query_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CName TName;
    typedef CTime TTime;
    typedef CQuery_Command TCommand;

    // getters
    // setters

    /// mandatory
    /// typedef CName TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(TName& value);
    TName& SetName(void);

    /// time of query execution
    /// mandatory
    /// typedef CTime TTime
    ///  Check whether the Time data member has been assigned a value.
    bool IsSetTime(void) const;
    /// Check whether it is safe or not to call GetTime method.
    bool CanGetTime(void) const;
    void ResetTime(void);
    const TTime& GetTime(void) const;
    void SetTime(TTime& value);
    TTime& SetTime(void);

    /// query command
    /// mandatory
    /// typedef CQuery_Command TCommand
    ///  Check whether the Command data member has been assigned a value.
    bool IsSetCommand(void) const;
    /// Check whether it is safe or not to call GetCommand method.
    bool CanGetCommand(void) const;
    void ResetCommand(void);
    const TCommand& GetCommand(void) const;
    void SetCommand(TCommand& value);
    TCommand& SetCommand(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CNamed_Query_Base(const CNamed_Query_Base&);
    CNamed_Query_Base& operator=(const CNamed_Query_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TName > m_Name;
    CRef< TTime > m_Time;
    CRef< TCommand > m_Command;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CNamed_Query_Base::IsSetName(void) const
{
    return m_Name.NotEmpty();
}

inline
bool CNamed_Query_Base::CanGetName(void) const
{
    return true;
}

inline
const CNamed_Query_Base::TName& CNamed_Query_Base::GetName(void) const
{
    if ( !m_Name ) {
        const_cast<CNamed_Query_Base*>(this)->ResetName();
    }
    return (*m_Name);
}

inline
CNamed_Query_Base::TName& CNamed_Query_Base::SetName(void)
{
    if ( !m_Name ) {
        ResetName();
    }
    return (*m_Name);
}

inline
bool CNamed_Query_Base::IsSetTime(void) const
{
    return m_Time.NotEmpty();
}

inline
bool CNamed_Query_Base::CanGetTime(void) const
{
    return true;
}

inline
const CNamed_Query_Base::TTime& CNamed_Query_Base::GetTime(void) const
{
    if ( !m_Time ) {
        const_cast<CNamed_Query_Base*>(this)->ResetTime();
    }
    return (*m_Time);
}

inline
CNamed_Query_Base::TTime& CNamed_Query_Base::SetTime(void)
{
    if ( !m_Time ) {
        ResetTime();
    }
    return (*m_Time);
}

inline
bool CNamed_Query_Base::IsSetCommand(void) const
{
    return m_Command.NotEmpty();
}

inline
bool CNamed_Query_Base::CanGetCommand(void) const
{
    return true;
}

inline
const CNamed_Query_Base::TCommand& CNamed_Query_Base::GetCommand(void) const
{
    if ( !m_Command ) {
        const_cast<CNamed_Query_Base*>(this)->ResetCommand();
    }
    return (*m_Command);
}

inline
CNamed_Query_Base::TCommand& CNamed_Query_Base::SetCommand(void)
{
    if ( !m_Command ) {
        ResetCommand();
    }
    return (*m_Command);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // SERIAL_TEST_NAMED_QUERY_BASE_HPP
