# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "libmagic",
    srcs = [
        "apprentice.c",
        "apptype.c",
        "ascmagic.c",
        "cdf.c",
        "cdf_time.c",
        "compress.c",
        "encoding.c",
        "fsmagic.c",
        "funcs.c",
        "is_tar.c",
        "magic.c",
        "print.c",
        "readcdf.c",
        "readelf.c",
        "softmagic.c",
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
