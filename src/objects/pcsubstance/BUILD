# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "pcsubstance",
    srcs = [
        "pcsubstance__.cpp",
        "pcsubstance___.cpp",
    ],
    deps = [
        "//src/objects/general",
        "//src/objects/pub",
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
