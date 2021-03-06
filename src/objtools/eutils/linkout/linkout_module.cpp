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
 *   'linkout.dtd'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

#include <ncbi_pch.hpp>
#include <objtools/eutils/linkout/linkout_module.hpp>
#include <objtools/eutils/linkout/Apad.hpp>
#include <objtools/eutils/linkout/FileName.hpp>
#include <objtools/eutils/linkout/IconUrl.hpp>
#include <objtools/eutils/linkout/Link.hpp>
#include <objtools/eutils/linkout/LinkSet.hpp>
#include <objtools/eutils/linkout/Normalize.hpp>
#include <objtools/eutils/linkout/ObjectList.hpp>
#include <objtools/eutils/linkout/ObjectSelector.hpp>
#include <objtools/eutils/linkout/ObjectUrl.hpp>
#include <objtools/eutils/linkout/Pad.hpp>
#include <objtools/eutils/linkout/Provider.hpp>
#include <objtools/eutils/linkout/Rule.hpp>
#include <objtools/eutils/linkout/RuleToMany.hpp>
#include <objtools/eutils/linkout/Strip.hpp>
#include <objtools/eutils/linkout/SubObjectSelector.hpp>
#include <objtools/eutils/linkout/SubProvider.hpp>
#include <objtools/eutils/linkout/Subs.hpp>
#include <objtools/eutils/linkout/Tolower.hpp>
#include <objtools/eutils/linkout/Toupper.hpp>
#include <objtools/eutils/linkout/Url.hpp>


BEGIN_linkout_SCOPE // namespace linkout::

void linkout_RegisterModuleClasses(void)
{
    linkout::CApad::GetTypeInfo();
    linkout::CFileName::GetTypeInfo();
    linkout::CIconUrl::GetTypeInfo();
    linkout::CLink::GetTypeInfo();
    linkout::CLinkSet::GetTypeInfo();
    linkout::CNormalize::GetTypeInfo();
    linkout::CObjectList::GetTypeInfo();
    linkout::CObjectSelector::GetTypeInfo();
    linkout::CObjectUrl::GetTypeInfo();
    linkout::CPad::GetTypeInfo();
    linkout::CProvider::GetTypeInfo();
    linkout::CRule::GetTypeInfo();
    linkout::CRuleToMany::GetTypeInfo();
    linkout::CStrip::GetTypeInfo();
    linkout::CSubObjectSelector::GetTypeInfo();
    linkout::CSubProvider::GetTypeInfo();
    linkout::CSubs::GetTypeInfo();
    linkout::CTolower::GetTypeInfo();
    linkout::CToupper::GetTypeInfo();
    linkout::CUrl::GetTypeInfo();
}

END_linkout_SCOPE // namespace linkout::

