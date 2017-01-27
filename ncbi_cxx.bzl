def ncbi_library(name, srcs, includes = []):
    native.cc_library(name = name,
                      srcs = srcs,
                      hdrs = native.glob([
                          "**/*.hpp",
                      ]),
                      textual_hdrs = native.glob([
                          "**/*.cpp",
                          "**/*.c",
                          "**/*.h",
                          "**/*.inl",
                      ]) + ["//:src_headers"],
                      deps = ["//:all_headers"],
                      visibility = ["//visibility:public"],
		      includes = includes,
                      copts=[
                          "-include", "ncbiconf.h",
                          "-Wno-all",
                          "-Wno-deprecated-declarations",
                          "-Wno-unused-but-set-parameter",
                          ]
    )
