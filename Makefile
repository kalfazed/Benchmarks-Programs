# Makefile for benchmark evaluation

#SILENT=-s

SRCBASE = $(basename $(SRC))

WORKDIR = $(shell pwd)
ifndef APPLYDIR
#APPLYDIR = ../..
APPLYDIR = $(WORKDIR)/../..
endif
ifndef SRCDIR
SRCDIR = $(APPLYDIR)/src
endif
ifndef INPUTDIR
INPUTDIR = $(APPLYDIR)/data/input
endif
ifndef OUTPUTDIR
OUTPUTDIR = $(APPLYDIR)/data/output
endif
ifndef SCRIPTDIR
SCRIPTDIR = $(APPLYDIR)/script
endif
ifndef EXEDIR
EXEDIR = $(APPLYDIR)/exe
endif
ifndef BASEDIR
BASEDIR = $(APPLYDIR)/..
endif
ifndef LIBDIR
LIBDIR = $(BASEDIR)/lib
endif
ifndef TOOLSDIR
TOOLSDIR = $(BASEDIR)/tools
endif
ifndef TIME
TIME = /usr/bin/time
endif

ifeq ($(SRC), $(SRCBASE).f)
LANG_SUFFIX = f
LANG_FORTRAN = 1
else
LANG_SUFFIX = c
LANG_C = 1
endif

CFEFOUND := $(shell if test -x `which ocfe 2> /dev/null` 2> /dev/null ; then echo 0; else echo 1; fi)
#CFEFOUND := $(shell which ocfe > /dev/null 2>&1 ; echo $?)

ifndef BQSRC
ifndef CFE2
ifeq ($(CFEFOUND), 1)
BQSRC = $(SRCBASE).bq
endif
endif
endif


ifeq ($(CLOCKS),400)
include $(BASEDIR)/Makefile.400
endif

ifeq ($(CLOCKS),1000)
include $(BASEDIR)/Makefile.1000
endif

ifeq ($(CLOCKS),2800)
include $(BASEDIR)/Makefile.2800
endif

ifdef OBSOLETE_RP1
ifeq ($(PEOUT),1)
include $(BASEDIR)/Makefile.rp1_peout1
endif
ifeq ($(PEOUT),10)
include $(BASEDIR)/Makefile.rp1_peout10
endif
endif

ifdef SH4A
include $(BASEDIR)/Makefile.rp1
endif

include $(BASEDIR)/Makefile.cache

ifndef FLIP
FLIP = `which flip`
endif
ifndef LIPSQ
LIPSQ = `which lipsq`
endif
ifndef FE
FE = `which offe`
endif
ifdef CFE2
ifndef CFE
CFE = `which ocfe2`
endif
else
ifndef CFE
CFE = `which ocfe`
#CFE = ssh crazzie "cd `pwd`; ocfe"
endif
endif
ifndef MP
MP = /usr/bin/time `which mmp`
endif
ifndef OMPFBE
OMPFBE = `which ompfbe`
endif
ifndef OMPCBE
OMPCBE = `which ompcbe`
endif
ifndef SHIELD
SHIELD = `which shield`
endif
ifndef MATSU
MATSU = matsu-all
endif

ifndef FE_OPT
FE_OPT = -hexconst
endif

#ifndef CFE_OPT
#CFE_OPT = -I/usr/include -I/usr/lib/gcc-lib/i486-linux/2.95.4/include -I/usr/lib/gcc-lib/i486-linux-gnu/2.95.4/include -I../../ -I../../../lib -I
ifdef LP64
CFE_OPT += -D_OSCAR64 -I. -I$(SRCDIR) -I$(LIBDIR) -U__GNUC__
#-I$(BASEDIR)/include
#-I$(BASEDIR)/include 
else
CFE_OPT += -I. -I$(SRCDIR) -I$(LIBDIR) -U__GNUC__
#-I$(BASEDIR)/include
#-I$(BASEDIR)/include 
endif


#endif
ifdef LP64
CFE_OPT += -D_OSCAR64
endif

ifndef MMP1_OUT
MMP1_OUT = mmp1.out
endif

ifndef MMP2_OUT
MMP2_OUT = mmp2.out
endif

ifndef MMP3_OUT
MMP3_OUT = mmp3.out
endif

ifndef MMP4_OUT
MMP4_OUT = mmp4.out
endif

