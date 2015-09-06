#include <stdio.h>

/* choose a time measuerement option */
#undef   NO_TIME   /* do nothing */
#define   POSIX     /* use gettimeofday */
#undef   RP1TMU    /* use Timer Unit of RP1 */

#ifdef POSIX
#include <sys/time.h>
#endif /* POSIX */

#ifdef RP1TMU
/* CAUTION 
 1.  SimpleOS also uses TMU. 
      Please avoid the channel Simple OS is using.
      The setting of SimpleOS is described in "simpleos_config.c"
 2.  Timer is working even while processor break. 
*/
#include "sh_timer.h"
#define P_CLOCK 50000000
#define TMU_CH 2
#endif /* RP1TMU */


#ifdef POSIX 
static double start_time;
static double end_time;
static double elapsed_time;
static double tmp_time;
static double cumulative_time = 0.0;
#endif /* POSIX */

#ifdef RP1TMU
static unsigned long pclk;
static unsigned long tmu_init_val;
static unsigned long tmu_init_val_pe0;
static unsigned long tmu_init_val_pe1;
static unsigned long tmu_init_val_pe2;
static unsigned long tmu_init_val_pe3;
extern unsigned long non_ov_tx_clk_val_pe0;
extern unsigned long non_ov_tx_clk_val_pe1;
extern unsigned long non_ov_tx_clk_val_pe2;
extern unsigned long non_ov_tx_clk_val_pe3;
#endif /* RP1TMU */


void print_time()
{
#ifdef NO_TIME
    ;
#endif /* NO_TIME */
#ifdef POSIX
    struct timeval tv;
    gettimeofday(&tv, NULL);
    fprintf(stderr, "time : %.6f\n", tv.tv_sec + (double)tv.tv_usec*1e-6);
#endif /* POSIX */
#ifdef RP1TMU
	unsigned long time, timer_val;

	drv_getTimerVal(TMU_CH, &timer_val );
	
	/* get the actual time in second */
	time = (tmu_init_val - timer_val) / pclk;
	printf("Time elapsed is %d (pclk is %d), %d [sec]\n", tmu_init_val-timer_val, pclk, time);
#endif /* RP1TMU */
}



void timer_start()
{
#ifdef NO_TIME
    ;
#endif /* NO_TIME */
#ifdef POSIX
    struct timeval tv;
    gettimeofday(&tv, NULL);
    start_time = tv.tv_sec + (double)tv.tv_usec*1e-6;
#endif /* POSIX */

#ifdef RP1TMU
    /* timer setting variable */
	st_tmu_setting tmu;

	/* timer set-up */
	tmu.underflow_flg = 0;  /* initialize underflow flag */
	tmu.underflow_int = 0;  /* underflow intteruption disabled */
	tmu.timer_scale = 0;    /* set timer prescaler, 0 is Pck/4 --> 50MHz/4 = 12.5MHz */
	
	/* get the tmu clock --> timer scale is Pck/( 4^(timer_scale+1)) */
	pclk = P_CLOCK / ( pow(4, tmu.timer_scale+1) );
	
	/* initial counter value */
	tmu_init_val = 0xffffffff;
	
	/* set up TMU */
	drv_setTimer( TMU_CH, tmu, tmu_init_val );		
	drv_startTimer(TMU_CH);
#endif /* RP1TMU */
}

void timer_end()
{
#ifdef NO_TIME
    ;
#endif /* NO_TIME */

#ifdef POSIX
    struct timeval tv;
    gettimeofday(&tv, NULL);
    end_time = tv.tv_sec + (double)tv.tv_usec*1e-6;
    elapsed_time = end_time - start_time;
    fprintf(stderr, "elapsed time : %.6f\n", elapsed_time);
#endif /* POSIX */

#ifdef RP1TMU
    unsigned long timer_val;
    unsigned long elapsed_clk, elapsed_time1, elapsed_time2, elapsed_time3;

	drv_stopTimer(TMU_CH);
	drv_getTimerVal(TMU_CH, &timer_val );
	
	/* get the actual time in second */
	elapsed_clk = tmu_init_val - timer_val;
    elapsed_time1 = elapsed_clk / pclk;
	elapsed_time2 = (elapsed_clk / (pclk / 10)) - (10 * elapsed_time1);
    elapsed_time3 = (elapsed_clk / (pclk / 100)) - (100 * elapsed_time1 + 10 * elapsed_time2);
/*	printf("Time elapsed is %d (pclk is %d), %d [sec]\n", tmu_init_val-timer_val, pclk, time); */
    printf("\nelapsed time is %d.%d%d[sec]\n", elapsed_time1, elapsed_time2, elapsed_time3);
#endif /* RP1TMU */
}

