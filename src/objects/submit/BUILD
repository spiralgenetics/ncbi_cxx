# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "submit",
    srcs = [
        "submit__.cpp",
        "submit___.cpp",
    ],
    deps = [
        "//src/objects/biblio",
        "//src/objects/general",
        "//src/objects/seq",
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