.PHONY: omp g77 ompc apic omapc bcsmc bdsmc brp2barc gcc bq \
        diff out xlfout xlfdiff cout cdiff xlcout xlcdiff \
        nooscar clean

.SUFFIXES: .f .c .q .bq .mq .sh .o .s .omp.f .omp.c .loop.c \
           .bcsm.c .bdsm.c .brp2bar.c .omp .g77 .1.bq .2.bq .3.bq .api.c

####################################
###      Middle Path options     ###
####################################
include $(BASEDIR)/Makefile.mmp

####################################
###   FORTRAN Back End options   ###
####################################
include $(BASEDIR)/Makefile.ompfbe

####################################
###    SPARC Back End options    ###
####################################
include $(BASEDIR)/Makefile.shield

####################################
###      C Back End options      ###
####################################
include $(BASEDIR)/Makefile.ompcbe


############################
###       FORTRAN       ####
############################
ifeq ($(SRC), $(SRCBASE).f)

ifdef OMP_F
all: omp
else
all: stamp_bin
endif
.f.q:
	$(FE) $(FE_OPT) $< 2> offe.out

$(SRCBASE).q: $(SRCBASE).f

ifdef NPASS

LAST_TARGET = .q

ifdef MP_OPT2
override LAST_TARGET = .1.bq
.q.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
$(SRCBASE).1.bq: $(SRCBASE).q
endif

ifdef MP_OPT3
override LAST_TARGET = .2.bq
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
$(SRCBASE).2.bq: $(SRCBASE).1.bq
endif

ifdef MP_OPT4
override LAST_TARGET = .3.bq
.2.bq.3.bq:
	$(MP) $< $(MP_OPT3) -Pbq $(SRCBASE).3.bq > $(MMP3_OUT) 2>&1
$(SRCBASE).3.bq: $(SRCBASE).2.bq
endif

#ifdef MP_OPT5
#override LAST_TARGET = .4.bq
#.3.bq.4.bq:
#	$(MP) $< $(MP_OPT4) -Pbq $(SRCBASE).4.bq > $(MMP4_OUT) 2>&1
#$(SRCBASE).4.bq: $(SRCBASE).3.bq

$(LAST_TARGET).mq:
	$(MP) $< $(MP_OPT_LAST) -Pmq $(SRCBASE).mq > $(MMP$(MPTIMES)_OUT) 2>&1
$(SRCBASE).mq: $(SRCBASE)$(LAST_TARGET)

else #NPASS#


ifdef MP_OPT4
.q.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
.2.bq.3.bq:
	$(MP) $< $(MP_OPT3) -Pbq $(SRCBASE).3.bq > $(MMP3_OUT) 2>&1
.3.bq.mq:
	$(MP) $< $(MP_OPT4) -Pmq $(SRCBASE).mq > $(MMP4_OUT) 2>&1

$(SRCBASE).1.bq: $(SRCBASE).q
$(SRCBASE).2.bq: $(SRCBASE).1.bq
$(SRCBASE).3.bq: $(SRCBASE).2.bq
$(SRCBASE).mq: $(SRCBASE).3.bq

else
ifdef MP_OPT3
.q.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
.2.bq.mq:
	$(MP) $< $(MP_OPT3) -Pmq $(SRCBASE).mq > $(MMP3_OUT) 2>&1

$(SRCBASE).1.bq: $(SRCBASE).q
$(SRCBASE).2.bq: $(SRCBASE).1.bq
$(SRCBASE).mq: $(SRCBASE).2.bq

else
ifdef MP_OPT2
.q.bq:
	$(MP) $< $(MP_OPT1) -Pbq > $(MMP1_OUT) 2>&1
.bq.mq:
	$(MP) $< $(MP_OPT2) > $(MMP2_OUT) 2>&1

$(SRCBASE).bq: $(SRCBASE).q
$(SRCBASE).mq: $(SRCBASE).bq

else
.q.mq:
	$(MP) $< $(MP_OPT1) > $(MMP1_OUT) 2>&1

$(SRCBASE).mq: $(SRCBASE).q

endif
endif
endif

endif #NPASS#

omp: $(SRCBASE).omp.f
# output Openmp FORTRAN
#$(SRCBASE).omp.f: $(SRCBASE).mq
.mq.omp.f:
	$(OMPFBE) $(OMPFBE_OPT) $< | fsbecard > $(SRCBASE).omp.f 2> ompfbe.out

else
############################
###          C          ####
############################

