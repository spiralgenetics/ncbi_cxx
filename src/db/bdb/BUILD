# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "ncbi_xcache_bdb",
    srcs = ["bdb_blobcache.cpp"],
    deps = [],
)

ncbi_library(
    name = "bdb",
    srcs = [
        "bdb_blob.cpp",
        "bdb_checkpoint_thread.cpp",
        "bdb_cursor.cpp",
        "bdb_env.cpp",
        "bdb_expt.cpp",
        "bdb_ext_blob.cpp",
        "bdb_file.cpp",
        "bdb_filedump.cpp",
        "bdb_query.cpp",
        "bdb_query_parser_main.cpp",
        "bdb_trans.cpp",
        "bdb_types.cpp",
        "bdb_util.cpp",
        "bdb_volumes.cpp",
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
