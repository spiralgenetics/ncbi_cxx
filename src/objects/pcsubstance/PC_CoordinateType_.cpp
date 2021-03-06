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
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'pcsubstance.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/pcsubstance/PC_CoordinateType.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

BEGIN_NAMED_ENUM_INFO("PC-CoordinateType", EPC_CoordinateType, true)
{
    SET_ENUM_MODULE("NCBI-PCSubstance");
    ADD_ENUM_VALUE("twod", ePC_CoordinateType_twod);
    ADD_ENUM_VALUE("threed", ePC_CoordinateType_threed);
    ADD_ENUM_VALUE("submitted", ePC_CoordinateType_submitted);
    ADD_ENUM_VALUE("experimental", ePC_CoordinateType_experimental);
    ADD_ENUM_VALUE("computed", ePC_CoordinateType_computed);
    ADD_ENUM_VALUE("standardized", ePC_CoordinateType_standardized);
    ADD_ENUM_VALUE("augmented", ePC_CoordinateType_augmented);
    ADD_ENUM_VALUE("aligned", ePC_CoordinateType_aligned);
    ADD_ENUM_VALUE("compact", ePC_CoordinateType_compact);
    ADD_ENUM_VALUE("units-angstroms", ePC_CoordinateType_units_angstroms);
    ADD_ENUM_VALUE("units-nanometers", ePC_CoordinateType_units_nanometers);
    ADD_ENUM_VALUE("units-pixel", ePC_CoordinateType_units_pixel);
    ADD_ENUM_VALUE("units-points", ePC_CoordinateType_units_points);
    ADD_ENUM_VALUE("units-stdbonds", ePC_CoordinateType_units_stdbonds);
    ADD_ENUM_VALUE("units-unknown", ePC_CoordinateType_units_unknown);
}
END_ENUM_INFO


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