ifdef LM_API_C
all: $(SRCBASE).omp.c $(SRCBASE).api.c $(SRCBASE).loop.c $(SRCBASE).c $(SRCBASE).bq $(SRCBASE).mq
else
ifdef OPENMP_C
all: $(SRCBASE).omp.c $(SRCBASE).c $(SRCBASE).bq $(SRCBASE).mq
else
ifdef CACHE_RP2_C
#all: $(SRCBASE).omp.c $(SRCBASE).bcsm.c $(SRCBASE).bdsm.c $(SRCBASE).brp2bar.c $(SRCBASE).c $(SRCBASE).bq $(SRCBASE).mq
all: $(SRCBASE).omp.c $(SRCBASE).bcsm.c $(SRCBASE).brp2bar.c $(SRCBASE).c $(SRCBASE).bq $(SRCBASE).mq
else  ### default ###
all: $(SRCBASE).c $(SRCBASE).bq $(SRCBASE).mq $(SRCBASE).omp.c
endif ### SMP_RP2_C ###
endif ### OPENMP_C ###
endif ### LM_API_C ###

ifndef BQSRC
ifndef CFE2
.c.bq:
	$(CFE) $(CFE_OPT) $< 2> ocfe.out
else
ifndef LP64
.c.bq:
	cpp $(CFE_OPT)  $< >$(SRCBASE).i 2> ocfe.out
	$(CFE) $(SRCBASE).i 2>> ocfe.out
else
.c.bq:
	cpp $(CFE_OPT)  $< >$(SRCBASE).i 2> ocfe.out
	$(CFE) -LP64 $(SRCBASE).i 2>> ocfe.out
endif
endif
endif


ifdef NPASSTEST

LAST_TARGET = .q

ifdef MP_OPT2
override LAST_TARGET = .1.bq
.q.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
$(SRCBASE).1.bq: $(SRCBASE).q
endif

ifdef MP_OPT3
override LAST_TARGET = .2.bq
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
$(SRCBASE).2.bq: $(SRCBASE).1.bq
endif

ifdef MP_OPT4
override LAST_TARGET = .3.bq
.2.bq.3.bq:
	$(MP) $< $(MP_OPT3) -Pbq $(SRCBASE).3.bq > $(MMP3_OUT) 2>&1
$(SRCBASE).3.bq: $(SRCBASE).2.bq
endif

#ifdef MP_OPT5
#override LAST_TARGET = .4.bq
#.3.bq.4.bq:
#	$(MP) $< $(MP_OPT4) -Pbq $(SRCBASE).4.bq > $(MMP4_OUT) 2>&1
#$(SRCBASE).4.bq: $(SRCBASE).3.bq

$(LAST_TARGET).mq:
	$(MP) $< $(MP_OPT_LAST) -Pmq $(SRCBASE).mq > $(MMP$(MPTIMES)_OUT) 2>&1
$(SRCBASE).mq: $(SRCBASE)$(LAST_TARGET)

else #NPASSTEST#

ifdef MP_OPT4
.bq.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
.2.bq.3.bq:
	$(MP) $< $(MP_OPT3) -Pbq $(SRCBASE).3.bq > $(MMP3_OUT) 2>&1
.3.bq.mq:
	$(MP) $< $(MP_OPT4) -Pmq $(SRCBASE).mq > $(MMP4_OUT) 2>&1

$(SRCBASE).1.bq: $(SRCBASE).bq
$(SRCBASE).2.bq: $(SRCBASE).1.bq
$(SRCBASE).3.bq: $(SRCBASE).2.bq
$(SRCBASE).mq: $(SRCBASE).3.bq

else ### MP_OPT4 ###
ifdef MP_OPT3
.bq.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
.1.bq.2.bq:
	$(MP) $< $(MP_OPT2) -Pbq $(SRCBASE).2.bq > $(MMP2_OUT) 2>&1
.2.bq.mq:
	$(MP) $< $(MP_OPT3) -Pmq $(SRCBASE).mq > $(MMP3_OUT) 2>&1

$(SRCBASE).1.bq: $(SRCBASE).bq
$(SRCBASE).2.bq: $(SRCBASE).1.bq
$(SRCBASE).mq: $(SRCBASE).2.bq

INPUTQ = $(SRCBASE).2.bq

else ### MP_OPT3 ###

