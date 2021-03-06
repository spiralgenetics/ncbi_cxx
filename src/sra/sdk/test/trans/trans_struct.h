/*===========================================================================
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
#ifndef _h_trans_struct_
#define _h_trans_struct_

#include <align/manager.h>
#include <vdb/manager.h>
#include <vdb/database.h>
#include <align/reference.h>

#define N_OFS 16

typedef struct trans_opt
{
    const char *fname;
    const char *ref_name;
    uint32_t ref_offset[ N_OFS ];
    uint32_t ref_len[ N_OFS ];
    uint32_t count;
} trans_opt;


typedef struct trans_ctx
{
    const AlignMgr *almgr;
    KDirectory *dir;
    const VDBManager *vdb_mgr;
    const VDatabase *db;
    const ReferenceList *ref_list;
    const ReferenceObj *ref_obj;
} trans_ctx;

#endif