#! /bin/sh
# $Id: new_project.sh 398232 2013-05-03 18:53:51Z rafanovi $
# Authors:  Denis Vakatov (vakatov@ncbi.nlm.nih.gov),
#           Aaron Ucko    (ucko@ncbi.nlm.nih.gov)

svn_revision=`echo '$Revision: 398232 $' | sed "s%\\$[R]evision: *\\([^$][^$]*\\) \\$.*%\\1%"`
def_builddir="$NCBI/c++/Debug/build"

repository_url='https://svn.ncbi.nlm.nih.gov/repos/toolkit'
tmp_app_checkout_dir='tmp_app_sample'
stem='sample/app'

script=`basename $0`
timestamp=`date`
ws='[ 	]' # The brackets contain a space and a tab.

if test -x /usr/bin/nawk; then
   awk=nawk
else
   awk=awk
fi

#################################

Usage()
{
  cat <<EOF
USAGE:  $script <name> <type> [builddir]
SYNOPSIS:
   Create a model makefile "Makefile.<name>_<type>" to build
   a library or an application that uses pre-built NCBI C++ toolkit.
   Also include sample code when creating applications.
ARGUMENTS:
   <name>      -- name of the project (will be subst. to the makefile name)
   <type>      -- one of the following:
     lib[/basic]     to build a simple library
     lib/asn         to build a library from an ASN.1 spec
     lib/dtd         to build a library from an XML DTD
     lib/xsd         to build a library from an XML Schema
     app[/basic]     to build a simple application
     app/alnmgr      to build an application using the alignment manager
     app/asn         to build a library from ASN.1 spec, and sample application
     app/blast       to build an application using BLAST
     app/cgi         to build a CGI or FastCGI application
     app/dbapi       to build a DBAPI application
     app/sdbapi      to build a Simple-DBAPI application
     app/eutils      to build an eUtils client application
     app/lds         to build an application using a local data storage
     app/netcache    to build a client application of NetCache
     app/netschedule to build a NCBI GRID client application using NetSchedule
     app/objects     to build an application using ASN.1 objects
     app/objmgr      to build an application using the object manager
     app/serial      to build sample serialization applications
     app/soap/client to build a SOAP client
     app/soap/server to build a SOAP server
     app/unit_test   to build a Boost-based unit test application
   [builddir]  -- path to the pre-built NCBI C++ toolkit
                  (default = $def_builddir)

EOF

  test -z "$1"  ||  echo ERROR:  $1
  exit 1
}

if [ -f /etc/redhat-release -a -d $NCBI/c++/GCC442-Debug64/build ]; then
    def_builddir=$NCBI/c++/GCC442-Debug64/build
fi

#################################

CreateMakefile_Builddir()
{
  cat > $1 <<EOF
#
# Makefile:  Makefile.builddir
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#


###  PATH TO A PRE-BUILT C++ TOOLKIT  ###
builddir = `echo $builddir | sed -e "s,$NCBI,\\\$(NCBI),"`
# builddir = \$(NCBI)/c++/Release/build
EOF
}

CreateMakefile_Lib()
{
  user_makefile="$1"
  proj_name="$2"
  proj_path="$3"
  proj_subtype="$4"
  lib_name="$5"

  case "$proj_type/$proj_subtype" in
   lib/[^b]* | app/asn | app/soap)
     libsrc="${lib_name}__ ${lib_name}___"
     ;;
   *)
     libsrc=$lib_name
     ;;
  esac

  cat > "$user_makefile" <<EOF
#
# Makefile:  $user_makefile
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#


###  PATH TO A PRE-BUILT C++ TOOLKIT  ###
include Makefile.builddir


###  DEFAULT COMPILATION FLAGS -- DON'T EDIT OR MOVE THESE LINES !!!
include \$(builddir)/Makefile.mk
srcdir = .
BINCOPY = @:
BINTOUCH = @:
LOCAL_CPPFLAGS = -I. $extra_inc
LOCAL_LDFLAGS = -L.
ORIG_LDFLAGS = \$(LOCAL_LDFLAGS) \$(CONF_LDFLAGS)


###  PROJECT-SPECIFIC SETTINGS, SUITABLE FOR IN-TREE USE
include Makefile.$lib_name.lib

###  LIBRARY BUILD RULES -- DON'T EDIT OR MOVE THESE 2 LINES !!!
include \$(builddir)/Makefile.is_dll_support
include \$(builddir)/Makefile.\$(LIB_OR_DLL)
src-stamp:;

