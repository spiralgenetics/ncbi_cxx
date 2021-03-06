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

/// @file Project.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'proj.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Project_.hpp


#ifndef OBJECTS_PROJ_PROJECT_HPP
#define OBJECTS_PROJ_PROJECT_HPP


// generated includes
#include <objects/proj/Project_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_PROJ_EXPORT CProject : public CProject_Base
{
    typedef CProject_Base Tparent;
public:
    // constructor
    CProject(void);
    // destructor
    ~CProject(void);

private:
    // Prohibit copy constructor and assignment operator
    CProject(const CProject& value);
    CProject& operator=(const CProject& value);

};

/////////////////// CProject inline methods

// constructor
inline
CProject::CProject(void)
{
}


/////////////////// end of CProject inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_PROJ_PROJECT_HPP
/* Original file checksum: lines: 86, chars: 2360, CRC32: 555ab3f0 */
