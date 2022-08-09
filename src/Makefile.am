
AM_CPPFLAGS = -I$(top_srcdir)/include        \
              -I$(top_builddir)/lib          \
              -I$(top_srcdir)/lib

include Makefile.inc

bin_PROGRAMS = hello bonjour

hello_SOURCES = $(hello_FILES)
hello_LDADD = $(top_builddir)/lib/libdemo.la

bonjour_SOURCES = $(bonjour_FILES)
bonjour_LDADD = $(top_builddir)/lib/libdemo.la

