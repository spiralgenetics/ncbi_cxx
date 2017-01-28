def ncbi_library(name, srcs, includes = [], hdrs = [], deps = [], more_deps = []):
    native.cc_library(name = name,
                      srcs = srcs,
                      hdrs = native.glob([
                          "**/*.hpp",
                          "**/*.h",
                      ]),
                      textual_hdrs = native.glob([
                          "**/*.cpp",
                          "**/*.c",
                          "**/*.inl",
                          "**/*.inc",
                      ]) + hdrs,
                      deps = [
                          "//:all_headers",
                      ] + deps + more_deps,
                      visibility = ["//visibility:public"],
		      includes = includes,
                      copts = [
                          "-include", "ncbiconf.h",
                          "-Wno-all",
                          "-Wno-deprecated-declarations",
                          "-Wno-unused-but-set-parameter",
                      ],
                      # NCBI has poor dependency declarations;
                      # make sure we include symbols that we'll
                      # need in libraries linked after this one.
                      alwayslink = 1,
    )
