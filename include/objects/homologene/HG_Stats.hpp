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

/// @file HG_Stats.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'homologene.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: HG_Stats_.hpp


#ifndef OBJECTS_HOMOLOGENE_HG_STATS_HPP
#define OBJECTS_HOMOLOGENE_HG_STATS_HPP


// generated includes
#include <objects/homologene/HG_Stats_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class CHG_Stats : public CHG_Stats_Base
{
    typedef CHG_Stats_Base Tparent;
public:
    // constructor
    CHG_Stats(void);
    // destructor
    ~CHG_Stats(void);

private:
    // Prohibit copy constructor and assignment operator
    CHG_Stats(const CHG_Stats& value);
    CHG_Stats& operator=(const CHG_Stats& value);

};

/////////////////// CHG_Stats inline methods

// constructor
inline
CHG_Stats::CHG_Stats(void)
{
}


/////////////////// end of CHG_Stats inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_HOMOLOGENE_HG_STATS_HPP
/* Original file checksum: lines: 86, chars: 2392, CRC32: 1228109e */
