# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "seq",
    srcs = [
        "seq__.cpp",
        "seq___.cpp",
        "seq_align_mapper_base.cpp",
        "seq_id_handle.cpp",
        "seq_id_mapper.cpp",
        "seq_id_tree.cpp",
        "seq_loc_from_string.cpp",
        "seq_loc_mapper_base.cpp",
        "seq_loc_reverse_complementer.cpp",
        "seqlocinfo.cpp",
        "seqport_util.cpp",
        "sofa_map.cpp",
    ],
    deps = [
        "//src/objects/biblio",
        "//src/objects/general",
        "//src/objects/medline",
        "//src/objects/pub",
        "//src/objects/seqalign",
        "//src/objects/seqblock",
        "//src/objects/seqfeat",
        "//src/objects/seqloc",
        "//src/objects/seqres",
        "//src/objects/seqtable",
    ],
)

cc_library(
    name = "src_headers",
    hdrs = glob([
        "**/*.h",
        "**/*.hpp",
    ]),
    visibility = ["//:__subpackages__"],
)
