/* $Id: OrgMod.cpp 396940 2013-04-23 18:26:15Z rafanovi $
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
 * Author:  .......
 *
 * File Description:
 *   .......
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using the following specifications:
 *   'seqfeat.asn'.
 */

// standard includes
#include <ncbi_pch.hpp>
#include <util/static_map.hpp>
#include <util/util_misc.hpp>
#include <util/line_reader.hpp>
#include <serial/enumvalues.hpp>

// generated includes
#include <objects/seqfeat/OrgMod.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

// destructor
COrgMod::~COrgMod(void)
{
}


COrgMod::TSubtype COrgMod::GetSubtypeValue(const string& str,
                                           EVocabulary vocabulary)
{
    string name = NStr::TruncateSpaces(str);
    NStr::ToLower(name);
    replace(name.begin(), name.end(), '_', '-');
    
    if (name == "note") {
        return eSubtype_other;
    } else if (vocabulary == eVocabulary_insdc) {
        if (name == "host") {
            return eSubtype_nat_host;
        } else if (name == "sub-strain") {
            return eSubtype_substrain;
        }
    }

    return ENUM_METHOD_NAME(ESubtype)()->FindValue(name);
}


string COrgMod::GetSubtypeName(COrgMod::TSubtype stype, EVocabulary vocabulary)
{
    if (stype == eSubtype_other) {
        return "note";
    } else if (vocabulary == eVocabulary_insdc) {
        switch (stype) {
        case eSubtype_substrain: return "sub_strain";
        case eSubtype_nat_host:  return "host";
        default:
            return NStr::Replace
                (ENUM_METHOD_NAME(ESubtype)()->FindName(stype, true),
                 "-", "_");
        }
    } else {
        return ENUM_METHOD_NAME(ESubtype)()->FindName(stype, true);
    }
}


bool COrgMod::IsDiscouraged(const TSubtype subtype)
{
    if (subtype == eSubtype_dosage
        || subtype == eSubtype_gb_acronym
        || subtype == eSubtype_gb_anamorph
        || subtype == eSubtype_gb_synonym
        || subtype == eSubtype_old_lineage
        || subtype == eSubtype_old_name
        || subtype == eSubtype_metagenome_source) {
        return true;
    } else {
        return false;
    }
}


bool COrgMod::ParseStructuredVoucher(const string& str, string& inst, string& coll, string& id)
{
	if (NStr::IsBlank(str) || str.length() < 3) {
		return false;
	}

	size_t pos = NStr::Find(str, ":");
	if (pos == string::npos) {
		return false;
	}
	inst = str.substr(0, pos);
	id = str.substr(pos + 1);
	coll = "";
	pos = NStr::Find(id, ":");
	if (pos != string::npos) {
		coll = id.substr(0, pos);
		id = id.substr(pos + 1);
	}
	if (NStr::IsBlank(inst) || NStr::IsBlank(id)) {
		return false;
	} else {
		return true;
	}
}


// ===== biomaterial, and culture-collection BioSource subsource modifiers     ================

typedef map<string, string, PNocase> TInstitutionCodeMap;

static TInstitutionCodeMap s_BiomaterialInstitutionCodeMap;
static TInstitutionCodeMap s_SpecimenVoucherInstitutionCodeMap;
static TInstitutionCodeMap s_CultureCollectionInstitutionCodeMap;

// holds all the data in the specific ones above
static TInstitutionCodeMap s_CompleteInstitutionCodeMap;
static TInstitutionCodeMap s_CompleteInstitutionFullNameMap;
static TInstitutionCodeMap s_InstitutionCodeTypeMap;
static bool                    s_InstitutionCollectionCodeMapInitialized = false;
DEFINE_STATIC_FAST_MUTEX(s_InstitutionCollectionCodeMutex);

#include "institution_codes.inc"

static void s_ProcessInstitutionCollectionCodeLine(const CTempString& line)
{
    vector<string> tokens;
    NStr::Tokenize(line, "\t", tokens);
    if (tokens.size() != 3) {
//        ERR_POST_X(1, Warning << "Bad format in institution_codes.txt entry " << line
//                   << "; disregarding");
    } else {
        NStr::TruncateSpacesInPlace( tokens[0] );
        NStr::TruncateSpacesInPlace( tokens[1] );
        NStr::TruncateSpacesInPlace( tokens[2] );
        string& vouch_types = tokens[1];
        for (int i = 0; i < vouch_types.size(); i++) {
            switch (vouch_types[i]) {
                case 'b':
                    s_BiomaterialInstitutionCodeMap[tokens[0]] = tokens[2];
                    break;
                case 'c':
                    s_CultureCollectionInstitutionCodeMap[tokens[0]] = tokens[2];
                    break;
                case 's':
                    s_SpecimenVoucherInstitutionCodeMap[tokens[0]] = tokens[2];
                    break;
                default:
//                  ERR_POST_X(1, Warning << "Bad format in institution_codes.txt entry " << line
//                             << "; unrecognized subtype (" << tokens[1] << "); disregarding");
                    break;
            }
        }
        s_CompleteInstitutionCodeMap[tokens[0]] = tokens[2];
        s_CompleteInstitutionFullNameMap[tokens[2]] = tokens[0];
        s_InstitutionCodeTypeMap[tokens[0]] = tokens[1];
    }
}


