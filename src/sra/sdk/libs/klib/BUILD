# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "klib",
    srcs = [
        "SHA-32bit.c",
        "SHA-64bit.c",
        "bsearch.c",
        "bstpersist.c",
        "container.c",
        "cp1252.c",
        "crc32.c",
        "data-buffer.c",
        "iso8859.c",
        "iso8859-1.c",
        "judy-vector.c",
        "ksort.c",
        "log.c",
        "md5.c",
        "namelist.c",
        "out.c",
        "pack.c",
        "pbstree.c",
        "pbstree-native.c",
        "pbstree-swapped.c",
        "printf.c",
        "ptpersist.c",
        "ptrie.c",
        "qsort.c",
        "rc-idx-tbl.c",
        "rc-tbl.c",
        "refcount.c",
        "report.c",
        "status.c",
        "status-rc.c",
        "status-rc-strings.c",
        "symtab.c",
        "syserrcode.c",
        "syslog.c",
        "systime.c",
        "syswriter.c",
        "text.c",
        "token.c",
        "trie.c",
        "unpack.c",
        "utf8.c",
        "vector.c",
        "vector_namelist.c",
        "vlen-encode.c",
        "writer.c",
        "xdebug.c",
    ],
    deps = [],
)

ncbi_library(
    name = "judy",
    srcs = [
        "Judy1Tables_b.c",
        "JudyByCountWithDefs_b.c",
        "JudyByCountWithDefs_w.c",
        "JudyCascade_b.c",
        "JudyCascade_w.c",
        "JudyCount_b.c",
        "JudyCount_w.c",
        "JudyCreateBranch_b.c",
        "JudyCreateBranch_w.c",
        "JudyDecascade_b.c",
        "JudyDecascade_w.c",
        "JudyDel_b.c",
        "JudyDel_w.c",
        "JudyFirst_b.c",
        "JudyFirst_w.c",
        "JudyFreeArray_b.c",
        "JudyFreeArray_w.c",
        "JudyGet_b.c",
        "JudyGet_w.c",
        "JudyHS.c",
        "JudyInsArray_b.c",
        "JudyInsArray_w.c",
        "JudyIns_b.c",
        "JudyIns_w.c",
        "JudyInsertBranch_b.c",
        "JudyInsertBranch_w.c",
        "JudyLTables_w.c",
        "JudyMalloc.c",
        "JudyMallocIF_b.c",
        "JudyMallocIF_w.c",
        "JudyMemActive_b.c",
        "JudyMemActive_w.c",
        "JudyMemUsed_b.c",
        "JudyMemUsed_w.c",
        "JudyNextEmpty_b.c",
        "JudyNextEmpty_w.c",
        "JudyNext_b.c",
        "JudyNext_w.c",
        "JudyPrevEmpty_b.c",
        "JudyPrevEmpty_w.c",
        "JudyPrev_b.c",
        "JudyPrev_w.c",
        "JudySL.c",
        "j__udyGet_b.c",
        "j__udyGet_w.c",
    ],
    deps = [],
)

cc_library(
    name = "src_headers",
    hdrs = glob([
        "**/*.h",
        "**/*.hpp",
    ]),
    visibility = ["//:__subpackages__"],
)
