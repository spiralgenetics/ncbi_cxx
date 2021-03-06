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

/// @file Taxon3_request_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'taxon3.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TAXON3_TAXON3_REQUEST_BASE_HPP
#define OBJECTS_TAXON3_TAXON3_REQUEST_BASE_HPP

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
class CT3Request;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TAXON3_EXPORT CTaxon3_request_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTaxon3_request_Base(void);
    // destructor
    virtual ~CTaxon3_request_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CT3Request > > TRequest;

    // getters
    // setters

    /// mandatory
    /// typedef list< CRef< CT3Request > > TRequest
    ///  Check whether the Request data member has been assigned a value.
    bool IsSetRequest(void) const;
    /// Check whether it is safe or not to call GetRequest method.
    bool CanGetRequest(void) const;
    void ResetRequest(void);
    const TRequest& GetRequest(void) const;
    TRequest& SetRequest(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTaxon3_request_Base(const CTaxon3_request_Base&);
    CTaxon3_request_Base& operator=(const CTaxon3_request_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CT3Request > > m_Request;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTaxon3_request_Base::IsSetRequest(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTaxon3_request_Base::CanGetRequest(void) const
{
    return true;
}

inline
const CTaxon3_request_Base::TRequest& CTaxon3_request_Base::GetRequest(void) const
{
    return m_Request;
}

inline
CTaxon3_request_Base::TRequest& CTaxon3_request_Base::SetRequest(void)
{
    m_set_State[0] |= 0x1;
    return m_Request;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TAXON3_TAXON3_REQUEST_BASE_HPP