static void s_InitializeInstitutionCollectionCodeMaps(void)
{
    CFastMutexGuard GUARD(s_InstitutionCollectionCodeMutex);
    if (s_InstitutionCollectionCodeMapInitialized) {
        return;
    }
    string file = g_FindDataFile("institution_codes.txt");
    CRef<ILineReader> lr;
    if ( !file.empty() ) {
        try {
            lr = ILineReader::New(file);
        } NCBI_CATCH("s_InitializeInstitutionCollectionCodeMaps")
    }

    if (lr.Empty()) {
//        ERR_POST_X(2, Info << "s_InitializeInstitutionCollectionCodeMaps: "
//                   "falling back on built-in data.");
        size_t num_codes = sizeof (kInstitutionCollectionCodeList) / sizeof (char *);
        for (size_t i = 0; i < num_codes; i++) {
            const char *p = kInstitutionCollectionCodeList[i];
            s_ProcessInstitutionCollectionCodeLine(p);
        }
    } else {
        do {
            s_ProcessInstitutionCollectionCodeLine(*++*lr);
        } while ( !lr->AtEOF() );
    }

    s_InstitutionCollectionCodeMapInitialized = true;
}


bool COrgMod::IsInstitutionCodeValid(const string& inst_coll, string &voucher_type, bool& is_miscapitalized, string& correct_cap, bool& needs_country, bool& erroneous_country)
{
    bool rval = false;

    is_miscapitalized = false;
    needs_country = false;
    erroneous_country = false;
    correct_cap = "";

    s_InitializeInstitutionCollectionCodeMaps();

    TInstitutionCodeMap::iterator it = s_InstitutionCodeTypeMap.find(inst_coll);
    if (it != s_InstitutionCodeTypeMap.end()) {
        if (NStr::EqualCase (it->first, inst_coll)) {
        } else if (NStr::EqualNocase (it->first, inst_coll)) {
            is_miscapitalized = true;
        }
        voucher_type = it->second;
        correct_cap = it->first;
        rval = true;
    } else {
        size_t pos = NStr::Find(inst_coll, "<");
        if (pos == string::npos) {
            string check = inst_coll + "<";
            it = s_InstitutionCodeTypeMap.begin();
            while (!rval && it != s_InstitutionCodeTypeMap.end()) {
                if (NStr::StartsWith(it->first, check, NStr::eNocase)) {
                    needs_country = true;
                    rval = true;
                    if (!NStr::StartsWith(it->first, check, NStr::eCase)) {
                        is_miscapitalized = true;
                    }
                    correct_cap = it->first.substr(0, inst_coll.length());
                }
                ++it;
            }
        } else {
            string inst_sub = inst_coll.substr(0, pos);
            it = s_InstitutionCodeTypeMap.find(inst_sub);
            if (it != s_InstitutionCodeTypeMap.end()) {
                erroneous_country = true;
                rval = true;
            }
        }
    }
    return rval;
}

const string &
COrgMod::GetInstitutionFullName( const string &short_name )
{
    s_InitializeInstitutionCollectionCodeMaps();
    TInstitutionCodeMap::const_iterator iter = s_CompleteInstitutionCodeMap.find( short_name );
    if( iter != s_CompleteInstitutionCodeMap.end() ) {
        return iter->second;
    } else {
        return kEmptyStr;
    }
}

const string &
COrgMod::GetInstitutionShortName( const string &full_name )
{
    s_InitializeInstitutionCollectionCodeMaps();
    TInstitutionCodeMap::const_iterator iter = s_CompleteInstitutionFullNameMap.find( full_name );
    if( iter != s_CompleteInstitutionFullNameMap.end() ) {
        return iter->second;
    } else {
        return kEmptyStr;
    }
}


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

/* Original file checksum: lines: 65, chars: 1882, CRC32: efba64e1 */
