# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "ncbimime",
    srcs = [
        "ncbimime__.cpp",
        "ncbimime___.cpp",
    ],
    deps = [
        "//src/objects/biblio",
        "//src/objects/cdd",
        "//src/objects/cn3d",
        "//src/objects/general",
        "//src/objects/medline",
        "//src/objects/mmdb1",
        "//src/objects/mmdb2",
        "//src/objects/mmdb3",
        "//src/objects/pub",
        "//src/objects/seq",
        "//src/objects/seqfeat",
        "//src/objects/seqloc",
        "//src/objects/seqset",
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
