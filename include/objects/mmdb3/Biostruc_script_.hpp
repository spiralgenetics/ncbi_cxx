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

/// @file Biostruc_script_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mmdb3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MMDB3_BIOSTRUC_SCRIPT_BASE_HPP
#define OBJECTS_MMDB3_BIOSTRUC_SCRIPT_BASE_HPP

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


// forward declarations
class CBiostruc_script_step;


// generated classes

/////////////////////////////////////////////////////////////////////////////
///  When a Biostruc-Feature with a Biostruc-script is initiated,
///  it should play the specified steps one at a time, setting the feature-do
///  list as the active display.
///  The camera can be set using a feature-do, 
///  but it may be moved independently with
///  camera-move, which specifies how to move
///  the camera dynamically during the step along the path defined (e.g.,
///  a zoom, a rotate).
///  Any value of pause (in 1:10th's of a second) will force a pause
///  after an image is shown.
///  If waitevent is TRUE, it will await a mouse or keypress and ignore 
///  the pause value.
class NCBI_MMDB3_EXPORT CBiostruc_script_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CBiostruc_script_Base(void);
    // destructor
    virtual ~CBiostruc_script_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CBiostruc_script_step > > Tdata;

    // getters
    // setters

    /// mandatory
    /// typedef list< CRef< CBiostruc_script_step > > Tdata
    ///  Check whether the  data member has been assigned a value.
    bool IsSet(void) const;
    /// Check whether it is safe or not to call Get method.
    bool CanGet(void) const;
    void Reset(void);
    const Tdata& Get(void) const;
    Tdata& Set(void);
    /// Conversion operator to 'const Tdata' type.
    operator const Tdata& (void) const;

    /// Conversion operator to 'Tdata' type.
    operator Tdata& (void);




private:
    // Prohibit copy constructor and assignment operator
    CBiostruc_script_Base(const CBiostruc_script_Base&);
    CBiostruc_script_Base& operator=(const CBiostruc_script_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CBiostruc_script_step > > m_data;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CBiostruc_script_Base::IsSet(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CBiostruc_script_Base::CanGet(void) const
{
    return true;
}

inline
const CBiostruc_script_Base::Tdata& CBiostruc_script_Base::Get(void) const
{
    return m_data;
}

inline
CBiostruc_script_Base::Tdata& CBiostruc_script_Base::Set(void)
{
    m_set_State[0] |= 0x1;
    return m_data;
}

inline
CBiostruc_script_Base::operator const CBiostruc_script_Base::Tdata& (void) const
{
    return m_data;
}

inline
CBiostruc_script_Base::operator CBiostruc_script_Base::Tdata& (void)
{
    m_set_State[0] |= 0x1;
    return m_data;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MMDB3_BIOSTRUC_SCRIPT_BASE_HPP
