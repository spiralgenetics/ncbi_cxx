# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "hdf5",
    srcs = [
        "hdf5arrayfile.c",
        "hdf5dir.c",
        "hdf5file.c",
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
