

AM_CPPFLAGS = -I$(top_srcdir)/include        \
              -I$(top_builddir)/lib          \
              -I$(top_srcdir)/lib

include Makefile.inc

lib_LTLIBRARIES = libdemo.la
libdemo_la_SOURCES = $(libdemo_la_FILES)
libdemo_la_LDFLAGS = -version-info 0:0:0

