# Makefile for benchmark evaluation

SRC = bt.c
EXSRC = $(SRCDIR)/c_timers.c \
        $(SRCDIR)/wtime.c \
        $(SRCDIR)/c_print_results.c \
        $(SRCDIR)/argv_stub.c

CFE2 = 1
CPP_OPT_ADD += -DCLASS_NAME_S

FAST = 1
XLC_FAST = -O2
ICC_FAST = -O2
CC_NATIVE_OPT = -DARGV_STUB

# misc
HEXCONST = 1
SORT_CONST = 1

# Back End
WHILE = 1
IF = 1
LITERAL = 1
SET_ARGV_FUNC = 1

ifndef LOCALIZE_VERBOSE
LOCALIZE_VERBOSE = 5
endif

include ../../../Makefile
