# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "mlacli",
    srcs = [
        "mla_client.cpp",
        "mla_client_.cpp",
    ],
    deps = [
        "//src/objects/biblio",
        "//src/objects/medlars",
        "//src/objects/medline",
        "//src/objects/pub",
        "//src/objects/pubmed",
    ],
)

ncbi_library(
    name = "mla",
    srcs = [
        "mla__.cpp",
        "mla___.cpp",
    ],
    deps = [
        "//src/objects/biblio",
        "//src/objects/medlars",
        "//src/objects/medline",
        "//src/objects/pub",
        "//src/objects/pubmed",
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
