# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "fcgi",
    srcs = [
        "cgi_entry_reader.cpp",
        "cgi_exception.cpp",
        "cgi_serial.cpp",
        "cgi_session.cpp",
        "cgi_util.cpp",
        "cgiapp.cpp",
        "cgiapp_cached.cpp",
        "cgictx.cpp",
        "fcgi_run.cpp",
        "ncbicgi.cpp",
        "ncbicgir.cpp",
        "ncbires.cpp",
        "ref_args.cpp",
        "user_agent.cpp",
    ],
    deps = [],
)

ncbi_library(
    name = "cgi",
    srcs = [
        "cgi_entry_reader.cpp",
        "cgi_exception.cpp",
        "cgi_run.cpp",
        "cgi_serial.cpp",
        "cgi_session.cpp",
        "cgi_util.cpp",
        "cgiapp.cpp",
        "cgiapp_cached.cpp",
        "cgictx.cpp",
        "ncbicgi.cpp",
        "ncbicgir.cpp",
        "ncbires.cpp",
        "ref_args.cpp",
        "user_agent.cpp",
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
