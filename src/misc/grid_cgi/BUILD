# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "grid_cgi",
    srcs = [
        "cgi2grid.cpp",
        "cgi_session_netcache.cpp",
        "grid_cgiapp.cpp",
        "remote_cgiapp.cpp",
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