###  Kludge around issues with potentially-absent .dep and .files files
\$(status_dir)/.%.dep:;
\$(status_dir)/.%.files:;


###  PUT YOUR OWN ADDITIONAL TARGETS (MAKE COMMANDS/RULES) BELOW HERE
EOF

cat > `dirname $user_makefile`/Makefile.$lib_name.lib <<EOF
#
# Makefile:  Makefile.$lib_name.lib
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#

###  BASIC PROJECT SETTINGS
LIB = $lib_name
SRC = $libsrc
# OBJ =

###  EXAMPLES OF OTHER SETTINGS THAT MIGHT BE OF INTEREST
# CPPFLAGS = \$(ORIG_CPPFLAGS) \$(NCBI_C_INCLUDE)
# CFLAGS   = \$(FAST_CFLAGS)
# CXXFLAGS = \$(FAST_CXXFLAGS)
#
# LIB_OR_DLL = dll
EOF
}



#################################

CreateMakefile_App()
{
  makefile_name="$1"
  proj_name="$2"
  proj_path="$3"
  proj_subtype="$4"
  app_name="$5"
  orig_app_name="$6"

  base=$src/$stem/${proj_path}/Makefile.${orig_app_name}.app
  if test -r "$base"; then
    :
  else
    echo "Warning: couldn't read base $base for $1"
    return 1
  fi

  cat > "$makefile_name" <<EOF
#
# Makefile:  $makefile_name
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#


###  PATH TO A PRE-BUILT C++ TOOLKIT
include Makefile.builddir


###  DEFAULT COMPILATION FLAGS  -- DON'T EDIT OR MOVE THESE LINES !!!
include \$(builddir)/Makefile.mk
srcdir = .
BINCOPY = @:
LOCAL_CPPFLAGS = -I. $extra_inc
LOCAL_LDFLAGS = -L.
ORIG_LDFLAGS = \$(LOCAL_LDFLAGS) \$(CONF_LDFLAGS)
LDFLAGS = \$(ORIG_LDFLAGS)


###  PROJECT-SPECIFIC SETTINGS, SUITABLE FOR IN-TREE USE
include Makefile.$app_name.app

###  APPLICATION BUILD RULES -- DON'T EDIT OR MOVE THESE 2 LINES !!!
include \$(builddir)/Makefile.app
MAKEFILE = `basename "$makefile_name"`

###  Kludge around issues with potentially-absent .dep and .files files
\$(status_dir)/.%.dep:;
\$(status_dir)/.%.files:;


###  PUT YOUR OWN ADDITIONAL TARGETS (MAKE COMMANDS/RULES) BELOW HERE
EOF

  makefile_name=`dirname $makefile_name`/Makefile.$app_name.app
  cat > "$makefile_name" <<EOF
#
# Makefile:  $makefile_name
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#

###  BASIC PROJECT SETTINGS
APP = `sed -ne "s/$old_proj_name/$proj_name/; s/^$ws*APP$ws*=$ws*//p" $base`
SRC = `sed -ne "s/$old_proj_name/$proj_name/; s/^$ws*SRC$ws*=$ws*//p" $base`
# OBJ =

EOF

  $awk 'BEGIN { virtline = "" }
  /BEGIN COPIED SETTINGS/,/END COPIED SETTINGS/ {
     virtline = virtline $0 "\n"
     if (! /\\$/) {
       if (sub(/\$[({]FAST_LDFLAGS[)}]/, "$(LOCAL_LDFLAGS) &", virtline)) {
          printf "\n### LOCAL_LDFLAGS automatically added\n%s", virtline;
       } else if ( !/COPIED SETTINGS/ ) {
          sub(/^# CHECK_/, "CHECK_", virtline);
          printf "%s", virtline;
       }
       virtline = ""
     }      
  }' < "$base" | sed -e "s/$old_proj_name/$proj_name/" >> "$makefile_name"

  cat >> "$makefile_name" <<EOF

###  EXAMPLES OF OTHER SETTINGS THAT MIGHT BE OF INTEREST
# PRE_LIBS = \$(NCBI_C_LIBPATH) .....
# CFLAGS   = \$(FAST_CFLAGS)
# CXXFLAGS = \$(FAST_CXXFLAGS)
# LDFLAGS  = \$(FAST_LDFLAGS)
EOF
}


CreateMakefile_Meta()
{
  makefile_name=$1
  proj_name=$2
  proj_path=$3
  old_proj_name=$4

  base=$src/$stem/${proj_path}/Makefile.in

  rm -f "$makefile_name"
  cat > "$makefile_name" <<EOF
#
# Makefile:  $makefile_name
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#


###  PATH TO A PRE-BUILT C++ TOOLKIT
include Makefile.builddir

###  LIST OF PROJECTS TO BUILD, SUITABLE FOR IN-TREE USE
include Makefile.out

###  RULE TO REGENERATE Makefile.out
%.out: %.in
	 sed -e 's,@builddir@,\$\$(builddir),g; s,@srcdir@,.,g' \$< > \$@

###  USE LOCAL TREE -- DON'T EDIT OR MOVE THESE TWO LINES !!!
MAKE_LIB = \$(MAKE) -f Makefile.\$\${i}_lib \$(MFLAGS)
MAKE_APP = \$(MAKE) -f Makefile.\$\${i}_app \$(MFLAGS)

###  DIRECT THE CHECK FRAMEWORK TO LOOK IN THE RIGHT PLACE
import_root = .
CHECK_ADD_KET += ; sed -e 's:[^ ]*\( ____ \):.\1:' check.sh.list > .csl && \
    mv .csl check.sh.list

###  PUT YOUR OWN ADDITIONAL TARGETS (MAKE COMMANDS/RULES) BELOW HERE
EOF

  cat > "$makefile_name.in" <<EOF
#
# Makefile:  $makefile_name.in
#
# This file was originally generated by shell script "$script" (r$svn_revision)
# ${timestamp}
#

EOF
  if test -f "$base"; then
      sed -e "s,$old_proj_name,$proj_name,g" < "$base"
  else
      case "$proj_type/$proj_subtype" in
          app/asn )
              echo 'ASN_PROJ = sample_asn'
              echo "APP_PROJ = $proj_name"
              ;;
          app/* )
              echo "APP_PROJ = $proj_name"
              ;;
          lib/basic )
              echo "LIB_PROJ = $proj_name"
              echo "APP_PROJ = $proj_name_test"
              ;;
          lib/asn )
              echo "ASN_PROJ = $proj_name"
              ;;
          lib/dtd )
              echo "DTD_PROJ = $proj_name"
              ;;
          lib/xsd )
              echo "XSD_PROJ = $proj_name"
              ;;
          lib/* )
              echo "LIB_PROJ = $proj_name"
              ;;
      esac
      cat <<EOF

srcdir = @srcdir@
include @builddir@/Makefile.meta
EOF
  fi >> "$makefile_name.in"

  touch -t 197607040000 "$makefile_name.out"
  (cd `dirname $makefile_name`  &&  \
     make -f $makefile_name Makefile.out >/dev/null 2>&1)
}


Capitalize()
{
    echo $1 | awk 'BEGIN { FS = "[^A-Za-z0-9]+" }
        {
          for (i = 1;  i <= NF;  ++i) {
            printf("%s%s", toupper(substr($i, 1, 1)), tolower(substr($i, 2)));
          }
          print "";
        }'
}


#################################

case $# in
  3)  proj_name="$1" ; proj_type="$2" ; builddir="$3" ;;
  2)  proj_name="$1" ; proj_type="$2" ; builddir="$def_builddir" ;;
  0)  Usage "" ;;
  *)  Usage "Invalid number of arguments" ;;
esac

if test ! -d "$builddir"  ||  test ! -f "$builddir/../inc/ncbiconf_unix.h" -a ! -f "$builddir/../inc/ncbiconf.h" ; then
  Usage "Pre-built NCBI C++ toolkit is not found in:  \"$builddir\""
fi
case "$builddir" in
    /*) ;; # already absolute, no need to change
    *)  builddir=`(cd "${builddir}" && pwd)` ;;
esac

src=`sed -ne 's:^top_srcdir *= *\([^ ]*\):\1/src:p' < $builddir/Makefile.mk \
     | head -n 1`
test -n $src || src=${NCBI}/c++/src

case "${proj_type}" in
  app/*)
    proj_subdir=`echo ${proj_type} | sed -e 's@^app/@@'`
    proj_subtype=`echo ${proj_subdir} | tr / _`
    proj_type=app
    case $proj_subtype in
      asn | soap )
        extra_inc="-I../../include -I../../include/$proj_name"
        ;;
    esac
    ;;
  app)
    proj_subdir=basic
    proj_subtype=basic
    ;;
  lib/*)
    proj_subdir=`echo ${proj_type} | sed -e 's@^lib/@@; s/^asn$/asn_lib/'`
    proj_subtype=$proj_subdir
    proj_type=lib
    extra_inc="-I../../include -I../../include/$proj_name"
    stem='sample/lib'
    ;;
  lib)
    proj_subdir=basic
    proj_subtype=basic
    extra_inc="-I../../include -I../../include/$proj_name"
    stem='sample/lib'
    ;;
esac

if test "$proj_name" != `basename $proj_name` ; then
  Usage "Invalid project name:  \"$proj_name\""
fi

if test -d "$src/$proj_type/sample/$proj_subdir"; then
  # looking at a tree predating the April 14, 2009 rearrangements
  stem="$proj_type/sample" # vs. sample/app
elif test ! -d "$src/$stem/$proj_subdir"; then
  svn co "$repository_url/trunk/c++/src/$stem/$proj_subdir" \
    "$tmp_app_checkout_dir/src/$stem/$proj_subdir"
  if test ! -d "$tmp_app_checkout_dir/src/$stem/$proj_subdir"; then
    rm -rf "$tmp_app_checkout_dir"
    Usage "Unsupported project type $proj_type/$proj_subtype"
  fi
  if test -n "$extra_inc"; then
    svn co "$repository_url/trunk/c++/include/$stem/$proj_subdir" \
      "$tmp_app_checkout_dir/include/$stem/$proj_subdir"    
  fi
  src="`cd \"$tmp_app_checkout_dir/src\" && pwd`"
  cleanup='yes'
fi

makefile_name="Makefile.${proj_name}_${proj_type}"
touch tmp$$
if test ! -f ../$proj_name/tmp$$ ; then
   test -d $proj_name || mkdir $proj_name
fi
if test -n "$extra_inc" ; then
   orig_extra_inc=$extra_inc
   if test -f ../../src/$proj_name/tmp$$; then
      mkdir -p ../../include/$proj_name
   elif test -f ../src/tmp$$; then
      mkdir -p ../include/$proj_name
   else
      mkdir -p $proj_name/include/$proj_name $proj_name/src/$proj_name
      cd $proj_name/src
      rm -f ../../tmp$$
   fi
fi
rm -f tmp$$
test -d $proj_name &&  makefile_name="$proj_name/$makefile_name"
makefile_name=`pwd`/$makefile_name
makefile_builddir=`dirname $makefile_name`/Makefile.builddir

MayWrite() {
    if [ -f "$1" ]; then
        echo "\"$1\" already exists.  Do you want to overwrite it?  [y/N]"
        read answer
        case "$answer" in
            [Yy]*) return 0 ;;
            *    ) return 1 ;;
        esac
    else
        return 0
    fi
}

MayWrite $makefile_builddir  &&  CreateMakefile_Builddir $makefile_builddir

case "$proj_type" in
  lib )
    old_class_name=CSampleLibtestApplication
    old_proj_name=${proj_subtype}_sample_lib
    ;;
  app )
    old_class_name=CSample`Capitalize ${proj_subtype}`Application
    old_proj_name=${proj_subtype}_sample
    ;;
  * )
    Usage "Invalid project type:  \"$proj_type\"" ;;
esac

if [ -r "$src/$stem/$proj_subdir/Makefile.$old_proj_name.$proj_type" ]; then
    MayWrite $makefile_name  ||  exit 2
    main_makefile_name=$makefile_name
else
    main_makefile_name=
fi


def_makefile=`dirname $makefile_name`/Makefile

new_class_name=C`Capitalize ${proj_name}`Application

old_dir=${src}/$stem/${proj_subdir}
if test -d "${proj_name}"; then
  new_dir=`pwd`/$proj_name
else
  new_dir=`pwd`
fi

if test ! -d "$old_dir"; then
  echo "Warning: unable to locate sample code in $old_dir" >&2
  CreateMakefile_Meta $def_makefile $proj_name
  if [ "$proj_type" = lib ]; then
    CreateMakefile_Lib $makefile_name $proj_name '' "$proj_subtype" $proj_name
    echo "Created a model makefile \"$makefile_name\"."
  fi
  exit 0
fi

old_header_dir="sample/${proj_type}/${proj_subdir}"
old_header_name="sample_${proj_type}_${proj_subtype}"
old_std_guard=`echo "$old_header_dir" | tr "a-z/" "A-Z_"`
old_alt_guard='SAMPLELIB___OBJECT'
uc_proj_name=`echo "$proj_name" | tr "a-z" "A-Z"`

CopySources()
{
  for input in $old_dir$1/*; do
    base=`basename $input | sed -e "s/${old_proj_name}/${proj_name}/g; s/${old_header_name}/${proj_name}/g"`
    case $base in
      *~ | CVS | .svn )
        continue ;; # skip
    esac

    if grep -w "`basename $input`" $old_dir$1/.cvsignore >/dev/null 2>&1; then
        continue
    fi
  
    output=$new_dir$1/$base
    case "$output" in
        */Makefile.*.app ) output2=`echo $output | sed -e 's/\.app$/_app/'` ;;
        */Makefile.*.lib ) output2=`echo $output | sed -e 's/\.lib$/_lib/'` ;;
        */Makefile.in    ) output2=`echo $output | sed -e 's/\.in$//'`      ;;
        *                ) output2= ;;
    esac
    if test -d $input; then
      mkdir $output
      CopySources $1/$base
      continue
    elif MayWrite $output  &&  \
      ([ "${output2:-$main_makefile_name}" = "$main_makefile_name" ]  ||  \
        MayWrite $output2); then
      : # proceed
    else
      continue
    fi

    back=`echo $1 | sed -e 's,/[^/]*,../,g'`
    extra_inc=`echo $orig_extra_inc | sed -e "s,-I,-I$back,g"`
  
    case $input in
        */Makefile.*.app)
            this_proj=`basename $input | sed -e 's/Makefile\.\(.*\)\.app$/\1/'`
            this_proj_name=`echo $this_proj | sed -e "s/$old_proj_name/$proj_name/g"` 
            case "$this_proj" in
                sample_*)
                    this_subtype=`echo $this_proj | sed -e 's/^sample_//'` ;;
                *)
                    this_subtype=$proj_subtype ;;
            esac
            CreateMakefile_App $output2 $proj_name $proj_subdir$1 \
                $this_subtype $this_proj_name $this_proj
            ;;
        */Makefile.*.lib)
            this_proj=`basename $input | sed -e 's/Makefile\.\(.*\)\.lib$/\1/'`
            this_proj_name=`echo $this_proj | sed -e "s/$old_proj_name/$proj_name/g"` 
            case "$this_proj" in
                sample_*)
                    this_subtype=`echo $this_proj | sed -e 's/^sample_//'` ;;
                *)
                    this_subtype=$proj_subtype ;;
            esac
            CreateMakefile_Lib $output2 $proj_name $proj_subdir$1 \
                $this_subtype $this_proj_name
            ;;
        */Makefile.in)
            touch "$output"
            CreateMakefile_Meta $output2 $proj_name $proj_subdir$1 \
                $old_proj_name
            test -r $new_dir$1/Makefile.builddir || \
                ln -s ../Makefile.builddir $new_dir$1/Makefile.builddir
            ;;
        *)
            sed -e "s/${old_proj_name}/${proj_name}/g" \
                -e "s/${old_class_name}/${new_class_name}/g" \
                -e "s,${old_header_dir},${proj_name},g" \
                -e "s/${old_header_name}/${proj_name}/g" \
                -e "s/${old_std_guard}/${uc_proj_name}/g" \
                -e "s/${old_alt_guard}/${uc_proj_name}_${uc_proj_name}/g" \
                < $input > $output
            ;;
    esac
    test -x $input  &&  chmod +x $output
    
    case $output in
        */Makefile*)
            echo "Created a model makefile \"$output\"."
            [ -z "$output2" ] || echo "Created a model makefile \"$output2\"."
            ;;
        *)  echo "Created a model source file \"$output\"." ;;
    esac
  done
}

CopySources ""
if test -n "$extra_inc" ; then
  orig_new_dir=$new_dir
  src=`dirname $src`/include
  if test -d "../../include/$proj_name"; then
    cd "../../include/$proj_name"
  elif test -d "../include/$proj_name"; then
    cd "../include/$proj_name"
  fi
  old_dir=${src}/$stem/${proj_subdir}
  new_dir=`pwd`
  CopySources ""
  new_dir=$orig_new_dir
fi
test -n "$cleanup" && rm -rf "$tmp_app_checkout_dir"

fmt <<EOF

DONE

To build this project, run make in $new_dir after editing its contents
as desired.
EOF
