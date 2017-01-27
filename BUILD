exports_files(["ncbi_cxx.bzl"])

cc_library(
    name = "all_headers",
    hdrs = glob([
        "include/**/*.h",
        "include/**/*.hpp",
        "include/**/*.inl",
        "include/**/*.c",
    ]) + [
        ":ncbiconf_unix_h",
    ],
    includes = ["./include"],
    visibility = ["//:__subpackages__"],
)

filegroup(
    name = "src_headers",
    srcs = glob([
        "src/**/*.h",
        "src/**/*.hpp",
    ]),
    visibility = ["//:__subpackages__"],
)

genrule(
    name = "ncbiconf_unix_h",
    outs = ["include/ncbiconf_unix.h"],
    cmd = """
cat > $@ <<EOF
#define HAVE_ARPA_INET_H 1
#define HAVE_ASPRINTF 1
#define HAVE_ATOLL 1
#define HAVE_ATTRIBUTE_DESTRUCTOR 1
#define HAVE_BASENAME 1
#define HAVE_CPP_GNU_VARARGS 1
#define HAVE_CPP_STD_VARARGS 1
#define HAVE_DLFCN_H 1
#define HAVE_ERF 1
#define HAVE_ERRNO_H 1
#define HAVE_EUIDACCESS 1
#define HAVE_FSEEKO 1
#define HAVE_FSTREAM 1
#define HAVE_FUNC_LOCALTIME_R_TM 1
#define HAVE_GETADDRINFO 1
#define HAVE_GETHOSTBYADDR_R 8
#define HAVE_GETHOSTBYNAME_R 6
#define HAVE_GETHOSTENT_R 1
#define HAVE_GETLOADAVG 1
#define HAVE_GETLOGIN_R 1
#define HAVE_GETNAMEINFO 1
#define HAVE_GETPAGESIZE 1
#define HAVE_GETPASS 1
#define HAVE_GETPWUID 1
#define HAVE_GETRUSAGE 1
#define HAVE_GETSERVBYNAME_R 6
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GETUID 1
#define HAVE_INET_NTOP 1
#define HAVE_INTPTR_T 1
#define HAVE_INTTYPES_H 1
#define HAVE_IOSTREAM 1
#define HAVE_IOS_REGISTER_CALLBACK 1
#define HAVE_LCHOWN 1
#define HAVE_LIBBZ2 1
#define HAVE_LIBCRYPT 1
#define HAVE_LIBCURL 1
#define HAVE_LIBDL 1
#define HAVE_LIBEXPAT 1
#define HAVE_LIBFTDS 1
#define HAVE_LIBGCRYPT 1
#define HAVE_LIBGNUTLS 1
#define HAVE_LIBICONV 1
#define HAVE_LIBKRB5 1
#define HAVE_LIBOPENSSL 1
#define HAVE_LIBPCRE 1
#define HAVE_LIBRT 1
#define HAVE_LIBSQLITE3 1
#define HAVE_LIBXML 1
#define HAVE_LIBZ 1
#define HAVE_LIMITS 1
#define HAVE_LOCALTIME_R 1
#define HAVE_LUTIMES 1
#define HAVE_MALLOC_H 1
#define HAVE_MEMORY_H 1
#define HAVE_MEMRCHR 1
#define HAVE_NANOSLEEP 1
#define HAVE_NETDB_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_NETINET_TCP_H 1
#define HAVE_PATHS_H 1
#define HAVE_POLL_H 1
#define HAVE_PTHREAD_MUTEX 1
#define HAVE_PYTHON 1
#define HAVE_READV 1
#define HAVE_RESTRICT_C 1
#define HAVE_RESTRICT_CXX 1
#define HAVE_SCHED_YIELD 1
#define HAVE_SELECT 1
#define HAVE_SIGNAL_H 1
#define HAVE_SOCKLEN_T 1
#define HAVE_SQLITE3_UNLOCK_NOTIFY 1
#define HAVE_SQLLEN 1
#define HAVE_STATFS 1
#define HAVE_STATVFS 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRCASECMP 1
#define HAVE_STRCASECMP_LC 1
#define HAVE_STRDUP 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_STRNDUP 1
#define HAVE_STRSTREAM 1
#define HAVE_STRTOK_R 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_SYSINFO_1 1
#define HAVE_SYSV_SEMAPHORES 1
#define HAVE_SYS_EPOLL_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_MOUNT_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_IS_SORTED 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STATVFS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_SYSINFO_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_VFS_H 1
#define HAVE_TIMEGM 1
#define HAVE_UINTPTR_T 1
#define HAVE_UNALIGNED_READS 1
#define HAVE_UNISTD_H 1
#define HAVE_USLEEP 1
#define HAVE_UTIMES 1
#define HAVE_VASPRINTF 1
#define HAVE_VPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_WCHAR_H 1
#define HAVE_WRITEV 1
#define HAVE_WSTRING 1
#define HOST "x86_64-unknown-linux-gnu"
#define HOST_CPU "x86_64"
#define HOST_OS "linux-gnu"
#define HOST_VENDOR "unknown"
#define ICONV_CONST
#define NCBI_COMPILER "GCC"
#define NCBI_COMPILER_GCC 1
#define NCBI_COMPILER_VERSION 480
#define NCBI_CXX_TOOLKIT 1
#define NCBI_DEPRECATED __attribute__((__deprecated__))
#define NCBI_DLL_SUPPORT 1
#define NCBI_FORCEINLINE inline __attribute__((always_inline))
#define NCBI_FTDS_RENAME_SYBDB 1
#define NCBI_HAVE_GETPWUID_R 5
#define NCBI_HAVE_READDIR_R 3
#define NCBI_NORETURN __attribute__((__noreturn__))
#define NCBI_OS "UNIX"
#define NCBI_OS_LINUX 1
#define NCBI_OS_UNIX 1
#define NCBI_PLATFORM_BITS 64
#define NCBI_RESTRICT_C __restrict__
#define NCBI_RESTRICT_CXX __restrict__
#define NCBI_SIGNATURE "unknown"
#define NCBI_TLS_VAR __thread
#define NCBI_USE_THROW_SPEC 1
#define RETSIGTYPE void
#define SELECT_UPDATES_TIMEOUT 1
#define SIZEOF_CHAR 1
#define SIZEOF_DOUBLE 8
#define SIZEOF_FLOAT 4
#define SIZEOF_INT 4
#define SIZEOF_LONG 8
#define SIZEOF_LONG_DOUBLE 16
#define SIZEOF_LONG_LONG 8
#define SIZEOF_SHORT 2
#define SIZEOF_SIZE_T 8
#define SIZEOF_VOIDP 8
#define SIZEOF___INT64 0
#define STACK_GROWS_DOWN 1
#define STDC_HEADERS 1
#define TIME_WITH_SYS_TIME 1
EOF
""",
)
