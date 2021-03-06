#!/bin/bash
# ===========================================================================
#
#                            PUBLIC DOMAIN NOTICE
#               National Center for Biotechnology Information
#
#  This software/database is a "United States Government Work" under the
#  terms of the United States Copyright Act.  It was written as part of
#  the author's official duties as a United States Government employee and
#  thus cannot be copyrighted.  This software/database is freely available
#  to the public for use. The National Library of Medicine and the U.S.
#  Government have not placed any restriction on its use or reproduction.
#
#  Although all reasonable efforts have been taken to ensure the accuracy
#  and reliability of the software and data, the NLM and the U.S.
#  Government do not and cannot warrant the performance or results that
#  may be obtained by using this software or data. The NLM and the U.S.
#  Government disclaim all warranties, express or implied, including
#  warranties of performance, merchantability or fitness for any particular
#  purpose.
#
#  Please cite the author in any work or product based on this material.
#
# ===========================================================================

# define linker params
LD_EXPORT_GLOBAL=""
LD_MULTIPLE_DEFS="/FORCE:MULTIPLE"
LD_STATIC=""
LD_DYNAMIC=""
LD_ALL_SYMBOLS="/OPT:NOREF"
LD_REF_SYMBOLS="/OPT:REF"

# the def file
unset DEF_SWITCH

DEF_FILE="$SRCDIR/$NAME-$BUILD.def"
[ ! -f "$DEF_FILE" ] && DEF_FILE="$SRCDIR/$NAME.def"
if [ -f "$DEF_FILE" ]
then
    DEF_FILE_LOCAL="$RHOME/${DEF_FILE#$LHOME}"
    DEF_FILE_LOCAL="$(echo $DEF_FILE_LOCAL | tr '/' '\\')"
    DEF_SWITCH="/DEF:$DEF_FILE_LOCAL"
else
    unset DEF_FILE
fi

# the full path to target sans extension
WINTARG="$RHOME/${TARG#$LHOME}"
WINTARG="$(echo $WINTARG | tr '/' '\\')"
WINTARG="${WINTARG%.lib}"

# build command
STUB_CMD="lib /NOLOGO /MACHINE:x86 $DEF_SWITCH /OUT:$WINTARG.lib"
DLIB_CMD="$LD /NOLOGO /DLL $DEF_SWITCH /OUT:$WINTARG.dll /STACK:8000000 /HEAP:1000000000"
EXE_CMD="$LD /NOLOGO /OUT:$WINTARG.exe /SUBSYSTEM:CONSOLE /ENTRY:wmainCRTStartup /STACK:8000000 /HEAP:100000000 /INCREMENTAL:NO"

# tack on PDB tracking
if [ "$BUILD" = "dbg" ]
then
    DLIB_CMD="$DLIB_CMD /DEBUG /PDB:$WINTARG.pdb"
    EXE_CMD="$EXE_CMD /DEBUG /PDB:$WINTARG.pdb"
fi
