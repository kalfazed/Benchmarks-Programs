/* option-log</homesc2/kisimoto/bin/x86_64-linux/mmp.0e5f57292a30d56b82880d22059aff660de7f2a7 sp.bq -no-import-func-dependence -p 1 -cfe2 -hexconst -sort-const -pa -ignore-side-effect-of-import -reorder-blocks -rb2loop -debug-c-blocking -array-sym -adjust-array-sym -sym -auto-hmdf -no-fine -private-1pe-var-scalar-only -seq-factor -loop-report -localize-verbose 5> */
/* option-log</homesc2/kisimoto/bin/x86_64-linux/ompcbe.c17ad20d3a3f5461091f55cd15e0b4be5d00579f -c-sche --goto-return --cfe2 --while --if -b 5 --literal sp.mq> */
#define MAX(x,y) (x>y?x:y)
#define MIN(x,y) (x<y?x:y)
#define ABS(x) (x<0?-x:x)
struct __FILE_TAG {unsigned short int _cnt;unsigned char* _ptr;unsigned char* _base;unsigned char _flag;unsigned char _file;unsigned int __orientation;};
extern struct __FILE_TAG* fopen( const char* ,
       const char* );
extern int fclose(struct __FILE_TAG* );
extern int fflush(struct __FILE_TAG* );
extern int printf( const char* , ...);
extern int fprintf(struct __FILE_TAG* ,
       const char* , ...);
extern int sprintf(char* ,
       const char* , ...);
extern int scanf( const char* , ...);
extern int fscanf(struct __FILE_TAG* ,
       const char* , ...);
extern int sscanf( const char* ,
       const char* , ...);
extern int fputc(int ,
      struct __FILE_TAG* );
extern int putc(int ,
      struct __FILE_TAG* );
extern int fgetc(struct __FILE_TAG* );
extern int getc(struct __FILE_TAG* );
extern char* gets(char* );
extern char* fgets(char* ,
      int ,
      struct __FILE_TAG* );
extern int puts( const char* );
extern int fputs( const char* ,
      struct __FILE_TAG* );
extern int fseek(struct __FILE_TAG* ,
      int ,
      int );
extern unsigned int fread(void* ,
      unsigned int ,
      unsigned int ,
      struct __FILE_TAG* );
extern unsigned int fwrite( const void* ,
      unsigned int ,
      unsigned int ,
      struct __FILE_TAG* );
extern void abort();
extern int abs(int );
extern double atof( const char* );
extern int atoi( const char* );
extern int atol( const char* );
extern void* bsearch( const void* ,
       const void* ,
      unsigned int ,
      unsigned int ,
      int(* ) ( const void* E1,  const void* E2));
extern void* calloc(unsigned int ,
      unsigned int );
extern int div(int ,
      int );
extern void exit(int );
extern void free(void* );
extern char* getenv( const char* );
extern int labs(int );
extern int ldiv(int ,
      int );
extern void* malloc(unsigned int );
extern int rand();
extern double strtod( const char* ,
      char** );
extern int strtol( const char* ,
      char** ,
      int );
extern int system( const char* );
extern void* realloc(void* ,
      unsigned int );
extern void srand(unsigned int );
extern double acos(double );
extern double asin(double );
extern double atan(double );
extern double atan2(double ,
      double );
extern double ceil(double );
extern double cos(double );
extern double cosh(double );
extern double exp(double );
extern double fabs(double );
extern double floor(double );
extern double fmod(double ,
      double );
extern double frexp(double ,
      int* );
extern double ldexp(double ,
      int );
extern double log(double );
extern double log10(double );
extern double modf(double ,
      double* );
extern double pow(double ,
      double );
extern double sin(double );
extern double sinh(double );
extern double sqrt(double );
extern double tan(double );
extern double tanh(double );
extern float acosf(float );
extern float asinf(float );
extern float atanf(float );
extern float atan2f(float ,
      float );
extern float ceilf(float );
extern float cosf(float );
extern float coshf(float );
extern float expf(float );
extern float fabsf(float );
extern float floorf(float );
extern float fmodf(float ,
      float );
extern float frexpf(float ,
      int* );
extern float ldexpf(float ,
      int );
extern float logf(float );
extern float log10f(float );
extern float modff(float ,
      float* );
extern float powf(float ,
      float );
extern float sinf(float );
extern float sinhf(float );
extern float sqrtf(float );
extern float tanf(float );
extern float tanhf(float );
extern double randlc(double* ,
      double );
extern void vranlc(int ,
      double* ,
      double ,
      double* );
extern void timer_clear(int );
extern void timer_start(int );
extern void timer_stop(int );
extern double timer_read(int );
extern void c_print_results(char* ,
      char ,
      int ,
      int ,
      int ,
      int ,
      int ,
      double ,
      double ,
      char* ,
      int ,
      char* ,
      char* ,
      char* ,
      char* ,
      char* ,
      char* ,
      char* ,
      char* ,
      char* );
static double tx1/* tx1 */;
static double tx2/* tx2 */;
static double tx3/* tx3 */;
static double ty1/* ty1 */;
static double ty2/* ty2 */;
static double ty3/* ty3 */;
static double tz1/* tz1 */;
static double tz2/* tz2 */;
static double tz3/* tz3 */;
static double dx1/* dx1 */;
static double dx2/* dx2 */;
static double dx3/* dx3 */;
static double dx4/* dx4 */;
static double dx5/* dx5 */;
static double dy1/* dy1 */;
static double dy2/* dy2 */;
static double dy3/* dy3 */;
static double dy4/* dy4 */;
static double dy5/* dy5 */;
static double dz1/* dz1 */;
static double dz2/* dz2 */;
static double dz3/* dz3 */;
static double dz4/* dz4 */;
static double dz5/* dz5 */;
static double dssp/* dssp */;
static double dt/* dt */;
static double dxmax/* dxmax */;
static double dymax/* dymax */;
static double dzmax/* dzmax */;
static double xxcon1/* xxcon1 */;
static double xxcon2/* xxcon2 */;
static double xxcon3/* xxcon3 */;
static double xxcon4/* xxcon4 */;
static double xxcon5/* xxcon5 */;
static double dx1tx1/* dx1tx1 */;
static double dx2tx1/* dx2tx1 */;
static double dx3tx1/* dx3tx1 */;
static double dx4tx1/* dx4tx1 */;
static double dx5tx1/* dx5tx1 */;
static double yycon1/* yycon1 */;
static double yycon2/* yycon2 */;
static double yycon3/* yycon3 */;
static double yycon4/* yycon4 */;
static double yycon5/* yycon5 */;
static double dy1ty1/* dy1ty1 */;
static double dy2ty1/* dy2ty1 */;
static double dy3ty1/* dy3ty1 */;
static double dy4ty1/* dy4ty1 */;
static double dy5ty1/* dy5ty1 */;
static double zzcon1/* zzcon1 */;
static double zzcon2/* zzcon2 */;
static double zzcon3/* zzcon3 */;
static double zzcon4/* zzcon4 */;
static double zzcon5/* zzcon5 */;
static double dz1tz1/* dz1tz1 */;
static double dz2tz1/* dz2tz1 */;
static double dz3tz1/* dz3tz1 */;
static double dz4tz1/* dz4tz1 */;
static double dz5tz1/* dz5tz1 */;
static double dnxm1/* dnxm1 */;
static double dnym1/* dnym1 */;
static double dnzm1/* dnzm1 */;
static double c1c2/* c1c2 */;
static double c1c5/* c1c5 */;
static double c3c4/* c3c4 */;
static double c1345/* c1345 */;
static double conz1/* conz1 */;
static double c1/* c1 */;
static double c2/* c2 */;
static double c3/* c3 */;
static double c4/* c4 */;
static double c5/* c5 */;
static double c4dssp/* c4dssp */;
static double c5dssp/* c5dssp */;
static double dtdssp/* dtdssp */;
static double dttx1/* dttx1 */;
static double bt/* bt */;
static double dttx2/* dttx2 */;
static double dtty1/* dtty1 */;
static double dtty2/* dtty2 */;
static double dttz1/* dttz1 */;
static double dttz2/* dttz2 */;
static double c2dttx1/* c2dttx1 */;
static double c2dtty1/* c2dtty1 */;
static double c2dttz1/* c2dttz1 */;
static double comz1/* comz1 */;
static double comz4/* comz4 */;
static double comz5/* comz5 */;
static double comz6/* comz6 */;
static double c3c4tx3/* c3c4tx3 */;
static double c3c4ty3/* c3c4ty3 */;
static double c3c4tz3/* c3c4tz3 */;
static double c2iv/* c2iv */;
static double con43/* con43 */;
static double con16/* con16 */;
static int grid_points[3]/* grid_points */;
static double ce[13][5]/* ce */;
static double u[5][13][13][13]/* u */;
static double us[13][13][13]/* us */;
static double vs[13][13][13]/* vs */;
static double ws[13][13][13]/* ws */;
static double qs[13][13][13]/* qs */;
static double ainv[13][13][13]/* ainv */;
static double rho_i[13][13][13]/* rho_i */;
static double speed[13][13][13]/* speed */;
static double square[13][13][13]/* square */;
static double rhs[5][13][13][13]/* rhs */;
static double forcing[5][13][13][13]/* forcing */;
static double lhs[15][13][13][13]/* lhs */;
static double cv[12]/* cv */;
static double rhon[12]/* rhon */;
static double rhos[12]/* rhos */;
static double rhoq[12]/* rhoq */;
static double cuf[12]/* cuf */;
static double q[12]/* q */;
static double ue[5][12]/* ue */;
static double buf[5][12]/* buf */;
/* == VARIABLE FOR DISTRIBUTED DYNAMIC SCHEDULER (mtg_id=1) == */
volatile int M0_CL0_PC0_TASKQ1_PC0[50];
volatile int M0_CL0_PC0_TASKQ_PTRS1_PC0;
volatile int M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0;
volatile int M0_CL0_PC0_SCHE_FLG1[1];



double M101_CL0_PC0_Pface[2][3][5];
double M101_CL0_PC0_temp[5];


double M99_CL0_PC0_dtemp[5];


double M112_CL0_PC0_xcrref[5];
double M112_CL0_PC0_xceref[5];
double M112_CL0_PC0_xcrdif[5];
double M112_CL0_PC0_xcedif[5];
double M112_CL0_PC0_xce[5];
double M112_CL0_PC0_xcr[5];








double M97_CL0_PC0_u_exact[5];









/* OnChip CSM Data for Module 0 <*MAIN*> */


/* OnChip CSM Data for Module 109 <set_constants> */


/* OnChip CSM Data for Module 101 <initialize> */


/* OnChip CSM Data for Module 102 <lhsinit> */


/* OnChip CSM Data for Module 99 <exact_rhs> */


/* OnChip CSM Data for Module 96 <adi> */


/* OnChip CSM Data for Module 112 <verify> */


/* OnChip CSM Data for Module 100 <exact_solution> */


/* OnChip CSM Data for Module 108 <compute_rhs> */


/* OnChip CSM Data for Module 110 <txinvr> */


/* OnChip CSM Data for Module 113 <x_solve> */


/* OnChip CSM Data for Module 114 <y_solve> */


/* OnChip CSM Data for Module 115 <z_solve> */


/* OnChip CSM Data for Module 95 <add> */


/* OnChip CSM Data for Module 97 <error_norm> */


/* OnChip CSM Data for Module 98 <rhs_norm> */


/* OnChip CSM Data for Module 103 <lhsx> */


/* OnChip CSM Data for Module 106 <ninvr> */


/* OnChip CSM Data for Module 104 <lhsy> */


/* OnChip CSM Data for Module 107 <pinvr> */


/* OnChip CSM Data for Module 105 <lhsz> */


/* OnChip CSM Data for Module 111 <tzetar> */

void oscar_sche_state(int mtg_id, int cl_no, int state_no);

void ddsche_init_mtg1_cl0_pc0_pe0_(){
/* [ DD SCHEDULER VARIABLE INITIALIZE ] */
M0_CL0_PC0_TASKQ1_PC0[1] = 1;
M0_CL0_PC0_TASKQ1_PC0[2] = 0;
M0_CL0_PC0_TASKQ1_PC0[3] = 0;
M0_CL0_PC0_TASKQ1_PC0[4] = 0;
M0_CL0_PC0_TASKQ1_PC0[5] = 0;
M0_CL0_PC0_TASKQ1_PC0[6] = 0;
M0_CL0_PC0_TASKQ1_PC0[7] = 0;
M0_CL0_PC0_TASKQ1_PC0[8] = 0;
M0_CL0_PC0_TASKQ1_PC0[9] = 0;
M0_CL0_PC0_TASKQ1_PC0[10] = 0;
M0_CL0_PC0_TASKQ1_PC0[11] = 0;
M0_CL0_PC0_TASKQ1_PC0[12] = 0;
M0_CL0_PC0_TASKQ1_PC0[13] = 0;
M0_CL0_PC0_TASKQ1_PC0[14] = 0;
M0_CL0_PC0_TASKQ1_PC0[15] = 0;
M0_CL0_PC0_TASKQ1_PC0[16] = 0;
M0_CL0_PC0_TASKQ1_PC0[17] = 0;
M0_CL0_PC0_TASKQ1_PC0[18] = 0;
M0_CL0_PC0_TASKQ1_PC0[19] = 0;
M0_CL0_PC0_TASKQ1_PC0[20] = 0;
M0_CL0_PC0_TASKQ1_PC0[21] = 0;
M0_CL0_PC0_TASKQ1_PC0[22] = 0;
M0_CL0_PC0_TASKQ1_PC0[23] = 0;
M0_CL0_PC0_TASKQ1_PC0[24] = 0;
M0_CL0_PC0_TASKQ1_PC0[25] = 0;
M0_CL0_PC0_TASKQ1_PC0[26] = 0;
M0_CL0_PC0_TASKQ1_PC0[27] = 0;
M0_CL0_PC0_TASKQ1_PC0[28] = 0;
M0_CL0_PC0_TASKQ1_PC0[29] = 0;
M0_CL0_PC0_TASKQ1_PC0[30] = 0;
M0_CL0_PC0_TASKQ1_PC0[31] = 0;
M0_CL0_PC0_TASKQ1_PC0[32] = 0;
M0_CL0_PC0_TASKQ1_PC0[33] = 0;
M0_CL0_PC0_TASKQ1_PC0[34] = 0;
M0_CL0_PC0_TASKQ1_PC0[35] = 0;
M0_CL0_PC0_TASKQ1_PC0[36] = 0;
M0_CL0_PC0_TASKQ1_PC0[37] = 0;
M0_CL0_PC0_TASKQ1_PC0[38] = 0;
M0_CL0_PC0_TASKQ1_PC0[39] = 0;
M0_CL0_PC0_TASKQ1_PC0[40] = 0;
M0_CL0_PC0_TASKQ1_PC0[41] = 0;
M0_CL0_PC0_TASKQ1_PC0[42] = 0;
M0_CL0_PC0_TASKQ1_PC0[43] = 0;
M0_CL0_PC0_TASKQ1_PC0[44] = 0;
M0_CL0_PC0_TASKQ1_PC0[45] = 0;
M0_CL0_PC0_TASKQ1_PC0[46] = 0;
M0_CL0_PC0_TASKQ1_PC0[47] = 0;
M0_CL0_PC0_TASKQ1_PC0[48] = 0;
M0_CL0_PC0_TASKQ1_PC0[49] = 0;

M0_CL0_PC0_TASKQ_PTRS1_PC0 = 1;

M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0 = 1;


}

int dd_gettask_mtg1_cl0_pc0_pe0_(){
while(M0_CL0_PC0_TASKQ_PTRS1_PC0 < M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0){
}
return M0_CL0_PC0_TASKQ1_PC0[M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0];
}

void ddsche_mf_mtg1_cl0_pc0_pe0_(){
M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0++;
}

void ddsche_setmt_mtg1_cl0_pc0_(int *MT){
M0_CL0_PC0_TASKQ1_PC0[M0_CL0_PC0_TASKQ_PTRS1_PC0 + 1] = *MT;
M0_CL0_PC0_TASKQ_PTRS1_PC0++;
}
void oscar_sche_init(int mtg_id, int cl_no, int pc_no, int pe_no)
{
if(mtg_id==1) {
if(cl_no == 0 && pc_no == 0 && pe_no == 0)
ddsche_init_mtg1_cl0_pc0_pe0_();
}
}
int oscar_sche_gettask(int mtg_id, int cl_no, int pc_no, int pe_no)
{
int tmp;
if(mtg_id==1){
if(cl_no == 0 && pc_no == 0 && pe_no == 0)
tmp = dd_gettask_mtg1_cl0_pc0_pe0_();
}
return tmp;
}
void oscar_sche_state(int mtg_id, int cl_no, int state_no)
{
}
void oscar_sche_mfbs(int mtg_id, int cl_no, int mt_no)
{
}
void oscar_sche_mtfinish(int mtg_id, int cl_no, int pc_no, int pe_no)
{
if(mtg_id==1){
if(cl_no == 0 && pc_no == 0 && pe_no == 0)
ddsche_mf_mtg1_cl0_pc0_pe0_();
}
}
void oscar_sche_rbbe(int mtg_id, int cl_no, int pc_no, int pe_no)
{
}
void oscar_sche_setmt(int mtg_id, int cl_no, int pc_no, int mt_no)
{
if(mtg_id==1){
if(cl_no == 0 && pc_no == 0)
ddsche_setmt_mtg1_cl0_pc0_(&mt_no);
}
}
int MAIN_PE0(int argc,
      char** argv);
static void set_constants_PE0();
static void initialize_PE0();
static void lhsinit_PE0();
static void exact_rhs_PE0();
static void adi_PE0();
static void verify_PE0(int no_time_steps,
      char* class,
      int* verified);
static void exact_solution_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void compute_rhs_PE0();
static void txinvr_PE0();
static void x_solve_PE0();
static void y_solve_PE0();
static void z_solve_PE0();
static void add_PE0();
static void error_norm_PE0(double* rms);
static void rhs_norm_PE0(double* rms);
static void lhsx_PE0();
static void ninvr_PE0();
static void lhsy_PE0();
static void pinvr_PE0();
static void lhsz_PE0();
static void tzetar_PE0();
/*== VARIABLE FOR GROUP BARRIER FLAG ==*/
int main(int argc,char** argv) {
int retvar;
MAIN_PE0(argc,argv);
return 0;}
/* ******************* */
/* *** Module 0: *MAIN* */
/* ******************* */
int MAIN_PE0(int argc,
      char** argv)
{
      int niter/* niter */;
      int step_NO99/* step */;
      double mflops/* mflops */;
      double tmax/* tmax */;
      int nthreads/* nthreads */;
      int verified/* verified */;
      char class/* class */;
      struct __FILE_TAG* fp/* fp */;
      int V106/* $tmp0 */;
      int V107/* $tmp1 */;
      int V108/* $tmp2 */;
      int V109/* $tmp3 */;
      int V110/* $tmp4 */;
      int V111/* $tmp5 */;
      int V112/* $tmp6 */;
      int V113/* $tmp7 */;
      int V114/* $tmp8 */;
      int V115/* $tmp9 */;
      int V116/* $tmp10 */;
      int V117/* $tmp11 */;
      int V118/* $tmp12 */;
      int V119/* $tmp13 */;
      int V120/* $tmp14 */;
      int V121/* $tmp15 */;
      int V122/* $retvar */;
      int NULL_VAR123/* (null) */;
      int NULL_VAR124/* (null) */;
      int step_NO125/* step */;
int schemt_mtg1         ;
int setmt_no;

/* @decl:pe0:module0@ */
/* == *MAIN*#block1 ==*/
L20002:;
oscar_sche_init(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
L20003:;
schemt_mtg1          = oscar_sche_gettask(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
if(schemt_mtg1          == 1) goto L40001;
if(schemt_mtg1          == 2) goto L40002;
if(schemt_mtg1          == 3) goto L40003;
if(schemt_mtg1          == 4) goto L40004;
if(schemt_mtg1          == 5) goto L40005;
if(schemt_mtg1          == 6) goto L40006;
if(schemt_mtg1          == 7) goto L40007;
if(schemt_mtg1          == 8) goto L40008;
if(schemt_mtg1          == 9) goto L40009;
if(schemt_mtg1          == 10) goto L40010;
if(schemt_mtg1          == 11) goto L40011;
if(schemt_mtg1          == 12) goto L40012;
if(schemt_mtg1          == 13) goto L40013;
if(schemt_mtg1          == 14) goto L40014;
if(schemt_mtg1          == 15) goto L40015;
if(schemt_mtg1          == 16) goto L40016;
if(schemt_mtg1          == 17) goto L40017;
if(schemt_mtg1          == 18) goto L40018;
if(schemt_mtg1          == 19) goto L40019;
if(schemt_mtg1          == 20) goto L40020;
if(schemt_mtg1          == 21) goto L40021;
if(schemt_mtg1          == 22) goto L40022;
if(schemt_mtg1          == 23) goto L40023;
if(schemt_mtg1          == 24) goto L40024;
if(schemt_mtg1          == 25) goto L40025;
if(schemt_mtg1          == 26) goto L40026;
if(schemt_mtg1          == 27) goto L40027;
if(schemt_mtg1          == 28) goto L40028;
if(schemt_mtg1          == 29) goto L40029;
if(schemt_mtg1          == 30) goto L40030;
if(schemt_mtg1          == 31) goto L40031;
if(schemt_mtg1          == 32) goto L40032;
if(schemt_mtg1          == 33) goto L40033;
if(schemt_mtg1          == 34) goto L40034;
if(schemt_mtg1          == 35) goto L40035;
if(schemt_mtg1          == 36) goto L40036;
if(schemt_mtg1          == 37) goto L40037;
if(schemt_mtg1          == 38) goto L40038;
if(schemt_mtg1          == 39) goto L40039;
if(schemt_mtg1          == 40) goto L40040;
if(schemt_mtg1          == 41) goto L40041;
if(schemt_mtg1          == 42) goto L40042;
if(schemt_mtg1          == 43) goto L40043;
if(schemt_mtg1          == 44) goto L40044;
if(schemt_mtg1          == 45) goto L40045;
if(schemt_mtg1          == 46) goto L40046;
if(schemt_mtg1          == 47) goto L40047;
if(schemt_mtg1          == 48) goto L40048;
if(schemt_mtg1          == 49) goto L40049;
/* == *MAIN*#block1.bb1 ==*/
L40001:;
/* @mtstart:pe0:module0:mt1@ */
      nthreads = 1;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/2);

/* @mtend:pe0:module0:mt1@ */
/* == MT1.1 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb2 ==*/
L40002:;
/* @mtstart:pe0:module0:mt2@ */
      V106 = printf((&*"\n\n NAS Parallel Benchmarks 2.3 OpenMP C version - SP Benchmark\n\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/3);

/* @mtend:pe0:module0:mt2@ */
/* == MT1.2 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb3 ==*/
L40003:;
/* @mtstart:pe0:module0:mt3@ */
      fp = fopen((&*"inputsp.data"),(&*"r"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/4);

/* @mtend:pe0:module0:mt3@ */
/* == MT1.3 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb4 ==*/
L40004:;
/* @mtstart:pe0:module0:mt4@ */
if(!(fp!=0)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/15);
}
if(fp!=0){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/5);
}

/* @mtend:pe0:module0:mt4@ */
/* == MT1.4 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb5 ==*/
L40005:;
/* @mtstart:pe0:module0:mt5@ */
      V107 = printf((&*" Reading from input file inputsp.data\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/6);

/* @mtend:pe0:module0:mt5@ */
/* == MT1.5 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb6 ==*/
L40006:;
/* @mtstart:pe0:module0:mt6@ */
      V108 = fscanf(fp,(&*"%d"),(&niter));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/7);

/* @mtend:pe0:module0:mt6@ */
/* == MT1.6 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.rb7 ==*/
L40007:;
/* @mtstart:pe0:module0:mt7@ */
/* == *MAIN*#block1.rb7.bb1 ==*/
L3:;
/* == *MAIN*#block1.rb7.bb2 ==*/
      V109 = fgetc(fp);
/* == *MAIN*#block1.rb7.bb3 ==*/
if(!(V109!=10)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/8);
}
      NULL_VAR123 = V109!=10;
if (!(NULL_VAR123)) goto L26;
/* == *MAIN*#block1.rb7.bb4 ==*/
      goto L3;
L26:;

/* @mtend:pe0:module0:mt7@ */
/* == MT1.7 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb8 ==*/
L40008:;
/* @mtstart:pe0:module0:mt8@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/9);

/* @mtend:pe0:module0:mt8@ */
/* == MT1.8 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb9 ==*/
L40009:;
/* @mtstart:pe0:module0:mt9@ */
      V110 = fscanf(fp,(&*"%lf"),(&dt));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/10);

/* @mtend:pe0:module0:mt9@ */
/* == MT1.9 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.rb10 ==*/
L40010:;
/* @mtstart:pe0:module0:mt10@ */
/* == *MAIN*#block1.rb10.bb1 ==*/
L5:;
/* == *MAIN*#block1.rb10.bb2 ==*/
      V111 = fgetc(fp);
/* == *MAIN*#block1.rb10.bb3 ==*/
if(!(V111!=10)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/11);
}
      NULL_VAR124 = V111!=10;
if (!(NULL_VAR124)) goto L27;
/* == *MAIN*#block1.rb10.bb4 ==*/
      goto L5;
L27:;

/* @mtend:pe0:module0:mt10@ */
/* == MT1.10 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb11 ==*/
L40011:;
/* @mtstart:pe0:module0:mt11@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/12);

/* @mtend:pe0:module0:mt11@ */
/* == MT1.11 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb12 ==*/
L40012:;
/* @mtstart:pe0:module0:mt12@ */
      V112 = fscanf(fp,(&*"%d%d%d"),(&grid_points[0]),(&grid_points[1]),(&grid_points[2]));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/13);

/* @mtend:pe0:module0:mt12@ */
/* == MT1.12 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb13 ==*/
L40013:;
/* @mtstart:pe0:module0:mt13@ */
      V113 = fclose(fp);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/14);

/* @mtend:pe0:module0:mt13@ */
/* == MT1.13 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb14 ==*/
L40014:;
/* @mtstart:pe0:module0:mt14@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/18);

/* @mtend:pe0:module0:mt14@ */
/* == MT1.14 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb15 ==*/
L40015:;
/* @mtstart:pe0:module0:mt15@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/16);

/* @mtend:pe0:module0:mt15@ */
/* == MT1.15 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb16 ==*/
L40016:;
/* @mtstart:pe0:module0:mt16@ */
      V114 = printf((&*" No input file inputsp.data. Using compiled defaults"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/17);

/* @mtend:pe0:module0:mt16@ */
/* == MT1.16 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb17 ==*/
L40017:;
/* @mtstart:pe0:module0:mt17@ */
      niter = 100;
      dt = 1.4999999999999999E-02;
      grid_points[0] = 12;
      grid_points[1] = 12;
      grid_points[2] = 12;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/18);

/* @mtend:pe0:module0:mt17@ */
/* == MT1.17 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb18 ==*/
L40018:;
/* @mtstart:pe0:module0:mt18@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/19);

/* @mtend:pe0:module0:mt18@ */
/* == MT1.18 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb19 ==*/
L40019:;
/* @mtstart:pe0:module0:mt19@ */
      V115 = printf((&*" Size: %3dx%3dx%3d\n"),grid_points[0],grid_points[1],grid_points[2]);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/20);

/* @mtend:pe0:module0:mt19@ */
/* == MT1.19 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb20 ==*/
L40020:;
/* @mtstart:pe0:module0:mt20@ */
      V116 = printf((&*" Iterations: %3d   dt: %10.6f\n"),niter,dt);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/21);

/* @mtend:pe0:module0:mt20@ */
/* == MT1.20 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb21 ==*/
L40021:;
/* @mtstart:pe0:module0:mt21@ */
if(!(grid_points[0]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/22);
}
if(grid_points[0]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/24);
}

/* @mtend:pe0:module0:mt21@ */
/* == MT1.21 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb22 ==*/
L40022:;
/* @mtstart:pe0:module0:mt22@ */
if(!(grid_points[1]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/23);
}
if(grid_points[1]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/24);
}

/* @mtend:pe0:module0:mt22@ */
/* == MT1.22 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb23 ==*/
L40023:;
/* @mtstart:pe0:module0:mt23@ */
if(!(grid_points[2]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/25);
}
if(grid_points[2]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/24);
}

/* @mtend:pe0:module0:mt23@ */
/* == MT1.23 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb24 ==*/
L40024:;
/* @mtstart:pe0:module0:mt24@ */
      V117 = 1;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/26);

/* @mtend:pe0:module0:mt24@ */
/* == MT1.24 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb25 ==*/
L40025:;
/* @mtstart:pe0:module0:mt25@ */
      V117 = 0;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/26);

/* @mtend:pe0:module0:mt25@ */
/* == MT1.25 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb26 ==*/
L40026:;
/* @mtstart:pe0:module0:mt26@ */
if(!(V117!=0)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/30);
}
if(V117!=0){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/27);
}

/* @mtend:pe0:module0:mt26@ */
/* == MT1.26 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb27 ==*/
L40027:;
/* @mtstart:pe0:module0:mt27@ */
      V118 = printf((&*"%d, %d, %d\n"),grid_points[0],grid_points[1],grid_points[2]);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/28);

/* @mtend:pe0:module0:mt27@ */
/* == MT1.27 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb28 ==*/
L40028:;
/* @mtstart:pe0:module0:mt28@ */
      V119 = printf((&*" Problem size too big for compiled array sizes\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/29);

/* @mtend:pe0:module0:mt28@ */
/* == MT1.28 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb29 ==*/
L40029:;
/* @mtstart:pe0:module0:mt29@ */
      exit(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/30);

/* @mtend:pe0:module0:mt29@ */
/* == MT1.29 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb30 ==*/
L40030:;
/* @mtstart:pe0:module0:mt30@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/31);

/* @mtend:pe0:module0:mt30@ */
/* == MT1.30 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb31 ==*/
L40031:;
/* @mtstart:pe0:module0:mt31@ */
      set_constants_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/32);

/* @mtend:pe0:module0:mt31@ */
/* == MT1.31 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb32 ==*/
L40032:;
/* @mtstart:pe0:module0:mt32@ */
      initialize_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/33);

/* @mtend:pe0:module0:mt32@ */
/* == MT1.32 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb33 ==*/
L40033:;
/* @mtstart:pe0:module0:mt33@ */
      lhsinit_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/34);

/* @mtend:pe0:module0:mt33@ */
/* == MT1.33 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb34 ==*/
L40034:;
/* @mtstart:pe0:module0:mt34@ */
      exact_rhs_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/35);

/* @mtend:pe0:module0:mt34@ */
/* == MT1.34 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb35 ==*/
L40035:;
/* @mtstart:pe0:module0:mt35@ */
      adi_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/36);

/* @mtend:pe0:module0:mt35@ */
/* == MT1.35 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb36 ==*/
L40036:;
/* @mtstart:pe0:module0:mt36@ */
      initialize_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/37);

/* @mtend:pe0:module0:mt36@ */
/* == MT1.36 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb37 ==*/
L40037:;
/* @mtstart:pe0:module0:mt37@ */
      timer_clear(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/38);

/* @mtend:pe0:module0:mt37@ */
/* == MT1.37 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb38 ==*/
L40038:;
/* @mtstart:pe0:module0:mt38@ */
      timer_start(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/39);

/* @mtend:pe0:module0:mt38@ */
/* == MT1.38 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.loop39 ==*/
L40039:;
/* @mtstart:pe0:module0:mt39@ */
      for (step_NO125 = 1 ; step_NO125 <= niter ; step_NO125 += 1){
/* == *MAIN*#block1.loop39.bb1 ==*/
if (!(step_NO125%20==0)) goto L22;
      goto L20;
/* == *MAIN*#block1.loop39.bb2 ==*/
L22:;
if (step_NO125==1) {
 /* == *MAIN*#block1.loop39.bb3 ==*/
L20:;
      V120 = 1;
/* == *MAIN*#block1.loop39.bb4 ==*/
} else {
      V120 = 0;
/* == *MAIN*#block1.loop39.bb5 ==*/
}
if (V120!=0) {
 /* == *MAIN*#block1.loop39.bb6 ==*/
      V121 = printf((&*" Time step %4d\n"),step_NO125);
/* == *MAIN*#block1.loop39.bb7 ==*/
}
/* == *MAIN*#block1.loop39.sb8 ==*/
      adi_PE0();
      }
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/40);

/* @mtend:pe0:module0:mt39@ */
/* == MT1.39 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb40 ==*/
L40040:;
/* @mtstart:pe0:module0:mt40@ */
      timer_stop(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/41);

/* @mtend:pe0:module0:mt40@ */
/* == MT1.40 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb41 ==*/
L40041:;
/* @mtstart:pe0:module0:mt41@ */
      tmax = timer_read(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/42);

/* @mtend:pe0:module0:mt41@ */
/* == MT1.41 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb42 ==*/
L40042:;
/* @mtstart:pe0:module0:mt42@ */
      verify_PE0(niter,(&class),(&verified));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/43);

