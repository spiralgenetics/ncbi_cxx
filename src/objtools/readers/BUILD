# Automatically generated by spiral_generate_build.pl.
load("//:ncbi_cxx.bzl", "ncbi_library")

ncbi_library(
    name = "xobjread",
    srcs = [
        "acc_pattern.cpp",
        "agp_read.cpp",
        "agp_seq_entry.cpp",
        "agp_util.cpp",
        "agp_validate_reader.cpp",
        "aln_reader.cpp",
        "bed_reader.cpp",
        "best_feat_finder.cpp",
        "cigar.cpp",
        "fasta.cpp",
        "fasta_aln_builder.cpp",
        "fasta_exception.cpp",
        "format_guess_ex.cpp",
        "getfeature.cpp",
        "gff2_data.cpp",
        "gff2_reader.cpp",
        "gff3_reader.cpp",
        "gff3_sofa.cpp",
        "gff_reader.cpp",
        "gtf_reader.cpp",
        "gvf_reader.cpp",
        "microarray_reader.cpp",
        "phrap.cpp",
        "read_util.cpp",
        "reader_base.cpp",
        "reader_data.cpp",
        "readfeat.cpp",
        "rm_reader.cpp",
        "source_mod_parser.cpp",
        "vcf_reader.cpp",
        "wiggle_reader.cpp",
    ],
    deps = [],
)

ncbi_library(
    name = "xobjreadex",
    srcs = [
        "glimmer_reader.cpp",
        "idmapper.cpp",
        "idmapper_builtin.cpp",
        "idmapper_config.cpp",
        "idmapper_database.cpp",
        "source_mod_parser_wrapper.cpp",
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