ifdef MP_OPT2
.bq.1.bq:
	$(MP) $< $(MP_OPT1) -Pbq $(SRCBASE).1.bq > $(MMP1_OUT) 2>&1
.1.bq.mq:
	$(MP) $< $(MP_OPT2) -Pmq $(SRCBASE).mq > $(MMP2_OUT) 2>&1
$(SRCBASE).1.bq: $(SRCBASE).bq
$(SRCBASE).mq: $(SRCBASE).1.bq

INPUTQ = $(SRCBASE).1.bq

else ### MP_OPT2 ###

.bq.mq:
	$(MP) $< $(MP_OPT1)  2>&1 | tee $(MMP1_OUT)

INPUTQ = $(SRCBASE).bq

endif ### MP_OPT2 ###
endif ### MP_OPT3 ###
endif ### MP_OPT4 ###

endif ### NPASSTEST ###

.mq.omp.c:
	$(OMPCBE) $(OMPCBE_OPT) $(NO_CMP_CBE_OPT) $< 2> ompcbe.out > $(SRCBASE).omp.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).omp.c
endif

.mq.api.c:
	$(OMPCBE) $(APICBE_OPT) $< 2> apicbe.out > $(SRCBASE).api.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).api.c
endif

.mq.loop.c:
	$(OMPCBE) $(LOOPCBE_OPT) $< 2> loopcbe.out > $(SRCBASE).loop.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).loop.c
endif
	echo "#include <machine.h>" > hoge
	perl -p -e 's/^\#pragma omp flush/synco();/g' $(SRCBASE).loop.c >> hoge
	mv hoge $(SRCBASE).loop.c

.mq.bcsm.c:
	$(OMPCBE) $(BCSMCBE_OPT) $(NO_CMP_CBE_OPT) $< 2> bcsmcbe.out > $(SRCBASE).bcsm.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).bcsm.c
endif

.mq.bdsm.c:
	$(OMPCBE) $(BDSMCBE_OPT) $< 2> bdsmcbe.out > $(SRCBASE).bdsm.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).bdsm.c
endif

.mq.brp2bar.c:
	$(OMPCBE) $(BRP2BARCBE_OPT) $(NO_CMP_CBE_OPT) $< 2> loopcbe.out > $(SRCBASE).brp2bar.c
ifdef STRUCT_SHELL
	$(STRUCT_SHELL) $(SRCBASE).brp2bar.c
endif

bq: $(SRCBASE).bq

# output OpenMP C
ompc: $(SRCBASE).omp.c

# output API C
apic: $(SRCBASE).api.c

# output loopc
loopc: $(SRCBASE).loop.c

# output OSCAR API C (flags on onchip CSM)
bcsmc: $(SRCBASE).bcsm.c

# output OSCAR API C (flags on DSM)
bdsmc: $(SRCBASE).bdsm.c

# output OSCAR API C (RP2 barrier)
brp2barc: $(SRCBASE).brp2bar.c

# output both OpenMP C and API C
omapc: ompc apic

endif ### C ###

.mq.sh:
	$(SHIELD) $(SHIELD_OPT) $< > shield.out 2>&1
$(SRCBASE).sh: $(SRCBASE).mq
stamp_bin: $(SRCBASE).sh
	./$(SRCBASE).sh
	touch $@


####################################
###          Input File          ###
####################################
ifdef NOMFOR

ifdef LANG_FORTRAN
PREP = perl -p -e 's/^\!mfor/c\!mfor/gi' $(SRCDIR)/$(SRC)
else
PREP = perl -p -e 's/^\#pragma mc/\/\/\#pragma mc/gi' $(SRCDIR)/$(SRC)
endif

else ### NOMFOR ###
PREP = cat $(SRCDIR)/$(SRC)
endif ### NOMFOR ###

ifndef DIV
DIV = 1
endif

ifdef DIV2
$(SRC): Makefile
$(SRC): $(SRCDIR)/$(SRC)
	$(PREP) | $(TOOLSDIR)/mksrc.sh -div $(DIV) -div2 $(DIV2) -pe $(PE) > $(SRC)
else
$(SRC): Makefile
$(SRC): $(SRCDIR)/$(SRC)
	$(PREP) | $(TOOLSDIR)/mksrc.sh -div $(DIV) -pe $(PE) > $(SRC)
endif

ifdef BQSRC
$(BQSRC): $(SRCDIR)/$(BQSRC)
	cat $(SRCDIR)/$(BQSRC) | $(TOOLSDIR)/mksrc.sh -div $(DIV) -pe $(PE) > $(BQSRC)