/* @mtend:pe0:module0:mt42@ */
/* == MT1.42 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb43 ==*/
L40043:;
/* @mtstart:pe0:module0:mt43@ */
if(!(tmax!=(double)(0))){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/45);
}
if(tmax!=(double)(0)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/44);
}

/* @mtend:pe0:module0:mt43@ */
/* == MT1.43 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb44 ==*/
L40044:;
/* @mtstart:pe0:module0:mt44@ */
      mflops = (8.8117399999999998E+02*pow(1.2000000000000000E+01, 3.0000000000000000E+00)-6.7448304000000004E+05+1.3781400000000000E+05-1.9272400000000001E+04)*(double)(niter)/ (tmax*1.0000000000000000E+06);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/46);

/* @mtend:pe0:module0:mt44@ */
/* == MT1.44 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb45 ==*/
L40045:;
/* @mtstart:pe0:module0:mt45@ */
      mflops = 0.0000000000000000E+00;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/46);

/* @mtend:pe0:module0:mt45@ */
/* == MT1.45 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb46 ==*/
L40046:;
/* @mtstart:pe0:module0:mt46@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/47);

/* @mtend:pe0:module0:mt46@ */
/* == MT1.46 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb47 ==*/
L40047:;
/* @mtstart:pe0:module0:mt47@ */
      c_print_results((&*"SP"),class,grid_points[0],grid_points[1],grid_points[2],niter,nthreads,tmax,mflops,(&*"          floating point"),verified,(&*"2.3"),(&*"05 Nov 2011"),(&*"gcc"),(&*"gcc"),(&*"(none)"),(&*"-I../common"),(&*"-O3 -pg"),(&*"-lm"),(&*"(none)"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/48);

/* @mtend:pe0:module0:mt47@ */
/* == MT1.47 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb48 ==*/
L40048:;
/* @mtstart:pe0:module0:mt48@ */
      V122 = 0;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/49);

/* @mtend:pe0:module0:mt48@ */
/* == MT1.48 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.emt49 ==*/
L40049:;
/* @mtstart:pe0:module0:mt49@ */
      goto L25;