void
set_timer(int pe)
{
#ifdef RP1TMU
    /* timer setting variable */
	st_tmu_setting tmu;

	/* timer set-up */
	tmu.underflow_flg = 0;  /* initialize underflow flag */
	tmu.underflow_int = 0;  /* underflow intteruption disabled */
	tmu.timer_scale = 0;    /* set timer prescaler, 0 is Pck/4 --> 50MHz/4 = 12.5MHz */
	
	/* get the tmu clock --> timer scale is Pck/( 4^(timer_scale+1)) */
	pclk = P_CLOCK / ( pow(4, tmu.timer_scale+1) );
	
	/* initial counter value */
    switch (pe) {
    case 0:
        tmu_init_val_pe0 = 0xffffffff;
        break;
    case 1:
        tmu_init_val_pe1 = 0xffffffff;
        break;
    case 2:
        tmu_init_val_pe2 = 0xffffffff;
        break;
    case 3:
        tmu_init_val_pe3 = 0xffffffff;
        break;
    default:
        break;
    }
        
//	tmu_init_val = 0xffffffff;
	
	/* set up TMU */
	drv_setTimer( TMU_CH, tmu, tmu_init_val);
#else
    ;
#endif /* RP1TMU */
}

void
start_timer()
{
#ifdef RP1TMU
	drv_startTimer(TMU_CH);
#else
    struct timeval tv;
    gettimeofday(&tv, NULL);
    tmp_time = tv.tv_sec + (double)tv.tv_usec*1e-6;
#endif /* RP1TMU */
}

void
stop_timer()
{
#ifdef RP1TMU
	drv_stopTimer(TMU_CH);
#else
    struct timeval tv;
    double time_end;
    gettimeofday(&tv, NULL);
    time_end = tv.tv_sec + (double)tv.tv_usec*1e-6;
    cumulative_time += (time_end - tmp_time);
#endif /* RP1TMU */
}

void
print_timer()
{
#ifdef RP1TMU
    unsigned long timer_val;
    unsigned long elapsed_clk, elapsed_time1, elapsed_time2, elapsed_time3;

	drv_getTimerVal(TMU_CH, &timer_val);

	/* get the actual time in second */
	elapsed_clk = tmu_init_val - timer_val;
    elapsed_time1 = elapsed_clk / pclk;
	elapsed_time2 = (elapsed_clk / (pclk / 10)) - (10 * elapsed_time1);
    elapsed_time3 = (elapsed_clk / (pclk / 100)) - (100 * elapsed_time1 + 10 * elapsed_time2);
    printf("\nelapsed time is %d.%d%d[sec] (%d clock)\n", elapsed_time1,
           elapsed_time2, elapsed_time3, elapsed_clk);
#else
    fprintf(stderr, "cumulative time : %.6f\n", cumulative_time);
#endif /* RP1TMU */
}

void
set_timer_var(int pe)
{
#ifdef RP1TMU
    unsigned long timer_val;
    unsigned long elapsed_clk, elapsed_time1, elapsed_time2, elapsed_time3;

	drv_getTimerVal(TMU_CH, &timer_val);

    switch (pe) {
    case 0:
        non_ov_tx_clk_val_pe0 = tmu_init_val_pe0 - timer_val;
        break;
    case 1:
        non_ov_tx_clk_val_pe1 = tmu_init_val_pe1 - timer_val;
        break;
    case 2:
        non_ov_tx_clk_val_pe2 = tmu_init_val_pe2 - timer_val;
        break;
    case 3:
        non_ov_tx_clk_val_pe3 = tmu_init_val_pe3 - timer_val;
        break;
    default:
        break;
    }
//    non_ov_tx_clk_val = tmu_init_val - timer_val;

	/* get the actual time in second */
	elapsed_clk = tmu_init_val - timer_val;
    elapsed_time1 = elapsed_clk / pclk;
	elapsed_time2 = (elapsed_clk / (pclk / 10)) - (10 * elapsed_time1);
    elapsed_time3 = (elapsed_clk / (pclk / 100)) - (100 * elapsed_time1 + 10 * elapsed_time2);
    printf("\nelapsed time is %d.%d%d[sec] (%d clock)\n", elapsed_time1,
           elapsed_time2, elapsed_time3, elapsed_clk);
#else
    ;
#endif /* RP1TMU */
}
