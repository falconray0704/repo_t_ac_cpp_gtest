libdemo_la_HFILES = time/date.h \
                    mem.h \
                    say.h

if DEBUG_ENABLED
libdemo_la_HFILES += debug/debug.h
endif


libdemo_la_CFILES = time/date.c \
                    mem.c \
                    say.c

if DEBUG_ENABLED
libdemo_la_CFILES += debug/debug.c
endif

libdemo_la_FILES = $(libdemo_la_HFILES) $(libdemo_la_CFILES)

