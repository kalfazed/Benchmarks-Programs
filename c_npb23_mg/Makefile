# Makefile for benchmark evaluation

##
## source code
##

# a source file to be parallelized
SRC = mg.c

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
#LP64 = 1
CFE2 = 1
CPP_OPT_ADD += -DCLASS_NAME_S

##
## native compiler
##

#FAST = 1
GCC_FAST = -O2
XLC_FAST = -O2
ICC_FAST = -O2 -static
#
#-O3 -xHOST -static
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
##SET_ARGV_FUNC = 1
#OPT_OMPCBE_ADD = --hierarchical-barrier 4

include ../../../Makefile
CC_OPT += -m32 -lm -fopenmp -O0
ICC_OPT += -m32 -lm
