# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "zlib",
    srcs = [
        "adler32.c",
        "crc32.c",
        "deflate.c",
        "gzio.c",
        "infback.c",
        "inffast.c",
        "inflate.c",
        "inftrees.c",
        "ncbi_z_compress.c",
        "trees.c",
        "uncompr.c",
        "zutil.c",
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
