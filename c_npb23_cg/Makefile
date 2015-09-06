# Makefile for benchmark evaluation

##
## source code
##

# a source file to be parallelized
SRC = cg.c

# external source files
EXSRC = $(SRCDIR)/c_timers.c \
        $(SRCDIR)/c_print_results.c \
	$(SRCDIR)/c_randdp.c \
        $(SRCDIR)/wtime.c \
        $(SRCDIR)/argv_stub.c

##
## frontend
##

# use ocfe2
CFE2 = 1

##
## native compiler
##

FAST = 1
XLC_FAST = -O2
ICC_FAST = -O2
CC_NATIVE_OPT = -DARGV_STUB

##
## mmp options
##

HEXCONST = 1
SORT_CONST = 1

ifndef LOCALIZE_VERBOSE
LOCALIZE_VERBOSE = 5
endif

MP_OPTION += -no-import-func-dependence

##
## backend
##

WHILE = 1
IF = 1
LITERAL = 1
SET_ARGV_FUNC = 1

include ../../../Makefile
