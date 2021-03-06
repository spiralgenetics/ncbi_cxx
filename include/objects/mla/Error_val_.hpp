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

/// @file Error_val_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'mla.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MLA_ERROR_VAL_BASE_HPP
#define OBJECTS_MLA_ERROR_VAL_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

enum EError_val {
    eError_val_not_found                          =  0,  ///< Entry was not found
    eError_val_operational_error                  =  1,  ///< A run-time operation error was occurred
    eError_val_cannot_connect_jrsrv               =  2,  ///< Cannot connect to Journal server
    eError_val_cannot_connect_pmdb                =  3,  ///< Cannot connect to PubMed
    eError_val_journal_not_found                  =  4,  ///< Journal title not found
    eError_val_citation_not_found                 =  5,  ///< Volume, Page and Author do not match any  article
    eError_val_citation_ambiguous                 =  6,  ///< More than one article found
    eError_val_citation_too_many                  =  7,  ///< Too many article was found
    eError_val_cannot_connect_searchbackend_jrsrv =  8,  ///< Cannot connect to searchbackend Journals db
    eError_val_cannot_connect_searchbackend_pmdb  =  9,  ///< Cannot connect to searchbackend PubMed db
    eError_val_cannot_connect_docsumbackend       = 10  ///< Cannot connect to docsumbackend
};

/// Access to EError_val's attributes (values, names) as defined in spec
NCBI_MLA_EXPORT const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EError_val)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MLA_ERROR_VAL_BASE_HPP