else
$(SRCBASE).bq: $(SRCBASE).c $(EXSRC) $(EXHEAD) $(INCSRC) $(INCHEAD)
endif


####################################
###      Common Native rules     ###
####################################
include $(BASEDIR)/Makefile.native

####################################
###     FORTRAN Native rules     ###
####################################
include $(BASEDIR)/Makefile.Fnative

####################################
###         C Native rules       ###
####################################
include $(BASEDIR)/Makefile.Cnative

####################################
###        Tomato options        ###
####################################
include $(BASEDIR)/Makefile.tomato


####################################
###        Utility rules         ###
####################################
.ps.mtg:
	$(MATSU) $(MATSU_OPT) $< 2> matsu.out

nooscar: $(SRCBASE).nooscar.c
$(SRCBASE).nooscar.c: $(SRCBASE).c
	perl -p -e 's/main\(/MAIN_PE0\(/' $(SRCBASE).c | indent -kr -o $(SRCBASE).nooscar.c

# SHUFFLE for RP1/2 debug

.SUFFIXES: .shf$(SHF).api.c .shf1.tmp .shf2.tmp

shuffle: $(SRCBASE).shf$(SHF).api.c
.api.c.shf1.tmp:
	perl -p -e "s/pragma oscar execution vpe\($(SHF)\)/pragma oscar execution vpe(TMP)/g; \
		    s/pragma section MEM_DSM$(SHF)/pragma section MEM_DSMTMP/g; \
		    s/MAIN_PE$(SHF)/MAIN_PETMP/g" \
		$< > $(SRCBASE).shf1.tmp
.shf1.tmp.shf2.tmp:
	perl -p -e "s/pragma oscar execution vpe\(0\)/pragma oscar execution vpe($(SHF))/g; \
		    s/pragma section MEM_DSM0/pragma section MEM_DSM$(SHF)/g; \
		    s/MAIN_PE0/MAIN_PE$(SHF)/g" \
		$< > $(SRCBASE).shf2.tmp
.shf2.tmp.shf$(SHF).api.c:
	perl -p -e "s/pragma oscar execution vpe(TMP)/pragma oscar execution vpe(0)/g; \
		    s/pragma section MEM_DSMTMP/pragma section MEM_DSM0/g; \
		    s/MAIN_PETMP/MAIN_PE0/g" \
		$< > $(SRCBASE).shf$(SHF).api.c

tags: TAGS

TAGS: $(SRC) $(EXHEAD) $(EXSRC)
	list='$(SRC) $(EXHEAD) $(EXSRC)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	 (etags $$unique -o $(EXEDIR)/TAGS)

qdiff: $(SRCBASE).q
	@git diff $(SRCBASE).q
bqdiff: $(SRCBASE).bq
	@git diff $(SRCBASE).bq
mqdiff: $(SRCBASE).mq
	@git diff $(SRCBASE).mq
ompcdiff: $(SRCBASE).omp.c
	@git diff $(SRCBASE).omp.c
loopcdiff: $(SRCBASE).loop.c
	@git diff $(SRCBASE).loop.c
apicdiff: $(SRCBASE).api.c
	@git diff $(SRCBASE).api.c

mpopt:
	@echo $(INPUTQ) "$(MP_OPTION)"
ompcopt:
	@echo $(SRCBASE).mq "$(OMPCBE_OPT)"
apicopt:
	@echo $(SRCBASE).mq "$(APICBE_OPT)"
loopcopt:
	@echo $(SRCBASE).mq "$(LOOPCBE_OPT)"


clean:
	rm -f *.f *.h *.c *.i *.q *.bq *.mq *.omp.c *.api.c *.o *.s *.log1 *.log2 \
              *.bcsm.c *.bdsm.c *.brp2bar.c \
              *.tdmp *.sh stamp_bin *.mtg *.out *.nobu *.diff \
              *.gcc *.xlc *.xlc_r *.icc *.gcc.out *.xlc.out *.xlc_r.out *.icc.out \
              *.gcc.opt *.xlc.opt *.icc.opt \
              *.g77 *.xlf *.xlf_r *.ifort \
              *.g77.out *.xlf.out *.xlf_r.out *.ifort.out \
              *.g77.opt *.xlf.opt *.xlf_r.opt *.ifort.opt \
              *-info
