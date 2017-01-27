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

# run a single sra-pileup test case
# $1 - pileup executable
# $2 - test case id
# $3 - input file(s) (specify multiple files in a space-separated string, e.g. "a.csra b.scra")
# $4 - expected return code
# $5 - additional arguments
#
# return codes:
#  0 - passed
#  1 - unexpected return code from pileup
#  2 - outputs differ

PILEUP="$1"
shift 1
CASE_ID="$1"
shift 1
read -a INPUT <<<"$1"
shift 1
RC="$1"
shift 1
EXTRA_ARGS="$*"

echo ${CASE_ID}

if [[ ! -e expected/${CASE_ID} ]]
then
    BAM="${INPUT[*]//.csra/.bam}"
    EXPCMD="/panfs/pan1/sra-test/bin/samtools mpileup ${BAM} -B -C0 -Q0 -f MT.fasta ${EXTRA_ARGS} >expected/${CASE_ID} 2>/dev/null"
    #echo "${EXPCMD}"
    eval ${EXPCMD}
fi    

CMD="${PILEUP} ${INPUT[*]} ${EXTRA_ARGS} --no-user-settings >actual/${CASE_ID} 2>actual/${CASE_ID}.stderr"
eval ${CMD}
rc=$?
if [ "${rc}" != "${RC}" ]
then
    echo "*** pileup returned ${rc} (expected ${RC}). The command issued:"
    echo "${CMD}"
    cat actual/${CASE_ID}.stderr
    exit 1
else
    rm -f actual/${CASE_ID}.stderr    
fi

diff -b expected/${CASE_ID} actual/${CASE_ID} 
rc=$?
if [ "${rc}" != "0" ]
then
    exit 2
fi

exit 0

