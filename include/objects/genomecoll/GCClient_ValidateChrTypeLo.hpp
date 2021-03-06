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

/// @file GCClient_ValidateChrTypeLo.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'gencoll_client.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: GCClient_ValidateChrTypeLo_.hpp


#ifndef OBJECTS_GENOMECOLL_GCCLIENT_VALIDATECHRTYPELO_HPP
#define OBJECTS_GENOMECOLL_GCCLIENT_VALIDATECHRTYPELO_HPP


// generated includes
#include <objects/genomecoll/GCClient_ValidateChrTypeLo_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CGCClient_ValidateChrTypeLocResponse : public CGCClient_ValidateChrTypeLocResponse_Base
{
    typedef CGCClient_ValidateChrTypeLocResponse_Base Tparent;
public:
    // constructor
    CGCClient_ValidateChrTypeLocResponse(void);
    // destructor
    ~CGCClient_ValidateChrTypeLocResponse(void);

private:
    // Prohibit copy constructor and assignment operator
    CGCClient_ValidateChrTypeLocResponse(const CGCClient_ValidateChrTypeLocResponse& value);
    CGCClient_ValidateChrTypeLocResponse& operator=(const CGCClient_ValidateChrTypeLocResponse& value);

};

/////////////////// CGCClient_ValidateChrTypeLocResponse inline methods

// constructor
inline
CGCClient_ValidateChrTypeLocResponse::CGCClient_ValidateChrTypeLocResponse(void)
{
}


/////////////////// end of CGCClient_ValidateChrTypeLocResponse inline methods


/////////////////////////////////////////////////////////////////////////////
class CGCClient_ValidateChrTypeLocRequest : public CGCClient_ValidateChrTypeLocRequest_Base
{
    typedef CGCClient_ValidateChrTypeLocRequest_Base Tparent;
public:
    // constructor
    CGCClient_ValidateChrTypeLocRequest(void);
    // destructor
    ~CGCClient_ValidateChrTypeLocRequest(void);

private:
    // Prohibit copy constructor and assignment operator
    CGCClient_ValidateChrTypeLocRequest(const CGCClient_ValidateChrTypeLocRequest& value);
    CGCClient_ValidateChrTypeLocRequest& operator=(const CGCClient_ValidateChrTypeLocRequest& value);

};

/////////////////// CGCClient_ValidateChrTypeLocRequest inline methods

// constructor
inline
CGCClient_ValidateChrTypeLocRequest::CGCClient_ValidateChrTypeLocRequest(void)
{
}


/////////////////// end of CGCClient_ValidateChrTypeLocRequest inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GCCLIENT_VALIDATECHRTYPELO_HPP
/* Original file checksum: lines: 115, chars: 3724, CRC32: 1127879b */