/* @mtend:pe0:module0:mt49@ */
/* == MT1.49 END == */
/* == Hierarchy H:1 END == */
L25:;
goto __RETURN;
__RETURN:;
return V122;
}
/* ******************* */
/* *** Module 109: set_constants */
/* ******************* */
static void set_constants_PE0()
{
      double V96/* $tmp0 */;
      double V97/* $tmp1 */;
      double V98/* $tmp2 */;
      double V99/* $tmp3 */;
      double V100/* $tmp4 */;
      double V101/* $tmp5 */;

/* @decl:pe0:module109@ */
/* == set_constants#block1 ==*/
/* == set_constants#block1.bb1 ==*/
      ce[0][0] = 2.0000000000000000E+00;
      ce[1][0] = 0.0000000000000000E+00;
      ce[2][0] = 0.0000000000000000E+00;
      ce[3][0] = 4.0000000000000000E+00;
      ce[4][0] = 5.0000000000000000E+00;
      ce[5][0] = 3.0000000000000000E+00;
      ce[6][0] = 5.0000000000000000E-01;
      ce[7][0] = 2.0000000000000000E-02;
      ce[8][0] = 1.0000000000000000E-02;
      ce[9][0] = 2.9999999999999999E-02;
      ce[10][0] = 5.0000000000000000E-01;
      ce[11][0] = 4.0000000000000002E-01;
      ce[12][0] = 2.9999999999999999E-01;
      ce[0][1] = 1.0000000000000000E+00;
      ce[1][1] = 0.0000000000000000E+00;
      ce[2][1] = 0.0000000000000000E+00;
      ce[3][1] = 0.0000000000000000E+00;
      ce[4][1] = 1.0000000000000000E+00;
      ce[5][1] = 2.0000000000000000E+00;
      ce[6][1] = 3.0000000000000000E+00;
      ce[7][1] = 1.0000000000000000E-02;
      ce[8][1] = 2.9999999999999999E-02;
      ce[9][1] = 2.0000000000000000E-02;
      ce[10][1] = 4.0000000000000002E-01;
      ce[11][1] = 2.9999999999999999E-01;
      ce[12][1] = 5.0000000000000000E-01;
      ce[0][2] = 2.0000000000000000E+00;
      ce[1][2] = 2.0000000000000000E+00;
      ce[2][2] = 0.0000000000000000E+00;
      ce[3][2] = 0.0000000000000000E+00;
      ce[4][2] = 0.0000000000000000E+00;
      ce[5][2] = 2.0000000000000000E+00;
      ce[6][2] = 3.0000000000000000E+00;
      ce[7][2] = 4.0000000000000001E-02;
      ce[8][2] = 2.9999999999999999E-02;
      ce[9][2] = 5.0000000000000003E-02;
      ce[10][2] = 2.9999999999999999E-01;
      ce[11][2] = 5.0000000000000000E-01;
      ce[12][2] = 4.0000000000000002E-01;
      ce[0][3] = 2.0000000000000000E+00;
      ce[1][3] = 2.0000000000000000E+00;
      ce[2][3] = 0.0000000000000000E+00;
      ce[3][3] = 0.0000000000000000E+00;
      ce[4][3] = 0.0000000000000000E+00;
      ce[5][3] = 2.0000000000000000E+00;
      ce[6][3] = 3.0000000000000000E+00;
      ce[7][3] = 2.9999999999999999E-02;
      ce[8][3] = 5.0000000000000003E-02;
      ce[9][3] = 4.0000000000000001E-02;
      ce[10][3] = 2.0000000000000001E-01;
      ce[11][3] = 1.0000000000000001E-01;
      ce[12][3] = 2.9999999999999999E-01;
      ce[0][4] = 5.0000000000000000E+00;
      ce[1][4] = 4.0000000000000000E+00;
      ce[2][4] = 3.0000000000000000E+00;
      ce[3][4] = 2.0000000000000000E+00;
      ce[4][4] = 1.0000000000000001E-01;
      ce[5][4] = 4.0000000000000002E-01;
      ce[6][4] = 2.9999999999999999E-01;
      ce[7][4] = 5.0000000000000003E-02;
      ce[8][4] = 4.0000000000000001E-02;
      ce[9][4] = 2.9999999999999999E-02;
      ce[10][4] = 1.0000000000000001E-01;
      ce[11][4] = 2.9999999999999999E-01;
      ce[12][4] = 2.0000000000000001E-01;
      c1 = 1.3999999999999999E+00;
      c2 = 4.0000000000000002E-01;
      c3 = 1.0000000000000001E-01;
      c4 = 1.0000000000000000E+00;
      c5 = 1.3999999999999999E+00;
      bt = sqrt(5.0000000000000000E-01);
      dnxm1 = 1.0000000000000000E+00/ (double)(grid_points[0]-1);
      dnym1 = 1.0000000000000000E+00/ (double)(grid_points[1]-1);
      dnzm1 = 1.0000000000000000E+00/ (double)(grid_points[2]-1);
      c1c2 = c1*c2;
      c1c5 = c1*c5;
      c3c4 = c3*c4;
      c1345 = c1c5*c3c4;
      conz1 = 1.0000000000000000E+00-c1c5;
      tx1 = 1.0000000000000000E+00/ (dnxm1*dnxm1);
      tx2 = 1.0000000000000000E+00/ (2.0000000000000000E+00*dnxm1);
      tx3 = 1.0000000000000000E+00/ dnxm1;
      ty1 = 1.0000000000000000E+00/ (dnym1*dnym1);
      ty2 = 1.0000000000000000E+00/ (2.0000000000000000E+00*dnym1);
      ty3 = 1.0000000000000000E+00/ dnym1;
      tz1 = 1.0000000000000000E+00/ (dnzm1*dnzm1);
      tz2 = 1.0000000000000000E+00/ (2.0000000000000000E+00*dnzm1);
      tz3 = 1.0000000000000000E+00/ dnzm1;
      dx1 = 7.5000000000000000E-01;
      dx2 = 7.5000000000000000E-01;
      dx3 = 7.5000000000000000E-01;
      dx4 = 7.5000000000000000E-01;
      dx5 = 7.5000000000000000E-01;
      dy1 = 7.5000000000000000E-01;
      dy2 = 7.5000000000000000E-01;
      dy3 = 7.5000000000000000E-01;
      dy4 = 7.5000000000000000E-01;
      dy5 = 7.5000000000000000E-01;
      dz1 = 1.0000000000000000E+00;
      dz2 = 1.0000000000000000E+00;
      dz3 = 1.0000000000000000E+00;
      dz4 = 1.0000000000000000E+00;
      dz5 = 1.0000000000000000E+00;
if (dx3>dx4) {
 /* == set_constants#block1.bb2 ==*/
      V96 = dx3;
/* == set_constants#block1.bb3 ==*/
} else {
      V96 = dx4;
/* == set_constants#block1.bb4 ==*/
}
      dxmax = V96;
if (dy2>dy4) {
 /* == set_constants#block1.bb5 ==*/
      V97 = dy2;
/* == set_constants#block1.bb6 ==*/
} else {
      V97 = dy4;
/* == set_constants#block1.bb7 ==*/
}
      dymax = V97;
if (dz2>dz3) {
 /* == set_constants#block1.bb8 ==*/
      V98 = dz2;
/* == set_constants#block1.bb9 ==*/
} else {
      V98 = dz3;
/* == set_constants#block1.bb10 ==*/
}
      dzmax = V98;
if (dy1>dz1) {
 /* == set_constants#block1.bb11 ==*/
      V99 = dy1;
/* == set_constants#block1.bb12 ==*/
} else {
      V99 = dz1;
/* == set_constants#block1.bb13 ==*/
}
if (dx1>V99) {
 /* == set_constants#block1.bb14 ==*/
      V100 = dx1;
      goto L7;
/* == set_constants#block1.bb15 ==*/
}
if (dy1>dz1) {
 /* == set_constants#block1.bb16 ==*/
      V101 = dy1;
/* == set_constants#block1.bb17 ==*/
} else {
      V101 = dz1;
/* == set_constants#block1.bb18 ==*/
}
      V100 = V101;
/* == set_constants#block1.bb19 ==*/
L7:;
      dssp = 2.5000000000000000E-01*V100;
      c4dssp = 4.0000000000000000E+00*dssp;
      c5dssp = 5.0000000000000000E+00*dssp;
      dttx1 = dt*tx1;
      dttx2 = dt*tx2;
      dtty1 = dt*ty1;
      dtty2 = dt*ty2;
      dttz1 = dt*tz1;
      dttz2 = dt*tz2;
      c2dttx1 = 2.0000000000000000E+00*dttx1;
      c2dtty1 = 2.0000000000000000E+00*dtty1;
      c2dttz1 = 2.0000000000000000E+00*dttz1;
      dtdssp = dt*dssp;
      comz1 = dtdssp;
      comz4 = 4.0000000000000000E+00*dtdssp;
      comz5 = 5.0000000000000000E+00*dtdssp;
      comz6 = 6.0000000000000000E+00*dtdssp;
      c3c4tx3 = c3c4*tx3;
      c3c4ty3 = c3c4*ty3;
      c3c4tz3 = c3c4*tz3;
      dx1tx1 = dx1*tx1;
      dx2tx1 = dx2*tx1;
      dx3tx1 = dx3*tx1;
      dx4tx1 = dx4*tx1;
      dx5tx1 = dx5*tx1;
      dy1ty1 = dy1*ty1;
      dy2ty1 = dy2*ty1;
      dy3ty1 = dy3*ty1;
      dy4ty1 = dy4*ty1;
      dy5ty1 = dy5*ty1;
      dz1tz1 = dz1*tz1;
      dz2tz1 = dz2*tz1;
      dz3tz1 = dz3*tz1;
      dz4tz1 = dz4*tz1;
      dz5tz1 = dz5*tz1;
      c2iv = 2.5000000000000000E+00;
      con43 = 1.3333333333333330E+00;
      con16 = 1.6666666666666671E-01;
      xxcon1 = c3c4tx3*con43*tx3;
      xxcon2 = c3c4tx3*tx3;
      xxcon3 = c3c4tx3*conz1*tx3;
      xxcon4 = c3c4tx3*con16*tx3;
      xxcon5 = c3c4tx3*c1c5*tx3;
      yycon1 = c3c4ty3*con43*ty3;
      yycon2 = c3c4ty3*ty3;
      yycon3 = c3c4ty3*conz1*ty3;
      yycon4 = c3c4ty3*con16*ty3;
      yycon5 = c3c4ty3*c1c5*ty3;
      zzcon1 = c3c4tz3*con43*tz3;
      zzcon2 = c3c4tz3*tz3;
      zzcon3 = c3c4tz3*conz1*tz3;
      zzcon4 = c3c4tz3*con16*tz3;
      zzcon5 = c3c4tz3*c1c5*tz3;
/* == set_constants#block1.bb20 ==*/
      goto L13;
L13:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 101: initialize */
/* ******************* */
static void initialize_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int m_NO99/* m */;
      int ix_NO100/* ix */;
      int iy_NO101/* iy */;
      int iz_NO102/* iz */;
      double xi/* xi */;
      double eta/* eta */;
      double zeta/* zeta */;
      double Pxi_NO106/* Pxi */;
      double Peta_NO107/* Peta */;
      double Pzeta_NO108/* Pzeta */;
      int k_NO109/* k */;
      int j_NO110/* j */;
      int i_NO111/* i */;
      int m_NO112/* m */;
      int k_NO113/* k */;
      int j_NO114/* j */;
      int m_NO115/* m */;
      int k_NO116/* k */;
      int j_NO117/* j */;
      int m_NO118/* m */;
      int k_NO119/* k */;
      int i_NO120/* i */;
      int m_NO121/* m */;
      int k_NO122/* k */;
      int i_NO123/* i */;
      int m_NO124/* m */;
      int j_NO125/* j */;
      int i_NO126/* i */;
      int m_NO127/* m */;
      int j_NO128/* j */;
      int i_NO129/* i */;
      double Pxi_NO130/* Pxi */;
      double Peta_NO131/* Peta */;
      double Pzeta_NO132/* Pzeta */;
      int i_NO133/* i */;
      int k_NO134/* k */;
      int j_NO135/* j */;
      int i_NO136/* i */;
      int j_NO137/* j */;
      int k_NO138/* k */;
      int ix_NO139/* ix */;
      int iy_NO140/* iy */;
      int iz_NO141/* iz */;
      int m_NO142/* m */;
      int j_NO143/* j */;
      int k_NO144/* k */;
      int m_NO145/* m */;
      int j_NO146/* j */;
      int k_NO147/* k */;
      int m_NO148/* m */;
      int i_NO149/* i */;
      int k_NO150/* k */;
      int m_NO151/* m */;
      int i_NO152/* i */;
      int k_NO153/* k */;
      int m_NO154/* m */;
      int i_NO155/* i */;
      int j_NO156/* j */;
      int m_NO157/* m */;
      int i_NO158/* i */;
      int j_NO159/* j */;
      int m_NO160/* m */;

/* @decl:pe0:module101@ */
/* == initialize#block1 ==*/
/* == initialize#block1.doall1 ==*/
      for (i_NO133 = 0 ; i_NO133 <= 11 ; i_NO133 += 1){
/* == initialize#block1.doall1.loop1 ==*/
      for (j_NO135 = 0 ; j_NO135 <= 11 ; j_NO135 += 1){
/* == initialize#block1.doall1.loop1.loop1 ==*/
      for (k_NO134 = 0 ; k_NO134 <= 11 ; k_NO134 += 1){
/* == initialize#block1.doall1.loop1.loop1.bb1 ==*/
      u[0][i_NO133][j_NO135][k_NO134] = 1.0000000000000000E+00;
      u[1][i_NO133][j_NO135][k_NO134] = 0.0000000000000000E+00;
      u[2][i_NO133][j_NO135][k_NO134] = 0.0000000000000000E+00;
      u[3][i_NO133][j_NO135][k_NO134] = 0.0000000000000000E+00;
      u[4][i_NO133][j_NO135][k_NO134] = 1.0000000000000000E+00;
      }
      }
      }
/* == initialize#block1.loop2 ==*/
      for (i_NO136 = 0 ; i_NO136 <= grid_points[0]-1 ; i_NO136 += 1){
/* == initialize#block1.loop2.bb1 ==*/
      xi = (double)(i_NO136)*dnxm1;
/* == initialize#block1.loop2.loop2 ==*/
      for (j_NO137 = 0 ; j_NO137 <= grid_points[1]-1 ; j_NO137 += 1){
/* == initialize#block1.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO137)*dnym1;
/* == initialize#block1.loop2.loop2.loop2 ==*/
      for (k_NO138 = 0 ; k_NO138 <= grid_points[2]-1 ; k_NO138 += 1){
/* == initialize#block1.loop2.loop2.loop2.bb1 ==*/
      zeta = (double)(k_NO138)*dnzm1;
/* == initialize#block1.loop2.loop2.loop2.doall2 ==*/
      for (ix_NO139 = 0 ; ix_NO139 <= 1 ; ix_NO139 += 1){
/* == initialize#block1.loop2.loop2.loop2.doall2.sb1 ==*/
      exact_solution_PE0((double)(ix_NO139),eta,zeta,(&M101_CL0_PC0_Pface[ix_NO139][0][0]));
      }
/* == initialize#block1.loop2.loop2.loop2.doall3 ==*/
      for (iy_NO140 = 0 ; iy_NO140 <= 1 ; iy_NO140 += 1){
/* == initialize#block1.loop2.loop2.loop2.doall3.sb1 ==*/
      exact_solution_PE0(xi,(double)(iy_NO140),zeta,(&M101_CL0_PC0_Pface[iy_NO140][1][0]));
      }
/* == initialize#block1.loop2.loop2.loop2.doall4 ==*/
      for (iz_NO141 = 0 ; iz_NO141 <= 1 ; iz_NO141 += 1){
/* == initialize#block1.loop2.loop2.loop2.doall4.sb1 ==*/
      exact_solution_PE0(xi,eta,(double)(iz_NO141),(&M101_CL0_PC0_Pface[iz_NO141][2][0]));
      }
/* == initialize#block1.loop2.loop2.loop2.doall5 ==*/
      for (m_NO142 = 0 ; m_NO142 <= 4 ; m_NO142 += 1){
/* == initialize#block1.loop2.loop2.loop2.doall5.bb1 ==*/
      Pxi_NO130 = xi*M101_CL0_PC0_Pface[1][0][m_NO142]+(1.0000000000000000E+00-xi)*M101_CL0_PC0_Pface[0][0][m_NO142];
      Peta_NO131 = eta*M101_CL0_PC0_Pface[1][1][m_NO142]+(1.0000000000000000E+00-eta)*M101_CL0_PC0_Pface[0][1][m_NO142];
      Pzeta_NO132 = zeta*M101_CL0_PC0_Pface[1][2][m_NO142]+(1.0000000000000000E+00-zeta)*M101_CL0_PC0_Pface[0][2][m_NO142];
      u[m_NO142][i_NO136][j_NO137][k_NO138] = Pxi_NO130+Peta_NO131+Pzeta_NO132-Pxi_NO130*Peta_NO131-Pxi_NO130*Pzeta_NO132-Peta_NO131*Pzeta_NO132+Pxi_NO130*Peta_NO131*Pzeta_NO132;
      }
      }
      }
      }
/* == initialize#block1.bb3 ==*/
      xi = 0.0000000000000000E+00;
      i_NO96 = 0;
/* == initialize#block1.loop4 ==*/
      for (j_NO143 = 0 ; j_NO143 <= grid_points[1]-1 ; j_NO143 += 1){
/* == initialize#block1.loop4.bb1 ==*/
      eta = (double)(j_NO143)*dnym1;
/* == initialize#block1.loop4.loop2 ==*/
      for (k_NO144 = 0 ; k_NO144 <= grid_points[2]-1 ; k_NO144 += 1){
/* == initialize#block1.loop4.loop2.bb1 ==*/
      zeta = (double)(k_NO144)*dnzm1;
/* == initialize#block1.loop4.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop4.loop2.doall3 ==*/
      for (m_NO145 = 0 ; m_NO145 <= 4 ; m_NO145 += 1){
/* == initialize#block1.loop4.loop2.doall3.bb1 ==*/
      u[m_NO145][i_NO96][j_NO143][k_NO144] = M101_CL0_PC0_temp[m_NO145];
      }
      }
      }
/* == initialize#block1.bb5 ==*/
      xi = 1.0000000000000000E+00;
      i_NO96 = grid_points[0]-1;
/* == initialize#block1.loop6 ==*/
      for (j_NO146 = 0 ; j_NO146 <= grid_points[1]-1 ; j_NO146 += 1){
/* == initialize#block1.loop6.bb1 ==*/
      eta = (double)(j_NO146)*dnym1;
/* == initialize#block1.loop6.loop2 ==*/
      for (k_NO147 = 0 ; k_NO147 <= grid_points[2]-1 ; k_NO147 += 1){
/* == initialize#block1.loop6.loop2.bb1 ==*/
      zeta = (double)(k_NO147)*dnzm1;
/* == initialize#block1.loop6.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop6.loop2.doall3 ==*/
      for (m_NO148 = 0 ; m_NO148 <= 4 ; m_NO148 += 1){
/* == initialize#block1.loop6.loop2.doall3.bb1 ==*/
      u[m_NO148][i_NO96][j_NO146][k_NO147] = M101_CL0_PC0_temp[m_NO148];
      }
      }
      }
/* == initialize#block1.bb7 ==*/
      eta = 0.0000000000000000E+00;
      j_NO97 = 0;
/* == initialize#block1.loop8 ==*/
      for (i_NO149 = 0 ; i_NO149 <= grid_points[0]-1 ; i_NO149 += 1){
/* == initialize#block1.loop8.bb1 ==*/
      xi = (double)(i_NO149)*dnxm1;
/* == initialize#block1.loop8.loop2 ==*/
      for (k_NO150 = 0 ; k_NO150 <= grid_points[2]-1 ; k_NO150 += 1){
/* == initialize#block1.loop8.loop2.bb1 ==*/
      zeta = (double)(k_NO150)*dnzm1;
/* == initialize#block1.loop8.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop8.loop2.doall3 ==*/
      for (m_NO151 = 0 ; m_NO151 <= 4 ; m_NO151 += 1){
/* == initialize#block1.loop8.loop2.doall3.bb1 ==*/
      u[m_NO151][i_NO149][j_NO97][k_NO150] = M101_CL0_PC0_temp[m_NO151];
      }
      }
      }
/* == initialize#block1.bb9 ==*/
      eta = 1.0000000000000000E+00;
      j_NO97 = grid_points[1]-1;
/* == initialize#block1.loop10 ==*/
      for (i_NO152 = 0 ; i_NO152 <= grid_points[0]-1 ; i_NO152 += 1){
/* == initialize#block1.loop10.bb1 ==*/
      xi = (double)(i_NO152)*dnxm1;
/* == initialize#block1.loop10.loop2 ==*/
      for (k_NO153 = 0 ; k_NO153 <= grid_points[2]-1 ; k_NO153 += 1){
/* == initialize#block1.loop10.loop2.bb1 ==*/
      zeta = (double)(k_NO153)*dnzm1;
/* == initialize#block1.loop10.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop10.loop2.doall3 ==*/
      for (m_NO154 = 0 ; m_NO154 <= 4 ; m_NO154 += 1){
/* == initialize#block1.loop10.loop2.doall3.bb1 ==*/
      u[m_NO154][i_NO152][j_NO97][k_NO153] = M101_CL0_PC0_temp[m_NO154];
      }
      }
      }
/* == initialize#block1.bb11 ==*/
      zeta = 0.0000000000000000E+00;
      k_NO98 = 0;
/* == initialize#block1.loop12 ==*/
      for (i_NO155 = 0 ; i_NO155 <= grid_points[0]-1 ; i_NO155 += 1){
/* == initialize#block1.loop12.bb1 ==*/
      xi = (double)(i_NO155)*dnxm1;
/* == initialize#block1.loop12.loop2 ==*/
      for (j_NO156 = 0 ; j_NO156 <= grid_points[1]-1 ; j_NO156 += 1){
/* == initialize#block1.loop12.loop2.bb1 ==*/
      eta = (double)(j_NO156)*dnym1;
/* == initialize#block1.loop12.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop12.loop2.doall3 ==*/
      for (m_NO157 = 0 ; m_NO157 <= 4 ; m_NO157 += 1){
/* == initialize#block1.loop12.loop2.doall3.bb1 ==*/
      u[m_NO157][i_NO155][j_NO156][k_NO98] = M101_CL0_PC0_temp[m_NO157];
      }
      }
      }
/* == initialize#block1.bb13 ==*/
      zeta = 1.0000000000000000E+00;
      k_NO98 = grid_points[2]-1;
/* == initialize#block1.loop14 ==*/
      for (i_NO158 = 0 ; i_NO158 <= grid_points[0]-1 ; i_NO158 += 1){
/* == initialize#block1.loop14.bb1 ==*/
      xi = (double)(i_NO158)*dnxm1;
/* == initialize#block1.loop14.loop2 ==*/
      for (j_NO159 = 0 ; j_NO159 <= grid_points[1]-1 ; j_NO159 += 1){
/* == initialize#block1.loop14.loop2.bb1 ==*/
      eta = (double)(j_NO159)*dnym1;
/* == initialize#block1.loop14.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M101_CL0_PC0_temp[0]));
/* == initialize#block1.loop14.loop2.doall3 ==*/
      for (m_NO160 = 0 ; m_NO160 <= 4 ; m_NO160 += 1){
/* == initialize#block1.loop14.loop2.doall3.bb1 ==*/
      u[m_NO160][i_NO158][j_NO159][k_NO98] = M101_CL0_PC0_temp[m_NO160];
      }
      }
      }
/* == initialize#block1.bb15 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 102: lhsinit */
/* ******************* */
static void lhsinit_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int n_NO99/* n */;
      int k_NO100/* k */;
      int j_NO101/* j */;
      int i_NO102/* i */;
      int n_NO103/* n */;
      int n_NO104/* n */;
      int k_NO105/* k */;
      int j_NO106/* j */;
      int i_NO107/* i */;
      int n_NO108/* n */;
      int k_NO109/* k */;
      int j_NO110/* j */;
      int i_NO111/* i */;

/* @decl:pe0:module102@ */
/* == lhsinit#block1 ==*/
/* == lhsinit#block1.doall1 ==*/
      for (n_NO104 = 0 ; n_NO104 <= 14 ; n_NO104 += 1){
/* == lhsinit#block1.doall1.loop1 ==*/
      for (i_NO107 = 0 ; i_NO107 <= grid_points[0]-1 ; i_NO107 += 1){
/* == lhsinit#block1.doall1.loop1.loop1 ==*/
      for (j_NO106 = 0 ; j_NO106 <= grid_points[1]-1 ; j_NO106 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1 ==*/
      for (k_NO105 = 0 ; k_NO105 <= grid_points[2]-1 ; k_NO105 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      lhs[n_NO104][i_NO107][j_NO106][k_NO105] = 0.0000000000000000E+00;
      }
      }
      }
      }
/* == lhsinit#block1.doall2 ==*/
      for (n_NO108 = 0 ; n_NO108 <= 2 ; n_NO108 += 1){
/* == lhsinit#block1.doall2.loop1 ==*/
      for (i_NO111 = 0 ; i_NO111 <= grid_points[0]-1 ; i_NO111 += 1){
/* == lhsinit#block1.doall2.loop1.loop1 ==*/
      for (j_NO110 = 0 ; j_NO110 <= grid_points[1]-1 ; j_NO110 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1 ==*/
      for (k_NO109 = 0 ; k_NO109 <= grid_points[2]-1 ; k_NO109 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      lhs[5*n_NO108+2][i_NO111][j_NO110][k_NO109] = 1.0000000000000000E+00;
      }
      }
      }
      }
/* == lhsinit#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 99: exact_rhs */
/* ******************* */
static void exact_rhs_PE0()
{
      double xi/* xi */;
      double eta/* eta */;
      double zeta/* zeta */;
      double dtpp/* dtpp */;
      int m_NO100/* m */;
      int i_NO101/* i */;
      int j_NO102/* j */;
      int k_NO103/* k */;
      int ip1_NO104/* ip1 */;
      int im1_NO105/* im1 */;
      int jp1_NO106/* jp1 */;
      int jm1_NO107/* jm1 */;
      int km1_NO108/* km1 */;
      int kp1_NO109/* kp1 */;
      int m_NO110/* m */;
      int m_NO111/* m */;
      int i_NO112/* i */;
      int i_NO113/* i */;
      int m_NO114/* m */;
      int i_NO115/* i */;
      int m_NO116/* m */;
      int m_NO117/* m */;
      int j_NO118/* j */;
      int k_NO119/* k */;
      int m_NO120/* m */;
      int m_NO121/* m */;
      int j_NO122/* j */;
      int j_NO123/* j */;
      int m_NO124/* m */;
      int j_NO125/* j */;
      int m_NO126/* m */;
      int m_NO127/* m */;
      int i_NO128/* i */;
      int k_NO129/* k */;
      int m_NO130/* m */;
      int m_NO131/* m */;
      int k_NO132/* k */;
      int k_NO133/* k */;
      int m_NO134/* m */;
      int k_NO135/* k */;
      int m_NO136/* m */;
      int m_NO137/* m */;
      int i_NO138/* i */;
      int j_NO139/* j */;
      int k_NO140/* k */;
      int j_NO141/* j */;
      int i_NO142/* i */;
      int m_NO143/* m */;
      int ip1_NO144/* ip1 */;
      int im1_NO145/* im1 */;
      int i_NO146/* i */;
      int i_NO147/* i */;
      int jp1_NO148/* jp1 */;
      int jm1_NO149/* jm1 */;
      int j_NO150/* j */;
      int j_NO151/* j */;
      int km1_NO152/* km1 */;
      int kp1_NO153/* kp1 */;
      int k_NO154/* k */;
      int k_NO155/* k */;
      int m_NO156/* m */;
      int k_NO157/* k */;
      int j_NO158/* j */;
      int i_NO159/* i */;
      int k_NO160/* k */;
      int j_NO161/* j */;
      int i_NO162/* i */;
      int m_NO163/* m */;
      int m_NO164/* m */;
      int i_NO165/* i */;
      int m_NO166/* m */;
      int m_NO167/* m */;
      int i_NO168/* i */;
      int m_NO169/* m */;
      int k_NO170/* k */;
      int i_NO171/* i */;
      int j_NO172/* j */;
      int m_NO173/* m */;
      int m_NO174/* m */;
      int j_NO175/* j */;
      int m_NO176/* m */;
      int m_NO177/* m */;
      int j_NO178/* j */;
      int m_NO179/* m */;
      int j_NO180/* j */;
      int i_NO181/* i */;
      int k_NO182/* k */;
      int m_NO183/* m */;
      int m_NO184/* m */;
      int k_NO185/* k */;
      int m_NO186/* m */;
      int m_NO187/* m */;
      int k_NO188/* k */;
      int m_NO189/* m */;
      int m_NO190/* m */;
      int k_NO191/* k */;
      int j_NO192/* j */;
      int i_NO193/* i */;

/* @decl:pe0:module99@ */
/* == exact_rhs#block1 ==*/
/* == exact_rhs#block1.doall1 ==*/
      for (m_NO156 = 0 ; m_NO156 <= 4 ; m_NO156 += 1){
/* == exact_rhs#block1.doall1.loop1 ==*/
      for (i_NO159 = 0 ; i_NO159 <= grid_points[0]-1 ; i_NO159 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1 ==*/
      for (j_NO158 = 0 ; j_NO158 <= grid_points[1]-1 ; j_NO158 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1 ==*/
      for (k_NO157 = 0 ; k_NO157 <= grid_points[2]-1 ; k_NO157 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      forcing[m_NO156][i_NO159][j_NO158][k_NO157] = 0.0000000000000000E+00;
      }
      }
      }
      }
/* == exact_rhs#block1.loop2 ==*/
      for (k_NO160 = 1 ; k_NO160 <= grid_points[2]-2 ; k_NO160 += 1){
/* == exact_rhs#block1.loop2.bb1 ==*/
      zeta = (double)(k_NO160)*dnzm1;
/* == exact_rhs#block1.loop2.loop2 ==*/
      for (j_NO161 = 1 ; j_NO161 <= grid_points[1]-2 ; j_NO161 += 1){
/* == exact_rhs#block1.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO161)*dnym1;
/* == exact_rhs#block1.loop2.loop2.loop2 ==*/
      for (i_NO162 = 0 ; i_NO162 <= grid_points[0]-1 ; i_NO162 += 1){
/* == exact_rhs#block1.loop2.loop2.loop2.bb1 ==*/
      xi = (double)(i_NO162)*dnxm1;
/* == exact_rhs#block1.loop2.loop2.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M99_CL0_PC0_dtemp[0]));
/* == exact_rhs#block1.loop2.loop2.loop2.doall3 ==*/
      for (m_NO163 = 0 ; m_NO163 <= 4 ; m_NO163 += 1){
/* == exact_rhs#block1.loop2.loop2.loop2.doall3.bb1 ==*/
      ue[m_NO163][i_NO162] = M99_CL0_PC0_dtemp[m_NO163];
      }
/* == exact_rhs#block1.loop2.loop2.loop2.bb4 ==*/
      dtpp = 1.0000000000000000E+00/ M99_CL0_PC0_dtemp[0];
/* == exact_rhs#block1.loop2.loop2.loop2.doall5 ==*/
      for (m_NO164 = 1 ; m_NO164 <= 4 ; m_NO164 += 1){
/* == exact_rhs#block1.loop2.loop2.loop2.doall5.bb1 ==*/
      buf[m_NO164][i_NO162] = dtpp*M99_CL0_PC0_dtemp[m_NO164];
      }
/* == exact_rhs#block1.loop2.loop2.loop2.bb6 ==*/
      cuf[i_NO162] = buf[1][i_NO162]*buf[1][i_NO162];
      buf[0][i_NO162] = cuf[i_NO162]+buf[2][i_NO162]*buf[2][i_NO162]+buf[3][i_NO162]*buf[3][i_NO162];
      q[i_NO162] = 5.0000000000000000E-01*(buf[1][i_NO162]*ue[1][i_NO162]+buf[2][i_NO162]*ue[2][i_NO162]+buf[3][i_NO162]*ue[3][i_NO162]);
      }
/* == exact_rhs#block1.loop2.loop2.doall3 ==*/
      for (i_NO165 = 1 ; i_NO165 <= grid_points[0]-2 ; i_NO165 += 1){
/* == exact_rhs#block1.loop2.loop2.doall3.bb1 ==*/
      im1_NO145 = i_NO165-1;
      ip1_NO144 = i_NO165+1;
      forcing[0][i_NO165][j_NO161][k_NO160] = forcing[0][i_NO165][j_NO161][k_NO160]-tx2*(ue[1][ip1_NO144]-ue[1][im1_NO145])+dx1tx1*(ue[0][ip1_NO144]-2.0000000000000000E+00*ue[0][i_NO165]+ue[0][im1_NO145]);
      forcing[1][i_NO165][j_NO161][k_NO160] = forcing[1][i_NO165][j_NO161][k_NO160]-tx2*(ue[1][ip1_NO144]*buf[1][ip1_NO144]+c2*(ue[4][ip1_NO144]-q[ip1_NO144])-(ue[1][im1_NO145]*buf[1][im1_NO145]+c2*(ue[4][im1_NO145]-q[im1_NO145])))+xxcon1*(buf[1][ip1_NO144]-2.0000000000000000E+00*buf[1][i_NO165]+buf[1][im1_NO145])+dx2tx1*(ue[1][ip1_NO144]-2.0000000000000000E+00*ue[1][i_NO165]+ue[1][im1_NO145]);
      forcing[2][i_NO165][j_NO161][k_NO160] = forcing[2][i_NO165][j_NO161][k_NO160]-tx2*(ue[2][ip1_NO144]*buf[1][ip1_NO144]-ue[2][im1_NO145]*buf[1][im1_NO145])+xxcon2*(buf[2][ip1_NO144]-2.0000000000000000E+00*buf[2][i_NO165]+buf[2][im1_NO145])+dx3tx1*(ue[2][ip1_NO144]-2.0000000000000000E+00*ue[2][i_NO165]+ue[2][im1_NO145]);
      forcing[3][i_NO165][j_NO161][k_NO160] = forcing[3][i_NO165][j_NO161][k_NO160]-tx2*(ue[3][ip1_NO144]*buf[1][ip1_NO144]-ue[3][im1_NO145]*buf[1][im1_NO145])+xxcon2*(buf[3][ip1_NO144]-2.0000000000000000E+00*buf[3][i_NO165]+buf[3][im1_NO145])+dx4tx1*(ue[3][ip1_NO144]-2.0000000000000000E+00*ue[3][i_NO165]+ue[3][im1_NO145]);
      forcing[4][i_NO165][j_NO161][k_NO160] = forcing[4][i_NO165][j_NO161][k_NO160]-tx2*(buf[1][ip1_NO144]*(c1*ue[4][ip1_NO144]-c2*q[ip1_NO144])-buf[1][im1_NO145]*(c1*ue[4][im1_NO145]-c2*q[im1_NO145]))+5.0000000000000000E-01*xxcon3*(buf[0][ip1_NO144]-2.0000000000000000E+00*buf[0][i_NO165]+buf[0][im1_NO145])+xxcon4*(cuf[ip1_NO144]-2.0000000000000000E+00*cuf[i_NO165]+cuf[im1_NO145])+xxcon5*(buf[4][ip1_NO144]-2.0000000000000000E+00*buf[4][i_NO165]+buf[4][im1_NO145])+dx5tx1*(ue[4][ip1_NO144]-2.0000000000000000E+00*ue[4][i_NO165]+ue[4][im1_NO145]);
      }
/* == exact_rhs#block1.loop2.loop2.doall4 ==*/
      for (m_NO166 = 0 ; m_NO166 <= 4 ; m_NO166 += 1){
/* == exact_rhs#block1.loop2.loop2.doall4.bb1 ==*/
      i_NO146 = 1;
      forcing[m_NO166][i_NO146][j_NO161][k_NO160] = forcing[m_NO166][i_NO146][j_NO161][k_NO160]-dssp*(5.0000000000000000E+00*ue[m_NO166][i_NO146]-4.0000000000000000E+00*ue[m_NO166][i_NO146+1]+ue[m_NO166][i_NO146+2]);
      i_NO146 = 2;
      forcing[m_NO166][i_NO146][j_NO161][k_NO160] = forcing[m_NO166][i_NO146][j_NO161][k_NO160]-dssp*((-4.0000000000000000E+00)*ue[m_NO166][i_NO146-1]+6.0000000000000000E+00*ue[m_NO166][i_NO146]-4.0000000000000000E+00*ue[m_NO166][i_NO146+1]+ue[m_NO166][i_NO146+2]);
      }
/* == exact_rhs#block1.loop2.loop2.doall5 ==*/
      for (m_NO167 = 0 ; m_NO167 <= 4 ; m_NO167 += 1){
/* == exact_rhs#block1.loop2.loop2.doall5.loop1 ==*/
      for (i_NO168 = 3 ; i_NO168 <= grid_points[0]-4 ; i_NO168 += 1){
/* == exact_rhs#block1.loop2.loop2.doall5.loop1.bb1 ==*/
      forcing[m_NO167][i_NO168][j_NO161][k_NO160] = forcing[m_NO167][i_NO168][j_NO161][k_NO160]-dssp*(ue[m_NO167][i_NO168-2]-4.0000000000000000E+00*ue[m_NO167][i_NO168-1]+6.0000000000000000E+00*ue[m_NO167][i_NO168]-4.0000000000000000E+00*ue[m_NO167][i_NO168+1]+ue[m_NO167][i_NO168+2]);
      }
      }
/* == exact_rhs#block1.loop2.loop2.doall6 ==*/
      for (m_NO169 = 0 ; m_NO169 <= 4 ; m_NO169 += 1){
/* == exact_rhs#block1.loop2.loop2.doall6.bb1 ==*/
      i_NO147 = grid_points[0]-3;
      forcing[m_NO169][i_NO147][j_NO161][k_NO160] = forcing[m_NO169][i_NO147][j_NO161][k_NO160]-dssp*(ue[m_NO169][i_NO147-2]-4.0000000000000000E+00*ue[m_NO169][i_NO147-1]+6.0000000000000000E+00*ue[m_NO169][i_NO147]-4.0000000000000000E+00*ue[m_NO169][i_NO147+1]);
      i_NO147 = grid_points[0]-2;
      forcing[m_NO169][i_NO147][j_NO161][k_NO160] = forcing[m_NO169][i_NO147][j_NO161][k_NO160]-dssp*(ue[m_NO169][i_NO147-2]-4.0000000000000000E+00*ue[m_NO169][i_NO147-1]+5.0000000000000000E+00*ue[m_NO169][i_NO147]);
      }
      }
      }
/* == exact_rhs#block1.loop3 ==*/
      for (k_NO170 = 1 ; k_NO170 <= grid_points[2]-2 ; k_NO170 += 1){
/* == exact_rhs#block1.loop3.bb1 ==*/
      zeta = (double)(k_NO170)*dnzm1;
/* == exact_rhs#block1.loop3.loop2 ==*/
      for (i_NO171 = 1 ; i_NO171 <= grid_points[0]-2 ; i_NO171 += 1){
/* == exact_rhs#block1.loop3.loop2.bb1 ==*/
      xi = (double)(i_NO171)*dnxm1;
/* == exact_rhs#block1.loop3.loop2.loop2 ==*/
      for (j_NO172 = 0 ; j_NO172 <= grid_points[1]-1 ; j_NO172 += 1){
/* == exact_rhs#block1.loop3.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO172)*dnym1;
/* == exact_rhs#block1.loop3.loop2.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M99_CL0_PC0_dtemp[0]));
/* == exact_rhs#block1.loop3.loop2.loop2.doall3 ==*/
      for (m_NO173 = 0 ; m_NO173 <= 4 ; m_NO173 += 1){
/* == exact_rhs#block1.loop3.loop2.loop2.doall3.bb1 ==*/
      ue[m_NO173][j_NO172] = M99_CL0_PC0_dtemp[m_NO173];
      }
/* == exact_rhs#block1.loop3.loop2.loop2.bb4 ==*/
      dtpp = 1.0000000000000000E+00/ M99_CL0_PC0_dtemp[0];
/* == exact_rhs#block1.loop3.loop2.loop2.doall5 ==*/
      for (m_NO174 = 1 ; m_NO174 <= 4 ; m_NO174 += 1){
/* == exact_rhs#block1.loop3.loop2.loop2.doall5.bb1 ==*/
      buf[m_NO174][j_NO172] = dtpp*M99_CL0_PC0_dtemp[m_NO174];
      }
/* == exact_rhs#block1.loop3.loop2.loop2.bb6 ==*/
      cuf[j_NO172] = buf[2][j_NO172]*buf[2][j_NO172];
      buf[0][j_NO172] = cuf[j_NO172]+buf[1][j_NO172]*buf[1][j_NO172]+buf[3][j_NO172]*buf[3][j_NO172];
      q[j_NO172] = 5.0000000000000000E-01*(buf[1][j_NO172]*ue[1][j_NO172]+buf[2][j_NO172]*ue[2][j_NO172]+buf[3][j_NO172]*ue[3][j_NO172]);
      }
/* == exact_rhs#block1.loop3.loop2.doall3 ==*/
      for (j_NO175 = 1 ; j_NO175 <= grid_points[1]-2 ; j_NO175 += 1){
/* == exact_rhs#block1.loop3.loop2.doall3.bb1 ==*/
      jm1_NO149 = j_NO175-1;
      jp1_NO148 = j_NO175+1;
      forcing[0][i_NO171][j_NO175][k_NO170] = forcing[0][i_NO171][j_NO175][k_NO170]-ty2*(ue[2][jp1_NO148]-ue[2][jm1_NO149])+dy1ty1*(ue[0][jp1_NO148]-2.0000000000000000E+00*ue[0][j_NO175]+ue[0][jm1_NO149]);
      forcing[1][i_NO171][j_NO175][k_NO170] = forcing[1][i_NO171][j_NO175][k_NO170]-ty2*(ue[1][jp1_NO148]*buf[2][jp1_NO148]-ue[1][jm1_NO149]*buf[2][jm1_NO149])+yycon2*(buf[1][jp1_NO148]-2.0000000000000000E+00*buf[1][j_NO175]+buf[1][jm1_NO149])+dy2ty1*(ue[1][jp1_NO148]-2.0000000000000000E+00*ue[1][j_NO175]+ue[1][jm1_NO149]);
      forcing[2][i_NO171][j_NO175][k_NO170] = forcing[2][i_NO171][j_NO175][k_NO170]-ty2*(ue[2][jp1_NO148]*buf[2][jp1_NO148]+c2*(ue[4][jp1_NO148]-q[jp1_NO148])-(ue[2][jm1_NO149]*buf[2][jm1_NO149]+c2*(ue[4][jm1_NO149]-q[jm1_NO149])))+yycon1*(buf[2][jp1_NO148]-2.0000000000000000E+00*buf[2][j_NO175]+buf[2][jm1_NO149])+dy3ty1*(ue[2][jp1_NO148]-2.0000000000000000E+00*ue[2][j_NO175]+ue[2][jm1_NO149]);
      forcing[3][i_NO171][j_NO175][k_NO170] = forcing[3][i_NO171][j_NO175][k_NO170]-ty2*(ue[3][jp1_NO148]*buf[2][jp1_NO148]-ue[3][jm1_NO149]*buf[2][jm1_NO149])+yycon2*(buf[3][jp1_NO148]-2.0000000000000000E+00*buf[3][j_NO175]+buf[3][jm1_NO149])+dy4ty1*(ue[3][jp1_NO148]-2.0000000000000000E+00*ue[3][j_NO175]+ue[3][jm1_NO149]);
      forcing[4][i_NO171][j_NO175][k_NO170] = forcing[4][i_NO171][j_NO175][k_NO170]-ty2*(buf[2][jp1_NO148]*(c1*ue[4][jp1_NO148]-c2*q[jp1_NO148])-buf[2][jm1_NO149]*(c1*ue[4][jm1_NO149]-c2*q[jm1_NO149]))+5.0000000000000000E-01*yycon3*(buf[0][jp1_NO148]-2.0000000000000000E+00*buf[0][j_NO175]+buf[0][jm1_NO149])+yycon4*(cuf[jp1_NO148]-2.0000000000000000E+00*cuf[j_NO175]+cuf[jm1_NO149])+yycon5*(buf[4][jp1_NO148]-2.0000000000000000E+00*buf[4][j_NO175]+buf[4][jm1_NO149])+dy5ty1*(ue[4][jp1_NO148]-2.0000000000000000E+00*ue[4][j_NO175]+ue[4][jm1_NO149]);
      }
/* == exact_rhs#block1.loop3.loop2.doall4 ==*/
      for (m_NO176 = 0 ; m_NO176 <= 4 ; m_NO176 += 1){
/* == exact_rhs#block1.loop3.loop2.doall4.bb1 ==*/
      j_NO150 = 1;
      forcing[m_NO176][i_NO171][j_NO150][k_NO170] = forcing[m_NO176][i_NO171][j_NO150][k_NO170]-dssp*(5.0000000000000000E+00*ue[m_NO176][j_NO150]-4.0000000000000000E+00*ue[m_NO176][j_NO150+1]+ue[m_NO176][j_NO150+2]);
      j_NO150 = 2;
      forcing[m_NO176][i_NO171][j_NO150][k_NO170] = forcing[m_NO176][i_NO171][j_NO150][k_NO170]-dssp*((-4.0000000000000000E+00)*ue[m_NO176][j_NO150-1]+6.0000000000000000E+00*ue[m_NO176][j_NO150]-4.0000000000000000E+00*ue[m_NO176][j_NO150+1]+ue[m_NO176][j_NO150+2]);
      }
/* == exact_rhs#block1.loop3.loop2.doall5 ==*/
      for (m_NO177 = 0 ; m_NO177 <= 4 ; m_NO177 += 1){
/* == exact_rhs#block1.loop3.loop2.doall5.loop1 ==*/
      for (j_NO178 = 3 ; j_NO178 <= grid_points[1]-4 ; j_NO178 += 1){
/* == exact_rhs#block1.loop3.loop2.doall5.loop1.bb1 ==*/
      forcing[m_NO177][i_NO171][j_NO178][k_NO170] = forcing[m_NO177][i_NO171][j_NO178][k_NO170]-dssp*(ue[m_NO177][j_NO178-2]-4.0000000000000000E+00*ue[m_NO177][j_NO178-1]+6.0000000000000000E+00*ue[m_NO177][j_NO178]-4.0000000000000000E+00*ue[m_NO177][j_NO178+1]+ue[m_NO177][j_NO178+2]);
      }
      }
/* == exact_rhs#block1.loop3.loop2.doall6 ==*/
      for (m_NO179 = 0 ; m_NO179 <= 4 ; m_NO179 += 1){
/* == exact_rhs#block1.loop3.loop2.doall6.bb1 ==*/
      j_NO151 = grid_points[1]-3;
      forcing[m_NO179][i_NO171][j_NO151][k_NO170] = forcing[m_NO179][i_NO171][j_NO151][k_NO170]-dssp*(ue[m_NO179][j_NO151-2]-4.0000000000000000E+00*ue[m_NO179][j_NO151-1]+6.0000000000000000E+00*ue[m_NO179][j_NO151]-4.0000000000000000E+00*ue[m_NO179][j_NO151+1]);
      j_NO151 = grid_points[1]-2;
      forcing[m_NO179][i_NO171][j_NO151][k_NO170] = forcing[m_NO179][i_NO171][j_NO151][k_NO170]-dssp*(ue[m_NO179][j_NO151-2]-4.0000000000000000E+00*ue[m_NO179][j_NO151-1]+5.0000000000000000E+00*ue[m_NO179][j_NO151]);
      }
      }
      }
/* == exact_rhs#block1.loop4 ==*/
      for (j_NO180 = 1 ; j_NO180 <= grid_points[1]-2 ; j_NO180 += 1){
/* == exact_rhs#block1.loop4.bb1 ==*/
      eta = (double)(j_NO180)*dnym1;
/* == exact_rhs#block1.loop4.loop2 ==*/
      for (i_NO181 = 1 ; i_NO181 <= grid_points[0]-2 ; i_NO181 += 1){
/* == exact_rhs#block1.loop4.loop2.bb1 ==*/
      xi = (double)(i_NO181)*dnxm1;
/* == exact_rhs#block1.loop4.loop2.loop2 ==*/
      for (k_NO182 = 0 ; k_NO182 <= grid_points[2]-1 ; k_NO182 += 1){
/* == exact_rhs#block1.loop4.loop2.loop2.bb1 ==*/
      zeta = (double)(k_NO182)*dnzm1;
/* == exact_rhs#block1.loop4.loop2.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M99_CL0_PC0_dtemp[0]));
/* == exact_rhs#block1.loop4.loop2.loop2.doall3 ==*/
      for (m_NO183 = 0 ; m_NO183 <= 4 ; m_NO183 += 1){
/* == exact_rhs#block1.loop4.loop2.loop2.doall3.bb1 ==*/
      ue[m_NO183][k_NO182] = M99_CL0_PC0_dtemp[m_NO183];
      }
/* == exact_rhs#block1.loop4.loop2.loop2.bb4 ==*/
      dtpp = 1.0000000000000000E+00/ M99_CL0_PC0_dtemp[0];
/* == exact_rhs#block1.loop4.loop2.loop2.doall5 ==*/
      for (m_NO184 = 1 ; m_NO184 <= 4 ; m_NO184 += 1){
/* == exact_rhs#block1.loop4.loop2.loop2.doall5.bb1 ==*/
      buf[m_NO184][k_NO182] = dtpp*M99_CL0_PC0_dtemp[m_NO184];
      }
/* == exact_rhs#block1.loop4.loop2.loop2.bb6 ==*/
      cuf[k_NO182] = buf[3][k_NO182]*buf[3][k_NO182];
      buf[0][k_NO182] = cuf[k_NO182]+buf[1][k_NO182]*buf[1][k_NO182]+buf[2][k_NO182]*buf[2][k_NO182];
      q[k_NO182] = 5.0000000000000000E-01*(buf[1][k_NO182]*ue[1][k_NO182]+buf[2][k_NO182]*ue[2][k_NO182]+buf[3][k_NO182]*ue[3][k_NO182]);
      }
/* == exact_rhs#block1.loop4.loop2.doall3 ==*/
      for (k_NO185 = 1 ; k_NO185 <= grid_points[2]-2 ; k_NO185 += 1){
/* == exact_rhs#block1.loop4.loop2.doall3.bb1 ==*/
      km1_NO152 = k_NO185-1;
      kp1_NO153 = k_NO185+1;
      forcing[0][i_NO181][j_NO180][k_NO185] = forcing[0][i_NO181][j_NO180][k_NO185]-tz2*(ue[3][kp1_NO153]-ue[3][km1_NO152])+dz1tz1*(ue[0][kp1_NO153]-2.0000000000000000E+00*ue[0][k_NO185]+ue[0][km1_NO152]);
      forcing[1][i_NO181][j_NO180][k_NO185] = forcing[1][i_NO181][j_NO180][k_NO185]-tz2*(ue[1][kp1_NO153]*buf[3][kp1_NO153]-ue[1][km1_NO152]*buf[3][km1_NO152])+zzcon2*(buf[1][kp1_NO153]-2.0000000000000000E+00*buf[1][k_NO185]+buf[1][km1_NO152])+dz2tz1*(ue[1][kp1_NO153]-2.0000000000000000E+00*ue[1][k_NO185]+ue[1][km1_NO152]);
      forcing[2][i_NO181][j_NO180][k_NO185] = forcing[2][i_NO181][j_NO180][k_NO185]-tz2*(ue[2][kp1_NO153]*buf[3][kp1_NO153]-ue[2][km1_NO152]*buf[3][km1_NO152])+zzcon2*(buf[2][kp1_NO153]-2.0000000000000000E+00*buf[2][k_NO185]+buf[2][km1_NO152])+dz3tz1*(ue[2][kp1_NO153]-2.0000000000000000E+00*ue[2][k_NO185]+ue[2][km1_NO152]);
      forcing[3][i_NO181][j_NO180][k_NO185] = forcing[3][i_NO181][j_NO180][k_NO185]-tz2*(ue[3][kp1_NO153]*buf[3][kp1_NO153]+c2*(ue[4][kp1_NO153]-q[kp1_NO153])-(ue[3][km1_NO152]*buf[3][km1_NO152]+c2*(ue[4][km1_NO152]-q[km1_NO152])))+zzcon1*(buf[3][kp1_NO153]-2.0000000000000000E+00*buf[3][k_NO185]+buf[3][km1_NO152])+dz4tz1*(ue[3][kp1_NO153]-2.0000000000000000E+00*ue[3][k_NO185]+ue[3][km1_NO152]);
      forcing[4][i_NO181][j_NO180][k_NO185] = forcing[4][i_NO181][j_NO180][k_NO185]-tz2*(buf[3][kp1_NO153]*(c1*ue[4][kp1_NO153]-c2*q[kp1_NO153])-buf[3][km1_NO152]*(c1*ue[4][km1_NO152]-c2*q[km1_NO152]))+5.0000000000000000E-01*zzcon3*(buf[0][kp1_NO153]-2.0000000000000000E+00*buf[0][k_NO185]+buf[0][km1_NO152])+zzcon4*(cuf[kp1_NO153]-2.0000000000000000E+00*cuf[k_NO185]+cuf[km1_NO152])+zzcon5*(buf[4][kp1_NO153]-2.0000000000000000E+00*buf[4][k_NO185]+buf[4][km1_NO152])+dz5tz1*(ue[4][kp1_NO153]-2.0000000000000000E+00*ue[4][k_NO185]+ue[4][km1_NO152]);
      }
/* == exact_rhs#block1.loop4.loop2.doall4 ==*/
      for (m_NO186 = 0 ; m_NO186 <= 4 ; m_NO186 += 1){
/* == exact_rhs#block1.loop4.loop2.doall4.bb1 ==*/
      k_NO154 = 1;
      forcing[m_NO186][i_NO181][j_NO180][k_NO154] = forcing[m_NO186][i_NO181][j_NO180][k_NO154]-dssp*(5.0000000000000000E+00*ue[m_NO186][k_NO154]-4.0000000000000000E+00*ue[m_NO186][k_NO154+1]+ue[m_NO186][k_NO154+2]);
      k_NO154 = 2;
      forcing[m_NO186][i_NO181][j_NO180][k_NO154] = forcing[m_NO186][i_NO181][j_NO180][k_NO154]-dssp*((-4.0000000000000000E+00)*ue[m_NO186][k_NO154-1]+6.0000000000000000E+00*ue[m_NO186][k_NO154]-4.0000000000000000E+00*ue[m_NO186][k_NO154+1]+ue[m_NO186][k_NO154+2]);
      }
/* == exact_rhs#block1.loop4.loop2.doall5 ==*/
      for (m_NO187 = 0 ; m_NO187 <= 4 ; m_NO187 += 1){
/* == exact_rhs#block1.loop4.loop2.doall5.loop1 ==*/
      for (k_NO188 = 3 ; k_NO188 <= grid_points[2]-4 ; k_NO188 += 1){
/* == exact_rhs#block1.loop4.loop2.doall5.loop1.bb1 ==*/
      forcing[m_NO187][i_NO181][j_NO180][k_NO188] = forcing[m_NO187][i_NO181][j_NO180][k_NO188]-dssp*(ue[m_NO187][k_NO188-2]-4.0000000000000000E+00*ue[m_NO187][k_NO188-1]+6.0000000000000000E+00*ue[m_NO187][k_NO188]-4.0000000000000000E+00*ue[m_NO187][k_NO188+1]+ue[m_NO187][k_NO188+2]);
      }
      }
/* == exact_rhs#block1.loop4.loop2.doall6 ==*/
      for (m_NO189 = 0 ; m_NO189 <= 4 ; m_NO189 += 1){
/* == exact_rhs#block1.loop4.loop2.doall6.bb1 ==*/
      k_NO155 = grid_points[2]-3;
      forcing[m_NO189][i_NO181][j_NO180][k_NO155] = forcing[m_NO189][i_NO181][j_NO180][k_NO155]-dssp*(ue[m_NO189][k_NO155-2]-4.0000000000000000E+00*ue[m_NO189][k_NO155-1]+6.0000000000000000E+00*ue[m_NO189][k_NO155]-4.0000000000000000E+00*ue[m_NO189][k_NO155+1]);
      k_NO155 = grid_points[2]-2;
      forcing[m_NO189][i_NO181][j_NO180][k_NO155] = forcing[m_NO189][i_NO181][j_NO180][k_NO155]-dssp*(ue[m_NO189][k_NO155-2]-4.0000000000000000E+00*ue[m_NO189][k_NO155-1]+5.0000000000000000E+00*ue[m_NO189][k_NO155]);
      }
      }
      }
/* == exact_rhs#block1.doall5 ==*/
      for (m_NO190 = 0 ; m_NO190 <= 4 ; m_NO190 += 1){
/* == exact_rhs#block1.doall5.loop1 ==*/
      for (i_NO193 = 1 ; i_NO193 <= grid_points[0]-2 ; i_NO193 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1 ==*/
      for (j_NO192 = 1 ; j_NO192 <= grid_points[1]-2 ; j_NO192 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1 ==*/
      for (k_NO191 = 1 ; k_NO191 <= grid_points[2]-2 ; k_NO191 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1.bb1 ==*/
      forcing[m_NO190][i_NO193][j_NO192][k_NO191] = (-1.0000000000000000E+00)*forcing[m_NO190][i_NO193][j_NO192][k_NO191];
      }
      }
      }
      }
/* == exact_rhs#block1.bb6 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 96: adi */
/* ******************* */
static void adi_PE0()
{

/* @decl:pe0:module96@ */
/* == adi#block1 ==*/
/* == adi#block1.sb1 ==*/
      compute_rhs_PE0();
/* == adi#block1.sb2 ==*/
      txinvr_PE0();
/* == adi#block1.sb3 ==*/
      x_solve_PE0();
/* == adi#block1.sb4 ==*/
      y_solve_PE0();
/* == adi#block1.sb5 ==*/
      z_solve_PE0();
/* == adi#block1.sb6 ==*/
      add_PE0();
/* == adi#block1.bb7 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 112: verify */
/* ******************* */
static void verify_PE0(int no_time_steps,
      char* class,
      int* verified)
{
      double epsilon/* epsilon */;
      double dtref/* dtref */;
      int m_NO101/* m */;
      int V102/* $tmp0 */;
      int V103/* $tmp1 */;
      int V104/* $tmp2 */;
      int V105/* $tmp3 */;
      int V106/* $tmp4 */;
      int V107/* $tmp5 */;
      int V108/* $tmp6 */;
      int V109/* $tmp7 */;
      int V110/* $tmp8 */;
      int V111/* $tmp9 */;
      int V112/* $tmp10 */;
      int V113/* $tmp11 */;
      int V114/* $tmp12 */;
      int V115/* $tmp13 */;
      int V116/* $tmp14 */;
      int V117/* $tmp15 */;
      int V118/* $tmp16 */;
      int V119/* $tmp17 */;
      int V120/* $tmp18 */;
      int V121/* $tmp19 */;
      int V122/* $tmp20 */;
      int V123/* $tmp21 */;
      int V124/* $tmp22 */;
      int m_NO125/* m */;
      int m_NO126/* m */;
      int m_NO127/* m */;
      int m_NO128/* m */;
      int m_NO129/* m */;
      int m_NO130/* m */;
      int m_NO131/* m */;
      int m_NO132/* m */;
      int m_NO133/* m */;

/* @decl:pe0:module112@ */
/* == verify#block1 ==*/
/* == verify#block1.bb1 ==*/
      epsilon = 1.0000000000000000E-08;
/* == verify#block1.sb2 ==*/
      error_norm_PE0((&M112_CL0_PC0_xce[0]));
/* == verify#block1.sb3 ==*/
      compute_rhs_PE0();
/* == verify#block1.sb4 ==*/
      rhs_norm_PE0((&M112_CL0_PC0_xcr[0]));
/* == verify#block1.doall5 ==*/
      for (m_NO129 = 0 ; m_NO129 <= 4 ; m_NO129 += 1){
/* == verify#block1.doall5.bb1 ==*/
      M112_CL0_PC0_xcr[m_NO129] = M112_CL0_PC0_xcr[m_NO129]/ dt;
      }
/* == verify#block1.bb6 ==*/
      *(class) = (char)(85);
      *(verified) = 1;
/* == verify#block1.doall7 ==*/
      for (m_NO130 = 0 ; m_NO130 <= 4 ; m_NO130 += 1){
/* == verify#block1.doall7.bb1 ==*/
      M112_CL0_PC0_xcrref[m_NO130] = 1.0000000000000000E+00;
      M112_CL0_PC0_xceref[m_NO130] = 1.0000000000000000E+00;
      }
/* == verify#block1.bb8 ==*/
if (!(grid_points[0]==12)) goto L14;
/* == verify#block1.bb9 ==*/
if (!(grid_points[1]==12)) goto L14;
/* == verify#block1.bb10 ==*/
if (!(grid_points[2]==12)) goto L14;
/* == verify#block1.bb11 ==*/
if (!(no_time_steps==100)) goto L14;
/* == verify#block1.bb12 ==*/
      V102 = 1;
      goto L13;
/* == verify#block1.bb13 ==*/
L14:;
      V102 = 0;
/* == verify#block1.bb14 ==*/
L13:;
if (!(V102!=0)) goto L11;
/* == verify#block1.bb15 ==*/
      *(class) = (char)(83);
      dtref = 1.4999999999999999E-02;
      M112_CL0_PC0_xcrref[0] = 2.7470315451339478E-02;
      M112_CL0_PC0_xcrref[1] = 1.0360746705285419E-02;
      M112_CL0_PC0_xcrref[2] = 1.6235745065095529E-02;
      M112_CL0_PC0_xcrref[3] = 1.5840557224455619E-02;
      M112_CL0_PC0_xcrref[4] = 3.4849040609362461E-02;
      M112_CL0_PC0_xceref[0] = 2.7289258557377229E-05;
      M112_CL0_PC0_xceref[1] = 1.0364446640837290E-05;
      M112_CL0_PC0_xceref[2] = 1.6154798287166471E-05;
      M112_CL0_PC0_xceref[3] = 1.5750704994480102E-05;
      M112_CL0_PC0_xceref[4] = 3.4177666183390531E-05;
      goto L12;
/* == verify#block1.bb16 ==*/
L11:;
if (!(grid_points[0]==36)) goto L18;
/* == verify#block1.bb17 ==*/
if (!(grid_points[1]==36)) goto L18;
/* == verify#block1.bb18 ==*/
if (!(grid_points[2]==36)) goto L18;
/* == verify#block1.bb19 ==*/
if (!(no_time_steps==400)) goto L18;
/* == verify#block1.bb20 ==*/
      V103 = 1;
      goto L17;
/* == verify#block1.bb21 ==*/
L18:;
      V103 = 0;
/* == verify#block1.bb22 ==*/
L17:;
if (V103!=0) {
 /* == verify#block1.bb23 ==*/
      *(class) = (char)(87);
      dtref = 1.5000000000000000E-03;
      M112_CL0_PC0_xcrref[0] = 1.8932537335840001E-03;
      M112_CL0_PC0_xcrref[1] = 1.7170754477749999E-04;
      M112_CL0_PC0_xcrref[2] = 2.7781533509360000E-04;
      M112_CL0_PC0_xcrref[3] = 2.8874754099840000E-04;
      M112_CL0_PC0_xcrref[4] = 3.1436111612419999E-03;
      M112_CL0_PC0_xceref[0] = 7.5420885995339994E-05;
      M112_CL0_PC0_xceref[1] = 6.5128522530860004E-06;
      M112_CL0_PC0_xceref[2] = 1.0490922856880000E-05;
      M112_CL0_PC0_xceref[3] = 1.1288386715350000E-05;
      M112_CL0_PC0_xceref[4] = 1.2128456397730000E-04;
      goto L16;
/* == verify#block1.bb24 ==*/
}
if (!(grid_points[0]==64)) goto L22;
/* == verify#block1.bb25 ==*/
if (!(grid_points[1]==64)) goto L22;
/* == verify#block1.bb26 ==*/
if (!(grid_points[2]==64)) goto L22;
/* == verify#block1.bb27 ==*/
if (!(no_time_steps==400)) goto L22;
/* == verify#block1.bb28 ==*/
      V104 = 1;
      goto L21;
/* == verify#block1.bb29 ==*/
L22:;
      V104 = 0;
/* == verify#block1.bb30 ==*/
L21:;
if (V104!=0) {
 /* == verify#block1.bb31 ==*/
      *(class) = (char)(65);
      dtref = 1.5000000000000000E-03;
      M112_CL0_PC0_xcrref[0] = 2.4799822399300200E+00;
      M112_CL0_PC0_xcrref[1] = 1.1276337964368830E+00;
      M112_CL0_PC0_xcrref[2] = 1.5028977888770489E+00;
      M112_CL0_PC0_xcrref[3] = 1.4217816211695180E+00;
      M112_CL0_PC0_xcrref[4] = 2.1292113035138280E+00;
      M112_CL0_PC0_xceref[0] = 1.0900140297820550E-04;
      M112_CL0_PC0_xceref[1] = 3.7343951769282092E-05;
      M112_CL0_PC0_xceref[2] = 5.0092785406541630E-05;
      M112_CL0_PC0_xceref[3] = 4.7671093939528253E-05;
      M112_CL0_PC0_xceref[4] = 1.3621613399213001E-04;
      goto L20;
/* == verify#block1.bb32 ==*/
}
if (!(grid_points[0]==102)) goto L26;
/* == verify#block1.bb33 ==*/
if (!(grid_points[1]==102)) goto L26;
/* == verify#block1.bb34 ==*/
if (!(grid_points[2]==102)) goto L26;
/* == verify#block1.bb35 ==*/
if (!(no_time_steps==400)) goto L26;
/* == verify#block1.bb36 ==*/
      V105 = 1;
      goto L25;
/* == verify#block1.bb37 ==*/
L26:;
      V105 = 0;
/* == verify#block1.bb38 ==*/
L25:;
if (V105!=0) {
 /* == verify#block1.bb39 ==*/
      *(class) = (char)(66);
      dtref = 1.0000000000000000E-03;
      M112_CL0_PC0_xcrref[0] = 6.9032935799979995E+01;
      M112_CL0_PC0_xcrref[1] = 3.0951344880840001E+01;
      M112_CL0_PC0_xcrref[2] = 4.1033366470170002E+01;
      M112_CL0_PC0_xcrref[3] = 3.8647690096040002E+01;
      M112_CL0_PC0_xcrref[4] = 5.6434822725959997E+01;
      M112_CL0_PC0_xceref[0] = 9.8100061901880004E-03;
      M112_CL0_PC0_xceref[1] = 1.0228279056700000E-03;
      M112_CL0_PC0_xceref[2] = 1.7205979116920000E-03;
      M112_CL0_PC0_xceref[3] = 1.6944794282310000E-03;
      M112_CL0_PC0_xceref[4] = 1.8474562639810000E-02;
      goto L24;
/* == verify#block1.bb40 ==*/
}
if (!(grid_points[0]==162)) goto L30;
/* == verify#block1.bb41 ==*/
if (!(grid_points[1]==162)) goto L30;
/* == verify#block1.bb42 ==*/
if (!(grid_points[2]==162)) goto L30;
/* == verify#block1.bb43 ==*/
if (!(no_time_steps==400)) goto L30;
/* == verify#block1.bb44 ==*/
      V106 = 1;
      goto L29;
/* == verify#block1.bb45 ==*/
L30:;
      V106 = 0;
/* == verify#block1.bb46 ==*/
L29:;
if (V106!=0) {
 /* == verify#block1.bb47 ==*/
      *(class) = (char)(67);
      dtref = 6.7000000000000002E-04;
      M112_CL0_PC0_xcrref[0] = 5.8816915818289999E+02;
      M112_CL0_PC0_xcrref[1] = 2.4544176035690001E+02;
      M112_CL0_PC0_xcrref[2] = 3.2938291918509998E+02;
      M112_CL0_PC0_xcrref[3] = 3.0819249718909998E+02;
      M112_CL0_PC0_xcrref[4] = 4.5972237991759999E+02;
      M112_CL0_PC0_xceref[0] = 2.5981205001829999E-01;
      M112_CL0_PC0_xceref[1] = 2.5908889223149999E-02;
      M112_CL0_PC0_xceref[2] = 5.1328864163199997E-02;
      M112_CL0_PC0_xceref[3] = 4.8060734194540003E-02;
      M112_CL0_PC0_xceref[4] = 5.4833774913010003E-01;
/* == verify#block1.bb48 ==*/
} else {
      *(verified) = 0;
/* == verify#block1.bb49 ==*/
}
/* == verify#block1.bb50 ==*/
L24:;
/* == verify#block1.bb51 ==*/
L20:;
/* == verify#block1.bb52 ==*/
L16:;
/* == verify#block1.bb53 ==*/
L12:;
/* == verify#block1.doall54 ==*/
      for (m_NO131 = 0 ; m_NO131 <= 4 ; m_NO131 += 1){
/* == verify#block1.doall54.bb1 ==*/
      M112_CL0_PC0_xcrdif[m_NO131] = fabs((M112_CL0_PC0_xcr[m_NO131]-M112_CL0_PC0_xcrref[m_NO131])/ M112_CL0_PC0_xcrref[m_NO131]);
      M112_CL0_PC0_xcedif[m_NO131] = fabs((M112_CL0_PC0_xce[m_NO131]-M112_CL0_PC0_xceref[m_NO131])/ M112_CL0_PC0_xceref[m_NO131]);
      }
/* == verify#block1.bb55 ==*/
if (!((int)(class[0])!=85)) goto L36;
/* == verify#block1.bb56 ==*/
      V107 = printf((&*" Verification being performed for class %1c\n"),(int)(class[0]));
/* == verify#block1.bb57 ==*/
      V108 = printf((&*" accuracy setting for epsilon = %20.13e\n"),epsilon);
/* == verify#block1.bb58 ==*/
if (!(fabs(dt-dtref)>epsilon)) goto L38;
/* == verify#block1.bb59 ==*/
      *(verified) = 0;
      *(class) = (char)(85);
/* == verify#block1.bb60 ==*/
      V109 = printf((&*" DT does not match the reference value of %15.8e\n"),dtref);
/* == verify#block1.bb61 ==*/
L38:;
      goto L37;
/* == verify#block1.bb62 ==*/
L36:;
/* == verify#block1.bb63 ==*/
      V110 = printf((&*" Unknown class\n"));
/* == verify#block1.bb64 ==*/
L37:;
if ((int)(class[0])!=85) {
 /* == verify#block1.bb65 ==*/
      V111 = printf((&*" Comparison of RMS-norms of residual\n"));
/* == verify#block1.bb66 ==*/
/* == verify#block1.bb67 ==*/
} else {
/* == verify#block1.bb68 ==*/
      V112 = printf((&*" RMS-norms of residual\n"));
/* == verify#block1.bb69 ==*/
}
/* == verify#block1.loop70 ==*/
      for (m_NO132 = 0 ; m_NO132 <= 4 ; m_NO132 += 1){
/* == verify#block1.loop70.bb1 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.loop70.bb2 ==*/
      V113 = printf((&*"          %2d%20.13e\n"),m_NO132,M112_CL0_PC0_xcr[m_NO132]);
/* == verify#block1.loop70.bb3 ==*/
      goto L47;
/* == verify#block1.loop70.bb4 ==*/
}
if (M112_CL0_PC0_xcrdif[m_NO132]>epsilon) {
 /* == verify#block1.loop70.bb5 ==*/
      *(verified) = 0;
/* == verify#block1.loop70.bb6 ==*/
      V114 = printf((&*" FAILURE: %2d%20.13e%20.13e%20.13e\n"),m_NO132,M112_CL0_PC0_xcr[m_NO132],M112_CL0_PC0_xcrref[m_NO132],M112_CL0_PC0_xcrdif[m_NO132]);
/* == verify#block1.loop70.bb7 ==*/
/* == verify#block1.loop70.bb8 ==*/
} else {
/* == verify#block1.loop70.bb9 ==*/
      V115 = printf((&*"          %2d%20.13e%20.13e%20.13e\n"),m_NO132,M112_CL0_PC0_xcr[m_NO132],M112_CL0_PC0_xcrref[m_NO132],M112_CL0_PC0_xcrdif[m_NO132]);
/* == verify#block1.loop70.bb10 ==*/
}
/* == verify#block1.loop70.bb11 ==*/
L47:;
      }
/* == verify#block1.bb71 ==*/
if ((int)(class[0])!=85) {
 /* == verify#block1.bb72 ==*/
      V116 = printf((&*" Comparison of RMS-norms of solution error\n"));
/* == verify#block1.bb73 ==*/
/* == verify#block1.bb74 ==*/
} else {
/* == verify#block1.bb75 ==*/
      V117 = printf((&*" RMS-norms of solution error\n"));
/* == verify#block1.bb76 ==*/
}
/* == verify#block1.loop77 ==*/
      for (m_NO133 = 0 ; m_NO133 <= 4 ; m_NO133 += 1){
/* == verify#block1.loop77.bb1 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.loop77.bb2 ==*/
      V118 = printf((&*"          %2d%20.13e\n"),m_NO133,M112_CL0_PC0_xce[m_NO133]);
/* == verify#block1.loop77.bb3 ==*/
      goto L58;
/* == verify#block1.loop77.bb4 ==*/
}
if (M112_CL0_PC0_xcedif[m_NO133]>epsilon) {
 /* == verify#block1.loop77.bb5 ==*/
      *(verified) = 0;
/* == verify#block1.loop77.bb6 ==*/
      V119 = printf((&*" FAILURE: %2d%20.13e%20.13e%20.13e\n"),m_NO133,M112_CL0_PC0_xce[m_NO133],M112_CL0_PC0_xceref[m_NO133],M112_CL0_PC0_xcedif[m_NO133]);
/* == verify#block1.loop77.bb7 ==*/
/* == verify#block1.loop77.bb8 ==*/
} else {
/* == verify#block1.loop77.bb9 ==*/
      V120 = printf((&*"          %2d%20.13e%20.13e%20.13e\n"),m_NO133,M112_CL0_PC0_xce[m_NO133],M112_CL0_PC0_xceref[m_NO133],M112_CL0_PC0_xcedif[m_NO133]);
/* == verify#block1.loop77.bb10 ==*/
}
/* == verify#block1.loop77.bb11 ==*/
L58:;
      }
/* == verify#block1.bb78 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.bb79 ==*/
      V121 = printf((&*" No reference values provided\n"));
/* == verify#block1.bb80 ==*/
      V122 = printf((&*" No verification performed\n"));
/* == verify#block1.bb81 ==*/
      goto L62;
/* == verify#block1.bb82 ==*/
}
if (verified[0]!=0) {
 /* == verify#block1.bb83 ==*/
      V123 = printf((&*" Verification Successful\n"));
/* == verify#block1.bb84 ==*/
/* == verify#block1.bb85 ==*/
} else {
/* == verify#block1.bb86 ==*/
      V124 = printf((&*" Verification failed\n"));
/* == verify#block1.bb87 ==*/
}
/* == verify#block1.bb88 ==*/
L62:;
/* == verify#block1.bb89 ==*/
      goto L65;
L65:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 100: exact_solution */
/* ******************* */
static void exact_solution_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO100/* m */;
      int m_NO101/* m */;

/* @decl:pe0:module100@ */
/* == exact_solution#block1 ==*/
/* == exact_solution#block1.doall1 ==*/
      for (m_NO101 = 0 ; m_NO101 <= 4 ; m_NO101 += 1){
/* == exact_solution#block1.doall1.bb1 ==*/
      (dtemp[m_NO101]) = ce[0][m_NO101]+xi*(ce[1][m_NO101]+xi*(ce[4][m_NO101]+xi*(ce[7][m_NO101]+xi*ce[10][m_NO101])))+eta*(ce[2][m_NO101]+eta*(ce[5][m_NO101]+eta*(ce[8][m_NO101]+eta*ce[11][m_NO101])))+zeta*(ce[3][m_NO101]+zeta*(ce[6][m_NO101]+zeta*(ce[9][m_NO101]+zeta*ce[12][m_NO101])));
      }
/* == exact_solution#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 108: compute_rhs */
/* ******************* */
static void compute_rhs_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int m_NO99/* m */;
      double aux_NO100/* aux */;
      double rho_inv_NO101/* rho_inv */;
      double uijk_NO102/* uijk */;
      double up1_NO103/* up1 */;
      double um1_NO104/* um1 */;
      double vijk_NO105/* vijk */;
      double vp1_NO106/* vp1 */;
      double vm1_NO107/* vm1 */;
      double wijk_NO108/* wijk */;
      double wp1_NO109/* wp1 */;
      double wm1_NO110/* wm1 */;
      int k_NO111/* k */;
      int j_NO112/* j */;
      int i_NO113/* i */;
      int k_NO114/* k */;
      int j_NO115/* j */;
      int i_NO116/* i */;
      int k_NO117/* k */;
      int j_NO118/* j */;
      int m_NO119/* m */;
      int k_NO120/* k */;
      int j_NO121/* j */;
      int m_NO122/* m */;
      int k_NO123/* k */;
      int j_NO124/* j */;
      int i_NO125/* i */;
      int m_NO126/* m */;
      int k_NO127/* k */;
      int j_NO128/* j */;
      int m_NO129/* m */;
      int k_NO130/* k */;
      int j_NO131/* j */;
      int m_NO132/* m */;
      int k_NO133/* k */;
      int j_NO134/* j */;
      int i_NO135/* i */;
      int k_NO136/* k */;
      int i_NO137/* i */;
      int m_NO138/* m */;
      int k_NO139/* k */;
      int i_NO140/* i */;
      int m_NO141/* m */;
      int k_NO142/* k */;
      int j_NO143/* j */;
      int i_NO144/* i */;
      int m_NO145/* m */;
      int k_NO146/* k */;
      int i_NO147/* i */;
      int m_NO148/* m */;
      int k_NO149/* k */;
      int i_NO150/* i */;
      int m_NO151/* m */;
      int k_NO152/* k */;
      int j_NO153/* j */;
      int i_NO154/* i */;
      int j_NO155/* j */;
      int i_NO156/* i */;
      int m_NO157/* m */;
      int j_NO158/* j */;
      int i_NO159/* i */;
      int m_NO160/* m */;
      int k_NO161/* k */;
      int j_NO162/* j */;
      int i_NO163/* i */;
      int m_NO164/* m */;
      int j_NO165/* j */;
      int i_NO166/* i */;
      int m_NO167/* m */;
      int j_NO168/* j */;
      int i_NO169/* i */;
      int m_NO170/* m */;
      int k_NO171/* k */;
      int j_NO172/* j */;
      int i_NO173/* i */;
      int m_NO174/* m */;
      double aux_NO175/* aux */;
      double rho_inv_NO176/* rho_inv */;
      double uijk_NO177/* uijk */;
      double up1_NO178/* up1 */;
      double um1_NO179/* um1 */;
      double vijk_NO180/* vijk */;
      double vp1_NO181/* vp1 */;
      double vm1_NO182/* vm1 */;
      double wijk_NO183/* wijk */;
      double wp1_NO184/* wp1 */;
      double wm1_NO185/* wm1 */;
      int i_NO186/* i */;
      int k_NO187/* k */;
      int j_NO188/* j */;
      int m_NO189/* m */;
      int k_NO190/* k */;
      int j_NO191/* j */;
      int i_NO192/* i */;
      int i_NO193/* i */;
      int k_NO194/* k */;
      int j_NO195/* j */;
      int m_NO196/* m */;
      int k_NO197/* k */;
      int j_NO198/* j */;
      int m_NO199/* m */;
      int k_NO200/* k */;
      int j_NO201/* j */;
      int m_NO202/* m */;
      int k_NO203/* k */;
      int j_NO204/* j */;
      int i_NO205/* i */;
      int m_NO206/* m */;
      int k_NO207/* k */;
      int j_NO208/* j */;
      int m_NO209/* m */;
      int k_NO210/* k */;
      int j_NO211/* j */;
      int i_NO212/* i */;
      int k_NO213/* k */;
      int j_NO214/* j */;
      int m_NO215/* m */;
      int k_NO216/* k */;
      int i_NO217/* i */;
      int m_NO218/* m */;
      int k_NO219/* k */;
      int i_NO220/* i */;
      int m_NO221/* m */;
      int k_NO222/* k */;
      int j_NO223/* j */;
      int i_NO224/* i */;
      int m_NO225/* m */;
      int k_NO226/* k */;
      int i_NO227/* i */;
      int m_NO228/* m */;
      int k_NO229/* k */;
      int i_NO230/* i */;
      int i_NO231/* i */;
      int k_NO232/* k */;
      int j_NO233/* j */;
      int m_NO234/* m */;
      int j_NO235/* j */;
      int i_NO236/* i */;
      int m_NO237/* m */;
      int j_NO238/* j */;
      int i_NO239/* i */;
      int m_NO240/* m */;
      int k_NO241/* k */;
      int j_NO242/* j */;
      int i_NO243/* i */;
      int m_NO244/* m */;
      int j_NO245/* j */;
      int i_NO246/* i */;
      int m_NO247/* m */;
      int j_NO248/* j */;
      int i_NO249/* i */;
      int m_NO250/* m */;
      int k_NO251/* k */;
      int j_NO252/* j */;
      int i_NO253/* i */;

/* @decl:pe0:module108@ */
/* == compute_rhs#block1 ==*/
/* == compute_rhs#block1.doall1 ==*/
      for (i_NO186 = 0 ; i_NO186 <= grid_points[0]-1 ; i_NO186 += 1){
/* == compute_rhs#block1.doall1.loop1 ==*/
      for (j_NO188 = 0 ; j_NO188 <= grid_points[1]-1 ; j_NO188 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1 ==*/
      for (k_NO187 = 0 ; k_NO187 <= grid_points[2]-1 ; k_NO187 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1.bb1 ==*/
      rho_inv_NO176 = 1.0000000000000000E+00/ u[0][i_NO186][j_NO188][k_NO187];
      rho_i[i_NO186][j_NO188][k_NO187] = rho_inv_NO176;
      us[i_NO186][j_NO188][k_NO187] = u[1][i_NO186][j_NO188][k_NO187]*rho_inv_NO176;
      vs[i_NO186][j_NO188][k_NO187] = u[2][i_NO186][j_NO188][k_NO187]*rho_inv_NO176;
      ws[i_NO186][j_NO188][k_NO187] = u[3][i_NO186][j_NO188][k_NO187]*rho_inv_NO176;
      square[i_NO186][j_NO188][k_NO187] = 5.0000000000000000E-01*(u[1][i_NO186][j_NO188][k_NO187]*u[1][i_NO186][j_NO188][k_NO187]+u[2][i_NO186][j_NO188][k_NO187]*u[2][i_NO186][j_NO188][k_NO187]+u[3][i_NO186][j_NO188][k_NO187]*u[3][i_NO186][j_NO188][k_NO187])*rho_inv_NO176;
      qs[i_NO186][j_NO188][k_NO187] = square[i_NO186][j_NO188][k_NO187]*rho_inv_NO176;
      aux_NO175 = c1c2*rho_inv_NO176*(u[4][i_NO186][j_NO188][k_NO187]-square[i_NO186][j_NO188][k_NO187]);
      aux_NO175 = sqrt(aux_NO175);
      speed[i_NO186][j_NO188][k_NO187] = aux_NO175;
      ainv[i_NO186][j_NO188][k_NO187] = 1.0000000000000000E+00/ aux_NO175;
      }
      }
      }
/* == compute_rhs#block1.doall2 ==*/
      for (m_NO189 = 0 ; m_NO189 <= 4 ; m_NO189 += 1){
/* == compute_rhs#block1.doall2.loop1 ==*/
      for (i_NO192 = 0 ; i_NO192 <= grid_points[0]-1 ; i_NO192 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1 ==*/
      for (j_NO191 = 0 ; j_NO191 <= grid_points[1]-1 ; j_NO191 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1 ==*/
      for (k_NO190 = 0 ; k_NO190 <= grid_points[2]-1 ; k_NO190 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      rhs[m_NO189][i_NO192][j_NO191][k_NO190] = forcing[m_NO189][i_NO192][j_NO191][k_NO190];
      }
      }
      }
      }
/* == compute_rhs#block1.doall3 ==*/
      for (i_NO193 = 1 ; i_NO193 <= grid_points[0]-2 ; i_NO193 += 1){
/* == compute_rhs#block1.doall3.loop1 ==*/
      for (j_NO195 = 1 ; j_NO195 <= grid_points[1]-2 ; j_NO195 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1 ==*/
      for (k_NO194 = 1 ; k_NO194 <= grid_points[2]-2 ; k_NO194 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1.bb1 ==*/
      uijk_NO177 = us[i_NO193][j_NO195][k_NO194];
      up1_NO178 = us[i_NO193+1][j_NO195][k_NO194];
      um1_NO179 = us[i_NO193-1][j_NO195][k_NO194];
      rhs[0][i_NO193][j_NO195][k_NO194] = rhs[0][i_NO193][j_NO195][k_NO194]+dx1tx1*(u[0][i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[0][i_NO193][j_NO195][k_NO194]+u[0][i_NO193-1][j_NO195][k_NO194])-tx2*(u[1][i_NO193+1][j_NO195][k_NO194]-u[1][i_NO193-1][j_NO195][k_NO194]);
      rhs[1][i_NO193][j_NO195][k_NO194] = rhs[1][i_NO193][j_NO195][k_NO194]+dx2tx1*(u[1][i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[1][i_NO193][j_NO195][k_NO194]+u[1][i_NO193-1][j_NO195][k_NO194])+xxcon2*con43*(up1_NO178-2.0000000000000000E+00*uijk_NO177+um1_NO179)-tx2*(u[1][i_NO193+1][j_NO195][k_NO194]*up1_NO178-u[1][i_NO193-1][j_NO195][k_NO194]*um1_NO179+(u[4][i_NO193+1][j_NO195][k_NO194]-square[i_NO193+1][j_NO195][k_NO194]-u[4][i_NO193-1][j_NO195][k_NO194]+square[i_NO193-1][j_NO195][k_NO194])*c2);
      rhs[2][i_NO193][j_NO195][k_NO194] = rhs[2][i_NO193][j_NO195][k_NO194]+dx3tx1*(u[2][i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[2][i_NO193][j_NO195][k_NO194]+u[2][i_NO193-1][j_NO195][k_NO194])+xxcon2*(vs[i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*vs[i_NO193][j_NO195][k_NO194]+vs[i_NO193-1][j_NO195][k_NO194])-tx2*(u[2][i_NO193+1][j_NO195][k_NO194]*up1_NO178-u[2][i_NO193-1][j_NO195][k_NO194]*um1_NO179);
      rhs[3][i_NO193][j_NO195][k_NO194] = rhs[3][i_NO193][j_NO195][k_NO194]+dx4tx1*(u[3][i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[3][i_NO193][j_NO195][k_NO194]+u[3][i_NO193-1][j_NO195][k_NO194])+xxcon2*(ws[i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*ws[i_NO193][j_NO195][k_NO194]+ws[i_NO193-1][j_NO195][k_NO194])-tx2*(u[3][i_NO193+1][j_NO195][k_NO194]*up1_NO178-u[3][i_NO193-1][j_NO195][k_NO194]*um1_NO179);
      rhs[4][i_NO193][j_NO195][k_NO194] = rhs[4][i_NO193][j_NO195][k_NO194]+dx5tx1*(u[4][i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[4][i_NO193][j_NO195][k_NO194]+u[4][i_NO193-1][j_NO195][k_NO194])+xxcon3*(qs[i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*qs[i_NO193][j_NO195][k_NO194]+qs[i_NO193-1][j_NO195][k_NO194])+xxcon4*(up1_NO178*up1_NO178-2.0000000000000000E+00*uijk_NO177*uijk_NO177+um1_NO179*um1_NO179)+xxcon5*(u[4][i_NO193+1][j_NO195][k_NO194]*rho_i[i_NO193+1][j_NO195][k_NO194]-2.0000000000000000E+00*u[4][i_NO193][j_NO195][k_NO194]*rho_i[i_NO193][j_NO195][k_NO194]+u[4][i_NO193-1][j_NO195][k_NO194]*rho_i[i_NO193-1][j_NO195][k_NO194])-tx2*((c1*u[4][i_NO193+1][j_NO195][k_NO194]-c2*square[i_NO193+1][j_NO195][k_NO194])*up1_NO178-(c1*u[4][i_NO193-1][j_NO195][k_NO194]-c2*square[i_NO193-1][j_NO195][k_NO194])*um1_NO179);
      }
      }
      }
/* == compute_rhs#block1.bb4 ==*/
      i_NO96 = 1;
/* == compute_rhs#block1.doall5 ==*/
      for (m_NO196 = 0 ; m_NO196 <= 4 ; m_NO196 += 1){
/* == compute_rhs#block1.doall5.loop1 ==*/
      for (j_NO198 = 1 ; j_NO198 <= grid_points[1]-2 ; j_NO198 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1 ==*/
      for (k_NO197 = 1 ; k_NO197 <= grid_points[2]-2 ; k_NO197 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1.bb1 ==*/
      rhs[m_NO196][i_NO96][j_NO198][k_NO197] = rhs[m_NO196][i_NO96][j_NO198][k_NO197]-dssp*(5.0000000000000000E+00*u[m_NO196][i_NO96][j_NO198][k_NO197]-4.0000000000000000E+00*u[m_NO196][i_NO96+1][j_NO198][k_NO197]+u[m_NO196][i_NO96+2][j_NO198][k_NO197]);
      }
      }
      }
/* == compute_rhs#block1.bb6 ==*/
      i_NO96 = 2;
/* == compute_rhs#block1.doall7 ==*/
      for (m_NO199 = 0 ; m_NO199 <= 4 ; m_NO199 += 1){
/* == compute_rhs#block1.doall7.loop1 ==*/
      for (j_NO201 = 1 ; j_NO201 <= grid_points[1]-2 ; j_NO201 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1 ==*/
      for (k_NO200 = 1 ; k_NO200 <= grid_points[2]-2 ; k_NO200 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1.bb1 ==*/
      rhs[m_NO199][i_NO96][j_NO201][k_NO200] = rhs[m_NO199][i_NO96][j_NO201][k_NO200]-dssp*((-4.0000000000000000E+00)*u[m_NO199][i_NO96-1][j_NO201][k_NO200]+6.0000000000000000E+00*u[m_NO199][i_NO96][j_NO201][k_NO200]-4.0000000000000000E+00*u[m_NO199][i_NO96+1][j_NO201][k_NO200]+u[m_NO199][i_NO96+2][j_NO201][k_NO200]);
      }
      }
      }
/* == compute_rhs#block1.doall8 ==*/
      for (m_NO202 = 0 ; m_NO202 <= 4 ; m_NO202 += 1){
/* == compute_rhs#block1.doall8.loop1 ==*/
      for (i_NO205 = 3 ; i_NO205 <= grid_points[0]-3-1 ; i_NO205 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1 ==*/
      for (j_NO204 = 1 ; j_NO204 <= grid_points[1]-2 ; j_NO204 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1 ==*/
      for (k_NO203 = 1 ; k_NO203 <= grid_points[2]-2 ; k_NO203 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1.bb1 ==*/
      rhs[m_NO202][i_NO205][j_NO204][k_NO203] = rhs[m_NO202][i_NO205][j_NO204][k_NO203]-dssp*(u[m_NO202][i_NO205-2][j_NO204][k_NO203]-4.0000000000000000E+00*u[m_NO202][i_NO205-1][j_NO204][k_NO203]+6.0000000000000000E+00*u[m_NO202][i_NO205][j_NO204][k_NO203]-4.0000000000000000E+00*u[m_NO202][i_NO205+1][j_NO204][k_NO203]+u[m_NO202][i_NO205+2][j_NO204][k_NO203]);
      }
      }
      }
      }
/* == compute_rhs#block1.bb9 ==*/
      i_NO96 = grid_points[0]-3;
/* == compute_rhs#block1.doall10 ==*/
      for (m_NO206 = 0 ; m_NO206 <= 4 ; m_NO206 += 1){
/* == compute_rhs#block1.doall10.loop1 ==*/
      for (j_NO208 = 1 ; j_NO208 <= grid_points[1]-2 ; j_NO208 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1 ==*/
      for (k_NO207 = 1 ; k_NO207 <= grid_points[2]-2 ; k_NO207 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1.bb1 ==*/
      rhs[m_NO206][i_NO96][j_NO208][k_NO207] = rhs[m_NO206][i_NO96][j_NO208][k_NO207]-dssp*(u[m_NO206][i_NO96-2][j_NO208][k_NO207]-4.0000000000000000E+00*u[m_NO206][i_NO96-1][j_NO208][k_NO207]+6.0000000000000000E+00*u[m_NO206][i_NO96][j_NO208][k_NO207]-4.0000000000000000E+00*u[m_NO206][i_NO96+1][j_NO208][k_NO207]);
      }
      }
      }
/* == compute_rhs#block1.bb11 ==*/
      i_NO96 = grid_points[0]-2;
/* == compute_rhs#block1.doall12 ==*/
      for (m_NO209 = 0 ; m_NO209 <= 4 ; m_NO209 += 1){
/* == compute_rhs#block1.doall12.loop1 ==*/
      for (j_NO211 = 1 ; j_NO211 <= grid_points[1]-2 ; j_NO211 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1 ==*/
      for (k_NO210 = 1 ; k_NO210 <= grid_points[2]-2 ; k_NO210 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1.bb1 ==*/
      rhs[m_NO209][i_NO96][j_NO211][k_NO210] = rhs[m_NO209][i_NO96][j_NO211][k_NO210]-dssp*(u[m_NO209][i_NO96-2][j_NO211][k_NO210]-4.0000000000000000E+00*u[m_NO209][i_NO96-1][j_NO211][k_NO210]+5.0000000000000000E+00*u[m_NO209][i_NO96][j_NO211][k_NO210]);
      }
      }
      }
/* == compute_rhs#block1.doall13 ==*/
      for (i_NO212 = 1 ; i_NO212 <= grid_points[0]-2 ; i_NO212 += 1){
/* == compute_rhs#block1.doall13.loop1 ==*/
      for (j_NO214 = 1 ; j_NO214 <= grid_points[1]-2 ; j_NO214 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1 ==*/
      for (k_NO213 = 1 ; k_NO213 <= grid_points[2]-2 ; k_NO213 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1.bb1 ==*/
      vijk_NO180 = vs[i_NO212][j_NO214][k_NO213];
      vp1_NO181 = vs[i_NO212][j_NO214+1][k_NO213];
      vm1_NO182 = vs[i_NO212][j_NO214-1][k_NO213];
      rhs[0][i_NO212][j_NO214][k_NO213] = rhs[0][i_NO212][j_NO214][k_NO213]+dy1ty1*(u[0][i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[0][i_NO212][j_NO214][k_NO213]+u[0][i_NO212][j_NO214-1][k_NO213])-ty2*(u[2][i_NO212][j_NO214+1][k_NO213]-u[2][i_NO212][j_NO214-1][k_NO213]);
      rhs[1][i_NO212][j_NO214][k_NO213] = rhs[1][i_NO212][j_NO214][k_NO213]+dy2ty1*(u[1][i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[1][i_NO212][j_NO214][k_NO213]+u[1][i_NO212][j_NO214-1][k_NO213])+yycon2*(us[i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*us[i_NO212][j_NO214][k_NO213]+us[i_NO212][j_NO214-1][k_NO213])-ty2*(u[1][i_NO212][j_NO214+1][k_NO213]*vp1_NO181-u[1][i_NO212][j_NO214-1][k_NO213]*vm1_NO182);
      rhs[2][i_NO212][j_NO214][k_NO213] = rhs[2][i_NO212][j_NO214][k_NO213]+dy3ty1*(u[2][i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[2][i_NO212][j_NO214][k_NO213]+u[2][i_NO212][j_NO214-1][k_NO213])+yycon2*con43*(vp1_NO181-2.0000000000000000E+00*vijk_NO180+vm1_NO182)-ty2*(u[2][i_NO212][j_NO214+1][k_NO213]*vp1_NO181-u[2][i_NO212][j_NO214-1][k_NO213]*vm1_NO182+(u[4][i_NO212][j_NO214+1][k_NO213]-square[i_NO212][j_NO214+1][k_NO213]-u[4][i_NO212][j_NO214-1][k_NO213]+square[i_NO212][j_NO214-1][k_NO213])*c2);
      rhs[3][i_NO212][j_NO214][k_NO213] = rhs[3][i_NO212][j_NO214][k_NO213]+dy4ty1*(u[3][i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[3][i_NO212][j_NO214][k_NO213]+u[3][i_NO212][j_NO214-1][k_NO213])+yycon2*(ws[i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*ws[i_NO212][j_NO214][k_NO213]+ws[i_NO212][j_NO214-1][k_NO213])-ty2*(u[3][i_NO212][j_NO214+1][k_NO213]*vp1_NO181-u[3][i_NO212][j_NO214-1][k_NO213]*vm1_NO182);
      rhs[4][i_NO212][j_NO214][k_NO213] = rhs[4][i_NO212][j_NO214][k_NO213]+dy5ty1*(u[4][i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[4][i_NO212][j_NO214][k_NO213]+u[4][i_NO212][j_NO214-1][k_NO213])+yycon3*(qs[i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*qs[i_NO212][j_NO214][k_NO213]+qs[i_NO212][j_NO214-1][k_NO213])+yycon4*(vp1_NO181*vp1_NO181-2.0000000000000000E+00*vijk_NO180*vijk_NO180+vm1_NO182*vm1_NO182)+yycon5*(u[4][i_NO212][j_NO214+1][k_NO213]*rho_i[i_NO212][j_NO214+1][k_NO213]-2.0000000000000000E+00*u[4][i_NO212][j_NO214][k_NO213]*rho_i[i_NO212][j_NO214][k_NO213]+u[4][i_NO212][j_NO214-1][k_NO213]*rho_i[i_NO212][j_NO214-1][k_NO213])-ty2*((c1*u[4][i_NO212][j_NO214+1][k_NO213]-c2*square[i_NO212][j_NO214+1][k_NO213])*vp1_NO181-(c1*u[4][i_NO212][j_NO214-1][k_NO213]-c2*square[i_NO212][j_NO214-1][k_NO213])*vm1_NO182);
      }
      }
      }
/* == compute_rhs#block1.bb14 ==*/
      j_NO97 = 1;
/* == compute_rhs#block1.doall15 ==*/
      for (m_NO215 = 0 ; m_NO215 <= 4 ; m_NO215 += 1){
/* == compute_rhs#block1.doall15.loop1 ==*/
      for (i_NO217 = 1 ; i_NO217 <= grid_points[0]-2 ; i_NO217 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1 ==*/
      for (k_NO216 = 1 ; k_NO216 <= grid_points[2]-2 ; k_NO216 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1.bb1 ==*/
      rhs[m_NO215][i_NO217][j_NO97][k_NO216] = rhs[m_NO215][i_NO217][j_NO97][k_NO216]-dssp*(5.0000000000000000E+00*u[m_NO215][i_NO217][j_NO97][k_NO216]-4.0000000000000000E+00*u[m_NO215][i_NO217][j_NO97+1][k_NO216]+u[m_NO215][i_NO217][j_NO97+2][k_NO216]);
      }
      }
      }
/* == compute_rhs#block1.bb16 ==*/
      j_NO97 = 2;
/* == compute_rhs#block1.doall17 ==*/
      for (m_NO218 = 0 ; m_NO218 <= 4 ; m_NO218 += 1){
/* == compute_rhs#block1.doall17.loop1 ==*/
      for (i_NO220 = 1 ; i_NO220 <= grid_points[0]-2 ; i_NO220 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1 ==*/
      for (k_NO219 = 1 ; k_NO219 <= grid_points[2]-2 ; k_NO219 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1.bb1 ==*/
      rhs[m_NO218][i_NO220][j_NO97][k_NO219] = rhs[m_NO218][i_NO220][j_NO97][k_NO219]-dssp*((-4.0000000000000000E+00)*u[m_NO218][i_NO220][j_NO97-1][k_NO219]+6.0000000000000000E+00*u[m_NO218][i_NO220][j_NO97][k_NO219]-4.0000000000000000E+00*u[m_NO218][i_NO220][j_NO97+1][k_NO219]+u[m_NO218][i_NO220][j_NO97+2][k_NO219]);
      }
      }
      }
/* == compute_rhs#block1.doall18 ==*/
      for (m_NO221 = 0 ; m_NO221 <= 4 ; m_NO221 += 1){
/* == compute_rhs#block1.doall18.loop1 ==*/
      for (i_NO224 = 1 ; i_NO224 <= grid_points[0]-2 ; i_NO224 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1 ==*/
      for (j_NO223 = 3 ; j_NO223 <= grid_points[1]-3-1 ; j_NO223 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1 ==*/
      for (k_NO222 = 1 ; k_NO222 <= grid_points[2]-2 ; k_NO222 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1.bb1 ==*/
      rhs[m_NO221][i_NO224][j_NO223][k_NO222] = rhs[m_NO221][i_NO224][j_NO223][k_NO222]-dssp*(u[m_NO221][i_NO224][j_NO223-2][k_NO222]-4.0000000000000000E+00*u[m_NO221][i_NO224][j_NO223-1][k_NO222]+6.0000000000000000E+00*u[m_NO221][i_NO224][j_NO223][k_NO222]-4.0000000000000000E+00*u[m_NO221][i_NO224][j_NO223+1][k_NO222]+u[m_NO221][i_NO224][j_NO223+2][k_NO222]);
      }
      }
      }
      }
/* == compute_rhs#block1.bb19 ==*/
      j_NO97 = grid_points[1]-3;
/* == compute_rhs#block1.doall20 ==*/
      for (m_NO225 = 0 ; m_NO225 <= 4 ; m_NO225 += 1){
/* == compute_rhs#block1.doall20.loop1 ==*/
      for (i_NO227 = 1 ; i_NO227 <= grid_points[0]-2 ; i_NO227 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1 ==*/
      for (k_NO226 = 1 ; k_NO226 <= grid_points[2]-2 ; k_NO226 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1.bb1 ==*/
      rhs[m_NO225][i_NO227][j_NO97][k_NO226] = rhs[m_NO225][i_NO227][j_NO97][k_NO226]-dssp*(u[m_NO225][i_NO227][j_NO97-2][k_NO226]-4.0000000000000000E+00*u[m_NO225][i_NO227][j_NO97-1][k_NO226]+6.0000000000000000E+00*u[m_NO225][i_NO227][j_NO97][k_NO226]-4.0000000000000000E+00*u[m_NO225][i_NO227][j_NO97+1][k_NO226]);
      }
      }
      }
/* == compute_rhs#block1.bb21 ==*/
      j_NO97 = grid_points[1]-2;
/* == compute_rhs#block1.doall22 ==*/
      for (m_NO228 = 0 ; m_NO228 <= 4 ; m_NO228 += 1){
/* == compute_rhs#block1.doall22.loop1 ==*/
      for (i_NO230 = 1 ; i_NO230 <= grid_points[0]-2 ; i_NO230 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1 ==*/
      for (k_NO229 = 1 ; k_NO229 <= grid_points[2]-2 ; k_NO229 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1.bb1 ==*/
      rhs[m_NO228][i_NO230][j_NO97][k_NO229] = rhs[m_NO228][i_NO230][j_NO97][k_NO229]-dssp*(u[m_NO228][i_NO230][j_NO97-2][k_NO229]-4.0000000000000000E+00*u[m_NO228][i_NO230][j_NO97-1][k_NO229]+5.0000000000000000E+00*u[m_NO228][i_NO230][j_NO97][k_NO229]);
      }
      }
      }
/* == compute_rhs#block1.doall23 ==*/
      for (i_NO231 = 1 ; i_NO231 <= grid_points[0]-2 ; i_NO231 += 1){
/* == compute_rhs#block1.doall23.loop1 ==*/
      for (j_NO233 = 1 ; j_NO233 <= grid_points[1]-2 ; j_NO233 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1 ==*/
      for (k_NO232 = 1 ; k_NO232 <= grid_points[2]-2 ; k_NO232 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1.bb1 ==*/
      wijk_NO183 = ws[i_NO231][j_NO233][k_NO232];
      wp1_NO184 = ws[i_NO231][j_NO233][k_NO232+1];
      wm1_NO185 = ws[i_NO231][j_NO233][k_NO232-1];
      rhs[0][i_NO231][j_NO233][k_NO232] = rhs[0][i_NO231][j_NO233][k_NO232]+dz1tz1*(u[0][i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[0][i_NO231][j_NO233][k_NO232]+u[0][i_NO231][j_NO233][k_NO232-1])-tz2*(u[3][i_NO231][j_NO233][k_NO232+1]-u[3][i_NO231][j_NO233][k_NO232-1]);
      rhs[1][i_NO231][j_NO233][k_NO232] = rhs[1][i_NO231][j_NO233][k_NO232]+dz2tz1*(u[1][i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[1][i_NO231][j_NO233][k_NO232]+u[1][i_NO231][j_NO233][k_NO232-1])+zzcon2*(us[i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*us[i_NO231][j_NO233][k_NO232]+us[i_NO231][j_NO233][k_NO232-1])-tz2*(u[1][i_NO231][j_NO233][k_NO232+1]*wp1_NO184-u[1][i_NO231][j_NO233][k_NO232-1]*wm1_NO185);
      rhs[2][i_NO231][j_NO233][k_NO232] = rhs[2][i_NO231][j_NO233][k_NO232]+dz3tz1*(u[2][i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[2][i_NO231][j_NO233][k_NO232]+u[2][i_NO231][j_NO233][k_NO232-1])+zzcon2*(vs[i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*vs[i_NO231][j_NO233][k_NO232]+vs[i_NO231][j_NO233][k_NO232-1])-tz2*(u[2][i_NO231][j_NO233][k_NO232+1]*wp1_NO184-u[2][i_NO231][j_NO233][k_NO232-1]*wm1_NO185);
      rhs[3][i_NO231][j_NO233][k_NO232] = rhs[3][i_NO231][j_NO233][k_NO232]+dz4tz1*(u[3][i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[3][i_NO231][j_NO233][k_NO232]+u[3][i_NO231][j_NO233][k_NO232-1])+zzcon2*con43*(wp1_NO184-2.0000000000000000E+00*wijk_NO183+wm1_NO185)-tz2*(u[3][i_NO231][j_NO233][k_NO232+1]*wp1_NO184-u[3][i_NO231][j_NO233][k_NO232-1]*wm1_NO185+(u[4][i_NO231][j_NO233][k_NO232+1]-square[i_NO231][j_NO233][k_NO232+1]-u[4][i_NO231][j_NO233][k_NO232-1]+square[i_NO231][j_NO233][k_NO232-1])*c2);
      rhs[4][i_NO231][j_NO233][k_NO232] = rhs[4][i_NO231][j_NO233][k_NO232]+dz5tz1*(u[4][i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[4][i_NO231][j_NO233][k_NO232]+u[4][i_NO231][j_NO233][k_NO232-1])+zzcon3*(qs[i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*qs[i_NO231][j_NO233][k_NO232]+qs[i_NO231][j_NO233][k_NO232-1])+zzcon4*(wp1_NO184*wp1_NO184-2.0000000000000000E+00*wijk_NO183*wijk_NO183+wm1_NO185*wm1_NO185)+zzcon5*(u[4][i_NO231][j_NO233][k_NO232+1]*rho_i[i_NO231][j_NO233][k_NO232+1]-2.0000000000000000E+00*u[4][i_NO231][j_NO233][k_NO232]*rho_i[i_NO231][j_NO233][k_NO232]+u[4][i_NO231][j_NO233][k_NO232-1]*rho_i[i_NO231][j_NO233][k_NO232-1])-tz2*((c1*u[4][i_NO231][j_NO233][k_NO232+1]-c2*square[i_NO231][j_NO233][k_NO232+1])*wp1_NO184-(c1*u[4][i_NO231][j_NO233][k_NO232-1]-c2*square[i_NO231][j_NO233][k_NO232-1])*wm1_NO185);
      }
      }
      }
/* == compute_rhs#block1.bb24 ==*/
      k_NO98 = 1;
/* == compute_rhs#block1.doall25 ==*/
      for (m_NO234 = 0 ; m_NO234 <= 4 ; m_NO234 += 1){
/* == compute_rhs#block1.doall25.loop1 ==*/
      for (i_NO236 = 1 ; i_NO236 <= grid_points[0]-2 ; i_NO236 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1 ==*/
      for (j_NO235 = 1 ; j_NO235 <= grid_points[1]-2 ; j_NO235 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1.bb1 ==*/
      rhs[m_NO234][i_NO236][j_NO235][k_NO98] = rhs[m_NO234][i_NO236][j_NO235][k_NO98]-dssp*(5.0000000000000000E+00*u[m_NO234][i_NO236][j_NO235][k_NO98]-4.0000000000000000E+00*u[m_NO234][i_NO236][j_NO235][k_NO98+1]+u[m_NO234][i_NO236][j_NO235][k_NO98+2]);
      }
      }
      }
/* == compute_rhs#block1.bb26 ==*/
      k_NO98 = 2;
/* == compute_rhs#block1.doall27 ==*/
      for (m_NO237 = 0 ; m_NO237 <= 4 ; m_NO237 += 1){
/* == compute_rhs#block1.doall27.loop1 ==*/
      for (i_NO239 = 1 ; i_NO239 <= grid_points[0]-2 ; i_NO239 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1 ==*/
      for (j_NO238 = 1 ; j_NO238 <= grid_points[1]-2 ; j_NO238 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1.bb1 ==*/
      rhs[m_NO237][i_NO239][j_NO238][k_NO98] = rhs[m_NO237][i_NO239][j_NO238][k_NO98]-dssp*((-4.0000000000000000E+00)*u[m_NO237][i_NO239][j_NO238][k_NO98-1]+6.0000000000000000E+00*u[m_NO237][i_NO239][j_NO238][k_NO98]-4.0000000000000000E+00*u[m_NO237][i_NO239][j_NO238][k_NO98+1]+u[m_NO237][i_NO239][j_NO238][k_NO98+2]);
      }
      }
      }
/* == compute_rhs#block1.doall28 ==*/
      for (m_NO240 = 0 ; m_NO240 <= 4 ; m_NO240 += 1){
/* == compute_rhs#block1.doall28.loop1 ==*/
      for (i_NO243 = 1 ; i_NO243 <= grid_points[0]-2 ; i_NO243 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1 ==*/
      for (j_NO242 = 1 ; j_NO242 <= grid_points[1]-2 ; j_NO242 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1 ==*/
      for (k_NO241 = 3 ; k_NO241 <= grid_points[2]-3-1 ; k_NO241 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1.bb1 ==*/
      rhs[m_NO240][i_NO243][j_NO242][k_NO241] = rhs[m_NO240][i_NO243][j_NO242][k_NO241]-dssp*(u[m_NO240][i_NO243][j_NO242][k_NO241-2]-4.0000000000000000E+00*u[m_NO240][i_NO243][j_NO242][k_NO241-1]+6.0000000000000000E+00*u[m_NO240][i_NO243][j_NO242][k_NO241]-4.0000000000000000E+00*u[m_NO240][i_NO243][j_NO242][k_NO241+1]+u[m_NO240][i_NO243][j_NO242][k_NO241+2]);
      }
      }
      }
      }
/* == compute_rhs#block1.bb29 ==*/
      k_NO98 = grid_points[2]-3;
/* == compute_rhs#block1.doall30 ==*/
      for (m_NO244 = 0 ; m_NO244 <= 4 ; m_NO244 += 1){
/* == compute_rhs#block1.doall30.loop1 ==*/
      for (i_NO246 = 1 ; i_NO246 <= grid_points[0]-2 ; i_NO246 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1 ==*/
      for (j_NO245 = 1 ; j_NO245 <= grid_points[1]-2 ; j_NO245 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1.bb1 ==*/
      rhs[m_NO244][i_NO246][j_NO245][k_NO98] = rhs[m_NO244][i_NO246][j_NO245][k_NO98]-dssp*(u[m_NO244][i_NO246][j_NO245][k_NO98-2]-4.0000000000000000E+00*u[m_NO244][i_NO246][j_NO245][k_NO98-1]+6.0000000000000000E+00*u[m_NO244][i_NO246][j_NO245][k_NO98]-4.0000000000000000E+00*u[m_NO244][i_NO246][j_NO245][k_NO98+1]);
      }
      }
      }
/* == compute_rhs#block1.bb31 ==*/
      k_NO98 = grid_points[2]-2;
/* == compute_rhs#block1.doall32 ==*/
      for (m_NO247 = 0 ; m_NO247 <= 4 ; m_NO247 += 1){
/* == compute_rhs#block1.doall32.loop1 ==*/
      for (i_NO249 = 1 ; i_NO249 <= grid_points[0]-2 ; i_NO249 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1 ==*/
      for (j_NO248 = 1 ; j_NO248 <= grid_points[1]-2 ; j_NO248 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1.bb1 ==*/
      rhs[m_NO247][i_NO249][j_NO248][k_NO98] = rhs[m_NO247][i_NO249][j_NO248][k_NO98]-dssp*(u[m_NO247][i_NO249][j_NO248][k_NO98-2]-4.0000000000000000E+00*u[m_NO247][i_NO249][j_NO248][k_NO98-1]+5.0000000000000000E+00*u[m_NO247][i_NO249][j_NO248][k_NO98]);
      }
      }
      }
/* == compute_rhs#block1.doall33 ==*/
      for (m_NO250 = 0 ; m_NO250 <= 4 ; m_NO250 += 1){
/* == compute_rhs#block1.doall33.loop1 ==*/
      for (i_NO253 = 1 ; i_NO253 <= grid_points[0]-2 ; i_NO253 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1 ==*/
      for (j_NO252 = 1 ; j_NO252 <= grid_points[1]-2 ; j_NO252 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1 ==*/
      for (k_NO251 = 1 ; k_NO251 <= grid_points[2]-2 ; k_NO251 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1.bb1 ==*/
      rhs[m_NO250][i_NO253][j_NO252][k_NO251] = rhs[m_NO250][i_NO253][j_NO252][k_NO251]*dt;
      }
      }
      }
      }
/* == compute_rhs#block1.bb34 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 110: txinvr */
/* ******************* */
static void txinvr_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      double t1_NO99/* t1 */;
      double t2_NO100/* t2 */;
      double t3_NO101/* t3 */;
      double ac_NO102/* ac */;
      double ru1_NO103/* ru1 */;
      double uu_NO104/* uu */;
      double vv_NO105/* vv */;
      double ww_NO106/* ww */;
      double r1_NO107/* r1 */;
      double r2_NO108/* r2 */;
      double r3_NO109/* r3 */;
      double r4_NO110/* r4 */;
      double r5_NO111/* r5 */;
      double ac2inv_NO112/* ac2inv */;
      double t1_NO113/* t1 */;
      double t2_NO114/* t2 */;
      double t3_NO115/* t3 */;
      double ac_NO116/* ac */;
      double ru1_NO117/* ru1 */;
      double uu_NO118/* uu */;
      double vv_NO119/* vv */;
      double ww_NO120/* ww */;
      double r1_NO121/* r1 */;
      double r2_NO122/* r2 */;
      double r3_NO123/* r3 */;
      double r4_NO124/* r4 */;
      double r5_NO125/* r5 */;
      double ac2inv_NO126/* ac2inv */;
      int i_NO127/* i */;
      int k_NO128/* k */;
      int j_NO129/* j */;

/* @decl:pe0:module110@ */
/* == txinvr#block1 ==*/
/* == txinvr#block1.doall1 ==*/
      for (i_NO127 = 1 ; i_NO127 <= grid_points[0]-2 ; i_NO127 += 1){
/* == txinvr#block1.doall1.loop1 ==*/
      for (j_NO129 = 1 ; j_NO129 <= grid_points[1]-2 ; j_NO129 += 1){
/* == txinvr#block1.doall1.loop1.loop1 ==*/
      for (k_NO128 = 1 ; k_NO128 <= grid_points[2]-2 ; k_NO128 += 1){
/* == txinvr#block1.doall1.loop1.loop1.bb1 ==*/
      ru1_NO117 = rho_i[i_NO127][j_NO129][k_NO128];
      uu_NO118 = us[i_NO127][j_NO129][k_NO128];
      vv_NO119 = vs[i_NO127][j_NO129][k_NO128];
      ww_NO120 = ws[i_NO127][j_NO129][k_NO128];
      ac_NO116 = speed[i_NO127][j_NO129][k_NO128];
      ac2inv_NO126 = ainv[i_NO127][j_NO129][k_NO128]*ainv[i_NO127][j_NO129][k_NO128];
      r1_NO121 = rhs[0][i_NO127][j_NO129][k_NO128];
      r2_NO122 = rhs[1][i_NO127][j_NO129][k_NO128];
      r3_NO123 = rhs[2][i_NO127][j_NO129][k_NO128];
      r4_NO124 = rhs[3][i_NO127][j_NO129][k_NO128];
      r5_NO125 = rhs[4][i_NO127][j_NO129][k_NO128];
      t1_NO113 = c2*ac2inv_NO126*(qs[i_NO127][j_NO129][k_NO128]*r1_NO121-uu_NO118*r2_NO122-vv_NO119*r3_NO123-ww_NO120*r4_NO124+r5_NO125);
      t2_NO114 = bt*ru1_NO117*(uu_NO118*r1_NO121-r2_NO122);
      t3_NO115 = bt*ru1_NO117*ac_NO116*t1_NO113;
      rhs[0][i_NO127][j_NO129][k_NO128] = r1_NO121-t1_NO113;
      rhs[1][i_NO127][j_NO129][k_NO128] = -ru1_NO117*(ww_NO120*r1_NO121-r4_NO124);
      rhs[2][i_NO127][j_NO129][k_NO128] = ru1_NO117*(vv_NO119*r1_NO121-r3_NO123);
      rhs[3][i_NO127][j_NO129][k_NO128] = -t2_NO114+t3_NO115;
      rhs[4][i_NO127][j_NO129][k_NO128] = t2_NO114+t3_NO115;
      }
      }
      }
/* == txinvr#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 113: x_solve */
/* ******************* */
static void x_solve_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int n_NO99/* n */;
      int i1_NO100/* i1 */;
      int i2_NO101/* i2 */;
      int m_NO102/* m */;
      double fac1_NO103/* fac1 */;
      double fac2_NO104/* fac2 */;
      int m_NO105/* m */;
      int m_NO106/* m */;
      int m_NO107/* m */;
      int m_NO108/* m */;
      int m_NO109/* m */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int k_NO112/* k */;
      int j_NO113/* j */;
      int i_NO114/* i */;
      int k_NO115/* k */;
      int j_NO116/* j */;
      int m_NO117/* m */;
      int k_NO118/* k */;
      int j_NO119/* j */;
      int m_NO120/* m */;
      int k_NO121/* k */;
      int j_NO122/* j */;
      int m_NO123/* m */;
      int k_NO124/* k */;
      int j_NO125/* j */;
      int m_NO126/* m */;
      int i_NO127/* i */;
      int k_NO128/* k */;
      int j_NO129/* j */;
      int i_NO130/* i */;
      int m_NO131/* m */;
      double fac1_NO132/* fac1 */;
      double fac1_NO133/* fac1 */;
      double fac2_NO134/* fac2 */;
      double fac1_NO135/* fac1 */;
      double fac1_NO136/* fac1 */;
      double fac2_NO137/* fac2 */;
      int n_NO138/* n */;
      int n_NO139/* n */;
      int i1_NO140/* i1 */;
      int i2_NO141/* i2 */;
      int i_NO142/* i */;
      int j_NO143/* j */;
      int m_NO144/* m */;
      int m_NO145/* m */;
      int m_NO146/* m */;
      int k_NO147/* k */;
      int j_NO148/* j */;
      int m_NO149/* m */;
      int m_NO150/* m */;
      int m_NO151/* m */;
      int k_NO152/* k */;
      int m_NO153/* m */;
      int i_NO154/* i */;
      int j_NO155/* j */;
      int k_NO156/* k */;
      int j_NO157/* j */;
      int k_NO158/* k */;
      int m_NO159/* m */;
      int k_NO160/* k */;
      int j_NO161/* j */;
      int m_NO162/* m */;
      int k_NO163/* k */;
      int j_NO164/* j */;
      int i_NO165/* i */;
      int m_NO166/* m */;
      int k_NO167/* k */;
      int j_NO168/* j */;
      int m_NO169/* m */;
      int k_NO170/* k */;
      int j_NO171/* j */;
      int i_NO172/* i */;

/* @decl:pe0:module113@ */
/* == x_solve#block1 ==*/
/* == x_solve#block1.sb1 ==*/
      lhsx_PE0();
/* == x_solve#block1.bb2 ==*/
      n_NO99 = 0;
/* == x_solve#block1.loop3 ==*/
      for (i_NO142 = 0 ; i_NO142 <= grid_points[0]-3 ; i_NO142 += 1){
/* == x_solve#block1.loop3.bb1 ==*/
      i1_NO100 = i_NO142+1;
      i2_NO101 = i_NO142+2;
/* == x_solve#block1.loop3.doall2 ==*/
      for (j_NO143 = 1 ; j_NO143 <= grid_points[1]-2 ; j_NO143 += 1){
/* == x_solve#block1.loop3.doall2.loop1 ==*/
      for (k_NO147 = 1 ; k_NO147 <= grid_points[2]-2 ; k_NO147 += 1){
/* == x_solve#block1.loop3.doall2.loop1.bb1 ==*/
      fac1_NO132 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO142][j_NO143][k_NO147];
      lhs[n_NO99+3][i_NO142][j_NO143][k_NO147] = fac1_NO132*lhs[n_NO99+3][i_NO142][j_NO143][k_NO147];
      lhs[n_NO99+4][i_NO142][j_NO143][k_NO147] = fac1_NO132*lhs[n_NO99+4][i_NO142][j_NO143][k_NO147];
/* == x_solve#block1.loop3.doall2.loop1.loop2 ==*/
      for (m_NO144 = 0 ; m_NO144 <= 2 ; m_NO144 += 1){
/* == x_solve#block1.loop3.doall2.loop1.loop2.bb1 ==*/
      rhs[m_NO144][i_NO142][j_NO143][k_NO147] = fac1_NO132*rhs[m_NO144][i_NO142][j_NO143][k_NO147];
      }
/* == x_solve#block1.loop3.doall2.loop1.bb3 ==*/
      lhs[n_NO99+2][i1_NO100][j_NO143][k_NO147] = lhs[n_NO99+2][i1_NO100][j_NO143][k_NO147]-lhs[n_NO99+1][i1_NO100][j_NO143][k_NO147]*lhs[n_NO99+3][i_NO142][j_NO143][k_NO147];
      lhs[n_NO99+3][i1_NO100][j_NO143][k_NO147] = lhs[n_NO99+3][i1_NO100][j_NO143][k_NO147]-lhs[n_NO99+1][i1_NO100][j_NO143][k_NO147]*lhs[n_NO99+4][i_NO142][j_NO143][k_NO147];
/* == x_solve#block1.loop3.doall2.loop1.loop4 ==*/
      for (m_NO145 = 0 ; m_NO145 <= 2 ; m_NO145 += 1){
/* == x_solve#block1.loop3.doall2.loop1.loop4.bb1 ==*/
      rhs[m_NO145][i1_NO100][j_NO143][k_NO147] = rhs[m_NO145][i1_NO100][j_NO143][k_NO147]-lhs[n_NO99+1][i1_NO100][j_NO143][k_NO147]*rhs[m_NO145][i_NO142][j_NO143][k_NO147];
      }
/* == x_solve#block1.loop3.doall2.loop1.bb5 ==*/
      lhs[n_NO99+1][i2_NO101][j_NO143][k_NO147] = lhs[n_NO99+1][i2_NO101][j_NO143][k_NO147]-lhs[n_NO99][i2_NO101][j_NO143][k_NO147]*lhs[n_NO99+3][i_NO142][j_NO143][k_NO147];
      lhs[n_NO99+2][i2_NO101][j_NO143][k_NO147] = lhs[n_NO99+2][i2_NO101][j_NO143][k_NO147]-lhs[n_NO99][i2_NO101][j_NO143][k_NO147]*lhs[n_NO99+4][i_NO142][j_NO143][k_NO147];
/* == x_solve#block1.loop3.doall2.loop1.loop6 ==*/
      for (m_NO146 = 0 ; m_NO146 <= 2 ; m_NO146 += 1){
/* == x_solve#block1.loop3.doall2.loop1.loop6.bb1 ==*/
      rhs[m_NO146][i2_NO101][j_NO143][k_NO147] = rhs[m_NO146][i2_NO101][j_NO143][k_NO147]-lhs[n_NO99][i2_NO101][j_NO143][k_NO147]*rhs[m_NO146][i_NO142][j_NO143][k_NO147];
      }
      }
      }
      }
/* == x_solve#block1.bb4 ==*/
      i_NO96 = grid_points[0]-2;
      i1_NO100 = grid_points[0]-1;
/* == x_solve#block1.doall5 ==*/
      for (j_NO148 = 1 ; j_NO148 <= grid_points[1]-2 ; j_NO148 += 1){
/* == x_solve#block1.doall5.loop1 ==*/
      for (k_NO152 = 1 ; k_NO152 <= grid_points[2]-2 ; k_NO152 += 1){
/* == x_solve#block1.doall5.loop1.bb1 ==*/
      fac1_NO133 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO96][j_NO148][k_NO152];
      lhs[n_NO99+3][i_NO96][j_NO148][k_NO152] = fac1_NO133*lhs[n_NO99+3][i_NO96][j_NO148][k_NO152];
      lhs[n_NO99+4][i_NO96][j_NO148][k_NO152] = fac1_NO133*lhs[n_NO99+4][i_NO96][j_NO148][k_NO152];
/* == x_solve#block1.doall5.loop1.loop2 ==*/
      for (m_NO149 = 0 ; m_NO149 <= 2 ; m_NO149 += 1){
/* == x_solve#block1.doall5.loop1.loop2.bb1 ==*/
      rhs[m_NO149][i_NO96][j_NO148][k_NO152] = fac1_NO133*rhs[m_NO149][i_NO96][j_NO148][k_NO152];
      }
/* == x_solve#block1.doall5.loop1.bb3 ==*/
      lhs[n_NO99+2][i1_NO100][j_NO148][k_NO152] = lhs[n_NO99+2][i1_NO100][j_NO148][k_NO152]-lhs[n_NO99+1][i1_NO100][j_NO148][k_NO152]*lhs[n_NO99+3][i_NO96][j_NO148][k_NO152];
      lhs[n_NO99+3][i1_NO100][j_NO148][k_NO152] = lhs[n_NO99+3][i1_NO100][j_NO148][k_NO152]-lhs[n_NO99+1][i1_NO100][j_NO148][k_NO152]*lhs[n_NO99+4][i_NO96][j_NO148][k_NO152];
/* == x_solve#block1.doall5.loop1.loop4 ==*/
      for (m_NO150 = 0 ; m_NO150 <= 2 ; m_NO150 += 1){
/* == x_solve#block1.doall5.loop1.loop4.bb1 ==*/
      rhs[m_NO150][i1_NO100][j_NO148][k_NO152] = rhs[m_NO150][i1_NO100][j_NO148][k_NO152]-lhs[n_NO99+1][i1_NO100][j_NO148][k_NO152]*rhs[m_NO150][i_NO96][j_NO148][k_NO152];
      }
/* == x_solve#block1.doall5.loop1.bb5 ==*/
      fac2_NO134 = 1.0000000000000000E+00/ lhs[n_NO99+2][i1_NO100][j_NO148][k_NO152];
/* == x_solve#block1.doall5.loop1.loop6 ==*/
      for (m_NO151 = 0 ; m_NO151 <= 2 ; m_NO151 += 1){
/* == x_solve#block1.doall5.loop1.loop6.bb1 ==*/
      rhs[m_NO151][i1_NO100][j_NO148][k_NO152] = fac2_NO134*rhs[m_NO151][i1_NO100][j_NO148][k_NO152];
      }
      }
      }
/* == x_solve#block1.loop6 ==*/
      for (m_NO153 = 3 ; m_NO153 <= 4 ; m_NO153 += 1){
/* == x_solve#block1.loop6.bb1 ==*/
      n_NO99 = (m_NO153-3+1)*5;
/* == x_solve#block1.loop6.loop2 ==*/
      for (i_NO154 = 0 ; i_NO154 <= grid_points[0]-3 ; i_NO154 += 1){
/* == x_solve#block1.loop6.loop2.bb1 ==*/
      i1_NO100 = i_NO154+1;
      i2_NO101 = i_NO154+2;
/* == x_solve#block1.loop6.loop2.doall2 ==*/
      for (j_NO155 = 1 ; j_NO155 <= grid_points[1]-2 ; j_NO155 += 1){
/* == x_solve#block1.loop6.loop2.doall2.loop1 ==*/
      for (k_NO156 = 1 ; k_NO156 <= grid_points[2]-2 ; k_NO156 += 1){
/* == x_solve#block1.loop6.loop2.doall2.loop1.bb1 ==*/
      fac1_NO135 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+3][i_NO154][j_NO155][k_NO156] = fac1_NO135*lhs[n_NO99+3][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+4][i_NO154][j_NO155][k_NO156] = fac1_NO135*lhs[n_NO99+4][i_NO154][j_NO155][k_NO156];
      rhs[m_NO153][i_NO154][j_NO155][k_NO156] = fac1_NO135*rhs[m_NO153][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+2][i1_NO100][j_NO155][k_NO156] = lhs[n_NO99+2][i1_NO100][j_NO155][k_NO156]-lhs[n_NO99+1][i1_NO100][j_NO155][k_NO156]*lhs[n_NO99+3][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+3][i1_NO100][j_NO155][k_NO156] = lhs[n_NO99+3][i1_NO100][j_NO155][k_NO156]-lhs[n_NO99+1][i1_NO100][j_NO155][k_NO156]*lhs[n_NO99+4][i_NO154][j_NO155][k_NO156];
      rhs[m_NO153][i1_NO100][j_NO155][k_NO156] = rhs[m_NO153][i1_NO100][j_NO155][k_NO156]-lhs[n_NO99+1][i1_NO100][j_NO155][k_NO156]*rhs[m_NO153][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+1][i2_NO101][j_NO155][k_NO156] = lhs[n_NO99+1][i2_NO101][j_NO155][k_NO156]-lhs[n_NO99][i2_NO101][j_NO155][k_NO156]*lhs[n_NO99+3][i_NO154][j_NO155][k_NO156];
      lhs[n_NO99+2][i2_NO101][j_NO155][k_NO156] = lhs[n_NO99+2][i2_NO101][j_NO155][k_NO156]-lhs[n_NO99][i2_NO101][j_NO155][k_NO156]*lhs[n_NO99+4][i_NO154][j_NO155][k_NO156];
      rhs[m_NO153][i2_NO101][j_NO155][k_NO156] = rhs[m_NO153][i2_NO101][j_NO155][k_NO156]-lhs[n_NO99][i2_NO101][j_NO155][k_NO156]*rhs[m_NO153][i_NO154][j_NO155][k_NO156];
      }
      }
      }
/* == x_solve#block1.loop6.bb3 ==*/
      i_NO96 = grid_points[0]-2;
      i1_NO100 = grid_points[0]-1;
/* == x_solve#block1.loop6.doall4 ==*/
      for (j_NO157 = 1 ; j_NO157 <= grid_points[1]-2 ; j_NO157 += 1){
/* == x_solve#block1.loop6.doall4.loop1 ==*/
      for (k_NO158 = 1 ; k_NO158 <= grid_points[2]-2 ; k_NO158 += 1){
/* == x_solve#block1.loop6.doall4.loop1.bb1 ==*/
      fac1_NO136 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO96][j_NO157][k_NO158];
      lhs[n_NO99+3][i_NO96][j_NO157][k_NO158] = fac1_NO136*lhs[n_NO99+3][i_NO96][j_NO157][k_NO158];
      lhs[n_NO99+4][i_NO96][j_NO157][k_NO158] = fac1_NO136*lhs[n_NO99+4][i_NO96][j_NO157][k_NO158];
      rhs[m_NO153][i_NO96][j_NO157][k_NO158] = fac1_NO136*rhs[m_NO153][i_NO96][j_NO157][k_NO158];
      lhs[n_NO99+2][i1_NO100][j_NO157][k_NO158] = lhs[n_NO99+2][i1_NO100][j_NO157][k_NO158]-lhs[n_NO99+1][i1_NO100][j_NO157][k_NO158]*lhs[n_NO99+3][i_NO96][j_NO157][k_NO158];
      lhs[n_NO99+3][i1_NO100][j_NO157][k_NO158] = lhs[n_NO99+3][i1_NO100][j_NO157][k_NO158]-lhs[n_NO99+1][i1_NO100][j_NO157][k_NO158]*lhs[n_NO99+4][i_NO96][j_NO157][k_NO158];
      rhs[m_NO153][i1_NO100][j_NO157][k_NO158] = rhs[m_NO153][i1_NO100][j_NO157][k_NO158]-lhs[n_NO99+1][i1_NO100][j_NO157][k_NO158]*rhs[m_NO153][i_NO96][j_NO157][k_NO158];
      fac2_NO137 = 1.0000000000000000E+00/ lhs[n_NO99+2][i1_NO100][j_NO157][k_NO158];
      rhs[m_NO153][i1_NO100][j_NO157][k_NO158] = fac2_NO137*rhs[m_NO153][i1_NO100][j_NO157][k_NO158];
      }
      }
      }
/* == x_solve#block1.bb7 ==*/
      i_NO96 = grid_points[0]-2;
      i1_NO100 = grid_points[0]-1;
      n_NO99 = 0;
/* == x_solve#block1.doall8 ==*/
      for (m_NO159 = 0 ; m_NO159 <= 2 ; m_NO159 += 1){
/* == x_solve#block1.doall8.loop1 ==*/
      for (j_NO161 = 1 ; j_NO161 <= grid_points[1]-2 ; j_NO161 += 1){
/* == x_solve#block1.doall8.loop1.loop1 ==*/
      for (k_NO160 = 1 ; k_NO160 <= grid_points[2]-2 ; k_NO160 += 1){
/* == x_solve#block1.doall8.loop1.loop1.bb1 ==*/
      rhs[m_NO159][i_NO96][j_NO161][k_NO160] = rhs[m_NO159][i_NO96][j_NO161][k_NO160]-lhs[n_NO99+3][i_NO96][j_NO161][k_NO160]*rhs[m_NO159][i1_NO100][j_NO161][k_NO160];
      }
      }
      }
/* == x_solve#block1.doall9 ==*/
      for (m_NO162 = 3 ; m_NO162 <= 4 ; m_NO162 += 1){
/* == x_solve#block1.doall9.loop1 ==*/
      for (j_NO164 = 1 ; j_NO164 <= grid_points[1]-2 ; j_NO164 += 1){
/* == x_solve#block1.doall9.loop1.loop1 ==*/
      for (k_NO163 = 1 ; k_NO163 <= grid_points[2]-2 ; k_NO163 += 1){
/* == x_solve#block1.doall9.loop1.loop1.bb1 ==*/
      n_NO138 = (m_NO162-3+1)*5;
      rhs[m_NO162][i_NO96][j_NO164][k_NO163] = rhs[m_NO162][i_NO96][j_NO164][k_NO163]-lhs[n_NO138+3][i_NO96][j_NO164][k_NO163]*rhs[m_NO162][i1_NO100][j_NO164][k_NO163];
      }
      }
      }
/* == x_solve#block1.bb10 ==*/
      n_NO99 = 0;
/* == x_solve#block1.loop11 ==*/
      for (i_NO165 = grid_points[0]-3 ; i_NO165 >= 0 ; i_NO165 += (-1)){
/* == x_solve#block1.loop11.bb1 ==*/
      i1_NO100 = i_NO165+1;
      i2_NO101 = i_NO165+2;
/* == x_solve#block1.loop11.doall2 ==*/
      for (m_NO166 = 0 ; m_NO166 <= 2 ; m_NO166 += 1){
/* == x_solve#block1.loop11.doall2.loop1 ==*/
      for (j_NO168 = 1 ; j_NO168 <= grid_points[1]-2 ; j_NO168 += 1){
/* == x_solve#block1.loop11.doall2.loop1.loop1 ==*/
      for (k_NO167 = 1 ; k_NO167 <= grid_points[2]-2 ; k_NO167 += 1){
/* == x_solve#block1.loop11.doall2.loop1.loop1.bb1 ==*/
      rhs[m_NO166][i_NO165][j_NO168][k_NO167] = rhs[m_NO166][i_NO165][j_NO168][k_NO167]-lhs[n_NO99+3][i_NO165][j_NO168][k_NO167]*rhs[m_NO166][i1_NO100][j_NO168][k_NO167]-lhs[n_NO99+4][i_NO165][j_NO168][k_NO167]*rhs[m_NO166][i2_NO101][j_NO168][k_NO167];
      }
      }
      }
      }
/* == x_solve#block1.doall12 ==*/
      for (m_NO169 = 3 ; m_NO169 <= 4 ; m_NO169 += 1){
/* == x_solve#block1.doall12.bb1 ==*/
      n_NO139 = (m_NO169-3+1)*5;
/* == x_solve#block1.doall12.loop2 ==*/
      for (i_NO172 = grid_points[0]-3 ; i_NO172 >= 0 ; i_NO172 += (-1)){
/* == x_solve#block1.doall12.loop2.bb1 ==*/
      i1_NO140 = i_NO172+1;
      i2_NO141 = i_NO172+2;
/* == x_solve#block1.doall12.loop2.loop2 ==*/
      for (j_NO171 = 1 ; j_NO171 <= grid_points[1]-2 ; j_NO171 += 1){
/* == x_solve#block1.doall12.loop2.loop2.loop1 ==*/
      for (k_NO170 = 1 ; k_NO170 <= grid_points[2]-2 ; k_NO170 += 1){
/* == x_solve#block1.doall12.loop2.loop2.loop1.bb1 ==*/
      rhs[m_NO169][i_NO172][j_NO171][k_NO170] = rhs[m_NO169][i_NO172][j_NO171][k_NO170]-lhs[n_NO139+3][i_NO172][j_NO171][k_NO170]*rhs[m_NO169][i1_NO140][j_NO171][k_NO170]-lhs[n_NO139+4][i_NO172][j_NO171][k_NO170]*rhs[m_NO169][i2_NO141][j_NO171][k_NO170];
      }
      }
      }
      }
/* == x_solve#block1.sb13 ==*/
      ninvr_PE0();
/* == x_solve#block1.bb14 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 114: y_solve */
/* ******************* */
static void y_solve_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int n_NO99/* n */;
      int j1_NO100/* j1 */;
      int j2_NO101/* j2 */;
      int m_NO102/* m */;
      double fac1_NO103/* fac1 */;
      double fac2_NO104/* fac2 */;
      int m_NO105/* m */;
      int m_NO106/* m */;
      int m_NO107/* m */;
      int m_NO108/* m */;
      int m_NO109/* m */;
      int k_NO110/* k */;
      int i_NO111/* i */;
      int k_NO112/* k */;
      int i_NO113/* i */;
      int j_NO114/* j */;
      int k_NO115/* k */;
      int i_NO116/* i */;
      int m_NO117/* m */;
      int k_NO118/* k */;
      int i_NO119/* i */;
      int m_NO120/* m */;
      int k_NO121/* k */;
      int i_NO122/* i */;
      int m_NO123/* m */;
      int k_NO124/* k */;
      int i_NO125/* i */;
      int j_NO126/* j */;
      int m_NO127/* m */;
      int k_NO128/* k */;
      int i_NO129/* i */;
      int j_NO130/* j */;
      int m_NO131/* m */;
      double fac1_NO132/* fac1 */;
      double fac1_NO133/* fac1 */;
      double fac2_NO134/* fac2 */;
      double fac1_NO135/* fac1 */;
      double fac1_NO136/* fac1 */;
      double fac2_NO137/* fac2 */;
      int n_NO138/* n */;
      int j1_NO139/* j1 */;
      int j2_NO140/* j2 */;
      int n_NO141/* n */;
      int j1_NO142/* j1 */;
      int j2_NO143/* j2 */;
      int j_NO144/* j */;
      int i_NO145/* i */;
      int m_NO146/* m */;
      int m_NO147/* m */;
      int m_NO148/* m */;
      int k_NO149/* k */;
      int i_NO150/* i */;
      int m_NO151/* m */;
      int m_NO152/* m */;
      int m_NO153/* m */;
      int k_NO154/* k */;
      int m_NO155/* m */;
      int j_NO156/* j */;
      int i_NO157/* i */;
      int k_NO158/* k */;
      int i_NO159/* i */;
      int k_NO160/* k */;
      int m_NO161/* m */;
      int k_NO162/* k */;
      int i_NO163/* i */;
      int m_NO164/* m */;
      int k_NO165/* k */;
      int i_NO166/* i */;
      int m_NO167/* m */;
      int k_NO168/* k */;
      int i_NO169/* i */;
      int j_NO170/* j */;
      int m_NO171/* m */;
      int k_NO172/* k */;
      int i_NO173/* i */;
      int j_NO174/* j */;

/* @decl:pe0:module114@ */
/* == y_solve#block1 ==*/
/* == y_solve#block1.sb1 ==*/
      lhsy_PE0();
/* == y_solve#block1.bb2 ==*/
      n_NO99 = 0;
/* == y_solve#block1.loop3 ==*/
      for (j_NO144 = 0 ; j_NO144 <= grid_points[1]-3 ; j_NO144 += 1){
/* == y_solve#block1.loop3.bb1 ==*/
      j1_NO100 = j_NO144+1;
      j2_NO101 = j_NO144+2;
/* == y_solve#block1.loop3.doall2 ==*/
      for (i_NO145 = 1 ; i_NO145 <= grid_points[0]-2 ; i_NO145 += 1){
/* == y_solve#block1.loop3.doall2.loop1 ==*/
      for (k_NO149 = 1 ; k_NO149 <= grid_points[2]-2 ; k_NO149 += 1){
/* == y_solve#block1.loop3.doall2.loop1.bb1 ==*/
      fac1_NO132 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO145][j_NO144][k_NO149];
      lhs[n_NO99+3][i_NO145][j_NO144][k_NO149] = fac1_NO132*lhs[n_NO99+3][i_NO145][j_NO144][k_NO149];
      lhs[n_NO99+4][i_NO145][j_NO144][k_NO149] = fac1_NO132*lhs[n_NO99+4][i_NO145][j_NO144][k_NO149];
/* == y_solve#block1.loop3.doall2.loop1.loop2 ==*/
      for (m_NO146 = 0 ; m_NO146 <= 2 ; m_NO146 += 1){
/* == y_solve#block1.loop3.doall2.loop1.loop2.bb1 ==*/
      rhs[m_NO146][i_NO145][j_NO144][k_NO149] = fac1_NO132*rhs[m_NO146][i_NO145][j_NO144][k_NO149];
      }
/* == y_solve#block1.loop3.doall2.loop1.bb3 ==*/
      lhs[n_NO99+2][i_NO145][j1_NO100][k_NO149] = lhs[n_NO99+2][i_NO145][j1_NO100][k_NO149]-lhs[n_NO99+1][i_NO145][j1_NO100][k_NO149]*lhs[n_NO99+3][i_NO145][j_NO144][k_NO149];
      lhs[n_NO99+3][i_NO145][j1_NO100][k_NO149] = lhs[n_NO99+3][i_NO145][j1_NO100][k_NO149]-lhs[n_NO99+1][i_NO145][j1_NO100][k_NO149]*lhs[n_NO99+4][i_NO145][j_NO144][k_NO149];
/* == y_solve#block1.loop3.doall2.loop1.loop4 ==*/
      for (m_NO147 = 0 ; m_NO147 <= 2 ; m_NO147 += 1){
/* == y_solve#block1.loop3.doall2.loop1.loop4.bb1 ==*/
      rhs[m_NO147][i_NO145][j1_NO100][k_NO149] = rhs[m_NO147][i_NO145][j1_NO100][k_NO149]-lhs[n_NO99+1][i_NO145][j1_NO100][k_NO149]*rhs[m_NO147][i_NO145][j_NO144][k_NO149];
      }
/* == y_solve#block1.loop3.doall2.loop1.bb5 ==*/
      lhs[n_NO99+1][i_NO145][j2_NO101][k_NO149] = lhs[n_NO99+1][i_NO145][j2_NO101][k_NO149]-lhs[n_NO99][i_NO145][j2_NO101][k_NO149]*lhs[n_NO99+3][i_NO145][j_NO144][k_NO149];
      lhs[n_NO99+2][i_NO145][j2_NO101][k_NO149] = lhs[n_NO99+2][i_NO145][j2_NO101][k_NO149]-lhs[n_NO99][i_NO145][j2_NO101][k_NO149]*lhs[n_NO99+4][i_NO145][j_NO144][k_NO149];
/* == y_solve#block1.loop3.doall2.loop1.loop6 ==*/
      for (m_NO148 = 0 ; m_NO148 <= 2 ; m_NO148 += 1){
/* == y_solve#block1.loop3.doall2.loop1.loop6.bb1 ==*/
      rhs[m_NO148][i_NO145][j2_NO101][k_NO149] = rhs[m_NO148][i_NO145][j2_NO101][k_NO149]-lhs[n_NO99][i_NO145][j2_NO101][k_NO149]*rhs[m_NO148][i_NO145][j_NO144][k_NO149];
      }
      }
      }
      }
/* == y_solve#block1.bb4 ==*/
      j_NO97 = grid_points[1]-2;
      j1_NO100 = grid_points[1]-1;
/* == y_solve#block1.doall5 ==*/
      for (i_NO150 = 1 ; i_NO150 <= grid_points[0]-2 ; i_NO150 += 1){
/* == y_solve#block1.doall5.loop1 ==*/
      for (k_NO154 = 1 ; k_NO154 <= grid_points[2]-2 ; k_NO154 += 1){
/* == y_solve#block1.doall5.loop1.bb1 ==*/
      fac1_NO133 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO150][j_NO97][k_NO154];
      lhs[n_NO99+3][i_NO150][j_NO97][k_NO154] = fac1_NO133*lhs[n_NO99+3][i_NO150][j_NO97][k_NO154];
      lhs[n_NO99+4][i_NO150][j_NO97][k_NO154] = fac1_NO133*lhs[n_NO99+4][i_NO150][j_NO97][k_NO154];
/* == y_solve#block1.doall5.loop1.loop2 ==*/
      for (m_NO151 = 0 ; m_NO151 <= 2 ; m_NO151 += 1){
/* == y_solve#block1.doall5.loop1.loop2.bb1 ==*/
      rhs[m_NO151][i_NO150][j_NO97][k_NO154] = fac1_NO133*rhs[m_NO151][i_NO150][j_NO97][k_NO154];
      }
/* == y_solve#block1.doall5.loop1.bb3 ==*/
      lhs[n_NO99+2][i_NO150][j1_NO100][k_NO154] = lhs[n_NO99+2][i_NO150][j1_NO100][k_NO154]-lhs[n_NO99+1][i_NO150][j1_NO100][k_NO154]*lhs[n_NO99+3][i_NO150][j_NO97][k_NO154];
      lhs[n_NO99+3][i_NO150][j1_NO100][k_NO154] = lhs[n_NO99+3][i_NO150][j1_NO100][k_NO154]-lhs[n_NO99+1][i_NO150][j1_NO100][k_NO154]*lhs[n_NO99+4][i_NO150][j_NO97][k_NO154];
/* == y_solve#block1.doall5.loop1.loop4 ==*/
      for (m_NO152 = 0 ; m_NO152 <= 2 ; m_NO152 += 1){
/* == y_solve#block1.doall5.loop1.loop4.bb1 ==*/
      rhs[m_NO152][i_NO150][j1_NO100][k_NO154] = rhs[m_NO152][i_NO150][j1_NO100][k_NO154]-lhs[n_NO99+1][i_NO150][j1_NO100][k_NO154]*rhs[m_NO152][i_NO150][j_NO97][k_NO154];
      }
/* == y_solve#block1.doall5.loop1.bb5 ==*/
      fac2_NO134 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO150][j1_NO100][k_NO154];
/* == y_solve#block1.doall5.loop1.loop6 ==*/
      for (m_NO153 = 0 ; m_NO153 <= 2 ; m_NO153 += 1){
/* == y_solve#block1.doall5.loop1.loop6.bb1 ==*/
      rhs[m_NO153][i_NO150][j1_NO100][k_NO154] = fac2_NO134*rhs[m_NO153][i_NO150][j1_NO100][k_NO154];
      }
      }
      }
/* == y_solve#block1.loop6 ==*/
      for (m_NO155 = 3 ; m_NO155 <= 4 ; m_NO155 += 1){
/* == y_solve#block1.loop6.bb1 ==*/
      n_NO99 = (m_NO155-3+1)*5;
/* == y_solve#block1.loop6.loop2 ==*/
      for (j_NO156 = 0 ; j_NO156 <= grid_points[1]-3 ; j_NO156 += 1){
/* == y_solve#block1.loop6.loop2.bb1 ==*/
      j1_NO100 = j_NO156+1;
      j2_NO101 = j_NO156+2;
/* == y_solve#block1.loop6.loop2.doall2 ==*/
      for (i_NO157 = 1 ; i_NO157 <= grid_points[0]-2 ; i_NO157 += 1){
/* == y_solve#block1.loop6.loop2.doall2.loop1 ==*/
      for (k_NO158 = 1 ; k_NO158 <= grid_points[2]-2 ; k_NO158 += 1){
/* == y_solve#block1.loop6.loop2.doall2.loop1.bb1 ==*/
      fac1_NO135 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+3][i_NO157][j_NO156][k_NO158] = fac1_NO135*lhs[n_NO99+3][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+4][i_NO157][j_NO156][k_NO158] = fac1_NO135*lhs[n_NO99+4][i_NO157][j_NO156][k_NO158];
      rhs[m_NO155][i_NO157][j_NO156][k_NO158] = fac1_NO135*rhs[m_NO155][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+2][i_NO157][j1_NO100][k_NO158] = lhs[n_NO99+2][i_NO157][j1_NO100][k_NO158]-lhs[n_NO99+1][i_NO157][j1_NO100][k_NO158]*lhs[n_NO99+3][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+3][i_NO157][j1_NO100][k_NO158] = lhs[n_NO99+3][i_NO157][j1_NO100][k_NO158]-lhs[n_NO99+1][i_NO157][j1_NO100][k_NO158]*lhs[n_NO99+4][i_NO157][j_NO156][k_NO158];
      rhs[m_NO155][i_NO157][j1_NO100][k_NO158] = rhs[m_NO155][i_NO157][j1_NO100][k_NO158]-lhs[n_NO99+1][i_NO157][j1_NO100][k_NO158]*rhs[m_NO155][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+1][i_NO157][j2_NO101][k_NO158] = lhs[n_NO99+1][i_NO157][j2_NO101][k_NO158]-lhs[n_NO99][i_NO157][j2_NO101][k_NO158]*lhs[n_NO99+3][i_NO157][j_NO156][k_NO158];
      lhs[n_NO99+2][i_NO157][j2_NO101][k_NO158] = lhs[n_NO99+2][i_NO157][j2_NO101][k_NO158]-lhs[n_NO99][i_NO157][j2_NO101][k_NO158]*lhs[n_NO99+4][i_NO157][j_NO156][k_NO158];
      rhs[m_NO155][i_NO157][j2_NO101][k_NO158] = rhs[m_NO155][i_NO157][j2_NO101][k_NO158]-lhs[n_NO99][i_NO157][j2_NO101][k_NO158]*rhs[m_NO155][i_NO157][j_NO156][k_NO158];
      }
      }
      }
/* == y_solve#block1.loop6.bb3 ==*/
      j_NO97 = grid_points[1]-2;
      j1_NO100 = grid_points[1]-1;
/* == y_solve#block1.loop6.doall4 ==*/
      for (i_NO159 = 1 ; i_NO159 <= grid_points[0]-2 ; i_NO159 += 1){
/* == y_solve#block1.loop6.doall4.loop1 ==*/
      for (k_NO160 = 1 ; k_NO160 <= grid_points[2]-2 ; k_NO160 += 1){
/* == y_solve#block1.loop6.doall4.loop1.bb1 ==*/
      fac1_NO136 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO159][j_NO97][k_NO160];
      lhs[n_NO99+3][i_NO159][j_NO97][k_NO160] = fac1_NO136*lhs[n_NO99+3][i_NO159][j_NO97][k_NO160];
      lhs[n_NO99+4][i_NO159][j_NO97][k_NO160] = fac1_NO136*lhs[n_NO99+4][i_NO159][j_NO97][k_NO160];
      rhs[m_NO155][i_NO159][j_NO97][k_NO160] = fac1_NO136*rhs[m_NO155][i_NO159][j_NO97][k_NO160];
      lhs[n_NO99+2][i_NO159][j1_NO100][k_NO160] = lhs[n_NO99+2][i_NO159][j1_NO100][k_NO160]-lhs[n_NO99+1][i_NO159][j1_NO100][k_NO160]*lhs[n_NO99+3][i_NO159][j_NO97][k_NO160];
      lhs[n_NO99+3][i_NO159][j1_NO100][k_NO160] = lhs[n_NO99+3][i_NO159][j1_NO100][k_NO160]-lhs[n_NO99+1][i_NO159][j1_NO100][k_NO160]*lhs[n_NO99+4][i_NO159][j_NO97][k_NO160];
      rhs[m_NO155][i_NO159][j1_NO100][k_NO160] = rhs[m_NO155][i_NO159][j1_NO100][k_NO160]-lhs[n_NO99+1][i_NO159][j1_NO100][k_NO160]*rhs[m_NO155][i_NO159][j_NO97][k_NO160];
      fac2_NO137 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO159][j1_NO100][k_NO160];
      rhs[m_NO155][i_NO159][j1_NO100][k_NO160] = fac2_NO137*rhs[m_NO155][i_NO159][j1_NO100][k_NO160];
      }
      }
      }
/* == y_solve#block1.bb7 ==*/
      j_NO97 = grid_points[1]-2;
      j1_NO100 = grid_points[1]-1;
      n_NO99 = 0;
/* == y_solve#block1.doall8 ==*/
      for (m_NO161 = 0 ; m_NO161 <= 2 ; m_NO161 += 1){
/* == y_solve#block1.doall8.loop1 ==*/
      for (i_NO163 = 1 ; i_NO163 <= grid_points[0]-2 ; i_NO163 += 1){
/* == y_solve#block1.doall8.loop1.loop1 ==*/
      for (k_NO162 = 1 ; k_NO162 <= grid_points[2]-2 ; k_NO162 += 1){
/* == y_solve#block1.doall8.loop1.loop1.bb1 ==*/
      rhs[m_NO161][i_NO163][j_NO97][k_NO162] = rhs[m_NO161][i_NO163][j_NO97][k_NO162]-lhs[n_NO99+3][i_NO163][j_NO97][k_NO162]*rhs[m_NO161][i_NO163][j1_NO100][k_NO162];
      }
      }
      }
/* == y_solve#block1.doall9 ==*/
      for (m_NO164 = 3 ; m_NO164 <= 4 ; m_NO164 += 1){
/* == y_solve#block1.doall9.loop1 ==*/
      for (i_NO166 = 1 ; i_NO166 <= grid_points[0]-2 ; i_NO166 += 1){
/* == y_solve#block1.doall9.loop1.loop1 ==*/
      for (k_NO165 = 1 ; k_NO165 <= grid_points[2]-2 ; k_NO165 += 1){
/* == y_solve#block1.doall9.loop1.loop1.bb1 ==*/
      n_NO138 = (m_NO164-3+1)*5;
      rhs[m_NO164][i_NO166][j_NO97][k_NO165] = rhs[m_NO164][i_NO166][j_NO97][k_NO165]-lhs[n_NO138+3][i_NO166][j_NO97][k_NO165]*rhs[m_NO164][i_NO166][j1_NO100][k_NO165];
      }
      }
      }
/* == y_solve#block1.bb10 ==*/
      n_NO99 = 0;
/* == y_solve#block1.doall11 ==*/
      for (m_NO167 = 0 ; m_NO167 <= 2 ; m_NO167 += 1){
/* == y_solve#block1.doall11.loop1 ==*/
      for (j_NO170 = grid_points[1]-3 ; j_NO170 >= 0 ; j_NO170 += (-1)){
/* == y_solve#block1.doall11.loop1.bb1 ==*/
      j1_NO139 = j_NO170+1;
      j2_NO140 = j_NO170+2;
/* == y_solve#block1.doall11.loop1.loop2 ==*/
      for (i_NO169 = 1 ; i_NO169 <= grid_points[0]-2 ; i_NO169 += 1){
/* == y_solve#block1.doall11.loop1.loop2.loop1 ==*/
      for (k_NO168 = 1 ; k_NO168 <= grid_points[2]-2 ; k_NO168 += 1){
/* == y_solve#block1.doall11.loop1.loop2.loop1.bb1 ==*/
      rhs[m_NO167][i_NO169][j_NO170][k_NO168] = rhs[m_NO167][i_NO169][j_NO170][k_NO168]-lhs[n_NO99+3][i_NO169][j_NO170][k_NO168]*rhs[m_NO167][i_NO169][j1_NO139][k_NO168]-lhs[n_NO99+4][i_NO169][j_NO170][k_NO168]*rhs[m_NO167][i_NO169][j2_NO140][k_NO168];
      }
      }
      }
      }
/* == y_solve#block1.doall12 ==*/
      for (m_NO171 = 3 ; m_NO171 <= 4 ; m_NO171 += 1){
/* == y_solve#block1.doall12.bb1 ==*/
      n_NO141 = (m_NO171-3+1)*5;
/* == y_solve#block1.doall12.loop2 ==*/
      for (j_NO174 = grid_points[1]-3 ; j_NO174 >= 0 ; j_NO174 += (-1)){
/* == y_solve#block1.doall12.loop2.bb1 ==*/
      j1_NO142 = j_NO174+1;
      j2_NO143 = j1_NO142+1;
/* == y_solve#block1.doall12.loop2.loop2 ==*/
      for (i_NO173 = 1 ; i_NO173 <= grid_points[0]-2 ; i_NO173 += 1){
/* == y_solve#block1.doall12.loop2.loop2.loop1 ==*/
      for (k_NO172 = 1 ; k_NO172 <= grid_points[2]-2 ; k_NO172 += 1){
/* == y_solve#block1.doall12.loop2.loop2.loop1.bb1 ==*/
      rhs[m_NO171][i_NO173][j_NO174][k_NO172] = rhs[m_NO171][i_NO173][j_NO174][k_NO172]-lhs[n_NO141+3][i_NO173][j_NO174][k_NO172]*rhs[m_NO171][i_NO173][j1_NO142][k_NO172]-lhs[n_NO141+4][i_NO173][j_NO174][k_NO172]*rhs[m_NO171][i_NO173][j2_NO143][k_NO172];
      }
      }
      }
      }
/* == y_solve#block1.sb13 ==*/
      pinvr_PE0();
/* == y_solve#block1.bb14 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 115: z_solve */
/* ******************* */
static void z_solve_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int n_NO99/* n */;
      int k1_NO100/* k1 */;
      int k2_NO101/* k2 */;
      int m_NO102/* m */;
      double fac1_NO103/* fac1 */;
      double fac2_NO104/* fac2 */;
      int m_NO105/* m */;
      int m_NO106/* m */;
      int m_NO107/* m */;
      int m_NO108/* m */;
      int m_NO109/* m */;
      int j_NO110/* j */;
      int i_NO111/* i */;
      int k_NO112/* k */;
      int j_NO113/* j */;
      int i_NO114/* i */;
      int j_NO115/* j */;
      int i_NO116/* i */;
      int m_NO117/* m */;
      int j_NO118/* j */;
      int i_NO119/* i */;
      int m_NO120/* m */;
      int j_NO121/* j */;
      int i_NO122/* i */;
      int m_NO123/* m */;
      int k_NO124/* k */;
      int j_NO125/* j */;
      int i_NO126/* i */;
      int m_NO127/* m */;
      int k_NO128/* k */;
      int j_NO129/* j */;
      int i_NO130/* i */;
      int m_NO131/* m */;
      int k1_NO132/* k1 */;
      int k2_NO133/* k2 */;
      double fac1_NO134/* fac1 */;
      double fac1_NO135/* fac1 */;
      double fac2_NO136/* fac2 */;
      int k1_NO137/* k1 */;
      int k2_NO138/* k2 */;
      double fac1_NO139/* fac1 */;
      double fac1_NO140/* fac1 */;
      double fac2_NO141/* fac2 */;
      int n_NO142/* n */;
      int k1_NO143/* k1 */;
      int k2_NO144/* k2 */;
      int n_NO145/* n */;
      int k1_NO146/* k1 */;
      int k2_NO147/* k2 */;
      int i_NO148/* i */;
      int m_NO149/* m */;
      int m_NO150/* m */;
      int m_NO151/* m */;
      int k_NO152/* k */;
      int j_NO153/* j */;
      int i_NO154/* i */;
      int m_NO155/* m */;
      int m_NO156/* m */;
      int m_NO157/* m */;
      int j_NO158/* j */;
      int m_NO159/* m */;
      int i_NO160/* i */;
      int k_NO161/* k */;
      int j_NO162/* j */;
      int i_NO163/* i */;
      int j_NO164/* j */;
      int m_NO165/* m */;
      int j_NO166/* j */;
      int i_NO167/* i */;
      int m_NO168/* m */;
      int j_NO169/* j */;
      int i_NO170/* i */;
      int m_NO171/* m */;
      int k_NO172/* k */;
      int j_NO173/* j */;
      int i_NO174/* i */;
      int m_NO175/* m */;
      int k_NO176/* k */;
      int j_NO177/* j */;
      int i_NO178/* i */;

/* @decl:pe0:module115@ */
/* == z_solve#block1 ==*/
/* == z_solve#block1.sb1 ==*/
      lhsz_PE0();
/* == z_solve#block1.bb2 ==*/
      n_NO99 = 0;
/* == z_solve#block1.doall3 ==*/
      for (i_NO148 = 1 ; i_NO148 <= grid_points[0]-2 ; i_NO148 += 1){
/* == z_solve#block1.doall3.loop1 ==*/
      for (j_NO153 = 1 ; j_NO153 <= grid_points[1]-2 ; j_NO153 += 1){
/* == z_solve#block1.doall3.loop1.loop1 ==*/
      for (k_NO152 = 0 ; k_NO152 <= grid_points[2]-3 ; k_NO152 += 1){
/* == z_solve#block1.doall3.loop1.loop1.bb1 ==*/
      k1_NO132 = k_NO152+1;
      k2_NO133 = k_NO152+2;
      fac1_NO134 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO148][j_NO153][k_NO152];
      lhs[n_NO99+3][i_NO148][j_NO153][k_NO152] = fac1_NO134*lhs[n_NO99+3][i_NO148][j_NO153][k_NO152];
      lhs[n_NO99+4][i_NO148][j_NO153][k_NO152] = fac1_NO134*lhs[n_NO99+4][i_NO148][j_NO153][k_NO152];
/* == z_solve#block1.doall3.loop1.loop1.loop2 ==*/
      for (m_NO149 = 0 ; m_NO149 <= 2 ; m_NO149 += 1){
/* == z_solve#block1.doall3.loop1.loop1.loop2.bb1 ==*/
      rhs[m_NO149][i_NO148][j_NO153][k_NO152] = fac1_NO134*rhs[m_NO149][i_NO148][j_NO153][k_NO152];
      }
/* == z_solve#block1.doall3.loop1.loop1.bb3 ==*/
      lhs[n_NO99+2][i_NO148][j_NO153][k1_NO132] = lhs[n_NO99+2][i_NO148][j_NO153][k1_NO132]-lhs[n_NO99+1][i_NO148][j_NO153][k1_NO132]*lhs[n_NO99+3][i_NO148][j_NO153][k_NO152];
      lhs[n_NO99+3][i_NO148][j_NO153][k1_NO132] = lhs[n_NO99+3][i_NO148][j_NO153][k1_NO132]-lhs[n_NO99+1][i_NO148][j_NO153][k1_NO132]*lhs[n_NO99+4][i_NO148][j_NO153][k_NO152];
/* == z_solve#block1.doall3.loop1.loop1.loop4 ==*/
      for (m_NO150 = 0 ; m_NO150 <= 2 ; m_NO150 += 1){
/* == z_solve#block1.doall3.loop1.loop1.loop4.bb1 ==*/
      rhs[m_NO150][i_NO148][j_NO153][k1_NO132] = rhs[m_NO150][i_NO148][j_NO153][k1_NO132]-lhs[n_NO99+1][i_NO148][j_NO153][k1_NO132]*rhs[m_NO150][i_NO148][j_NO153][k_NO152];
      }
/* == z_solve#block1.doall3.loop1.loop1.bb5 ==*/
      lhs[n_NO99+1][i_NO148][j_NO153][k2_NO133] = lhs[n_NO99+1][i_NO148][j_NO153][k2_NO133]-lhs[n_NO99][i_NO148][j_NO153][k2_NO133]*lhs[n_NO99+3][i_NO148][j_NO153][k_NO152];
      lhs[n_NO99+2][i_NO148][j_NO153][k2_NO133] = lhs[n_NO99+2][i_NO148][j_NO153][k2_NO133]-lhs[n_NO99][i_NO148][j_NO153][k2_NO133]*lhs[n_NO99+4][i_NO148][j_NO153][k_NO152];
/* == z_solve#block1.doall3.loop1.loop1.loop6 ==*/
      for (m_NO151 = 0 ; m_NO151 <= 2 ; m_NO151 += 1){
/* == z_solve#block1.doall3.loop1.loop1.loop6.bb1 ==*/
      rhs[m_NO151][i_NO148][j_NO153][k2_NO133] = rhs[m_NO151][i_NO148][j_NO153][k2_NO133]-lhs[n_NO99][i_NO148][j_NO153][k2_NO133]*rhs[m_NO151][i_NO148][j_NO153][k_NO152];
      }
      }
      }
      }
/* == z_solve#block1.bb4 ==*/
      k_NO98 = grid_points[2]-2;
      k1_NO100 = grid_points[2]-1;
/* == z_solve#block1.doall5 ==*/
      for (i_NO154 = 1 ; i_NO154 <= grid_points[0]-2 ; i_NO154 += 1){
/* == z_solve#block1.doall5.loop1 ==*/
      for (j_NO158 = 1 ; j_NO158 <= grid_points[1]-2 ; j_NO158 += 1){
/* == z_solve#block1.doall5.loop1.bb1 ==*/
      fac1_NO135 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO154][j_NO158][k_NO98];
      lhs[n_NO99+3][i_NO154][j_NO158][k_NO98] = fac1_NO135*lhs[n_NO99+3][i_NO154][j_NO158][k_NO98];
      lhs[n_NO99+4][i_NO154][j_NO158][k_NO98] = fac1_NO135*lhs[n_NO99+4][i_NO154][j_NO158][k_NO98];
/* == z_solve#block1.doall5.loop1.loop2 ==*/
      for (m_NO155 = 0 ; m_NO155 <= 2 ; m_NO155 += 1){
/* == z_solve#block1.doall5.loop1.loop2.bb1 ==*/
      rhs[m_NO155][i_NO154][j_NO158][k_NO98] = fac1_NO135*rhs[m_NO155][i_NO154][j_NO158][k_NO98];
      }
/* == z_solve#block1.doall5.loop1.bb3 ==*/
      lhs[n_NO99+2][i_NO154][j_NO158][k1_NO100] = lhs[n_NO99+2][i_NO154][j_NO158][k1_NO100]-lhs[n_NO99+1][i_NO154][j_NO158][k1_NO100]*lhs[n_NO99+3][i_NO154][j_NO158][k_NO98];
      lhs[n_NO99+3][i_NO154][j_NO158][k1_NO100] = lhs[n_NO99+3][i_NO154][j_NO158][k1_NO100]-lhs[n_NO99+1][i_NO154][j_NO158][k1_NO100]*lhs[n_NO99+4][i_NO154][j_NO158][k_NO98];
/* == z_solve#block1.doall5.loop1.loop4 ==*/
      for (m_NO156 = 0 ; m_NO156 <= 2 ; m_NO156 += 1){
/* == z_solve#block1.doall5.loop1.loop4.bb1 ==*/
      rhs[m_NO156][i_NO154][j_NO158][k1_NO100] = rhs[m_NO156][i_NO154][j_NO158][k1_NO100]-lhs[n_NO99+1][i_NO154][j_NO158][k1_NO100]*rhs[m_NO156][i_NO154][j_NO158][k_NO98];
      }
/* == z_solve#block1.doall5.loop1.bb5 ==*/
      fac2_NO136 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO154][j_NO158][k1_NO100];
/* == z_solve#block1.doall5.loop1.loop6 ==*/
      for (m_NO157 = 0 ; m_NO157 <= 2 ; m_NO157 += 1){
/* == z_solve#block1.doall5.loop1.loop6.bb1 ==*/
      rhs[m_NO157][i_NO154][j_NO158][k1_NO100] = fac2_NO136*rhs[m_NO157][i_NO154][j_NO158][k1_NO100];
      }
      }
      }
/* == z_solve#block1.loop6 ==*/
      for (m_NO159 = 3 ; m_NO159 <= 4 ; m_NO159 += 1){
/* == z_solve#block1.loop6.bb1 ==*/
      n_NO99 = (m_NO159-3+1)*5;
/* == z_solve#block1.loop6.doall2 ==*/
      for (i_NO160 = 1 ; i_NO160 <= grid_points[0]-2 ; i_NO160 += 1){
/* == z_solve#block1.loop6.doall2.loop1 ==*/
      for (j_NO162 = 1 ; j_NO162 <= grid_points[1]-2 ; j_NO162 += 1){
/* == z_solve#block1.loop6.doall2.loop1.loop1 ==*/
      for (k_NO161 = 0 ; k_NO161 <= grid_points[2]-3 ; k_NO161 += 1){
/* == z_solve#block1.loop6.doall2.loop1.loop1.bb1 ==*/
      k1_NO137 = k_NO161+1;
      k2_NO138 = k_NO161+2;
      fac1_NO139 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+3][i_NO160][j_NO162][k_NO161] = fac1_NO139*lhs[n_NO99+3][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+4][i_NO160][j_NO162][k_NO161] = fac1_NO139*lhs[n_NO99+4][i_NO160][j_NO162][k_NO161];
      rhs[m_NO159][i_NO160][j_NO162][k_NO161] = fac1_NO139*rhs[m_NO159][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+2][i_NO160][j_NO162][k1_NO137] = lhs[n_NO99+2][i_NO160][j_NO162][k1_NO137]-lhs[n_NO99+1][i_NO160][j_NO162][k1_NO137]*lhs[n_NO99+3][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+3][i_NO160][j_NO162][k1_NO137] = lhs[n_NO99+3][i_NO160][j_NO162][k1_NO137]-lhs[n_NO99+1][i_NO160][j_NO162][k1_NO137]*lhs[n_NO99+4][i_NO160][j_NO162][k_NO161];
      rhs[m_NO159][i_NO160][j_NO162][k1_NO137] = rhs[m_NO159][i_NO160][j_NO162][k1_NO137]-lhs[n_NO99+1][i_NO160][j_NO162][k1_NO137]*rhs[m_NO159][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+1][i_NO160][j_NO162][k2_NO138] = lhs[n_NO99+1][i_NO160][j_NO162][k2_NO138]-lhs[n_NO99][i_NO160][j_NO162][k2_NO138]*lhs[n_NO99+3][i_NO160][j_NO162][k_NO161];
      lhs[n_NO99+2][i_NO160][j_NO162][k2_NO138] = lhs[n_NO99+2][i_NO160][j_NO162][k2_NO138]-lhs[n_NO99][i_NO160][j_NO162][k2_NO138]*lhs[n_NO99+4][i_NO160][j_NO162][k_NO161];
      rhs[m_NO159][i_NO160][j_NO162][k2_NO138] = rhs[m_NO159][i_NO160][j_NO162][k2_NO138]-lhs[n_NO99][i_NO160][j_NO162][k2_NO138]*rhs[m_NO159][i_NO160][j_NO162][k_NO161];
      }
      }
      }
/* == z_solve#block1.loop6.bb3 ==*/
      k_NO98 = grid_points[2]-2;
      k1_NO100 = grid_points[2]-1;
/* == z_solve#block1.loop6.doall4 ==*/
      for (i_NO163 = 1 ; i_NO163 <= grid_points[0]-2 ; i_NO163 += 1){
/* == z_solve#block1.loop6.doall4.loop1 ==*/
      for (j_NO164 = 1 ; j_NO164 <= grid_points[1]-2 ; j_NO164 += 1){
/* == z_solve#block1.loop6.doall4.loop1.bb1 ==*/
      fac1_NO140 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO163][j_NO164][k_NO98];
      lhs[n_NO99+3][i_NO163][j_NO164][k_NO98] = fac1_NO140*lhs[n_NO99+3][i_NO163][j_NO164][k_NO98];
      lhs[n_NO99+4][i_NO163][j_NO164][k_NO98] = fac1_NO140*lhs[n_NO99+4][i_NO163][j_NO164][k_NO98];
      rhs[m_NO159][i_NO163][j_NO164][k_NO98] = fac1_NO140*rhs[m_NO159][i_NO163][j_NO164][k_NO98];
      lhs[n_NO99+2][i_NO163][j_NO164][k1_NO100] = lhs[n_NO99+2][i_NO163][j_NO164][k1_NO100]-lhs[n_NO99+1][i_NO163][j_NO164][k1_NO100]*lhs[n_NO99+3][i_NO163][j_NO164][k_NO98];
      lhs[n_NO99+3][i_NO163][j_NO164][k1_NO100] = lhs[n_NO99+3][i_NO163][j_NO164][k1_NO100]-lhs[n_NO99+1][i_NO163][j_NO164][k1_NO100]*lhs[n_NO99+4][i_NO163][j_NO164][k_NO98];
      rhs[m_NO159][i_NO163][j_NO164][k1_NO100] = rhs[m_NO159][i_NO163][j_NO164][k1_NO100]-lhs[n_NO99+1][i_NO163][j_NO164][k1_NO100]*rhs[m_NO159][i_NO163][j_NO164][k_NO98];
      fac2_NO141 = 1.0000000000000000E+00/ lhs[n_NO99+2][i_NO163][j_NO164][k1_NO100];
      rhs[m_NO159][i_NO163][j_NO164][k1_NO100] = fac2_NO141*rhs[m_NO159][i_NO163][j_NO164][k1_NO100];
      }
      }
      }
/* == z_solve#block1.bb7 ==*/
      k_NO98 = grid_points[2]-2;
      k1_NO100 = grid_points[2]-1;
      n_NO99 = 0;
/* == z_solve#block1.doall8 ==*/
      for (m_NO165 = 0 ; m_NO165 <= 2 ; m_NO165 += 1){
/* == z_solve#block1.doall8.loop1 ==*/
      for (i_NO167 = 1 ; i_NO167 <= grid_points[0]-2 ; i_NO167 += 1){
/* == z_solve#block1.doall8.loop1.loop1 ==*/
      for (j_NO166 = 1 ; j_NO166 <= grid_points[1]-2 ; j_NO166 += 1){
/* == z_solve#block1.doall8.loop1.loop1.bb1 ==*/
      rhs[m_NO165][i_NO167][j_NO166][k_NO98] = rhs[m_NO165][i_NO167][j_NO166][k_NO98]-lhs[n_NO99+3][i_NO167][j_NO166][k_NO98]*rhs[m_NO165][i_NO167][j_NO166][k1_NO100];
      }
      }
      }
/* == z_solve#block1.doall9 ==*/
      for (m_NO168 = 3 ; m_NO168 <= 4 ; m_NO168 += 1){
/* == z_solve#block1.doall9.bb1 ==*/
      n_NO142 = (m_NO168-3+1)*5;
/* == z_solve#block1.doall9.loop2 ==*/
      for (i_NO170 = 1 ; i_NO170 <= grid_points[0]-2 ; i_NO170 += 1){
/* == z_solve#block1.doall9.loop2.loop1 ==*/
      for (j_NO169 = 1 ; j_NO169 <= grid_points[1]-2 ; j_NO169 += 1){
/* == z_solve#block1.doall9.loop2.loop1.bb1 ==*/
      rhs[m_NO168][i_NO170][j_NO169][k_NO98] = rhs[m_NO168][i_NO170][j_NO169][k_NO98]-lhs[n_NO142+3][i_NO170][j_NO169][k_NO98]*rhs[m_NO168][i_NO170][j_NO169][k1_NO100];
      }
      }
      }
/* == z_solve#block1.bb10 ==*/
      n_NO99 = 0;
/* == z_solve#block1.doall11 ==*/
      for (m_NO171 = 0 ; m_NO171 <= 2 ; m_NO171 += 1){
/* == z_solve#block1.doall11.loop1 ==*/
      for (i_NO174 = 1 ; i_NO174 <= grid_points[0]-2 ; i_NO174 += 1){
/* == z_solve#block1.doall11.loop1.loop1 ==*/
      for (j_NO173 = 1 ; j_NO173 <= grid_points[1]-2 ; j_NO173 += 1){
/* == z_solve#block1.doall11.loop1.loop1.loop1 ==*/
      for (k_NO172 = grid_points[2]-3 ; k_NO172 >= 0 ; k_NO172 += (-1)){
/* == z_solve#block1.doall11.loop1.loop1.loop1.bb1 ==*/
      k1_NO143 = k_NO172+1;
      k2_NO144 = k_NO172+2;
      rhs[m_NO171][i_NO174][j_NO173][k_NO172] = rhs[m_NO171][i_NO174][j_NO173][k_NO172]-lhs[n_NO99+3][i_NO174][j_NO173][k_NO172]*rhs[m_NO171][i_NO174][j_NO173][k1_NO143]-lhs[n_NO99+4][i_NO174][j_NO173][k_NO172]*rhs[m_NO171][i_NO174][j_NO173][k2_NO144];
      }
      }
      }
      }
/* == z_solve#block1.doall12 ==*/
      for (m_NO175 = 3 ; m_NO175 <= 4 ; m_NO175 += 1){
/* == z_solve#block1.doall12.bb1 ==*/
      n_NO145 = (m_NO175-3+1)*5;
/* == z_solve#block1.doall12.loop2 ==*/
      for (i_NO178 = 1 ; i_NO178 <= grid_points[0]-2 ; i_NO178 += 1){
/* == z_solve#block1.doall12.loop2.loop1 ==*/
      for (j_NO177 = 1 ; j_NO177 <= grid_points[1]-2 ; j_NO177 += 1){
/* == z_solve#block1.doall12.loop2.loop1.loop1 ==*/
      for (k_NO176 = grid_points[2]-3 ; k_NO176 >= 0 ; k_NO176 += (-1)){
/* == z_solve#block1.doall12.loop2.loop1.loop1.bb1 ==*/
      k1_NO146 = k_NO176+1;
      k2_NO147 = k_NO176+2;
      rhs[m_NO175][i_NO178][j_NO177][k_NO176] = rhs[m_NO175][i_NO178][j_NO177][k_NO176]-lhs[n_NO145+3][i_NO178][j_NO177][k_NO176]*rhs[m_NO175][i_NO178][j_NO177][k1_NO146]-lhs[n_NO145+4][i_NO178][j_NO177][k_NO176]*rhs[m_NO175][i_NO178][j_NO177][k2_NO147];
      }
      }
      }
      }
/* == z_solve#block1.sb13 ==*/
      tzetar_PE0();
/* == z_solve#block1.bb14 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 95: add */
/* ******************* */
static void add_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int m_NO99/* m */;
      int m_NO100/* m */;
      int k_NO101/* k */;
      int j_NO102/* j */;
      int i_NO103/* i */;

/* @decl:pe0:module95@ */
/* == add#block1 ==*/
/* == add#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == add#block1.doall1.loop1 ==*/
      for (i_NO103 = 1 ; i_NO103 <= grid_points[0]-2 ; i_NO103 += 1){
/* == add#block1.doall1.loop1.loop1 ==*/
      for (j_NO102 = 1 ; j_NO102 <= grid_points[1]-2 ; j_NO102 += 1){
/* == add#block1.doall1.loop1.loop1.loop1 ==*/
      for (k_NO101 = 1 ; k_NO101 <= grid_points[2]-2 ; k_NO101 += 1){
/* == add#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      u[m_NO100][i_NO103][j_NO102][k_NO101] = u[m_NO100][i_NO103][j_NO102][k_NO101]+rhs[m_NO100][i_NO103][j_NO102][k_NO101];
      }
      }
      }
      }
/* == add#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 97: error_norm */
/* ******************* */
static void error_norm_PE0(double* rms)
{
      int i_NO97/* i */;
      int j_NO98/* j */;
      int k_NO99/* k */;
      int m_NO100/* m */;
      int d_NO101/* d */;
      double xi/* xi */;
      double eta/* eta */;
      double zeta/* zeta */;
      double add_NO105/* add */;
      int m_NO106/* m */;
      int m_NO107/* m */;
      double add_NO108/* add */;
      int m_NO109/* m */;
      int i_NO110/* i */;
      int j_NO111/* j */;
      int k_NO112/* k */;
      int m_NO113/* m */;
      int m_NO114/* m */;
      int d_NO115/* d */;

/* @decl:pe0:module97@ */
/* == error_norm#block1 ==*/
/* == error_norm#block1.doall1 ==*/
      for (m_NO109 = 0 ; m_NO109 <= 4 ; m_NO109 += 1){
/* == error_norm#block1.doall1.bb1 ==*/
      (rms[m_NO109]) = 0.0000000000000000E+00;
      }
/* == error_norm#block1.loop2 ==*/
      for (i_NO110 = 0 ; i_NO110 <= grid_points[0]-1 ; i_NO110 += 1){
/* == error_norm#block1.loop2.bb1 ==*/
      xi = (double)(i_NO110)*dnxm1;
/* == error_norm#block1.loop2.loop2 ==*/
      for (j_NO111 = 0 ; j_NO111 <= grid_points[1]-1 ; j_NO111 += 1){
/* == error_norm#block1.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO111)*dnym1;
/* == error_norm#block1.loop2.loop2.loop2 ==*/
      for (k_NO112 = 0 ; k_NO112 <= grid_points[2]-1 ; k_NO112 += 1){
/* == error_norm#block1.loop2.loop2.loop2.bb1 ==*/
      zeta = (double)(k_NO112)*dnzm1;
/* == error_norm#block1.loop2.loop2.loop2.sb2 ==*/
      exact_solution_PE0(xi,eta,zeta,(&M97_CL0_PC0_u_exact[0]));
/* == error_norm#block1.loop2.loop2.loop2.doall3 ==*/
      for (m_NO113 = 0 ; m_NO113 <= 4 ; m_NO113 += 1){
/* == error_norm#block1.loop2.loop2.loop2.doall3.bb1 ==*/
      add_NO108 = u[m_NO113][i_NO110][j_NO111][k_NO112]-M97_CL0_PC0_u_exact[m_NO113];
      (rms[m_NO113]) = (rms[m_NO113])+add_NO108*add_NO108;
      }
      }
      }
      }
/* == error_norm#block1.doall3 ==*/
      for (m_NO114 = 0 ; m_NO114 <= 4 ; m_NO114 += 1){
/* == error_norm#block1.doall3.loop1 ==*/
      for (d_NO115 = 0 ; d_NO115 <= 2 ; d_NO115 += 1){
/* == error_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO114]) = (rms[m_NO114])/ (double)(grid_points[d_NO115]-2);
      }
/* == error_norm#block1.doall3.bb2 ==*/
      (rms[m_NO114]) = sqrt((rms[m_NO114]));
      }
/* == error_norm#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 98: rhs_norm */
/* ******************* */
static void rhs_norm_PE0(double* rms)
{
      int i_NO97/* i */;
      int j_NO98/* j */;
      int k_NO99/* k */;
      int d_NO100/* d */;
      int m_NO101/* m */;
      double add_NO102/* add */;
      int m_NO103/* m */;
      int m_NO104/* m */;
      double add_NO105/* add */;
      int m_NO106/* m */;
      int i_NO107/* i */;
      int j_NO108/* j */;
      int k_NO109/* k */;
      int m_NO110/* m */;
      int m_NO111/* m */;
      int d_NO112/* d */;

/* @decl:pe0:module98@ */
/* == rhs_norm#block1 ==*/
/* == rhs_norm#block1.doall1 ==*/
      for (m_NO106 = 0 ; m_NO106 <= 4 ; m_NO106 += 1){
/* == rhs_norm#block1.doall1.bb1 ==*/
      (rms[m_NO106]) = 0.0000000000000000E+00;
      }
/* == rhs_norm#block1.loop2 ==*/
      for (i_NO107 = 0 ; i_NO107 <= grid_points[0]-2 ; i_NO107 += 1){
/* == rhs_norm#block1.loop2.loop1 ==*/
      for (j_NO108 = 0 ; j_NO108 <= grid_points[1]-2 ; j_NO108 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1 ==*/
      for (k_NO109 = 0 ; k_NO109 <= grid_points[2]-2 ; k_NO109 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1 ==*/
      for (m_NO110 = 0 ; m_NO110 <= 4 ; m_NO110 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1.bb1 ==*/
      add_NO105 = rhs[m_NO110][i_NO107][j_NO108][k_NO109];
      (rms[m_NO110]) = (rms[m_NO110])+add_NO105*add_NO105;
      }
      }
      }
      }
/* == rhs_norm#block1.doall3 ==*/
      for (m_NO111 = 0 ; m_NO111 <= 4 ; m_NO111 += 1){
/* == rhs_norm#block1.doall3.loop1 ==*/
      for (d_NO112 = 0 ; d_NO112 <= 2 ; d_NO112 += 1){
/* == rhs_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO111]) = (rms[m_NO111])/ (double)(grid_points[d_NO112]-2);
      }
/* == rhs_norm#block1.doall3.bb2 ==*/
      (rms[m_NO111]) = sqrt((rms[m_NO111]));
      }
/* == rhs_norm#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 103: lhsx */
/* ******************* */
static void lhsx_PE0()
{
      double ru1_NO96/* ru1 */;
      int i_NO97/* i */;
      int j_NO98/* j */;
      int k_NO99/* k */;
      double V100/* $tmp0 */;
      double V101/* $tmp1 */;
      double V102/* $tmp2 */;
      double V103/* $tmp3 */;
      double V104/* $tmp4 */;
      double V105/* $tmp5 */;
      double V106/* $tmp6 */;
      int i_NO107/* i */;
      int k_NO108/* k */;
      int j_NO109/* j */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int j_NO114/* j */;
      int k_NO115/* k */;
      int j_NO116/* j */;
      int i_NO117/* i */;
      double ru1_NO118/* ru1 */;
      double V119/* $tmp0 */;
      double V120/* $tmp1 */;
      double V121/* $tmp2 */;
      double V122/* $tmp3 */;
      double V123/* $tmp4 */;
      double V124/* $tmp5 */;
      double V125/* $tmp6 */;
      int j_NO126/* j */;
      int k_NO127/* k */;
      int i_NO128/* i */;
      int i_NO129/* i */;
      int j_NO130/* j */;
      int k_NO131/* k */;
      int i_NO132/* i */;
      int k_NO133/* k */;
      int j_NO134/* j */;
      int j_NO135/* j */;
      int k_NO136/* k */;
      int i_NO137/* i */;
      int k_NO138/* k */;
      int j_NO139/* j */;

/* @decl:pe0:module103@ */
/* == lhsx#block1 ==*/
/* == lhsx#block1.loop1 ==*/
      for (j_NO126 = 1 ; j_NO126 <= grid_points[1]-2 ; j_NO126 += 1){
/* == lhsx#block1.loop1.loop1 ==*/
      for (k_NO127 = 1 ; k_NO127 <= grid_points[2]-2 ; k_NO127 += 1){
/* == lhsx#block1.loop1.loop1.doall1 ==*/
      for (i_NO128 = 0 ; i_NO128 <= grid_points[0]-1 ; i_NO128 += 1){
/* == lhsx#block1.loop1.loop1.doall1.bb1 ==*/
      ru1_NO118 = c3c4*rho_i[i_NO128][j_NO126][k_NO127];
      cv[i_NO128] = us[i_NO128][j_NO126][k_NO127];
if (dxmax+ru1_NO118>dx1) {
 /* == lhsx#block1.loop1.loop1.doall1.bb2 ==*/
      V119 = dxmax+ru1_NO118;
/* == lhsx#block1.loop1.loop1.doall1.bb3 ==*/
} else {
      V119 = dx1;
/* == lhsx#block1.loop1.loop1.doall1.bb4 ==*/
}
if (dx5+c1c5*ru1_NO118>V119) {
 /* == lhsx#block1.loop1.loop1.doall1.bb5 ==*/
      V120 = dx5+c1c5*ru1_NO118;
      goto L12;
/* == lhsx#block1.loop1.loop1.doall1.bb6 ==*/
}
if (dxmax+ru1_NO118>dx1) {
 /* == lhsx#block1.loop1.loop1.doall1.bb7 ==*/
      V121 = dxmax+ru1_NO118;
/* == lhsx#block1.loop1.loop1.doall1.bb8 ==*/
} else {
      V121 = dx1;
/* == lhsx#block1.loop1.loop1.doall1.bb9 ==*/
}
      V120 = V121;
/* == lhsx#block1.loop1.loop1.doall1.bb10 ==*/
L12:;
if (dx2+con43*ru1_NO118>V120) {
 /* == lhsx#block1.loop1.loop1.doall1.bb11 ==*/
      V122 = dx2+con43*ru1_NO118;
      goto L10;
/* == lhsx#block1.loop1.loop1.doall1.bb12 ==*/
}
if (dxmax+ru1_NO118>dx1) {
 /* == lhsx#block1.loop1.loop1.doall1.bb13 ==*/
      V123 = dxmax+ru1_NO118;
/* == lhsx#block1.loop1.loop1.doall1.bb14 ==*/
} else {
      V123 = dx1;
/* == lhsx#block1.loop1.loop1.doall1.bb15 ==*/
}
if (dx5+c1c5*ru1_NO118>V123) {
 /* == lhsx#block1.loop1.loop1.doall1.bb16 ==*/
      V124 = dx5+c1c5*ru1_NO118;
      goto L18;
/* == lhsx#block1.loop1.loop1.doall1.bb17 ==*/
}
if (dxmax+ru1_NO118>dx1) {
 /* == lhsx#block1.loop1.loop1.doall1.bb18 ==*/
      V125 = dxmax+ru1_NO118;
/* == lhsx#block1.loop1.loop1.doall1.bb19 ==*/
} else {
      V125 = dx1;
/* == lhsx#block1.loop1.loop1.doall1.bb20 ==*/
}
      V124 = V125;
/* == lhsx#block1.loop1.loop1.doall1.bb21 ==*/
L18:;
      V122 = V124;
/* == lhsx#block1.loop1.loop1.doall1.bb22 ==*/
L10:;
      rhon[i_NO128] = V122;
      }
/* == lhsx#block1.loop1.loop1.doall2 ==*/
      for (i_NO129 = 1 ; i_NO129 <= grid_points[0]-2 ; i_NO129 += 1){
/* == lhsx#block1.loop1.loop1.doall2.bb1 ==*/
      lhs[0][i_NO129][j_NO126][k_NO127] = 0.0000000000000000E+00;
      lhs[1][i_NO129][j_NO126][k_NO127] = -dttx2*cv[i_NO129-1]-dttx1*rhon[i_NO129-1];
      lhs[2][i_NO129][j_NO126][k_NO127] = 1.0000000000000000E+00+c2dttx1*rhon[i_NO129];
      lhs[3][i_NO129][j_NO126][k_NO127] = dttx2*cv[i_NO129+1]-dttx1*rhon[i_NO129+1];
      lhs[4][i_NO129][j_NO126][k_NO127] = 0.0000000000000000E+00;
      }
      }
      }
/* == lhsx#block1.bb2 ==*/
      i_NO97 = 1;
/* == lhsx#block1.doall3 ==*/
      for (j_NO130 = 1 ; j_NO130 <= grid_points[1]-2 ; j_NO130 += 1){
/* == lhsx#block1.doall3.loop1 ==*/
      for (k_NO131 = 1 ; k_NO131 <= grid_points[2]-2 ; k_NO131 += 1){
/* == lhsx#block1.doall3.loop1.bb1 ==*/
      lhs[2][i_NO97][j_NO130][k_NO131] = lhs[2][i_NO97][j_NO130][k_NO131]+comz5;
      lhs[3][i_NO97][j_NO130][k_NO131] = lhs[3][i_NO97][j_NO130][k_NO131]-comz4;
      lhs[4][i_NO97][j_NO130][k_NO131] = lhs[4][i_NO97][j_NO130][k_NO131]+comz1;
      lhs[1][i_NO97+1][j_NO130][k_NO131] = lhs[1][i_NO97+1][j_NO130][k_NO131]-comz4;
      lhs[2][i_NO97+1][j_NO130][k_NO131] = lhs[2][i_NO97+1][j_NO130][k_NO131]+comz6;
      lhs[3][i_NO97+1][j_NO130][k_NO131] = lhs[3][i_NO97+1][j_NO130][k_NO131]-comz4;
      lhs[4][i_NO97+1][j_NO130][k_NO131] = lhs[4][i_NO97+1][j_NO130][k_NO131]+comz1;
      }
      }
/* == lhsx#block1.doall4 ==*/
      for (i_NO132 = 3 ; i_NO132 <= grid_points[0]-4 ; i_NO132 += 1){
/* == lhsx#block1.doall4.loop1 ==*/
      for (j_NO134 = 1 ; j_NO134 <= grid_points[1]-2 ; j_NO134 += 1){
/* == lhsx#block1.doall4.loop1.loop1 ==*/
      for (k_NO133 = 1 ; k_NO133 <= grid_points[2]-2 ; k_NO133 += 1){
/* == lhsx#block1.doall4.loop1.loop1.bb1 ==*/
      lhs[0][i_NO132][j_NO134][k_NO133] = lhs[0][i_NO132][j_NO134][k_NO133]+comz1;
      lhs[1][i_NO132][j_NO134][k_NO133] = lhs[1][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[2][i_NO132][j_NO134][k_NO133] = lhs[2][i_NO132][j_NO134][k_NO133]+comz6;
      lhs[3][i_NO132][j_NO134][k_NO133] = lhs[3][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[4][i_NO132][j_NO134][k_NO133] = lhs[4][i_NO132][j_NO134][k_NO133]+comz1;
      }
      }
      }
/* == lhsx#block1.bb5 ==*/
      i_NO97 = grid_points[0]-3;
/* == lhsx#block1.doall6 ==*/
      for (j_NO135 = 1 ; j_NO135 <= grid_points[1]-2 ; j_NO135 += 1){
/* == lhsx#block1.doall6.loop1 ==*/
      for (k_NO136 = 1 ; k_NO136 <= grid_points[2]-2 ; k_NO136 += 1){
/* == lhsx#block1.doall6.loop1.bb1 ==*/
      lhs[0][i_NO97][j_NO135][k_NO136] = lhs[0][i_NO97][j_NO135][k_NO136]+comz1;
      lhs[1][i_NO97][j_NO135][k_NO136] = lhs[1][i_NO97][j_NO135][k_NO136]-comz4;
      lhs[2][i_NO97][j_NO135][k_NO136] = lhs[2][i_NO97][j_NO135][k_NO136]+comz6;
      lhs[3][i_NO97][j_NO135][k_NO136] = lhs[3][i_NO97][j_NO135][k_NO136]-comz4;
      lhs[0][i_NO97+1][j_NO135][k_NO136] = lhs[0][i_NO97+1][j_NO135][k_NO136]+comz1;
      lhs[1][i_NO97+1][j_NO135][k_NO136] = lhs[1][i_NO97+1][j_NO135][k_NO136]-comz4;
      lhs[2][i_NO97+1][j_NO135][k_NO136] = lhs[2][i_NO97+1][j_NO135][k_NO136]+comz5;
      }
      }
/* == lhsx#block1.doall7 ==*/
      for (i_NO137 = 1 ; i_NO137 <= grid_points[0]-2 ; i_NO137 += 1){
/* == lhsx#block1.doall7.loop1 ==*/
      for (j_NO139 = 1 ; j_NO139 <= grid_points[1]-2 ; j_NO139 += 1){
/* == lhsx#block1.doall7.loop1.loop1 ==*/
      for (k_NO138 = 1 ; k_NO138 <= grid_points[2]-2 ; k_NO138 += 1){
/* == lhsx#block1.doall7.loop1.loop1.bb1 ==*/
      lhs[5][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[6][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]-dttx2*speed[i_NO137-1][j_NO139][k_NO138];
      lhs[7][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[8][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]+dttx2*speed[i_NO137+1][j_NO139][k_NO138];
      lhs[9][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      lhs[10][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[11][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]+dttx2*speed[i_NO137-1][j_NO139][k_NO138];
      lhs[12][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[13][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]-dttx2*speed[i_NO137+1][j_NO139][k_NO138];
      lhs[14][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      }
      }
      }
/* == lhsx#block1.bb8 ==*/
      goto L24;
L24:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 106: ninvr */
/* ******************* */
static void ninvr_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      double r1_NO99/* r1 */;
      double r2_NO100/* r2 */;
      double r3_NO101/* r3 */;
      double r4_NO102/* r4 */;
      double r5_NO103/* r5 */;
      double t1_NO104/* t1 */;
      double t2_NO105/* t2 */;
      double r1_NO106/* r1 */;
      double r2_NO107/* r2 */;
      double r3_NO108/* r3 */;
      double r4_NO109/* r4 */;
      double r5_NO110/* r5 */;
      double t1_NO111/* t1 */;
      double t2_NO112/* t2 */;
      int i_NO113/* i */;
      int k_NO114/* k */;
      int j_NO115/* j */;

/* @decl:pe0:module106@ */
/* == ninvr#block1 ==*/
/* == ninvr#block1.doall1 ==*/
      for (i_NO113 = 1 ; i_NO113 <= grid_points[0]-2 ; i_NO113 += 1){
/* == ninvr#block1.doall1.loop1 ==*/
      for (j_NO115 = 1 ; j_NO115 <= grid_points[1]-2 ; j_NO115 += 1){
/* == ninvr#block1.doall1.loop1.loop1 ==*/
      for (k_NO114 = 1 ; k_NO114 <= grid_points[2]-2 ; k_NO114 += 1){
/* == ninvr#block1.doall1.loop1.loop1.bb1 ==*/
      r1_NO106 = rhs[0][i_NO113][j_NO115][k_NO114];
      r2_NO107 = rhs[1][i_NO113][j_NO115][k_NO114];
      r3_NO108 = rhs[2][i_NO113][j_NO115][k_NO114];
      r4_NO109 = rhs[3][i_NO113][j_NO115][k_NO114];
      r5_NO110 = rhs[4][i_NO113][j_NO115][k_NO114];
      t1_NO111 = bt*r3_NO108;
      t2_NO112 = 5.0000000000000000E-01*(r4_NO109+r5_NO110);
      rhs[0][i_NO113][j_NO115][k_NO114] = -r2_NO107;
      rhs[1][i_NO113][j_NO115][k_NO114] = r1_NO106;
      rhs[2][i_NO113][j_NO115][k_NO114] = bt*(r4_NO109-r5_NO110);
      rhs[3][i_NO113][j_NO115][k_NO114] = -t1_NO111+t2_NO112;
      rhs[4][i_NO113][j_NO115][k_NO114] = t1_NO111+t2_NO112;
      }
      }
      }
/* == ninvr#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 104: lhsy */
/* ******************* */
static void lhsy_PE0()
{
      double ru1_NO96/* ru1 */;
      int i_NO97/* i */;
      int j_NO98/* j */;
      int k_NO99/* k */;
      double V100/* $tmp0 */;
      double V101/* $tmp1 */;
      double V102/* $tmp2 */;
      double V103/* $tmp3 */;
      double V104/* $tmp4 */;
      double V105/* $tmp5 */;
      double V106/* $tmp6 */;
      int j_NO107/* j */;
      int k_NO108/* k */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int i_NO114/* i */;
      int k_NO115/* k */;
      int j_NO116/* j */;
      int i_NO117/* i */;
      double ru1_NO118/* ru1 */;
      double V119/* $tmp0 */;
      double V120/* $tmp1 */;
      double V121/* $tmp2 */;
      double V122/* $tmp3 */;
      double V123/* $tmp4 */;
      double V124/* $tmp5 */;
      double V125/* $tmp6 */;
      int i_NO126/* i */;
      int k_NO127/* k */;
      int j_NO128/* j */;
      int j_NO129/* j */;
      int i_NO130/* i */;
      int k_NO131/* k */;
      int i_NO132/* i */;
      int k_NO133/* k */;
      int j_NO134/* j */;
      int i_NO135/* i */;
      int k_NO136/* k */;
      int i_NO137/* i */;
      int k_NO138/* k */;
      int j_NO139/* j */;

/* @decl:pe0:module104@ */
/* == lhsy#block1 ==*/
/* == lhsy#block1.loop1 ==*/
      for (i_NO126 = 1 ; i_NO126 <= grid_points[0]-2 ; i_NO126 += 1){
/* == lhsy#block1.loop1.loop1 ==*/
      for (k_NO127 = 1 ; k_NO127 <= grid_points[2]-2 ; k_NO127 += 1){
/* == lhsy#block1.loop1.loop1.doall1 ==*/
      for (j_NO128 = 0 ; j_NO128 <= grid_points[1]-1 ; j_NO128 += 1){
/* == lhsy#block1.loop1.loop1.doall1.bb1 ==*/
      ru1_NO118 = c3c4*rho_i[i_NO126][j_NO128][k_NO127];
      cv[j_NO128] = vs[i_NO126][j_NO128][k_NO127];
if (dymax+ru1_NO118>dy1) {
 /* == lhsy#block1.loop1.loop1.doall1.bb2 ==*/
      V119 = dymax+ru1_NO118;
/* == lhsy#block1.loop1.loop1.doall1.bb3 ==*/
} else {
      V119 = dy1;
/* == lhsy#block1.loop1.loop1.doall1.bb4 ==*/
}
if (dy5+c1c5*ru1_NO118>V119) {
 /* == lhsy#block1.loop1.loop1.doall1.bb5 ==*/
      V120 = dy5+c1c5*ru1_NO118;
      goto L12;
/* == lhsy#block1.loop1.loop1.doall1.bb6 ==*/
}
if (dymax+ru1_NO118>dy1) {
 /* == lhsy#block1.loop1.loop1.doall1.bb7 ==*/
      V121 = dymax+ru1_NO118;
/* == lhsy#block1.loop1.loop1.doall1.bb8 ==*/
} else {
      V121 = dy1;
/* == lhsy#block1.loop1.loop1.doall1.bb9 ==*/
}
      V120 = V121;
/* == lhsy#block1.loop1.loop1.doall1.bb10 ==*/
L12:;
if (dy3+con43*ru1_NO118>V120) {
 /* == lhsy#block1.loop1.loop1.doall1.bb11 ==*/
      V122 = dy3+con43*ru1_NO118;
      goto L10;
/* == lhsy#block1.loop1.loop1.doall1.bb12 ==*/
}
if (dymax+ru1_NO118>dy1) {
 /* == lhsy#block1.loop1.loop1.doall1.bb13 ==*/
      V123 = dymax+ru1_NO118;
/* == lhsy#block1.loop1.loop1.doall1.bb14 ==*/
} else {
      V123 = dy1;
/* == lhsy#block1.loop1.loop1.doall1.bb15 ==*/
}
if (dy5+c1c5*ru1_NO118>V123) {
 /* == lhsy#block1.loop1.loop1.doall1.bb16 ==*/
      V124 = dy5+c1c5*ru1_NO118;
      goto L18;
/* == lhsy#block1.loop1.loop1.doall1.bb17 ==*/
}
if (dymax+ru1_NO118>dy1) {
 /* == lhsy#block1.loop1.loop1.doall1.bb18 ==*/
      V125 = dymax+ru1_NO118;
/* == lhsy#block1.loop1.loop1.doall1.bb19 ==*/
} else {
      V125 = dy1;
/* == lhsy#block1.loop1.loop1.doall1.bb20 ==*/
}
      V124 = V125;
/* == lhsy#block1.loop1.loop1.doall1.bb21 ==*/
L18:;
      V122 = V124;
/* == lhsy#block1.loop1.loop1.doall1.bb22 ==*/
L10:;
      rhoq[j_NO128] = V122;
      }
/* == lhsy#block1.loop1.loop1.doall2 ==*/
      for (j_NO129 = 1 ; j_NO129 <= grid_points[1]-2 ; j_NO129 += 1){
/* == lhsy#block1.loop1.loop1.doall2.bb1 ==*/
      lhs[0][i_NO126][j_NO129][k_NO127] = 0.0000000000000000E+00;
      lhs[1][i_NO126][j_NO129][k_NO127] = -dtty2*cv[j_NO129-1]-dtty1*rhoq[j_NO129-1];
      lhs[2][i_NO126][j_NO129][k_NO127] = 1.0000000000000000E+00+c2dtty1*rhoq[j_NO129];
      lhs[3][i_NO126][j_NO129][k_NO127] = dtty2*cv[j_NO129+1]-dtty1*rhoq[j_NO129+1];
      lhs[4][i_NO126][j_NO129][k_NO127] = 0.0000000000000000E+00;
      }
      }
      }
/* == lhsy#block1.bb2 ==*/
      j_NO98 = 1;
/* == lhsy#block1.doall3 ==*/
      for (i_NO130 = 1 ; i_NO130 <= grid_points[0]-2 ; i_NO130 += 1){
/* == lhsy#block1.doall3.loop1 ==*/
      for (k_NO131 = 1 ; k_NO131 <= grid_points[2]-2 ; k_NO131 += 1){
/* == lhsy#block1.doall3.loop1.bb1 ==*/
      lhs[2][i_NO130][j_NO98][k_NO131] = lhs[2][i_NO130][j_NO98][k_NO131]+comz5;
      lhs[3][i_NO130][j_NO98][k_NO131] = lhs[3][i_NO130][j_NO98][k_NO131]-comz4;
      lhs[4][i_NO130][j_NO98][k_NO131] = lhs[4][i_NO130][j_NO98][k_NO131]+comz1;
      lhs[1][i_NO130][j_NO98+1][k_NO131] = lhs[1][i_NO130][j_NO98+1][k_NO131]-comz4;
      lhs[2][i_NO130][j_NO98+1][k_NO131] = lhs[2][i_NO130][j_NO98+1][k_NO131]+comz6;
      lhs[3][i_NO130][j_NO98+1][k_NO131] = lhs[3][i_NO130][j_NO98+1][k_NO131]-comz4;
      lhs[4][i_NO130][j_NO98+1][k_NO131] = lhs[4][i_NO130][j_NO98+1][k_NO131]+comz1;
      }
      }
/* == lhsy#block1.doall4 ==*/
      for (i_NO132 = 1 ; i_NO132 <= grid_points[0]-2 ; i_NO132 += 1){
/* == lhsy#block1.doall4.loop1 ==*/
      for (j_NO134 = 3 ; j_NO134 <= grid_points[1]-4 ; j_NO134 += 1){
/* == lhsy#block1.doall4.loop1.loop1 ==*/
      for (k_NO133 = 1 ; k_NO133 <= grid_points[2]-2 ; k_NO133 += 1){
/* == lhsy#block1.doall4.loop1.loop1.bb1 ==*/
      lhs[0][i_NO132][j_NO134][k_NO133] = lhs[0][i_NO132][j_NO134][k_NO133]+comz1;
      lhs[1][i_NO132][j_NO134][k_NO133] = lhs[1][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[2][i_NO132][j_NO134][k_NO133] = lhs[2][i_NO132][j_NO134][k_NO133]+comz6;
      lhs[3][i_NO132][j_NO134][k_NO133] = lhs[3][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[4][i_NO132][j_NO134][k_NO133] = lhs[4][i_NO132][j_NO134][k_NO133]+comz1;
      }
      }
      }
/* == lhsy#block1.bb5 ==*/
      j_NO98 = grid_points[1]-3;
/* == lhsy#block1.doall6 ==*/
      for (i_NO135 = 1 ; i_NO135 <= grid_points[0]-2 ; i_NO135 += 1){
/* == lhsy#block1.doall6.loop1 ==*/
      for (k_NO136 = 1 ; k_NO136 <= grid_points[2]-2 ; k_NO136 += 1){
/* == lhsy#block1.doall6.loop1.bb1 ==*/
      lhs[0][i_NO135][j_NO98][k_NO136] = lhs[0][i_NO135][j_NO98][k_NO136]+comz1;
      lhs[1][i_NO135][j_NO98][k_NO136] = lhs[1][i_NO135][j_NO98][k_NO136]-comz4;
      lhs[2][i_NO135][j_NO98][k_NO136] = lhs[2][i_NO135][j_NO98][k_NO136]+comz6;
      lhs[3][i_NO135][j_NO98][k_NO136] = lhs[3][i_NO135][j_NO98][k_NO136]-comz4;
      lhs[0][i_NO135][j_NO98+1][k_NO136] = lhs[0][i_NO135][j_NO98+1][k_NO136]+comz1;
      lhs[1][i_NO135][j_NO98+1][k_NO136] = lhs[1][i_NO135][j_NO98+1][k_NO136]-comz4;
      lhs[2][i_NO135][j_NO98+1][k_NO136] = lhs[2][i_NO135][j_NO98+1][k_NO136]+comz5;
      }
      }
/* == lhsy#block1.doall7 ==*/
      for (i_NO137 = 1 ; i_NO137 <= grid_points[0]-2 ; i_NO137 += 1){
/* == lhsy#block1.doall7.loop1 ==*/
      for (j_NO139 = 1 ; j_NO139 <= grid_points[1]-2 ; j_NO139 += 1){
/* == lhsy#block1.doall7.loop1.loop1 ==*/
      for (k_NO138 = 1 ; k_NO138 <= grid_points[2]-2 ; k_NO138 += 1){
/* == lhsy#block1.doall7.loop1.loop1.bb1 ==*/
      lhs[5][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[6][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]-dtty2*speed[i_NO137][j_NO139-1][k_NO138];
      lhs[7][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[8][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]+dtty2*speed[i_NO137][j_NO139+1][k_NO138];
      lhs[9][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      lhs[10][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[11][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]+dtty2*speed[i_NO137][j_NO139-1][k_NO138];
      lhs[12][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[13][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]-dtty2*speed[i_NO137][j_NO139+1][k_NO138];
      lhs[14][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      }
      }
      }
/* == lhsy#block1.bb8 ==*/
      goto L24;
L24:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 107: pinvr */
/* ******************* */
static void pinvr_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      double r1_NO99/* r1 */;
      double r2_NO100/* r2 */;
      double r3_NO101/* r3 */;
      double r4_NO102/* r4 */;
      double r5_NO103/* r5 */;
      double t1_NO104/* t1 */;
      double t2_NO105/* t2 */;
      double r1_NO106/* r1 */;
      double r2_NO107/* r2 */;
      double r3_NO108/* r3 */;
      double r4_NO109/* r4 */;
      double r5_NO110/* r5 */;
      double t1_NO111/* t1 */;
      double t2_NO112/* t2 */;
      int i_NO113/* i */;
      int k_NO114/* k */;
      int j_NO115/* j */;

/* @decl:pe0:module107@ */
/* == pinvr#block1 ==*/
/* == pinvr#block1.doall1 ==*/
      for (i_NO113 = 1 ; i_NO113 <= grid_points[0]-2 ; i_NO113 += 1){
/* == pinvr#block1.doall1.loop1 ==*/
      for (j_NO115 = 1 ; j_NO115 <= grid_points[1]-2 ; j_NO115 += 1){
/* == pinvr#block1.doall1.loop1.loop1 ==*/
      for (k_NO114 = 1 ; k_NO114 <= grid_points[2]-2 ; k_NO114 += 1){
/* == pinvr#block1.doall1.loop1.loop1.bb1 ==*/
      r1_NO106 = rhs[0][i_NO113][j_NO115][k_NO114];
      r2_NO107 = rhs[1][i_NO113][j_NO115][k_NO114];
      r3_NO108 = rhs[2][i_NO113][j_NO115][k_NO114];
      r4_NO109 = rhs[3][i_NO113][j_NO115][k_NO114];
      r5_NO110 = rhs[4][i_NO113][j_NO115][k_NO114];
      t1_NO111 = bt*r1_NO106;
      t2_NO112 = 5.0000000000000000E-01*(r4_NO109+r5_NO110);
      rhs[0][i_NO113][j_NO115][k_NO114] = bt*(r4_NO109-r5_NO110);
      rhs[1][i_NO113][j_NO115][k_NO114] = -r3_NO108;
      rhs[2][i_NO113][j_NO115][k_NO114] = r2_NO107;
      rhs[3][i_NO113][j_NO115][k_NO114] = -t1_NO111+t2_NO112;
      rhs[4][i_NO113][j_NO115][k_NO114] = t1_NO111+t2_NO112;
      }
      }
      }
/* == pinvr#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 105: lhsz */
/* ******************* */
static void lhsz_PE0()
{
      double ru1_NO96/* ru1 */;
      int i_NO97/* i */;
      int j_NO98/* j */;
      int k_NO99/* k */;
      double V100/* $tmp0 */;
      double V101/* $tmp1 */;
      double V102/* $tmp2 */;
      double V103/* $tmp3 */;
      double V104/* $tmp4 */;
      double V105/* $tmp5 */;
      double V106/* $tmp6 */;
      int k_NO107/* k */;
      int j_NO108/* j */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int j_NO113/* j */;
      int i_NO114/* i */;
      int k_NO115/* k */;
      int j_NO116/* j */;
      int i_NO117/* i */;
      double ru1_NO118/* ru1 */;
      double V119/* $tmp0 */;
      double V120/* $tmp1 */;
      double V121/* $tmp2 */;
      double V122/* $tmp3 */;
      double V123/* $tmp4 */;
      double V124/* $tmp5 */;
      double V125/* $tmp6 */;
      int i_NO126/* i */;
      int j_NO127/* j */;
      int k_NO128/* k */;
      int k_NO129/* k */;
      int i_NO130/* i */;
      int j_NO131/* j */;
      int i_NO132/* i */;
      int k_NO133/* k */;
      int j_NO134/* j */;
      int i_NO135/* i */;
      int j_NO136/* j */;
      int i_NO137/* i */;
      int k_NO138/* k */;
      int j_NO139/* j */;

/* @decl:pe0:module105@ */
/* == lhsz#block1 ==*/
/* == lhsz#block1.loop1 ==*/
      for (i_NO126 = 1 ; i_NO126 <= grid_points[0]-2 ; i_NO126 += 1){
/* == lhsz#block1.loop1.loop1 ==*/
      for (j_NO127 = 1 ; j_NO127 <= grid_points[1]-2 ; j_NO127 += 1){
/* == lhsz#block1.loop1.loop1.doall1 ==*/
      for (k_NO128 = 0 ; k_NO128 <= grid_points[2]-1 ; k_NO128 += 1){
/* == lhsz#block1.loop1.loop1.doall1.bb1 ==*/
      ru1_NO118 = c3c4*rho_i[i_NO126][j_NO127][k_NO128];
      cv[k_NO128] = ws[i_NO126][j_NO127][k_NO128];
if (dzmax+ru1_NO118>dz1) {
 /* == lhsz#block1.loop1.loop1.doall1.bb2 ==*/
      V119 = dzmax+ru1_NO118;
/* == lhsz#block1.loop1.loop1.doall1.bb3 ==*/
} else {
      V119 = dz1;
/* == lhsz#block1.loop1.loop1.doall1.bb4 ==*/
}
if (dz5+c1c5*ru1_NO118>V119) {
 /* == lhsz#block1.loop1.loop1.doall1.bb5 ==*/
      V120 = dz5+c1c5*ru1_NO118;
      goto L12;
/* == lhsz#block1.loop1.loop1.doall1.bb6 ==*/
}
if (dzmax+ru1_NO118>dz1) {
 /* == lhsz#block1.loop1.loop1.doall1.bb7 ==*/
      V121 = dzmax+ru1_NO118;
/* == lhsz#block1.loop1.loop1.doall1.bb8 ==*/
} else {
      V121 = dz1;
/* == lhsz#block1.loop1.loop1.doall1.bb9 ==*/
}
      V120 = V121;
/* == lhsz#block1.loop1.loop1.doall1.bb10 ==*/
L12:;
if (dz4+con43*ru1_NO118>V120) {
 /* == lhsz#block1.loop1.loop1.doall1.bb11 ==*/
      V122 = dz4+con43*ru1_NO118;
      goto L10;
/* == lhsz#block1.loop1.loop1.doall1.bb12 ==*/
}
if (dzmax+ru1_NO118>dz1) {
 /* == lhsz#block1.loop1.loop1.doall1.bb13 ==*/
      V123 = dzmax+ru1_NO118;
/* == lhsz#block1.loop1.loop1.doall1.bb14 ==*/
} else {
      V123 = dz1;
/* == lhsz#block1.loop1.loop1.doall1.bb15 ==*/
}
if (dz5+c1c5*ru1_NO118>V123) {
 /* == lhsz#block1.loop1.loop1.doall1.bb16 ==*/
      V124 = dz5+c1c5*ru1_NO118;
      goto L18;
/* == lhsz#block1.loop1.loop1.doall1.bb17 ==*/
}
if (dzmax+ru1_NO118>dz1) {
 /* == lhsz#block1.loop1.loop1.doall1.bb18 ==*/
      V125 = dzmax+ru1_NO118;
/* == lhsz#block1.loop1.loop1.doall1.bb19 ==*/
} else {
      V125 = dz1;
/* == lhsz#block1.loop1.loop1.doall1.bb20 ==*/
}
      V124 = V125;
/* == lhsz#block1.loop1.loop1.doall1.bb21 ==*/
L18:;
      V122 = V124;
/* == lhsz#block1.loop1.loop1.doall1.bb22 ==*/
L10:;
      rhos[k_NO128] = V122;
      }
/* == lhsz#block1.loop1.loop1.doall2 ==*/
      for (k_NO129 = 1 ; k_NO129 <= grid_points[2]-2 ; k_NO129 += 1){
/* == lhsz#block1.loop1.loop1.doall2.bb1 ==*/
      lhs[0][i_NO126][j_NO127][k_NO129] = 0.0000000000000000E+00;
      lhs[1][i_NO126][j_NO127][k_NO129] = -dttz2*cv[k_NO129-1]-dttz1*rhos[k_NO129-1];
      lhs[2][i_NO126][j_NO127][k_NO129] = 1.0000000000000000E+00+c2dttz1*rhos[k_NO129];
      lhs[3][i_NO126][j_NO127][k_NO129] = dttz2*cv[k_NO129+1]-dttz1*rhos[k_NO129+1];
      lhs[4][i_NO126][j_NO127][k_NO129] = 0.0000000000000000E+00;
      }
      }
      }
/* == lhsz#block1.bb2 ==*/
      k_NO99 = 1;
/* == lhsz#block1.doall3 ==*/
      for (i_NO130 = 1 ; i_NO130 <= grid_points[0]-2 ; i_NO130 += 1){
/* == lhsz#block1.doall3.loop1 ==*/
      for (j_NO131 = 1 ; j_NO131 <= grid_points[1]-2 ; j_NO131 += 1){
/* == lhsz#block1.doall3.loop1.bb1 ==*/
      lhs[2][i_NO130][j_NO131][k_NO99] = lhs[2][i_NO130][j_NO131][k_NO99]+comz5;
      lhs[3][i_NO130][j_NO131][k_NO99] = lhs[3][i_NO130][j_NO131][k_NO99]-comz4;
      lhs[4][i_NO130][j_NO131][k_NO99] = lhs[4][i_NO130][j_NO131][k_NO99]+comz1;
      lhs[1][i_NO130][j_NO131][k_NO99+1] = lhs[1][i_NO130][j_NO131][k_NO99+1]-comz4;
      lhs[2][i_NO130][j_NO131][k_NO99+1] = lhs[2][i_NO130][j_NO131][k_NO99+1]+comz6;
      lhs[3][i_NO130][j_NO131][k_NO99+1] = lhs[3][i_NO130][j_NO131][k_NO99+1]-comz4;
      lhs[4][i_NO130][j_NO131][k_NO99+1] = lhs[4][i_NO130][j_NO131][k_NO99+1]+comz1;
      }
      }
/* == lhsz#block1.doall4 ==*/
      for (i_NO132 = 1 ; i_NO132 <= grid_points[0]-2 ; i_NO132 += 1){
/* == lhsz#block1.doall4.loop1 ==*/
      for (j_NO134 = 1 ; j_NO134 <= grid_points[1]-2 ; j_NO134 += 1){
/* == lhsz#block1.doall4.loop1.loop1 ==*/
      for (k_NO133 = 3 ; k_NO133 <= grid_points[2]-4 ; k_NO133 += 1){
/* == lhsz#block1.doall4.loop1.loop1.bb1 ==*/
      lhs[0][i_NO132][j_NO134][k_NO133] = lhs[0][i_NO132][j_NO134][k_NO133]+comz1;
      lhs[1][i_NO132][j_NO134][k_NO133] = lhs[1][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[2][i_NO132][j_NO134][k_NO133] = lhs[2][i_NO132][j_NO134][k_NO133]+comz6;
      lhs[3][i_NO132][j_NO134][k_NO133] = lhs[3][i_NO132][j_NO134][k_NO133]-comz4;
      lhs[4][i_NO132][j_NO134][k_NO133] = lhs[4][i_NO132][j_NO134][k_NO133]+comz1;
      }
      }
      }
/* == lhsz#block1.bb5 ==*/
      k_NO99 = grid_points[2]-3;
/* == lhsz#block1.doall6 ==*/
      for (i_NO135 = 1 ; i_NO135 <= grid_points[0]-2 ; i_NO135 += 1){
/* == lhsz#block1.doall6.loop1 ==*/
      for (j_NO136 = 1 ; j_NO136 <= grid_points[1]-2 ; j_NO136 += 1){
/* == lhsz#block1.doall6.loop1.bb1 ==*/
      lhs[0][i_NO135][j_NO136][k_NO99] = lhs[0][i_NO135][j_NO136][k_NO99]+comz1;
      lhs[1][i_NO135][j_NO136][k_NO99] = lhs[1][i_NO135][j_NO136][k_NO99]-comz4;
      lhs[2][i_NO135][j_NO136][k_NO99] = lhs[2][i_NO135][j_NO136][k_NO99]+comz6;
      lhs[3][i_NO135][j_NO136][k_NO99] = lhs[3][i_NO135][j_NO136][k_NO99]-comz4;
      lhs[0][i_NO135][j_NO136][k_NO99+1] = lhs[0][i_NO135][j_NO136][k_NO99+1]+comz1;
      lhs[1][i_NO135][j_NO136][k_NO99+1] = lhs[1][i_NO135][j_NO136][k_NO99+1]-comz4;
      lhs[2][i_NO135][j_NO136][k_NO99+1] = lhs[2][i_NO135][j_NO136][k_NO99+1]+comz5;
      }
      }
/* == lhsz#block1.doall7 ==*/
      for (i_NO137 = 1 ; i_NO137 <= grid_points[0]-2 ; i_NO137 += 1){
/* == lhsz#block1.doall7.loop1 ==*/
      for (j_NO139 = 1 ; j_NO139 <= grid_points[1]-2 ; j_NO139 += 1){
/* == lhsz#block1.doall7.loop1.loop1 ==*/
      for (k_NO138 = 1 ; k_NO138 <= grid_points[2]-2 ; k_NO138 += 1){
/* == lhsz#block1.doall7.loop1.loop1.bb1 ==*/
      lhs[5][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[6][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]-dttz2*speed[i_NO137][j_NO139][k_NO138-1];
      lhs[7][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[8][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]+dttz2*speed[i_NO137][j_NO139][k_NO138+1];
      lhs[9][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      lhs[10][i_NO137][j_NO139][k_NO138] = lhs[0][i_NO137][j_NO139][k_NO138];
      lhs[11][i_NO137][j_NO139][k_NO138] = lhs[1][i_NO137][j_NO139][k_NO138]+dttz2*speed[i_NO137][j_NO139][k_NO138-1];
      lhs[12][i_NO137][j_NO139][k_NO138] = lhs[2][i_NO137][j_NO139][k_NO138];
      lhs[13][i_NO137][j_NO139][k_NO138] = lhs[3][i_NO137][j_NO139][k_NO138]-dttz2*speed[i_NO137][j_NO139][k_NO138+1];
      lhs[14][i_NO137][j_NO139][k_NO138] = lhs[4][i_NO137][j_NO139][k_NO138];
      }
      }
      }
/* == lhsz#block1.bb8 ==*/
      goto L24;
L24:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 111: tzetar */
/* ******************* */
static void tzetar_PE0()
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      double t1_NO99/* t1 */;
      double t2_NO100/* t2 */;
      double t3_NO101/* t3 */;
      double ac_NO102/* ac */;
      double xvel_NO103/* xvel */;
      double yvel_NO104/* yvel */;
      double zvel_NO105/* zvel */;
      double r1_NO106/* r1 */;
      double r2_NO107/* r2 */;
      double r3_NO108/* r3 */;
      double r4_NO109/* r4 */;
      double r5_NO110/* r5 */;
      double btuz_NO111/* btuz */;
      double acinv_NO112/* acinv */;
      double ac2u_NO113/* ac2u */;
      double uzik1_NO114/* uzik1 */;
      double t1_NO115/* t1 */;
      double t2_NO116/* t2 */;
      double t3_NO117/* t3 */;
      double ac_NO118/* ac */;
      double xvel_NO119/* xvel */;
      double yvel_NO120/* yvel */;
      double zvel_NO121/* zvel */;
      double r1_NO122/* r1 */;
      double r2_NO123/* r2 */;
      double r3_NO124/* r3 */;
      double r4_NO125/* r4 */;
      double r5_NO126/* r5 */;
      double btuz_NO127/* btuz */;
      double acinv_NO128/* acinv */;
      double ac2u_NO129/* ac2u */;
      double uzik1_NO130/* uzik1 */;
      int i_NO131/* i */;
      int k_NO132/* k */;
      int j_NO133/* j */;

/* @decl:pe0:module111@ */
/* == tzetar#block1 ==*/
/* == tzetar#block1.doall1 ==*/
      for (i_NO131 = 1 ; i_NO131 <= grid_points[0]-2 ; i_NO131 += 1){
/* == tzetar#block1.doall1.loop1 ==*/
      for (j_NO133 = 1 ; j_NO133 <= grid_points[1]-2 ; j_NO133 += 1){
/* == tzetar#block1.doall1.loop1.loop1 ==*/
      for (k_NO132 = 1 ; k_NO132 <= grid_points[2]-2 ; k_NO132 += 1){
/* == tzetar#block1.doall1.loop1.loop1.bb1 ==*/
      xvel_NO119 = us[i_NO131][j_NO133][k_NO132];
      yvel_NO120 = vs[i_NO131][j_NO133][k_NO132];
      zvel_NO121 = ws[i_NO131][j_NO133][k_NO132];
      ac_NO118 = speed[i_NO131][j_NO133][k_NO132];
      acinv_NO128 = ainv[i_NO131][j_NO133][k_NO132];
      ac2u_NO129 = ac_NO118*ac_NO118;
      r1_NO122 = rhs[0][i_NO131][j_NO133][k_NO132];
      r2_NO123 = rhs[1][i_NO131][j_NO133][k_NO132];
      r3_NO124 = rhs[2][i_NO131][j_NO133][k_NO132];
      r4_NO125 = rhs[3][i_NO131][j_NO133][k_NO132];
      r5_NO126 = rhs[4][i_NO131][j_NO133][k_NO132];
      uzik1_NO130 = u[0][i_NO131][j_NO133][k_NO132];
      btuz_NO127 = bt*uzik1_NO130;
      t1_NO115 = btuz_NO127*acinv_NO128*(r4_NO125+r5_NO126);
      t2_NO116 = r3_NO124+t1_NO115;
      t3_NO117 = btuz_NO127*(r4_NO125-r5_NO126);
      rhs[0][i_NO131][j_NO133][k_NO132] = t2_NO116;
      rhs[1][i_NO131][j_NO133][k_NO132] = -uzik1_NO130*r2_NO123+xvel_NO119*t2_NO116;
      rhs[2][i_NO131][j_NO133][k_NO132] = uzik1_NO130*r1_NO122+yvel_NO120*t2_NO116;
      rhs[3][i_NO131][j_NO133][k_NO132] = zvel_NO121*t2_NO116+t3_NO117;
      rhs[4][i_NO131][j_NO133][k_NO132] = uzik1_NO130*(-xvel_NO119*r2_NO123+yvel_NO120*r1_NO122)+qs[i_NO131][j_NO133][k_NO132]*t2_NO116+c2iv*ac2u_NO129*t1_NO115+zvel_NO121*t3_NO117;
      }
      }
      }
/* == tzetar#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
