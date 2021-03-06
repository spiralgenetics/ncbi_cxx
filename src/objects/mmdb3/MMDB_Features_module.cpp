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
 *   'mmdb3.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

#include <ncbi_pch.hpp>
#include <objects/mmdb3/MMDB_Features_module.hpp>
#include <objects/mmdb3/Align_stats.hpp>
#include <objects/mmdb3/Atom_pntrs.hpp>
#include <objects/mmdb3/Biostruc_feature.hpp>
#include <objects/mmdb3/Biostruc_feature_set.hpp>
#include <objects/mmdb3/Biostruc_feature_set_descr.hpp>
#include <objects/mmdb3/Biostruc_molecule_pntr.hpp>
#include <objects/mmdb3/Biostruc_script.hpp>
#include <objects/mmdb3/Biostruc_script_step.hpp>
#include <objects/mmdb3/Brick.hpp>
#include <objects/mmdb3/Camera.hpp>
#include <objects/mmdb3/Chem_graph_alignment.hpp>
#include <objects/mmdb3/Chem_graph_interaction.hpp>
#include <objects/mmdb3/Chem_graph_pntrs.hpp>
#include <objects/mmdb3/Color_prop.hpp>
#include <objects/mmdb3/Cone.hpp>
#include <objects/mmdb3/Cylinder.hpp>
#include <objects/mmdb3/GL_matrix.hpp>
#include <objects/mmdb3/Model_space_point.hpp>
#include <objects/mmdb3/Molecule_pntrs.hpp>
#include <objects/mmdb3/Move.hpp>
#include <objects/mmdb3/Other_feature.hpp>
#include <objects/mmdb3/RealValue.hpp>
#include <objects/mmdb3/Region_boundary.hpp>
#include <objects/mmdb3/Region_coordinates.hpp>
#include <objects/mmdb3/Region_pntrs.hpp>
#include <objects/mmdb3/Region_similarity.hpp>
#include <objects/mmdb3/Residue_explicit_pntrs.hpp>
#include <objects/mmdb3/Residue_interval_pntr.hpp>
#include <objects/mmdb3/Residue_pntrs.hpp>
#include <objects/mmdb3/Rot_matrix.hpp>
#include <objects/mmdb3/Sphere.hpp>
#include <objects/mmdb3/Trans_matrix.hpp>
#include <objects/mmdb3/Transform.hpp>


BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

void MMDB_Features_RegisterModuleClasses(void)
{
    ncbi::objects::CAlign_stats::GetTypeInfo();
    ncbi::objects::CAtom_pntrs::GetTypeInfo();
    ncbi::objects::CBiostruc_feature::GetTypeInfo();
    ncbi::objects::CBiostruc_feature_set::GetTypeInfo();
    ncbi::objects::CBiostruc_feature_set_descr::GetTypeInfo();
    ncbi::objects::CBiostruc_molecule_pntr::GetTypeInfo();
    ncbi::objects::CBiostruc_script::GetTypeInfo();
    ncbi::objects::CBiostruc_script_step::GetTypeInfo();
    ncbi::objects::CBrick::GetTypeInfo();
    ncbi::objects::CCamera::GetTypeInfo();
    ncbi::objects::CChem_graph_alignment::GetTypeInfo();
    ncbi::objects::CChem_graph_interaction::GetTypeInfo();
    ncbi::objects::CChem_graph_pntrs::GetTypeInfo();
    ncbi::objects::CColor_prop::GetTypeInfo();
    ncbi::objects::CCone::GetTypeInfo();
    ncbi::objects::CCylinder::GetTypeInfo();
    ncbi::objects::CGL_matrix::GetTypeInfo();
    ncbi::objects::CModel_space_point::GetTypeInfo();
    ncbi::objects::CMolecule_pntrs::GetTypeInfo();
    ncbi::objects::CMove::GetTypeInfo();
    ncbi::objects::COther_feature::GetTypeInfo();
    ncbi::objects::CRealValue::GetTypeInfo();
    ncbi::objects::CRegion_boundary::GetTypeInfo();
    ncbi::objects::CRegion_coordinates::GetTypeInfo();
    ncbi::objects::CRegion_pntrs::GetTypeInfo();
    ncbi::objects::CRegion_similarity::GetTypeInfo();
    ncbi::objects::CResidue_explicit_pntrs::GetTypeInfo();
    ncbi::objects::CResidue_interval_pntr::GetTypeInfo();
    ncbi::objects::CResidue_pntrs::GetTypeInfo();
    ncbi::objects::CRot_matrix::GetTypeInfo();
    ncbi::objects::CSphere::GetTypeInfo();
    ncbi::objects::CTrans_matrix::GetTypeInfo();
    ncbi::objects::CTransform::GetTypeInfo();
}

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

