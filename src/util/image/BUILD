# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "image",
    srcs = [
        "image.cpp",
        "image_io.cpp",
        "image_io_bmp.cpp",
        "image_io_gif.cpp",
        "image_io_handler.cpp",
        "image_io_jpeg.cpp",
        "image_io_png.cpp",
        "image_io_raw.cpp",
        "image_io_sgi.cpp",
        "image_io_tiff.cpp",
        "image_util.cpp",
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
