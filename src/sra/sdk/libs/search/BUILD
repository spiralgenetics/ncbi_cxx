# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "search",
    srcs = [
        "agrep-dp.c",
        "agrep-myers.c",
        "agrep-myersunltd.c",
        "agrep-wumanber.c",
        "fgrep-aho.c",
        "fgrep-boyermoore.c",
        "fgrep-dumb.c",
        "nucstrstr-generic.c",
        "search.c",
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
