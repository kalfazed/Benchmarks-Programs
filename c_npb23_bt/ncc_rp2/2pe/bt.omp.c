/* option-log</homesc2/kisimoto/bin/x86_64-linux/mmp.b16b2efaff96bbe2eb1537f70ab4b17866eedbec bt.bq -p 2 -cfe2 -hexconst -sort-const -cache-size 16k -cache-assoc 4 -cache-procs 1 -cache-line-size 32 -pa -ignore-side-effect-of-import -reorder-blocks -rb2loop -debug-c-blocking -array-sym -adjust-array-sym -array-in-out -sym -auto-hmdf -no-fine -private-1pe-var-scalar-only -resolve-write-sharing -array-expansion-threashold 352 -loop-report -localize-verbose 5> */
/* option-log</homesc2/kisimoto/bin/x86_64-linux/ompcbe.b16b2efaff96bbe2eb1537f70ab4b17866eedbec -c-sche --goto-return --cfe2 --while --if --set-argv-func -b 5 --executions --shc-aligndata --cache-line-size 32 --volatile --flush --literal bt.mq> */
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
#pragma aligndata32(tx1)
static double tx1/* tx1 */;
#pragma aligndata32(tx2)
static double tx2/* tx2 */;
#pragma aligndata32(tx3)
static double tx3/* tx3 */;
#pragma aligndata32(ty1)
static double ty1/* ty1 */;
#pragma aligndata32(ty2)
static double ty2/* ty2 */;
#pragma aligndata32(ty3)
static double ty3/* ty3 */;
#pragma aligndata32(tz1)
static double tz1/* tz1 */;
#pragma aligndata32(tz2)
static double tz2/* tz2 */;
#pragma aligndata32(tz3)
static double tz3/* tz3 */;
#pragma aligndata32(dx1)
static double dx1/* dx1 */;
#pragma aligndata32(dx2)
static double dx2/* dx2 */;
#pragma aligndata32(dx3)
static double dx3/* dx3 */;
#pragma aligndata32(dx4)
static double dx4/* dx4 */;
#pragma aligndata32(dx5)
static double dx5/* dx5 */;
#pragma aligndata32(dy1)
static double dy1/* dy1 */;
#pragma aligndata32(dy2)
static double dy2/* dy2 */;
#pragma aligndata32(dy3)
static double dy3/* dy3 */;
#pragma aligndata32(dy4)
static double dy4/* dy4 */;
#pragma aligndata32(dy5)
static double dy5/* dy5 */;
#pragma aligndata32(dz1)
static double dz1/* dz1 */;
#pragma aligndata32(dz2)
static double dz2/* dz2 */;
#pragma aligndata32(dz3)
static double dz3/* dz3 */;
#pragma aligndata32(dz4)
static double dz4/* dz4 */;
#pragma aligndata32(dz5)
static double dz5/* dz5 */;
#pragma aligndata32(dssp)
static double dssp/* dssp */;
#pragma aligndata32(dt)
static double dt/* dt */;
#pragma aligndata32(dxmax)
static double dxmax/* dxmax */;
#pragma aligndata32(dymax)
static double dymax/* dymax */;
#pragma aligndata32(dzmax)
static double dzmax/* dzmax */;
#pragma aligndata32(xxcon1)
static double xxcon1/* xxcon1 */;
#pragma aligndata32(xxcon2)
static double xxcon2/* xxcon2 */;
#pragma aligndata32(xxcon3)
static double xxcon3/* xxcon3 */;
#pragma aligndata32(xxcon4)
static double xxcon4/* xxcon4 */;
#pragma aligndata32(xxcon5)
static double xxcon5/* xxcon5 */;
#pragma aligndata32(dx1tx1)
static double dx1tx1/* dx1tx1 */;
#pragma aligndata32(dx2tx1)
static double dx2tx1/* dx2tx1 */;
#pragma aligndata32(dx3tx1)
static double dx3tx1/* dx3tx1 */;
#pragma aligndata32(dx4tx1)
static double dx4tx1/* dx4tx1 */;
#pragma aligndata32(dx5tx1)
static double dx5tx1/* dx5tx1 */;
#pragma aligndata32(yycon1)
static double yycon1/* yycon1 */;
#pragma aligndata32(yycon2)
static double yycon2/* yycon2 */;
#pragma aligndata32(yycon3)
static double yycon3/* yycon3 */;
#pragma aligndata32(yycon4)
static double yycon4/* yycon4 */;
#pragma aligndata32(yycon5)
static double yycon5/* yycon5 */;
#pragma aligndata32(dy1ty1)
static double dy1ty1/* dy1ty1 */;
#pragma aligndata32(dy2ty1)
static double dy2ty1/* dy2ty1 */;
#pragma aligndata32(dy3ty1)
static double dy3ty1/* dy3ty1 */;
#pragma aligndata32(dy4ty1)
static double dy4ty1/* dy4ty1 */;
#pragma aligndata32(dy5ty1)
static double dy5ty1/* dy5ty1 */;
#pragma aligndata32(zzcon1)
static double zzcon1/* zzcon1 */;
#pragma aligndata32(zzcon2)
static double zzcon2/* zzcon2 */;
#pragma aligndata32(zzcon3)
static double zzcon3/* zzcon3 */;
#pragma aligndata32(zzcon4)
static double zzcon4/* zzcon4 */;
#pragma aligndata32(zzcon5)
static double zzcon5/* zzcon5 */;
#pragma aligndata32(dz1tz1)
static double dz1tz1/* dz1tz1 */;
#pragma aligndata32(dz2tz1)
static double dz2tz1/* dz2tz1 */;
#pragma aligndata32(dz3tz1)
static double dz3tz1/* dz3tz1 */;
#pragma aligndata32(dz4tz1)
static double dz4tz1/* dz4tz1 */;
#pragma aligndata32(dz5tz1)
static double dz5tz1/* dz5tz1 */;
#pragma aligndata32(dnxm1)
static double dnxm1/* dnxm1 */;
#pragma aligndata32(dnym1)
static double dnym1/* dnym1 */;
#pragma aligndata32(dnzm1)
static double dnzm1/* dnzm1 */;
#pragma aligndata32(c1c2)
static double c1c2/* c1c2 */;
#pragma aligndata32(c1c5)
static double c1c5/* c1c5 */;
#pragma aligndata32(c3c4)
static double c3c4/* c3c4 */;
#pragma aligndata32(c1345)
static double c1345/* c1345 */;
#pragma aligndata32(conz1)
static double conz1/* conz1 */;
#pragma aligndata32(c1)
static double c1/* c1 */;
#pragma aligndata32(c2)
static double c2/* c2 */;
#pragma aligndata32(c3)
static double c3/* c3 */;
#pragma aligndata32(c4)
static double c4/* c4 */;
#pragma aligndata32(c5)
static double c5/* c5 */;
#pragma aligndata32(c4dssp)
static double c4dssp/* c4dssp */;
#pragma aligndata32(c5dssp)
static double c5dssp/* c5dssp */;
#pragma aligndata32(dtdssp)
static double dtdssp/* dtdssp */;
#pragma aligndata32(dttx1)
static double dttx1/* dttx1 */;
#pragma aligndata32(dttx2)
static double dttx2/* dttx2 */;
#pragma aligndata32(dtty1)
static double dtty1/* dtty1 */;
#pragma aligndata32(dtty2)
static double dtty2/* dtty2 */;
#pragma aligndata32(dttz1)
static double dttz1/* dttz1 */;
#pragma aligndata32(dttz2)
static double dttz2/* dttz2 */;
#pragma aligndata32(c2dttx1)
static double c2dttx1/* c2dttx1 */;
#pragma aligndata32(c2dtty1)
static double c2dtty1/* c2dtty1 */;
#pragma aligndata32(c2dttz1)
static double c2dttz1/* c2dttz1 */;
#pragma aligndata32(comz1)
static double comz1/* comz1 */;
#pragma aligndata32(comz4)
static double comz4/* comz4 */;
#pragma aligndata32(comz5)
static double comz5/* comz5 */;
#pragma aligndata32(comz6)
static double comz6/* comz6 */;
#pragma aligndata32(c3c4tx3)
static double c3c4tx3/* c3c4tx3 */;
#pragma aligndata32(c3c4ty3)
static double c3c4ty3/* c3c4ty3 */;
#pragma aligndata32(c3c4tz3)
static double c3c4tz3/* c3c4tz3 */;
#pragma aligndata32(c2iv)
static double c2iv/* c2iv */;
#pragma aligndata32(con43)
static double con43/* con43 */;
#pragma aligndata32(con16)
static double con16/* con16 */;
#pragma aligndata32(grid_points)
static int grid_points[3]/* grid_points */;
#pragma aligndata32(ce)
static double ce[5][13]/* ce */;
#pragma aligndata32(us)
static double us[13][16][13]/* us */;
#pragma aligndata32(vs)
static double vs[13][16][13]/* vs */;
#pragma aligndata32(ws)
static double ws[13][16][13]/* ws */;
#pragma aligndata32(qs)
static double qs[13][16][13]/* qs */;
#pragma aligndata32(rho_i)
static double rho_i[13][16][13]/* rho_i */;
#pragma aligndata32(square)
static double square[13][16][13]/* square */;
#pragma aligndata32(forcing)
static double forcing[13][14][13][6]/* forcing */;
#pragma aligndata32(u)
static double u[13][16][13][5]/* u */;
#pragma aligndata32(rhs)
static double rhs[13][16][13][5]/* rhs */;
#pragma aligndata32(lhs)
static double lhs[13][16][13][3][5][5]/* lhs */;
#pragma aligndata32(cuf)
static double cuf[12]/* cuf */;
#pragma aligndata32(q)
static double q[12]/* q */;
#pragma aligndata32(ue)
static double ue[12][5]/* ue */;
#pragma aligndata32(buf)
static double buf[12][5]/* buf */;
#pragma aligndata32(fjac)
static double fjac[13][13][12][5][5]/* fjac */;
#pragma aligndata32(njac)
static double njac[13][13][12][5][5]/* njac */;
#pragma aligndata32(M0_CL0_PC0_niter)
int M0_CL0_PC0_niter;
#pragma aligndata32(M0_CL0_PC0_step_NO98)
int M0_CL0_PC0_step_NO98;
#pragma aligndata32(M0_CL0_PC0_n3)
int M0_CL0_PC0_n3;
#pragma aligndata32(M0_CL0_PC0_nthreads)
int M0_CL0_PC0_nthreads;
#pragma aligndata32(M0_CL0_PC0_navg)
double M0_CL0_PC0_navg;
#pragma aligndata32(M0_CL0_PC0_mflops)
double M0_CL0_PC0_mflops;
#pragma aligndata32(M0_CL0_PC0_tmax)
double M0_CL0_PC0_tmax;
#pragma aligndata32(M0_CL0_PC0_verified)
int M0_CL0_PC0_verified;
#pragma aligndata32(M0_CL0_PC0_class)
char M0_CL0_PC0_class;
#pragma aligndata32(M0_CL0_PC0_V106)
int M0_CL0_PC0_V106;
#pragma aligndata32(M0_CL0_PC0_V107)
int M0_CL0_PC0_V107;
#pragma aligndata32(M0_CL0_PC0_V108)
int M0_CL0_PC0_V108;
#pragma aligndata32(M0_CL0_PC0_V109)
int M0_CL0_PC0_V109;
#pragma aligndata32(M0_CL0_PC0_V110)
int M0_CL0_PC0_V110;
#pragma aligndata32(M0_CL0_PC0_V111)
int M0_CL0_PC0_V111;
#pragma aligndata32(M0_CL0_PC0_V112)
int M0_CL0_PC0_V112;
#pragma aligndata32(M0_CL0_PC0_V113)
int M0_CL0_PC0_V113;
#pragma aligndata32(M0_CL0_PC0_V114)
int M0_CL0_PC0_V114;
#pragma aligndata32(M0_CL0_PC0_V115)
int M0_CL0_PC0_V115;
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=2) == */
volatile int M0_CL0_PC0_SS_MTG_COUNT2[2];
volatile int M0_CL0_PC0_STASCHE_END_FLAG2[2][2];
volatile int M0_CL0_PC0_STASCHE_RBBE_FLAG2[2];
volatile int M0_CL0_PC0_SCHE_FLG2[2];
/* == VARIABLE FOR DISTRIBUTED DYNAMIC SCHEDULER (mtg_id=1) == */
volatile int M0_CL0_PC0_TASKQ1_PC0[35];
volatile int M0_CL0_PC0_TASKQ_PTRS1_PC0;
volatile int M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0;
volatile int M0_CL0_PC0_TASKQ_PTRE1_PC0_PE1;
volatile int M0_CL0_PC0_SCHE_FLG1[2];



#pragma aligndata32(M101_CL0_PC0_i_NO95)
int M101_CL0_PC0_i_NO95;
#pragma aligndata32(M101_CL0_PC0_j_NO96)
int M101_CL0_PC0_j_NO96;
#pragma aligndata32(M101_CL0_PC0_k_NO97)
int M101_CL0_PC0_k_NO97;
#pragma aligndata32(M101_CL0_PC0_m_NO98)
int M101_CL0_PC0_m_NO98;
#pragma aligndata32(M101_CL0_PC0_ix_NO99)
int M101_CL0_PC0_ix_NO99;
#pragma aligndata32(M101_CL0_PC0_iy_NO100)
int M101_CL0_PC0_iy_NO100;
#pragma aligndata32(M101_CL0_PC0_iz_NO101)
int M101_CL0_PC0_iz_NO101;
#pragma aligndata32(M101_CL0_PC0_xi_NO102)
double M101_CL0_PC0_xi_NO102;
#pragma aligndata32(M101_CL0_PC0_eta_NO103)
double M101_CL0_PC0_eta_NO103;
#pragma aligndata32(M101_CL0_PC0_zeta_NO104)
double M101_CL0_PC0_zeta_NO104;
#pragma aligndata32(M101_CL0_PC0_Pxi_NO105)
double M101_CL0_PC0_Pxi_NO105;
#pragma aligndata32(M101_CL0_PC0_Peta_NO106)
double M101_CL0_PC0_Peta_NO106;
#pragma aligndata32(M101_CL0_PC0_Pzeta_NO107)
double M101_CL0_PC0_Pzeta_NO107;
#pragma aligndata32(M101_CL0_PC0_m_NO108)
int M101_CL0_PC0_m_NO108;
#pragma aligndata32(M101_CL0_PC0_k_NO109)
int M101_CL0_PC0_k_NO109;
#pragma aligndata32(M101_CL0_PC0_j_NO110)
int M101_CL0_PC0_j_NO110;
#pragma aligndata32(M101_CL0_PC0_i_NO111)
int M101_CL0_PC0_i_NO111;
#pragma aligndata32(M101_CL0_PC0_m_NO112)
int M101_CL0_PC0_m_NO112;
#pragma aligndata32(M101_CL0_PC0_k_NO113)
int M101_CL0_PC0_k_NO113;
#pragma aligndata32(M101_CL0_PC0_j_NO114)
int M101_CL0_PC0_j_NO114;
#pragma aligndata32(M101_CL0_PC0_m_NO115)
int M101_CL0_PC0_m_NO115;
#pragma aligndata32(M101_CL0_PC0_k_NO116)
int M101_CL0_PC0_k_NO116;
#pragma aligndata32(M101_CL0_PC0_j_NO117)
int M101_CL0_PC0_j_NO117;
#pragma aligndata32(M101_CL0_PC0_m_NO118)
int M101_CL0_PC0_m_NO118;
#pragma aligndata32(M101_CL0_PC0_k_NO119)
int M101_CL0_PC0_k_NO119;
#pragma aligndata32(M101_CL0_PC0_i_NO120)
int M101_CL0_PC0_i_NO120;
#pragma aligndata32(M101_CL0_PC0_m_NO121)
int M101_CL0_PC0_m_NO121;
#pragma aligndata32(M101_CL0_PC0_k_NO122)
int M101_CL0_PC0_k_NO122;
#pragma aligndata32(M101_CL0_PC0_i_NO123)
int M101_CL0_PC0_i_NO123;
#pragma aligndata32(M101_CL0_PC0_m_NO124)
int M101_CL0_PC0_m_NO124;
#pragma aligndata32(M101_CL0_PC0_j_NO125)
int M101_CL0_PC0_j_NO125;
#pragma aligndata32(M101_CL0_PC0_i_NO126)
int M101_CL0_PC0_i_NO126;
#pragma aligndata32(M101_CL0_PC0_m_NO127)
int M101_CL0_PC0_m_NO127;
#pragma aligndata32(M101_CL0_PC0_j_NO128)
int M101_CL0_PC0_j_NO128;
#pragma aligndata32(M101_CL0_PC0_i_NO129)
int M101_CL0_PC0_i_NO129;
#pragma aligndata32(M101_CL0_PC0_Pface_NO55)
double M101_CL0_PC0_Pface_NO55[2][3][5];
#pragma aligndata32(M101_CL0_PC0_temp_NO56)
double M101_CL0_PC0_temp_NO56[5];

#pragma aligndata32(M102_CL0_PC0_i_NO95)
int M102_CL0_PC0_i_NO95;
#pragma aligndata32(M102_CL0_PC0_j_NO96)
int M102_CL0_PC0_j_NO96;
#pragma aligndata32(M102_CL0_PC0_k_NO97)
int M102_CL0_PC0_k_NO97;
#pragma aligndata32(M102_CL0_PC0_m_NO98)
int M102_CL0_PC0_m_NO98;
#pragma aligndata32(M102_CL0_PC0_n_NO99)
int M102_CL0_PC0_n_NO99;
#pragma aligndata32(M102_CL0_PC0_m_NO100)
int M102_CL0_PC0_m_NO100;
#pragma aligndata32(M102_CL0_PC0_k_NO101)
int M102_CL0_PC0_k_NO101;
#pragma aligndata32(M102_CL0_PC0_j_NO102)
int M102_CL0_PC0_j_NO102;
#pragma aligndata32(M102_CL0_PC0_i_NO103)
int M102_CL0_PC0_i_NO103;

#pragma aligndata32(M99_CL0_PC0_xi_NO95)
double M99_CL0_PC0_xi_NO95;
#pragma aligndata32(M99_CL0_PC0_eta_NO96)
double M99_CL0_PC0_eta_NO96;
#pragma aligndata32(M99_CL0_PC0_zeta_NO97)
double M99_CL0_PC0_zeta_NO97;
#pragma aligndata32(M99_CL0_PC0_dtpp_NO98)
double M99_CL0_PC0_dtpp_NO98;
#pragma aligndata32(M99_CL0_PC0_m_NO99)
int M99_CL0_PC0_m_NO99;
#pragma aligndata32(M99_CL0_PC0_i_NO100)
int M99_CL0_PC0_i_NO100;
#pragma aligndata32(M99_CL0_PC0_j_NO101)
int M99_CL0_PC0_j_NO101;
#pragma aligndata32(M99_CL0_PC0_k_NO102)
int M99_CL0_PC0_k_NO102;
#pragma aligndata32(M99_CL0_PC0_ip1_NO103)
int M99_CL0_PC0_ip1_NO103;
#pragma aligndata32(M99_CL0_PC0_im1_NO104)
int M99_CL0_PC0_im1_NO104;
#pragma aligndata32(M99_CL0_PC0_jp1_NO105)
int M99_CL0_PC0_jp1_NO105;
#pragma aligndata32(M99_CL0_PC0_jm1_NO106)
int M99_CL0_PC0_jm1_NO106;
#pragma aligndata32(M99_CL0_PC0_km1_NO107)
int M99_CL0_PC0_km1_NO107;
#pragma aligndata32(M99_CL0_PC0_kp1_NO108)
int M99_CL0_PC0_kp1_NO108;
#pragma aligndata32(M99_CL0_PC0_m_NO109)
int M99_CL0_PC0_m_NO109;
#pragma aligndata32(M99_CL0_PC0_m_NO110)
int M99_CL0_PC0_m_NO110;
#pragma aligndata32(M99_CL0_PC0_i_NO111)
int M99_CL0_PC0_i_NO111;
#pragma aligndata32(M99_CL0_PC0_i_NO112)
int M99_CL0_PC0_i_NO112;
#pragma aligndata32(M99_CL0_PC0_m_NO113)
int M99_CL0_PC0_m_NO113;
#pragma aligndata32(M99_CL0_PC0_i_NO114)
int M99_CL0_PC0_i_NO114;
#pragma aligndata32(M99_CL0_PC0_m_NO115)
int M99_CL0_PC0_m_NO115;
#pragma aligndata32(M99_CL0_PC0_m_NO116)
int M99_CL0_PC0_m_NO116;
#pragma aligndata32(M99_CL0_PC0_k_NO117)
int M99_CL0_PC0_k_NO117;
#pragma aligndata32(M99_CL0_PC0_j_NO118)
int M99_CL0_PC0_j_NO118;
#pragma aligndata32(M99_CL0_PC0_m_NO119)
int M99_CL0_PC0_m_NO119;
#pragma aligndata32(M99_CL0_PC0_m_NO120)
int M99_CL0_PC0_m_NO120;
#pragma aligndata32(M99_CL0_PC0_j_NO121)
int M99_CL0_PC0_j_NO121;
#pragma aligndata32(M99_CL0_PC0_j_NO122)
int M99_CL0_PC0_j_NO122;
#pragma aligndata32(M99_CL0_PC0_m_NO123)
int M99_CL0_PC0_m_NO123;
#pragma aligndata32(M99_CL0_PC0_j_NO124)
int M99_CL0_PC0_j_NO124;
#pragma aligndata32(M99_CL0_PC0_m_NO125)
int M99_CL0_PC0_m_NO125;
#pragma aligndata32(M99_CL0_PC0_m_NO126)
int M99_CL0_PC0_m_NO126;
#pragma aligndata32(M99_CL0_PC0_k_NO127)
int M99_CL0_PC0_k_NO127;
#pragma aligndata32(M99_CL0_PC0_i_NO128)
int M99_CL0_PC0_i_NO128;
#pragma aligndata32(M99_CL0_PC0_m_NO129)
int M99_CL0_PC0_m_NO129;
#pragma aligndata32(M99_CL0_PC0_m_NO130)
int M99_CL0_PC0_m_NO130;
#pragma aligndata32(M99_CL0_PC0_k_NO131)
int M99_CL0_PC0_k_NO131;
#pragma aligndata32(M99_CL0_PC0_k_NO132)
int M99_CL0_PC0_k_NO132;
#pragma aligndata32(M99_CL0_PC0_m_NO133)
int M99_CL0_PC0_m_NO133;
#pragma aligndata32(M99_CL0_PC0_k_NO134)
int M99_CL0_PC0_k_NO134;
#pragma aligndata32(M99_CL0_PC0_m_NO135)
int M99_CL0_PC0_m_NO135;
#pragma aligndata32(M99_CL0_PC0_m_NO136)
int M99_CL0_PC0_m_NO136;
#pragma aligndata32(M99_CL0_PC0_j_NO137)
int M99_CL0_PC0_j_NO137;
#pragma aligndata32(M99_CL0_PC0_i_NO138)
int M99_CL0_PC0_i_NO138;
#pragma aligndata32(M99_CL0_PC0_m_NO139)
int M99_CL0_PC0_m_NO139;
#pragma aligndata32(M99_CL0_PC0_k_NO140)
int M99_CL0_PC0_k_NO140;
#pragma aligndata32(M99_CL0_PC0_j_NO141)
int M99_CL0_PC0_j_NO141;
#pragma aligndata32(M99_CL0_PC0_i_NO142)
int M99_CL0_PC0_i_NO142;
#pragma aligndata32(M99_CL0_PC0_dtemp_NO55)
double M99_CL0_PC0_dtemp_NO55[5];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=3) == */
volatile int M99_CL0_PC0_SS_MTG_COUNT3[2];
volatile int M99_CL0_PC0_STASCHE_END_FLAG3[2][2];
volatile int M99_CL0_PC0_STASCHE_RBBE_FLAG3[2];
volatile int M99_CL0_PC0_SCHE_FLG3[2];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=4) == */
volatile int M99_CL0_PC0_SS_MTG_COUNT4[2];
volatile int M99_CL0_PC0_STASCHE_END_FLAG4[2][2];
volatile int M99_CL0_PC0_STASCHE_RBBE_FLAG4[2];
volatile int M99_CL0_PC0_SCHE_FLG4[2];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=5) == */
volatile int M99_CL0_PC0_SS_MTG_COUNT5[2];
volatile int M99_CL0_PC0_STASCHE_END_FLAG5[2][2];
volatile int M99_CL0_PC0_STASCHE_RBBE_FLAG5[2];
volatile int M99_CL0_PC0_SCHE_FLG5[2];


#pragma aligndata32(M108_CL0_PC0_epsilon)
double M108_CL0_PC0_epsilon;
#pragma aligndata32(M108_CL0_PC0_dtref)
double M108_CL0_PC0_dtref;
#pragma aligndata32(M108_CL0_PC0_m_NO100)
int M108_CL0_PC0_m_NO100;
#pragma aligndata32(M108_CL0_PC0_V101)
int M108_CL0_PC0_V101;
#pragma aligndata32(M108_CL0_PC0_V102)
int M108_CL0_PC0_V102;
#pragma aligndata32(M108_CL0_PC0_V103)
int M108_CL0_PC0_V103;
#pragma aligndata32(M108_CL0_PC0_V104)
int M108_CL0_PC0_V104;
#pragma aligndata32(M108_CL0_PC0_V105)
int M108_CL0_PC0_V105;
#pragma aligndata32(M108_CL0_PC0_V106)
int M108_CL0_PC0_V106;
#pragma aligndata32(M108_CL0_PC0_V107)
int M108_CL0_PC0_V107;
#pragma aligndata32(M108_CL0_PC0_V108)
int M108_CL0_PC0_V108;
#pragma aligndata32(M108_CL0_PC0_V109)
int M108_CL0_PC0_V109;
#pragma aligndata32(M108_CL0_PC0_V110)
int M108_CL0_PC0_V110;
#pragma aligndata32(M108_CL0_PC0_V111)
int M108_CL0_PC0_V111;
#pragma aligndata32(M108_CL0_PC0_V112)
int M108_CL0_PC0_V112;
#pragma aligndata32(M108_CL0_PC0_V113)
int M108_CL0_PC0_V113;
#pragma aligndata32(M108_CL0_PC0_V114)
int M108_CL0_PC0_V114;
#pragma aligndata32(M108_CL0_PC0_V115)
int M108_CL0_PC0_V115;
#pragma aligndata32(M108_CL0_PC0_V116)
int M108_CL0_PC0_V116;
#pragma aligndata32(M108_CL0_PC0_V117)
int M108_CL0_PC0_V117;
#pragma aligndata32(M108_CL0_PC0_V118)
int M108_CL0_PC0_V118;
#pragma aligndata32(M108_CL0_PC0_V119)
int M108_CL0_PC0_V119;
#pragma aligndata32(M108_CL0_PC0_V120)
int M108_CL0_PC0_V120;
#pragma aligndata32(M108_CL0_PC0_V121)
int M108_CL0_PC0_V121;
#pragma aligndata32(M108_CL0_PC0_V122)
int M108_CL0_PC0_V122;
#pragma aligndata32(M108_CL0_PC0_V123)
int M108_CL0_PC0_V123;
#pragma aligndata32(M108_CL0_PC0_m_NO124)
int M108_CL0_PC0_m_NO124;
#pragma aligndata32(M108_CL0_PC0_m_NO125)
int M108_CL0_PC0_m_NO125;
#pragma aligndata32(M108_CL0_PC0_m_NO126)
int M108_CL0_PC0_m_NO126;
#pragma aligndata32(M108_CL0_PC0_m_NO127)
int M108_CL0_PC0_m_NO127;
#pragma aligndata32(M108_CL0_PC0_xcrref)
double M108_CL0_PC0_xcrref[5][4];
#pragma aligndata32(M108_CL0_PC0_xceref)
double M108_CL0_PC0_xceref[5][4];
#pragma aligndata32(M108_CL0_PC0_xcrdif)
double M108_CL0_PC0_xcrdif[5][4];
#pragma aligndata32(M108_CL0_PC0_xcedif)
double M108_CL0_PC0_xcedif[5][4];
#pragma aligndata32(M108_CL0_PC0_xce)
double M108_CL0_PC0_xce[5];
#pragma aligndata32(M108_CL0_PC0_xcr)
double M108_CL0_PC0_xcr[5][4];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=6) == */
volatile int M108_CL0_PC0_SS_MTG_COUNT6[2];
volatile int M108_CL0_PC0_STASCHE_END_FLAG6[2][2];
volatile int M108_CL0_PC0_STASCHE_RBBE_FLAG6[2];
volatile int M108_CL0_PC0_SCHE_FLG6[2];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=7) == */
volatile int M108_CL0_PC0_SS_MTG_COUNT7[2];
volatile int M108_CL0_PC0_STASCHE_END_FLAG7[2][2];
volatile int M108_CL0_PC0_STASCHE_RBBE_FLAG7[2];
volatile int M108_CL0_PC0_SCHE_FLG7[2];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=8) == */
volatile int M108_CL0_PC0_SS_MTG_COUNT8[2];
volatile int M108_CL0_PC0_STASCHE_END_FLAG8[2][2];
volatile int M108_CL0_PC0_STASCHE_RBBE_FLAG8[2];
volatile int M108_CL0_PC0_SCHE_FLG8[2];
/* == VARIABLE FOR STATIC SCHEDULER (mtg_id=9) == */
volatile int M108_CL0_PC0_SS_MTG_COUNT9[2];
volatile int M108_CL0_PC0_STASCHE_END_FLAG9[2][2];
volatile int M108_CL0_PC0_STASCHE_RBBE_FLAG9[2];
volatile int M108_CL0_PC0_SCHE_FLG9[2];



#pragma aligndata32(M106_CL0_PC0_i_NO95)
int M106_CL0_PC0_i_NO95;
#pragma aligndata32(M106_CL0_PC0_j_NO96)
int M106_CL0_PC0_j_NO96;
#pragma aligndata32(M106_CL0_PC0_k_NO97)
int M106_CL0_PC0_k_NO97;
#pragma aligndata32(M106_CL0_PC0_m_NO98)
int M106_CL0_PC0_m_NO98;
#pragma aligndata32(M106_CL0_PC0_rho_inv_NO99)
double M106_CL0_PC0_rho_inv_NO99;
#pragma aligndata32(M106_CL0_PC0_uijk_NO100)
double M106_CL0_PC0_uijk_NO100;
#pragma aligndata32(M106_CL0_PC0_up1_NO101)
double M106_CL0_PC0_up1_NO101;
#pragma aligndata32(M106_CL0_PC0_um1_NO102)
double M106_CL0_PC0_um1_NO102;
#pragma aligndata32(M106_CL0_PC0_vijk_NO103)
double M106_CL0_PC0_vijk_NO103;
#pragma aligndata32(M106_CL0_PC0_vp1_NO104)
double M106_CL0_PC0_vp1_NO104;
#pragma aligndata32(M106_CL0_PC0_vm1_NO105)
double M106_CL0_PC0_vm1_NO105;
#pragma aligndata32(M106_CL0_PC0_wijk_NO106)
double M106_CL0_PC0_wijk_NO106;
#pragma aligndata32(M106_CL0_PC0_wp1_NO107)
double M106_CL0_PC0_wp1_NO107;
#pragma aligndata32(M106_CL0_PC0_wm1_NO108)
double M106_CL0_PC0_wm1_NO108;
#pragma aligndata32(M106_CL0_PC0_k_NO109)
int M106_CL0_PC0_k_NO109;
#pragma aligndata32(M106_CL0_PC0_j_NO110)
int M106_CL0_PC0_j_NO110;
#pragma aligndata32(M106_CL0_PC0_i_NO111)
int M106_CL0_PC0_i_NO111;
#pragma aligndata32(M106_CL0_PC0_k_NO112)
int M106_CL0_PC0_k_NO112;
#pragma aligndata32(M106_CL0_PC0_j_NO113)
int M106_CL0_PC0_j_NO113;
#pragma aligndata32(M106_CL0_PC0_i_NO114)
int M106_CL0_PC0_i_NO114;
#pragma aligndata32(M106_CL0_PC0_m_NO115)
int M106_CL0_PC0_m_NO115;
#pragma aligndata32(M106_CL0_PC0_k_NO116)
int M106_CL0_PC0_k_NO116;
#pragma aligndata32(M106_CL0_PC0_j_NO117)
int M106_CL0_PC0_j_NO117;
#pragma aligndata32(M106_CL0_PC0_m_NO118)
int M106_CL0_PC0_m_NO118;
#pragma aligndata32(M106_CL0_PC0_k_NO119)
int M106_CL0_PC0_k_NO119;
#pragma aligndata32(M106_CL0_PC0_j_NO120)
int M106_CL0_PC0_j_NO120;
#pragma aligndata32(M106_CL0_PC0_m_NO121)
int M106_CL0_PC0_m_NO121;
#pragma aligndata32(M106_CL0_PC0_k_NO122)
int M106_CL0_PC0_k_NO122;
#pragma aligndata32(M106_CL0_PC0_j_NO123)
int M106_CL0_PC0_j_NO123;
#pragma aligndata32(M106_CL0_PC0_i_NO124)
int M106_CL0_PC0_i_NO124;
#pragma aligndata32(M106_CL0_PC0_m_NO125)
int M106_CL0_PC0_m_NO125;
#pragma aligndata32(M106_CL0_PC0_k_NO126)
int M106_CL0_PC0_k_NO126;
#pragma aligndata32(M106_CL0_PC0_j_NO127)
int M106_CL0_PC0_j_NO127;
#pragma aligndata32(M106_CL0_PC0_m_NO128)
int M106_CL0_PC0_m_NO128;
#pragma aligndata32(M106_CL0_PC0_k_NO129)
int M106_CL0_PC0_k_NO129;
#pragma aligndata32(M106_CL0_PC0_j_NO130)
int M106_CL0_PC0_j_NO130;
#pragma aligndata32(M106_CL0_PC0_k_NO131)
int M106_CL0_PC0_k_NO131;
#pragma aligndata32(M106_CL0_PC0_j_NO132)
int M106_CL0_PC0_j_NO132;
#pragma aligndata32(M106_CL0_PC0_i_NO133)
int M106_CL0_PC0_i_NO133;
#pragma aligndata32(M106_CL0_PC0_m_NO134)
int M106_CL0_PC0_m_NO134;
#pragma aligndata32(M106_CL0_PC0_k_NO135)
int M106_CL0_PC0_k_NO135;
#pragma aligndata32(M106_CL0_PC0_i_NO136)
int M106_CL0_PC0_i_NO136;
#pragma aligndata32(M106_CL0_PC0_m_NO137)
int M106_CL0_PC0_m_NO137;
#pragma aligndata32(M106_CL0_PC0_k_NO138)
int M106_CL0_PC0_k_NO138;
#pragma aligndata32(M106_CL0_PC0_i_NO139)
int M106_CL0_PC0_i_NO139;
#pragma aligndata32(M106_CL0_PC0_m_NO140)
int M106_CL0_PC0_m_NO140;
#pragma aligndata32(M106_CL0_PC0_k_NO141)
int M106_CL0_PC0_k_NO141;
#pragma aligndata32(M106_CL0_PC0_j_NO142)
int M106_CL0_PC0_j_NO142;
#pragma aligndata32(M106_CL0_PC0_i_NO143)
int M106_CL0_PC0_i_NO143;
#pragma aligndata32(M106_CL0_PC0_m_NO144)
int M106_CL0_PC0_m_NO144;
#pragma aligndata32(M106_CL0_PC0_k_NO145)
int M106_CL0_PC0_k_NO145;
#pragma aligndata32(M106_CL0_PC0_i_NO146)
int M106_CL0_PC0_i_NO146;
#pragma aligndata32(M106_CL0_PC0_m_NO147)
int M106_CL0_PC0_m_NO147;
#pragma aligndata32(M106_CL0_PC0_k_NO148)
int M106_CL0_PC0_k_NO148;
#pragma aligndata32(M106_CL0_PC0_i_NO149)
int M106_CL0_PC0_i_NO149;
#pragma aligndata32(M106_CL0_PC0_k_NO150)
int M106_CL0_PC0_k_NO150;
#pragma aligndata32(M106_CL0_PC0_j_NO151)
int M106_CL0_PC0_j_NO151;
#pragma aligndata32(M106_CL0_PC0_i_NO152)
int M106_CL0_PC0_i_NO152;
#pragma aligndata32(M106_CL0_PC0_m_NO153)
int M106_CL0_PC0_m_NO153;
#pragma aligndata32(M106_CL0_PC0_j_NO154)
int M106_CL0_PC0_j_NO154;
#pragma aligndata32(M106_CL0_PC0_i_NO155)
int M106_CL0_PC0_i_NO155;
#pragma aligndata32(M106_CL0_PC0_m_NO156)
int M106_CL0_PC0_m_NO156;
#pragma aligndata32(M106_CL0_PC0_j_NO157)
int M106_CL0_PC0_j_NO157;
#pragma aligndata32(M106_CL0_PC0_i_NO158)
int M106_CL0_PC0_i_NO158;
#pragma aligndata32(M106_CL0_PC0_m_NO159)
int M106_CL0_PC0_m_NO159;
#pragma aligndata32(M106_CL0_PC0_k_NO160)
int M106_CL0_PC0_k_NO160;
#pragma aligndata32(M106_CL0_PC0_j_NO161)
int M106_CL0_PC0_j_NO161;
#pragma aligndata32(M106_CL0_PC0_i_NO162)
int M106_CL0_PC0_i_NO162;
#pragma aligndata32(M106_CL0_PC0_m_NO163)
int M106_CL0_PC0_m_NO163;
#pragma aligndata32(M106_CL0_PC0_j_NO164)
int M106_CL0_PC0_j_NO164;
#pragma aligndata32(M106_CL0_PC0_i_NO165)
int M106_CL0_PC0_i_NO165;
#pragma aligndata32(M106_CL0_PC0_m_NO166)
int M106_CL0_PC0_m_NO166;
#pragma aligndata32(M106_CL0_PC0_j_NO167)
int M106_CL0_PC0_j_NO167;
#pragma aligndata32(M106_CL0_PC0_i_NO168)
int M106_CL0_PC0_i_NO168;
#pragma aligndata32(M106_CL0_PC0_i_NO169)
int M106_CL0_PC0_i_NO169;
#pragma aligndata32(M106_CL0_PC0_m_NO170)
int M106_CL0_PC0_m_NO170;
#pragma aligndata32(M106_CL0_PC0_k_NO171)
int M106_CL0_PC0_k_NO171;
#pragma aligndata32(M106_CL0_PC0_j_NO172)
int M106_CL0_PC0_j_NO172;




#pragma aligndata32(M95_CL0_PC0_i_NO95)
int M95_CL0_PC0_i_NO95;
#pragma aligndata32(M95_CL0_PC0_j_NO96)
int M95_CL0_PC0_j_NO96;
#pragma aligndata32(M95_CL0_PC0_k_NO97)
int M95_CL0_PC0_k_NO97;
#pragma aligndata32(M95_CL0_PC0_m_NO98)
int M95_CL0_PC0_m_NO98;

#pragma aligndata32(M97_CL0_PC0_u_exact)
double M97_CL0_PC0_u_exact[5];
#pragma aligndata32(M97_CL0_PC1_u_exact)
double M97_CL0_PC1_u_exact[5];


#pragma aligndata32(M103_CL0_PC0_i_NO95)
int M103_CL0_PC0_i_NO95;
#pragma aligndata32(M103_CL0_PC0_j_NO96)
int M103_CL0_PC0_j_NO96;
#pragma aligndata32(M103_CL0_PC0_k_NO97)
int M103_CL0_PC0_k_NO97;
#pragma aligndata32(M103_CL0_PC0_tmp1_NO98)
double M103_CL0_PC0_tmp1_NO98;
#pragma aligndata32(M103_CL0_PC0_tmp2_NO99)
double M103_CL0_PC0_tmp2_NO99;
#pragma aligndata32(M103_CL0_PC0_tmp3_NO100)
double M103_CL0_PC0_tmp3_NO100;
#pragma aligndata32(M103_CL0_PC0_i_NO101)
int M103_CL0_PC0_i_NO101;

#pragma aligndata32(M111_CL0_PC0_i_NO95)
int M111_CL0_PC0_i_NO95;
#pragma aligndata32(M111_CL0_PC0_j_NO96)
int M111_CL0_PC0_j_NO96;
#pragma aligndata32(M111_CL0_PC0_k_NO97)
int M111_CL0_PC0_k_NO97;
#pragma aligndata32(M111_CL0_PC0_isize)
int M111_CL0_PC0_isize;
#pragma aligndata32(M111_CL0_PC0_k_NO99)
int M111_CL0_PC0_k_NO99;
#pragma aligndata32(M111_CL0_PC0_j_NO100)
int M111_CL0_PC0_j_NO100;
#pragma aligndata32(M111_CL0_PC0_k_NO101)
int M111_CL0_PC0_k_NO101;
#pragma aligndata32(M111_CL0_PC0_j_NO102)
int M111_CL0_PC0_j_NO102;

#pragma aligndata32(M110_CL0_PC0_i_NO95)
int M110_CL0_PC0_i_NO95;
#pragma aligndata32(M110_CL0_PC0_j_NO96)
int M110_CL0_PC0_j_NO96;
#pragma aligndata32(M110_CL0_PC0_k_NO97)
int M110_CL0_PC0_k_NO97;
#pragma aligndata32(M110_CL0_PC0_m_NO98)
int M110_CL0_PC0_m_NO98;
#pragma aligndata32(M110_CL0_PC0_n_NO99)
int M110_CL0_PC0_n_NO99;

#pragma aligndata32(M104_CL0_PC0_i_NO95)
int M104_CL0_PC0_i_NO95;
#pragma aligndata32(M104_CL0_PC0_j_NO96)
int M104_CL0_PC0_j_NO96;
#pragma aligndata32(M104_CL0_PC0_k_NO97)
int M104_CL0_PC0_k_NO97;
#pragma aligndata32(M104_CL0_PC0_tmp1_NO98)
double M104_CL0_PC0_tmp1_NO98;
#pragma aligndata32(M104_CL0_PC0_tmp2_NO99)
double M104_CL0_PC0_tmp2_NO99;
#pragma aligndata32(M104_CL0_PC0_tmp3_NO100)
double M104_CL0_PC0_tmp3_NO100;
#pragma aligndata32(M104_CL0_PC0_k_NO101)
int M104_CL0_PC0_k_NO101;
#pragma aligndata32(M104_CL0_PC0_j_NO102)
int M104_CL0_PC0_j_NO102;
#pragma aligndata32(M104_CL0_PC0_i_NO103)
int M104_CL0_PC0_i_NO103;

#pragma aligndata32(M118_CL0_PC0_i_NO95)
int M118_CL0_PC0_i_NO95;
#pragma aligndata32(M118_CL0_PC0_j_NO96)
int M118_CL0_PC0_j_NO96;
#pragma aligndata32(M118_CL0_PC0_k_NO97)
int M118_CL0_PC0_k_NO97;
#pragma aligndata32(M118_CL0_PC0_jsize)
int M118_CL0_PC0_jsize;
#pragma aligndata32(M118_CL0_PC0_k_NO99)
int M118_CL0_PC0_k_NO99;
#pragma aligndata32(M118_CL0_PC0_i_NO100)
int M118_CL0_PC0_i_NO100;
#pragma aligndata32(M118_CL0_PC0_k_NO101)
int M118_CL0_PC0_k_NO101;
#pragma aligndata32(M118_CL0_PC0_i_NO102)
int M118_CL0_PC0_i_NO102;

#pragma aligndata32(M117_CL0_PC0_i_NO95)
int M117_CL0_PC0_i_NO95;
#pragma aligndata32(M117_CL0_PC0_j_NO96)
int M117_CL0_PC0_j_NO96;
#pragma aligndata32(M117_CL0_PC0_k_NO97)
int M117_CL0_PC0_k_NO97;
#pragma aligndata32(M117_CL0_PC0_m_NO98)
int M117_CL0_PC0_m_NO98;
#pragma aligndata32(M117_CL0_PC0_n_NO99)
int M117_CL0_PC0_n_NO99;

#pragma aligndata32(M105_CL0_PC0_i_NO95)
int M105_CL0_PC0_i_NO95;
#pragma aligndata32(M105_CL0_PC0_j_NO96)
int M105_CL0_PC0_j_NO96;
#pragma aligndata32(M105_CL0_PC0_k_NO97)
int M105_CL0_PC0_k_NO97;
#pragma aligndata32(M105_CL0_PC0_tmp1_NO98)
double M105_CL0_PC0_tmp1_NO98;
#pragma aligndata32(M105_CL0_PC0_tmp2_NO99)
double M105_CL0_PC0_tmp2_NO99;
#pragma aligndata32(M105_CL0_PC0_tmp3_NO100)
double M105_CL0_PC0_tmp3_NO100;
#pragma aligndata32(M105_CL0_PC0_k_NO101)
int M105_CL0_PC0_k_NO101;
#pragma aligndata32(M105_CL0_PC0_j_NO102)
int M105_CL0_PC0_j_NO102;
#pragma aligndata32(M105_CL0_PC0_i_NO103)
int M105_CL0_PC0_i_NO103;

#pragma aligndata32(M121_CL0_PC0_i_NO95)
int M121_CL0_PC0_i_NO95;
#pragma aligndata32(M121_CL0_PC0_j_NO96)
int M121_CL0_PC0_j_NO96;
#pragma aligndata32(M121_CL0_PC0_k_NO97)
int M121_CL0_PC0_k_NO97;
#pragma aligndata32(M121_CL0_PC0_ksize)
int M121_CL0_PC0_ksize;
#pragma aligndata32(M121_CL0_PC0_j_NO99)
int M121_CL0_PC0_j_NO99;
#pragma aligndata32(M121_CL0_PC0_i_NO100)
int M121_CL0_PC0_i_NO100;
#pragma aligndata32(M121_CL0_PC0_j_NO101)
int M121_CL0_PC0_j_NO101;
#pragma aligndata32(M121_CL0_PC0_i_NO102)
int M121_CL0_PC0_i_NO102;

#pragma aligndata32(M120_CL0_PC0_i_NO95)
int M120_CL0_PC0_i_NO95;
#pragma aligndata32(M120_CL0_PC0_j_NO96)
int M120_CL0_PC0_j_NO96;
#pragma aligndata32(M120_CL0_PC0_k_NO97)
int M120_CL0_PC0_k_NO97;
#pragma aligndata32(M120_CL0_PC0_m_NO98)
int M120_CL0_PC0_m_NO98;
#pragma aligndata32(M120_CL0_PC0_n_NO99)
int M120_CL0_PC0_n_NO99;







/* OnChip CSM Data for Module 0 <*MAIN*> */


/* OnChip CSM Data for Module 107 <set_constants> */


/* OnChip CSM Data for Module 101 <initialize> */


/* OnChip CSM Data for Module 102 <lhsinit> */


/* OnChip CSM Data for Module 99 <exact_rhs> */


/* OnChip CSM Data for Module 96 <adi> */


/* OnChip CSM Data for Module 108 <verify> */


/* OnChip CSM Data for Module 100 <exact_solution> */


/* OnChip CSM Data for Module 123 <exact_solution_c1> */


/* OnChip CSM Data for Module 106 <compute_rhs> */


/* OnChip CSM Data for Module 109 <x_solve> */


/* OnChip CSM Data for Module 116 <y_solve> */


/* OnChip CSM Data for Module 119 <z_solve> */


/* OnChip CSM Data for Module 95 <add> */


/* OnChip CSM Data for Module 97 <error_norm> */


/* OnChip CSM Data for Module 98 <rhs_norm> */


/* OnChip CSM Data for Module 103 <lhsx> */


/* OnChip CSM Data for Module 111 <x_solve_cell> */


/* OnChip CSM Data for Module 110 <x_backsubstitute> */


/* OnChip CSM Data for Module 104 <lhsy> */


/* OnChip CSM Data for Module 118 <y_solve_cell> */


/* OnChip CSM Data for Module 117 <y_backsubstitute> */


/* OnChip CSM Data for Module 105 <lhsz> */


/* OnChip CSM Data for Module 121 <z_solve_cell> */


/* OnChip CSM Data for Module 120 <z_backsubstitute> */


/* OnChip CSM Data for Module 124 <exact_solution_c2> */


/* OnChip CSM Data for Module 114 <binvcrhs> */


/* OnChip CSM Data for Module 112 <matvec_sub> */


/* OnChip CSM Data for Module 113 <matmul_sub> */


/* OnChip CSM Data for Module 115 <binvrhs> */

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

M0_CL0_PC0_TASKQ_PTRS1_PC0 = 1;

M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0 = 1;
M0_CL0_PC0_TASKQ_PTRE1_PC0_PE1 = 1;

#pragma omp flush
M0_CL0_PC0_SCHE_FLG1[1] = 1;

}

void ddsche_init_mtg1_cl0_pc0_pe1_(){
/* == WAIT FOR INITIALIZE == */
while (M0_CL0_PC0_SCHE_FLG1[1] != 1) {
}
M0_CL0_PC0_SCHE_FLG1[1] = 0;
}

int dd_gettask_mtg1_cl0_pc0_pe0_(){
#pragma omp flush
while(M0_CL0_PC0_TASKQ_PTRS1_PC0 < M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0){
}
#pragma omp flush
return M0_CL0_PC0_TASKQ1_PC0[M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0];
}

int dd_gettask_mtg1_cl0_pc0_pe1_(){
#pragma omp flush
while(M0_CL0_PC0_TASKQ_PTRS1_PC0 < M0_CL0_PC0_TASKQ_PTRE1_PC0_PE1){
}
#pragma omp flush
return M0_CL0_PC0_TASKQ1_PC0[M0_CL0_PC0_TASKQ_PTRE1_PC0_PE1];
}

void ddsche_mf_mtg1_cl0_pc0_pe0_(){
M0_CL0_PC0_TASKQ_PTRE1_PC0_PE0++;
}

void ddsche_mf_mtg1_cl0_pc0_pe1_(){
M0_CL0_PC0_TASKQ_PTRE1_PC0_PE1++;
}

void ddsche_setmt_mtg1_cl0_pc0_(int *MT){
M0_CL0_PC0_TASKQ1_PC0[M0_CL0_PC0_TASKQ_PTRS1_PC0 + 1] = *MT;
#pragma omp flush
M0_CL0_PC0_TASKQ_PTRS1_PC0++;
}
void oscar_sche_init(int mtg_id, int cl_no, int pc_no, int pe_no)
{
if(mtg_id==1) {
if(cl_no == 0 && pc_no == 0 && pe_no == 0)
ddsche_init_mtg1_cl0_pc0_pe0_();
if(cl_no == 0 && pc_no == 0 && pe_no == 1)
ddsche_init_mtg1_cl0_pc0_pe1_();
}
}
int oscar_sche_gettask(int mtg_id, int cl_no, int pc_no, int pe_no)
{
int tmp;
if(mtg_id==1){
if(cl_no == 0 && pc_no == 0 && pe_no == 0)
tmp = dd_gettask_mtg1_cl0_pc0_pe0_();
if(cl_no == 0 && pc_no == 0 && pe_no == 1)
tmp = dd_gettask_mtg1_cl0_pc0_pe1_();
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
if(cl_no == 0 && pc_no == 0 && pe_no == 1)
ddsche_mf_mtg1_cl0_pc0_pe1_();
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
#pragma oscar executions
#pragma oscar execution vpe(0)
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
static void exact_solution_c1_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void compute_rhs_PE0();
static void x_solve_PE0();
static void y_solve_PE0();
static void z_solve_PE0();
static void add_PE0();
static void error_norm_PE0(double* rms);
static void rhs_norm_PE0(double(* rms)[4]);
static void lhsx_PE0();
static void x_solve_cell_PE0();
static void x_backsubstitute_PE0();
static void lhsy_PE0();
static void y_solve_cell_PE0();
static void y_backsubstitute_PE0();
static void lhsz_PE0();
static void z_solve_cell_PE0();
static void z_backsubstitute_PE0();
static void exact_solution_c2_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void binvcrhs_PE0(double(* lhs_NO95)[5],
      double(* c)[5],
      double* r);
static void matvec_sub_PE0(double(* ablock)[5],
      double* avec,
      double* bvec);
static void matmul_sub_PE0(double(* ablock)[5],
      double(* bblock)[5],
      double(* cblock)[5]);
static void binvrhs_PE0(double(* lhs_NO95)[5],
      double* r);
#pragma oscar execution vpe(1)
int MAIN_PE1(int argc,
      char** argv);
static void set_constants_PE1();
static void initialize_PE1();
static void lhsinit_PE1();
static void exact_rhs_PE1();
static void adi_PE1();
static void verify_PE1(int no_time_steps,
      char* class,
      int* verified);
static void exact_solution_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void exact_solution_c1_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void compute_rhs_PE1();
static void x_solve_PE1();
static void y_solve_PE1();
static void z_solve_PE1();
static void add_PE1();
static void error_norm_PE1(double* rms);
static void rhs_norm_PE1(double(* rms)[4]);
static void lhsx_PE1();
static void x_solve_cell_PE1();
static void x_backsubstitute_PE1();
static void lhsy_PE1();
static void y_solve_cell_PE1();
static void y_backsubstitute_PE1();
static void lhsz_PE1();
static void z_solve_cell_PE1();
static void z_backsubstitute_PE1();
static void exact_solution_c2_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp);
static void binvcrhs_PE1(double(* lhs_NO95)[5],
      double(* c)[5],
      double* r);
static void matvec_sub_PE1(double(* ablock)[5],
      double* avec,
      double* bvec);
static void matmul_sub_PE1(double(* ablock)[5],
      double(* bblock)[5],
      double(* cblock)[5]);
static void binvrhs_PE1(double(* lhs_NO95)[5],
      double* r);
#pragma oscar end executions
/*== VARIABLE FOR GROUP BARRIER FLAG ==*/
volatile int M0_CL0_PC0_barrier_flg[2][2][39];
volatile int M101_CL0_PC0_barrier_flg[2][2][15];
volatile int M102_CL0_PC0_barrier_flg[2][2][3];
volatile int M99_CL0_PC0_barrier_flg[2][2][6];
volatile int M96_CL0_PC0_barrier_flg[2][2][6];
volatile int M108_CL0_PC0_barrier_flg[2][2][54];
volatile int M106_CL0_PC0_barrier_flg[2][2][34];
volatile int M109_CL0_PC0_barrier_flg[2][2][4];
volatile int M116_CL0_PC0_barrier_flg[2][2][4];
volatile int M119_CL0_PC0_barrier_flg[2][2][4];
volatile int M95_CL0_PC0_barrier_flg[2][2][2];
volatile int M103_CL0_PC0_barrier_flg[2][2][2];
volatile int M111_CL0_PC0_barrier_flg[2][2][6];
volatile int M110_CL0_PC0_barrier_flg[2][2][3];
volatile int M104_CL0_PC0_barrier_flg[2][2][3];
volatile int M118_CL0_PC0_barrier_flg[2][2][6];
volatile int M117_CL0_PC0_barrier_flg[2][2][3];
volatile int M105_CL0_PC0_barrier_flg[2][2][3];
volatile int M121_CL0_PC0_barrier_flg[2][2][6];
volatile int M120_CL0_PC0_barrier_flg[2][2][2];
int main(int argc,char** argv) {
int retvar;
set_argv(&argc, &argv);
#pragma omp parallel sections
{
#pragma omp section
{
retvar = MAIN_PE0(argc,argv);
}
#pragma omp section
{
MAIN_PE1(argc,argv);
}
}
return 0;}
/* ******************* */
/* *** Module 0: *MAIN* */
/* ******************* */
int MAIN_PE0(int argc,
      char** argv)
{
      int step_NO116/* step */;
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
/* == *MAIN*#block1.bb1 ==*/
L40001:;
/* @mtstart:pe0:module0:mt1@ */
      M0_CL0_PC0_nthreads = 1;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/2);
/* barrier_start:pe0:module0:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][1]++;
while (M0_CL0_PC0_barrier_flg[0][1][1] < M0_CL0_PC0_barrier_flg[0][0][1]) {
}
M0_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt1@ */
/* == MT1.1 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb2 ==*/
L40002:;
/* @mtstart:pe0:module0:mt2@ */
      M0_CL0_PC0_V106 = printf((&*"\n\n NAS Parallel Benchmarks 2.3 OpenMP C version - BT Benchmark\n\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/3);
/* barrier_start:pe0:module0:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][2]++;
while (M0_CL0_PC0_barrier_flg[0][1][2] < M0_CL0_PC0_barrier_flg[0][0][2]) {
}
M0_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt2@ */
/* == MT1.2 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb3 ==*/
L40003:;
/* @mtstart:pe0:module0:mt3@ */
      M0_CL0_PC0_V107 = printf((&*" No input file inputbt.data. Using compiled defaults\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/4);
/* barrier_start:pe0:module0:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][3]++;
while (M0_CL0_PC0_barrier_flg[0][1][3] < M0_CL0_PC0_barrier_flg[0][0][3]) {
}
M0_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt3@ */
/* == MT1.3 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb4 ==*/
L40004:;
/* @mtstart:pe0:module0:mt4@ */
      M0_CL0_PC0_niter = 60;
      dt = 1.0000000000000000E-02;
      grid_points[0] = 12;
      grid_points[1] = 12;
      grid_points[2] = 12;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/5);
/* barrier_start:pe0:module0:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][4]++;
while (M0_CL0_PC0_barrier_flg[0][1][4] < M0_CL0_PC0_barrier_flg[0][0][4]) {
}
M0_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt4@ */
/* == MT1.4 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb5 ==*/
L40005:;
/* @mtstart:pe0:module0:mt5@ */
      M0_CL0_PC0_V108 = printf((&*" Size: %3dx%3dx%3d\n"),grid_points[0],grid_points[1],grid_points[2]);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/6);
/* barrier_start:pe0:module0:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][5]++;
while (M0_CL0_PC0_barrier_flg[0][1][5] < M0_CL0_PC0_barrier_flg[0][0][5]) {
}
M0_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt5@ */
/* == MT1.5 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb6 ==*/
L40006:;
/* @mtstart:pe0:module0:mt6@ */
      M0_CL0_PC0_V109 = printf((&*" Iterations: %3d   dt: %10.6f\n"),M0_CL0_PC0_niter,dt);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/7);
/* barrier_start:pe0:module0:no6 */
#pragma omp flush

/* == GROUP BARRIER6 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][6]++;
while (M0_CL0_PC0_barrier_flg[0][1][6] < M0_CL0_PC0_barrier_flg[0][0][6]) {
}
M0_CL0_PC0_barrier_flg[1][0][6]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt6@ */
/* == MT1.6 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb7 ==*/
L40007:;
/* @mtstart:pe0:module0:mt7@ */
if(!(grid_points[0]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/8);
}
if(grid_points[0]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/10);
}
/* barrier_start:pe0:module0:no7 */
#pragma omp flush

/* == GROUP BARRIER7 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][7]++;
while (M0_CL0_PC0_barrier_flg[0][1][7] < M0_CL0_PC0_barrier_flg[0][0][7]) {
}
M0_CL0_PC0_barrier_flg[1][0][7]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt7@ */
/* == MT1.7 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb8 ==*/
L40008:;
/* @mtstart:pe0:module0:mt8@ */
if(!(grid_points[1]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/9);
}
if(grid_points[1]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/10);
}
/* barrier_start:pe0:module0:no8 */
#pragma omp flush

/* == GROUP BARRIER8 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][8]++;
while (M0_CL0_PC0_barrier_flg[0][1][8] < M0_CL0_PC0_barrier_flg[0][0][8]) {
}
M0_CL0_PC0_barrier_flg[1][0][8]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt8@ */
/* == MT1.8 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb9 ==*/
L40009:;
/* @mtstart:pe0:module0:mt9@ */
if(!(grid_points[2]>12)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/11);
}
if(grid_points[2]>12){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/10);
}
/* barrier_start:pe0:module0:no9 */
#pragma omp flush

/* == GROUP BARRIER9 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][9]++;
while (M0_CL0_PC0_barrier_flg[0][1][9] < M0_CL0_PC0_barrier_flg[0][0][9]) {
}
M0_CL0_PC0_barrier_flg[1][0][9]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt9@ */
/* == MT1.9 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb10 ==*/
L40010:;
/* @mtstart:pe0:module0:mt10@ */
      M0_CL0_PC0_V110 = 1;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/12);
/* barrier_start:pe0:module0:no10 */
#pragma omp flush

/* == GROUP BARRIER10 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][10]++;
while (M0_CL0_PC0_barrier_flg[0][1][10] < M0_CL0_PC0_barrier_flg[0][0][10]) {
}
M0_CL0_PC0_barrier_flg[1][0][10]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt10@ */
/* == MT1.10 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb11 ==*/
L40011:;
/* @mtstart:pe0:module0:mt11@ */
      M0_CL0_PC0_V110 = 0;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/12);
/* barrier_start:pe0:module0:no11 */
#pragma omp flush

/* == GROUP BARRIER11 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][11]++;
while (M0_CL0_PC0_barrier_flg[0][1][11] < M0_CL0_PC0_barrier_flg[0][0][11]) {
}
M0_CL0_PC0_barrier_flg[1][0][11]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt11@ */
/* == MT1.11 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb12 ==*/
L40012:;
/* @mtstart:pe0:module0:mt12@ */
if(!(M0_CL0_PC0_V110!=0)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/16);
}
if(M0_CL0_PC0_V110!=0){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/13);
}
/* barrier_start:pe0:module0:no12 */
#pragma omp flush

/* == GROUP BARRIER12 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][12]++;
while (M0_CL0_PC0_barrier_flg[0][1][12] < M0_CL0_PC0_barrier_flg[0][0][12]) {
}
M0_CL0_PC0_barrier_flg[1][0][12]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt12@ */
/* == MT1.12 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb13 ==*/
L40013:;
/* @mtstart:pe0:module0:mt13@ */
      M0_CL0_PC0_V111 = printf((&*" %dx%dx%d\n"),grid_points[0],grid_points[1],grid_points[2]);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/14);
/* barrier_start:pe0:module0:no13 */
#pragma omp flush

/* == GROUP BARRIER13 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][13]++;
while (M0_CL0_PC0_barrier_flg[0][1][13] < M0_CL0_PC0_barrier_flg[0][0][13]) {
}
M0_CL0_PC0_barrier_flg[1][0][13]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt13@ */
/* == MT1.13 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb14 ==*/
L40014:;
/* @mtstart:pe0:module0:mt14@ */
      M0_CL0_PC0_V112 = printf((&*" Problem size too big for compiled array sizes\n"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/15);
/* barrier_start:pe0:module0:no14 */
#pragma omp flush

/* == GROUP BARRIER14 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][14]++;
while (M0_CL0_PC0_barrier_flg[0][1][14] < M0_CL0_PC0_barrier_flg[0][0][14]) {
}
M0_CL0_PC0_barrier_flg[1][0][14]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt14@ */
/* == MT1.14 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb15 ==*/
L40015:;
/* @mtstart:pe0:module0:mt15@ */
      exit(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/16);
/* barrier_start:pe0:module0:no15 */
#pragma omp flush

/* == GROUP BARRIER15 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][15]++;
while (M0_CL0_PC0_barrier_flg[0][1][15] < M0_CL0_PC0_barrier_flg[0][0][15]) {
}
M0_CL0_PC0_barrier_flg[1][0][15]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt15@ */
/* == MT1.15 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb16 ==*/
L40016:;
/* @mtstart:pe0:module0:mt16@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/17);
/* barrier_start:pe0:module0:no16 */
#pragma omp flush

/* == GROUP BARRIER16 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][16]++;
while (M0_CL0_PC0_barrier_flg[0][1][16] < M0_CL0_PC0_barrier_flg[0][0][16]) {
}
M0_CL0_PC0_barrier_flg[1][0][16]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt16@ */
/* == MT1.16 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.block17 ==*/
L40017:;
/* @mtstart:pe0:module0:mt17@ */
L20004:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=2) == */
M0_CL0_PC0_SS_MTG_COUNT2[0] = M0_CL0_PC0_SS_MTG_COUNT2[0] + 1;

#pragma omp flush
M0_CL0_PC0_SCHE_FLG2[1] = 1;
#pragma omp flush
/* == *MAIN*#block1.block17.sb1 ==*/
L40036:;
/* @mtstart:pe0:module0:mt1@ */
      set_constants_PE0();

/* @mtend:pe0:module0:mt1@ */
/* == MT2.1 END == */
while(M0_CL0_PC0_STASCHE_END_FLAG2[1][0] != M0_CL0_PC0_SS_MTG_COUNT2[0]) {
}
M0_CL0_PC0_STASCHE_END_FLAG2[0][1] = M0_CL0_PC0_SS_MTG_COUNT2[0];
/* == *MAIN*#block1.block17.emt2 ==*/
L40037:;
/* @mtstart:pe0:module0:mt2@ */
      goto L20;

/* @mtend:pe0:module0:mt2@ */
/* == MT2.2 END == */
/* == Hierarchy H:2 END == */
L20:;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/18);
/* barrier_start:pe0:module0:no17 */
#pragma omp flush

/* == GROUP BARRIER17 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][17]++;
while (M0_CL0_PC0_barrier_flg[0][1][17] < M0_CL0_PC0_barrier_flg[0][0][17]) {
}
M0_CL0_PC0_barrier_flg[1][0][17]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt17@ */
/* == MT1.17 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb18 ==*/
L40018:;
/* @mtstart:pe0:module0:mt18@ */
      initialize_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/19);
/* barrier_start:pe0:module0:no18 */
#pragma omp flush

/* == GROUP BARRIER18 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][18]++;
while (M0_CL0_PC0_barrier_flg[0][1][18] < M0_CL0_PC0_barrier_flg[0][0][18]) {
}
M0_CL0_PC0_barrier_flg[1][0][18]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt18@ */
/* == MT1.18 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb19 ==*/
L40019:;
/* @mtstart:pe0:module0:mt19@ */
      lhsinit_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/20);
/* barrier_start:pe0:module0:no19 */
#pragma omp flush

/* == GROUP BARRIER19 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][19]++;
while (M0_CL0_PC0_barrier_flg[0][1][19] < M0_CL0_PC0_barrier_flg[0][0][19]) {
}
M0_CL0_PC0_barrier_flg[1][0][19]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt19@ */
/* == MT1.19 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb20 ==*/
L40020:;
/* @mtstart:pe0:module0:mt20@ */
      exact_rhs_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/21);
/* barrier_start:pe0:module0:no20 */
#pragma omp flush

/* == GROUP BARRIER20 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][20]++;
while (M0_CL0_PC0_barrier_flg[0][1][20] < M0_CL0_PC0_barrier_flg[0][0][20]) {
}
M0_CL0_PC0_barrier_flg[1][0][20]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt20@ */
/* == MT1.20 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb21 ==*/
L40021:;
/* @mtstart:pe0:module0:mt21@ */
      adi_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/22);
/* barrier_start:pe0:module0:no21 */
#pragma omp flush

/* == GROUP BARRIER21 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][21]++;
while (M0_CL0_PC0_barrier_flg[0][1][21] < M0_CL0_PC0_barrier_flg[0][0][21]) {
}
M0_CL0_PC0_barrier_flg[1][0][21]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt21@ */
/* == MT1.21 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb22 ==*/
L40022:;
/* @mtstart:pe0:module0:mt22@ */
      initialize_PE0();
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/23);
/* barrier_start:pe0:module0:no22 */
#pragma omp flush

/* == GROUP BARRIER22 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][22]++;
while (M0_CL0_PC0_barrier_flg[0][1][22] < M0_CL0_PC0_barrier_flg[0][0][22]) {
}
M0_CL0_PC0_barrier_flg[1][0][22]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt22@ */
/* == MT1.22 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb23 ==*/
L40023:;
/* @mtstart:pe0:module0:mt23@ */
      timer_clear(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/24);
/* barrier_start:pe0:module0:no23 */
#pragma omp flush

/* == GROUP BARRIER23 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][23]++;
while (M0_CL0_PC0_barrier_flg[0][1][23] < M0_CL0_PC0_barrier_flg[0][0][23]) {
}
M0_CL0_PC0_barrier_flg[1][0][23]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt23@ */
/* == MT1.23 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb24 ==*/
L40024:;
/* @mtstart:pe0:module0:mt24@ */
      timer_start(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/25);
/* barrier_start:pe0:module0:no24 */
#pragma omp flush

/* == GROUP BARRIER24 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][24]++;
while (M0_CL0_PC0_barrier_flg[0][1][24] < M0_CL0_PC0_barrier_flg[0][0][24]) {
}
M0_CL0_PC0_barrier_flg[1][0][24]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt24@ */
/* == MT1.24 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.loop25 ==*/
L40025:;
/* @mtstart:pe0:module0:mt25@ */
      for (step_NO116 = 1 ; step_NO116 <= M0_CL0_PC0_niter ; step_NO116 += 1){
/* == *MAIN*#block1.loop25.bb1 ==*/
if (!(step_NO116%20==0)) goto L16;
      goto L14;
/* == *MAIN*#block1.loop25.bb2 ==*/
L16:;
if (step_NO116==1) {
 /* == *MAIN*#block1.loop25.bb3 ==*/
L14:;
      M0_CL0_PC0_V113 = 1;
/* barrier_start:pe0:module0:no25 */
#pragma omp flush

/* == GROUP BARRIER25 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][25]++;
while (M0_CL0_PC0_barrier_flg[0][1][25] < M0_CL0_PC0_barrier_flg[0][0][25]) {
}
M0_CL0_PC0_barrier_flg[1][0][25]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb4 ==*/
} else {
      M0_CL0_PC0_V113 = 0;
/* barrier_start:pe0:module0:no26 */
#pragma omp flush

/* == GROUP BARRIER26 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][26]++;
while (M0_CL0_PC0_barrier_flg[0][1][26] < M0_CL0_PC0_barrier_flg[0][0][26]) {
}
M0_CL0_PC0_barrier_flg[1][0][26]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb5 ==*/
}
if (M0_CL0_PC0_V113!=0) {
 /* == *MAIN*#block1.loop25.bb6 ==*/
      M0_CL0_PC0_V114 = printf((&*" Time step %4d\n"),step_NO116);
/* barrier_start:pe0:module0:no27 */
#pragma omp flush

/* == GROUP BARRIER27 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][27]++;
while (M0_CL0_PC0_barrier_flg[0][1][27] < M0_CL0_PC0_barrier_flg[0][0][27]) {
}
M0_CL0_PC0_barrier_flg[1][0][27]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb7 ==*/
}
/* barrier_start:pe0:module0:no28 */
#pragma omp flush

/* == GROUP BARRIER28 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][28]++;
while (M0_CL0_PC0_barrier_flg[0][1][28] < M0_CL0_PC0_barrier_flg[0][0][28]) {
}
M0_CL0_PC0_barrier_flg[1][0][28]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.sb8 ==*/
      adi_PE0();
/* barrier_start:pe0:module0:no29 */
#pragma omp flush

/* == GROUP BARRIER29 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][29]++;
while (M0_CL0_PC0_barrier_flg[0][1][29] < M0_CL0_PC0_barrier_flg[0][0][29]) {
}
M0_CL0_PC0_barrier_flg[1][0][29]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/26);
/* barrier_start:pe0:module0:no30 */
#pragma omp flush

/* == GROUP BARRIER30 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][30]++;
while (M0_CL0_PC0_barrier_flg[0][1][30] < M0_CL0_PC0_barrier_flg[0][0][30]) {
}
M0_CL0_PC0_barrier_flg[1][0][30]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt25@ */
/* == MT1.25 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb26 ==*/
L40026:;
/* @mtstart:pe0:module0:mt26@ */
      timer_stop(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/27);
/* barrier_start:pe0:module0:no31 */
#pragma omp flush

/* == GROUP BARRIER31 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][31]++;
while (M0_CL0_PC0_barrier_flg[0][1][31] < M0_CL0_PC0_barrier_flg[0][0][31]) {
}
M0_CL0_PC0_barrier_flg[1][0][31]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt26@ */
/* == MT1.26 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb27 ==*/
L40027:;
/* @mtstart:pe0:module0:mt27@ */
      M0_CL0_PC0_tmax = timer_read(1);
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/28);
/* barrier_start:pe0:module0:no32 */
#pragma omp flush

/* == GROUP BARRIER32 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][32]++;
while (M0_CL0_PC0_barrier_flg[0][1][32] < M0_CL0_PC0_barrier_flg[0][0][32]) {
}
M0_CL0_PC0_barrier_flg[1][0][32]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt27@ */
/* == MT1.27 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.sb28 ==*/
L40028:;
/* @mtstart:pe0:module0:mt28@ */
      verify_PE0(M0_CL0_PC0_niter,(&M0_CL0_PC0_class),(&M0_CL0_PC0_verified));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/29);
/* barrier_start:pe0:module0:no33 */
#pragma omp flush

/* == GROUP BARRIER33 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][33]++;
while (M0_CL0_PC0_barrier_flg[0][1][33] < M0_CL0_PC0_barrier_flg[0][0][33]) {
}
M0_CL0_PC0_barrier_flg[1][0][33]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt28@ */
/* == MT1.28 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb29 ==*/
L40029:;
/* @mtstart:pe0:module0:mt29@ */
      M0_CL0_PC0_n3 = grid_points[0]*grid_points[1]*grid_points[2];
      M0_CL0_PC0_navg = (double)(grid_points[0]+grid_points[1]+grid_points[2])/ 3.0000000000000000E+00;
if(!(M0_CL0_PC0_tmax!=0.0000000000000000E+00)){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/31);
}
if(M0_CL0_PC0_tmax!=0.0000000000000000E+00){
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/30);
}
/* barrier_start:pe0:module0:no34 */
#pragma omp flush

/* == GROUP BARRIER34 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][34]++;
while (M0_CL0_PC0_barrier_flg[0][1][34] < M0_CL0_PC0_barrier_flg[0][0][34]) {
}
M0_CL0_PC0_barrier_flg[1][0][34]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no34 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt29@ */
/* == MT1.29 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb30 ==*/
L40030:;
/* @mtstart:pe0:module0:mt30@ */
      M0_CL0_PC0_mflops = 9.9999999999999995E-07*(double)(M0_CL0_PC0_niter)*(3.4788000000000002E+03*(double)(M0_CL0_PC0_n3)-1.7655700000000001E+04*(M0_CL0_PC0_navg*M0_CL0_PC0_navg)+2.8023700000000001E+04*M0_CL0_PC0_navg)/ M0_CL0_PC0_tmax;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/32);
/* barrier_start:pe0:module0:no35 */
#pragma omp flush

/* == GROUP BARRIER35 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][35]++;
while (M0_CL0_PC0_barrier_flg[0][1][35] < M0_CL0_PC0_barrier_flg[0][0][35]) {
}
M0_CL0_PC0_barrier_flg[1][0][35]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no35 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt30@ */
/* == MT1.30 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb31 ==*/
L40031:;
/* @mtstart:pe0:module0:mt31@ */
      M0_CL0_PC0_mflops = 0.0000000000000000E+00;
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/32);
/* barrier_start:pe0:module0:no36 */
#pragma omp flush

/* == GROUP BARRIER36 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][36]++;
while (M0_CL0_PC0_barrier_flg[0][1][36] < M0_CL0_PC0_barrier_flg[0][0][36]) {
}
M0_CL0_PC0_barrier_flg[1][0][36]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no36 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt31@ */
/* == MT1.31 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb32 ==*/
L40032:;
/* @mtstart:pe0:module0:mt32@ */
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/33);
/* barrier_start:pe0:module0:no37 */
#pragma omp flush

/* == GROUP BARRIER37 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][37]++;
while (M0_CL0_PC0_barrier_flg[0][1][37] < M0_CL0_PC0_barrier_flg[0][0][37]) {
}
M0_CL0_PC0_barrier_flg[1][0][37]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no37 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt32@ */
/* == MT1.32 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.bb33 ==*/
L40033:;
/* @mtstart:pe0:module0:mt33@ */
      c_print_results((&*"BT"),M0_CL0_PC0_class,grid_points[0],grid_points[1],grid_points[2],M0_CL0_PC0_niter,M0_CL0_PC0_nthreads,M0_CL0_PC0_tmax,M0_CL0_PC0_mflops,(&*"          floating point"),M0_CL0_PC0_verified,(&*"2.3"),(&*"06 Nov 2011"),(&*"gcc"),(&*"gcc"),(&*"(none)"),(&*"-I../common"),(&*"-O3 -pg"),(&*"-lm"),(&*"(none)"));
oscar_sche_setmt(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*mt_no*/34);
/* barrier_start:pe0:module0:no38 */
#pragma omp flush

/* == GROUP BARRIER38 0(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][0][38]++;
while (M0_CL0_PC0_barrier_flg[0][1][38] < M0_CL0_PC0_barrier_flg[0][0][38]) {
}
M0_CL0_PC0_barrier_flg[1][0][38]++;

#pragma omp flush
/* barrier_finish:pe0:module0:no38 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe0:module0:mt33@ */
/* == MT1.33 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/0);
goto L20003;

/* == *MAIN*#block1.emt34 ==*/
L40034:;
/* @mtstart:pe0:module0:mt34@ */
      goto L19;

/* @mtend:pe0:module0:mt34@ */
/* == MT1.34 END == */
/* == Hierarchy H:1 END == */
L19:;
goto __RETURN;
__RETURN:;
return M0_CL0_PC0_V115;
}
/* ******************* */
/* *** Module 0: *MAIN* */
/* ******************* */
int MAIN_PE1(int argc,
      char** argv)
{
      int step_NO116/* step */;
int schemt_mtg1         ;
int setmt_no;

/* @decl:pe1:module0@ */
/* == *MAIN*#block1 ==*/
L20006:;
oscar_sche_init(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
L20007:;
schemt_mtg1          = oscar_sche_gettask(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
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
/* == *MAIN*#block1.bb1 ==*/
L40001:;
/* @mtstart:pe1:module0:mt1@ */
/* barrier_start:pe1:module0:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][1]++;
while (M0_CL0_PC0_barrier_flg[1][0][1] < M0_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt1@ */
/* == MT1.1 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb2 ==*/
L40002:;
/* @mtstart:pe1:module0:mt2@ */
/* barrier_start:pe1:module0:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][2]++;
while (M0_CL0_PC0_barrier_flg[1][0][2] < M0_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt2@ */
/* == MT1.2 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb3 ==*/
L40003:;
/* @mtstart:pe1:module0:mt3@ */
/* barrier_start:pe1:module0:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][3]++;
while (M0_CL0_PC0_barrier_flg[1][0][3] < M0_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt3@ */
/* == MT1.3 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb4 ==*/
L40004:;
/* @mtstart:pe1:module0:mt4@ */
/* barrier_start:pe1:module0:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][4]++;
while (M0_CL0_PC0_barrier_flg[1][0][4] < M0_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt4@ */
/* == MT1.4 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb5 ==*/
L40005:;
/* @mtstart:pe1:module0:mt5@ */
/* barrier_start:pe1:module0:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][5]++;
while (M0_CL0_PC0_barrier_flg[1][0][5] < M0_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt5@ */
/* == MT1.5 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb6 ==*/
L40006:;
/* @mtstart:pe1:module0:mt6@ */
/* barrier_start:pe1:module0:no6 */
#pragma omp flush

/* == GROUP BARRIER6 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][6]++;
while (M0_CL0_PC0_barrier_flg[1][0][6] < M0_CL0_PC0_barrier_flg[0][1][6]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt6@ */
/* == MT1.6 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb7 ==*/
L40007:;
/* @mtstart:pe1:module0:mt7@ */
/* barrier_start:pe1:module0:no7 */
#pragma omp flush

/* == GROUP BARRIER7 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][7]++;
while (M0_CL0_PC0_barrier_flg[1][0][7] < M0_CL0_PC0_barrier_flg[0][1][7]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt7@ */
/* == MT1.7 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb8 ==*/
L40008:;
/* @mtstart:pe1:module0:mt8@ */
L6:;
/* barrier_start:pe1:module0:no8 */
#pragma omp flush

/* == GROUP BARRIER8 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][8]++;
while (M0_CL0_PC0_barrier_flg[1][0][8] < M0_CL0_PC0_barrier_flg[0][1][8]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt8@ */
/* == MT1.8 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb9 ==*/
L40009:;
/* @mtstart:pe1:module0:mt9@ */
L5:;
/* barrier_start:pe1:module0:no9 */
#pragma omp flush

/* == GROUP BARRIER9 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][9]++;
while (M0_CL0_PC0_barrier_flg[1][0][9] < M0_CL0_PC0_barrier_flg[0][1][9]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt9@ */
/* == MT1.9 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb10 ==*/
L40010:;
/* @mtstart:pe1:module0:mt10@ */
L3:;
/* barrier_start:pe1:module0:no10 */
#pragma omp flush

/* == GROUP BARRIER10 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][10]++;
while (M0_CL0_PC0_barrier_flg[1][0][10] < M0_CL0_PC0_barrier_flg[0][1][10]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt10@ */
/* == MT1.10 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb11 ==*/
L40011:;
/* @mtstart:pe1:module0:mt11@ */
L4:;
/* barrier_start:pe1:module0:no11 */
#pragma omp flush

/* == GROUP BARRIER11 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][11]++;
while (M0_CL0_PC0_barrier_flg[1][0][11] < M0_CL0_PC0_barrier_flg[0][1][11]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt11@ */
/* == MT1.11 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb12 ==*/
L40012:;
/* @mtstart:pe1:module0:mt12@ */
L2:;
/* barrier_start:pe1:module0:no12 */
#pragma omp flush

/* == GROUP BARRIER12 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][12]++;
while (M0_CL0_PC0_barrier_flg[1][0][12] < M0_CL0_PC0_barrier_flg[0][1][12]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt12@ */
/* == MT1.12 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb13 ==*/
L40013:;
/* @mtstart:pe1:module0:mt13@ */
/* barrier_start:pe1:module0:no13 */
#pragma omp flush

/* == GROUP BARRIER13 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][13]++;
while (M0_CL0_PC0_barrier_flg[1][0][13] < M0_CL0_PC0_barrier_flg[0][1][13]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt13@ */
/* == MT1.13 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb14 ==*/
L40014:;
/* @mtstart:pe1:module0:mt14@ */
/* barrier_start:pe1:module0:no14 */
#pragma omp flush

/* == GROUP BARRIER14 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][14]++;
while (M0_CL0_PC0_barrier_flg[1][0][14] < M0_CL0_PC0_barrier_flg[0][1][14]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt14@ */
/* == MT1.14 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb15 ==*/
L40015:;
/* @mtstart:pe1:module0:mt15@ */
/* barrier_start:pe1:module0:no15 */
#pragma omp flush

/* == GROUP BARRIER15 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][15]++;
while (M0_CL0_PC0_barrier_flg[1][0][15] < M0_CL0_PC0_barrier_flg[0][1][15]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt15@ */
/* == MT1.15 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb16 ==*/
L40016:;
/* @mtstart:pe1:module0:mt16@ */
L1:;
/* barrier_start:pe1:module0:no16 */
#pragma omp flush

/* == GROUP BARRIER16 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][16]++;
while (M0_CL0_PC0_barrier_flg[1][0][16] < M0_CL0_PC0_barrier_flg[0][1][16]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt16@ */
/* == MT1.16 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.block17 ==*/
L40017:;
/* @mtstart:pe1:module0:mt17@ */
L20008:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=2) == */
M0_CL0_PC0_SS_MTG_COUNT2[1] = M0_CL0_PC0_SS_MTG_COUNT2[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M0_CL0_PC0_SCHE_FLG2[1] != 1) {
}
M0_CL0_PC0_SCHE_FLG2[1] = 0;
#pragma omp flush
M0_CL0_PC0_STASCHE_END_FLAG2[1][0] = M0_CL0_PC0_SS_MTG_COUNT2[1];
while(M0_CL0_PC0_STASCHE_END_FLAG2[0][1] != M0_CL0_PC0_SS_MTG_COUNT2[1]) {
}
/* == *MAIN*#block1.block17.emt2 ==*/
L40037:;
/* @mtstart:pe1:module0:mt2@ */
      goto L20;

/* @mtend:pe1:module0:mt2@ */
/* == MT2.2 END == */
/* == Hierarchy H:2 END == */
L20:;
/* barrier_start:pe1:module0:no17 */
#pragma omp flush

/* == GROUP BARRIER17 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][17]++;
while (M0_CL0_PC0_barrier_flg[1][0][17] < M0_CL0_PC0_barrier_flg[0][1][17]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt17@ */
/* == MT1.17 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb18 ==*/
L40018:;
/* @mtstart:pe1:module0:mt18@ */
      initialize_PE1();
/* barrier_start:pe1:module0:no18 */
#pragma omp flush

/* == GROUP BARRIER18 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][18]++;
while (M0_CL0_PC0_barrier_flg[1][0][18] < M0_CL0_PC0_barrier_flg[0][1][18]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt18@ */
/* == MT1.18 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb19 ==*/
L40019:;
/* @mtstart:pe1:module0:mt19@ */
      lhsinit_PE1();
/* barrier_start:pe1:module0:no19 */
#pragma omp flush

/* == GROUP BARRIER19 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][19]++;
while (M0_CL0_PC0_barrier_flg[1][0][19] < M0_CL0_PC0_barrier_flg[0][1][19]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt19@ */
/* == MT1.19 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb20 ==*/
L40020:;
/* @mtstart:pe1:module0:mt20@ */
      exact_rhs_PE1();
/* barrier_start:pe1:module0:no20 */
#pragma omp flush

/* == GROUP BARRIER20 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][20]++;
while (M0_CL0_PC0_barrier_flg[1][0][20] < M0_CL0_PC0_barrier_flg[0][1][20]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt20@ */
/* == MT1.20 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb21 ==*/
L40021:;
/* @mtstart:pe1:module0:mt21@ */
      adi_PE1();
/* barrier_start:pe1:module0:no21 */
#pragma omp flush

/* == GROUP BARRIER21 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][21]++;
while (M0_CL0_PC0_barrier_flg[1][0][21] < M0_CL0_PC0_barrier_flg[0][1][21]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt21@ */
/* == MT1.21 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb22 ==*/
L40022:;
/* @mtstart:pe1:module0:mt22@ */
      initialize_PE1();
/* barrier_start:pe1:module0:no22 */
#pragma omp flush

/* == GROUP BARRIER22 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][22]++;
while (M0_CL0_PC0_barrier_flg[1][0][22] < M0_CL0_PC0_barrier_flg[0][1][22]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt22@ */
/* == MT1.22 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb23 ==*/
L40023:;
/* @mtstart:pe1:module0:mt23@ */
/* barrier_start:pe1:module0:no23 */
#pragma omp flush

/* == GROUP BARRIER23 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][23]++;
while (M0_CL0_PC0_barrier_flg[1][0][23] < M0_CL0_PC0_barrier_flg[0][1][23]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt23@ */
/* == MT1.23 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb24 ==*/
L40024:;
/* @mtstart:pe1:module0:mt24@ */
/* barrier_start:pe1:module0:no24 */
#pragma omp flush

/* == GROUP BARRIER24 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][24]++;
while (M0_CL0_PC0_barrier_flg[1][0][24] < M0_CL0_PC0_barrier_flg[0][1][24]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt24@ */
/* == MT1.24 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.loop25 ==*/
L40025:;
/* @mtstart:pe1:module0:mt25@ */
      for (step_NO116 = 1 ; step_NO116 <= M0_CL0_PC0_niter ; step_NO116 += 1){
/* == *MAIN*#block1.loop25.bb1 ==*/
if (!(step_NO116%20==0)) goto L16;
      goto L14;
/* == *MAIN*#block1.loop25.bb2 ==*/
L16:;
if (step_NO116==1) {
 /* == *MAIN*#block1.loop25.bb3 ==*/
L14:;
/* barrier_start:pe1:module0:no25 */
#pragma omp flush

/* == GROUP BARRIER25 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][25]++;
while (M0_CL0_PC0_barrier_flg[1][0][25] < M0_CL0_PC0_barrier_flg[0][1][25]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb4 ==*/
} else {
/* barrier_start:pe1:module0:no26 */
#pragma omp flush

/* == GROUP BARRIER26 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][26]++;
while (M0_CL0_PC0_barrier_flg[1][0][26] < M0_CL0_PC0_barrier_flg[0][1][26]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb5 ==*/
}
if (M0_CL0_PC0_V113!=0) {
 /* == *MAIN*#block1.loop25.bb6 ==*/
/* barrier_start:pe1:module0:no27 */
#pragma omp flush

/* == GROUP BARRIER27 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][27]++;
while (M0_CL0_PC0_barrier_flg[1][0][27] < M0_CL0_PC0_barrier_flg[0][1][27]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.bb7 ==*/
}
/* barrier_start:pe1:module0:no28 */
#pragma omp flush

/* == GROUP BARRIER28 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][28]++;
while (M0_CL0_PC0_barrier_flg[1][0][28] < M0_CL0_PC0_barrier_flg[0][1][28]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == *MAIN*#block1.loop25.sb8 ==*/
      adi_PE1();
/* barrier_start:pe1:module0:no29 */
#pragma omp flush

/* == GROUP BARRIER29 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][29]++;
while (M0_CL0_PC0_barrier_flg[1][0][29] < M0_CL0_PC0_barrier_flg[0][1][29]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe1:module0:no30 */
#pragma omp flush

/* == GROUP BARRIER30 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][30]++;
while (M0_CL0_PC0_barrier_flg[1][0][30] < M0_CL0_PC0_barrier_flg[0][1][30]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt25@ */
/* == MT1.25 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb26 ==*/
L40026:;
/* @mtstart:pe1:module0:mt26@ */
/* barrier_start:pe1:module0:no31 */
#pragma omp flush

/* == GROUP BARRIER31 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][31]++;
while (M0_CL0_PC0_barrier_flg[1][0][31] < M0_CL0_PC0_barrier_flg[0][1][31]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt26@ */
/* == MT1.26 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb27 ==*/
L40027:;
/* @mtstart:pe1:module0:mt27@ */
/* barrier_start:pe1:module0:no32 */
#pragma omp flush

/* == GROUP BARRIER32 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][32]++;
while (M0_CL0_PC0_barrier_flg[1][0][32] < M0_CL0_PC0_barrier_flg[0][1][32]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt27@ */
/* == MT1.27 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.sb28 ==*/
L40028:;
/* @mtstart:pe1:module0:mt28@ */
      verify_PE1(M0_CL0_PC0_niter,(&M0_CL0_PC0_class),(&M0_CL0_PC0_verified));
/* barrier_start:pe1:module0:no33 */
#pragma omp flush

/* == GROUP BARRIER33 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][33]++;
while (M0_CL0_PC0_barrier_flg[1][0][33] < M0_CL0_PC0_barrier_flg[0][1][33]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt28@ */
/* == MT1.28 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb29 ==*/
L40029:;
/* @mtstart:pe1:module0:mt29@ */
/* barrier_start:pe1:module0:no34 */
#pragma omp flush

/* == GROUP BARRIER34 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][34]++;
while (M0_CL0_PC0_barrier_flg[1][0][34] < M0_CL0_PC0_barrier_flg[0][1][34]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no34 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt29@ */
/* == MT1.29 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb30 ==*/
L40030:;
/* @mtstart:pe1:module0:mt30@ */
/* barrier_start:pe1:module0:no35 */
#pragma omp flush

/* == GROUP BARRIER35 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][35]++;
while (M0_CL0_PC0_barrier_flg[1][0][35] < M0_CL0_PC0_barrier_flg[0][1][35]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no35 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt30@ */
/* == MT1.30 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb31 ==*/
L40031:;
/* @mtstart:pe1:module0:mt31@ */
L17:;
/* barrier_start:pe1:module0:no36 */
#pragma omp flush

/* == GROUP BARRIER36 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][36]++;
while (M0_CL0_PC0_barrier_flg[1][0][36] < M0_CL0_PC0_barrier_flg[0][1][36]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no36 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt31@ */
/* == MT1.31 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb32 ==*/
L40032:;
/* @mtstart:pe1:module0:mt32@ */
L18:;
/* barrier_start:pe1:module0:no37 */
#pragma omp flush

/* == GROUP BARRIER37 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][37]++;
while (M0_CL0_PC0_barrier_flg[1][0][37] < M0_CL0_PC0_barrier_flg[0][1][37]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no37 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt32@ */
/* == MT1.32 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.bb33 ==*/
L40033:;
/* @mtstart:pe1:module0:mt33@ */
/* barrier_start:pe1:module0:no38 */
#pragma omp flush

/* == GROUP BARRIER38 1(0,1) ==*/
M0_CL0_PC0_barrier_flg[0][1][38]++;
while (M0_CL0_PC0_barrier_flg[1][0][38] < M0_CL0_PC0_barrier_flg[0][1][38]) {
}

#pragma omp flush
/* barrier_finish:pe1:module0:no38 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */

/* @mtend:pe1:module0:mt33@ */
/* == MT1.33 END == */
oscar_sche_mtfinish(/*mtg_id*/1, /*cl_no*/0, /*pc_no*/0, /*pe_no*/1);
goto L20007;

/* == *MAIN*#block1.emt34 ==*/
L40034:;
/* @mtstart:pe1:module0:mt34@ */
      goto L19;

/* @mtend:pe1:module0:mt34@ */
/* == MT1.34 END == */
/* == Hierarchy H:1 END == */
L19:;
goto __RETURN;
__RETURN:;
return M0_CL0_PC0_V115;
}
/* ******************* */
/* *** Module 107: set_constants */
/* ******************* */
static void set_constants_PE0()
{
      double V95/* $tmp0 */;
      double V96/* $tmp1 */;
      double V97/* $tmp2 */;
      double V98/* $tmp3 */;
      double V99/* $tmp4 */;
      double V100/* $tmp5 */;

/* @decl:pe0:module107@ */
/* == set_constants#block1 ==*/
/* == set_constants#block1.bb1 ==*/
      ce[0][0] = 2.0000000000000000E+00;
      ce[0][1] = 0.0000000000000000E+00;
      ce[0][2] = 0.0000000000000000E+00;
      ce[0][3] = 4.0000000000000000E+00;
      ce[0][4] = 5.0000000000000000E+00;
      ce[0][5] = 3.0000000000000000E+00;
      ce[0][6] = 5.0000000000000000E-01;
      ce[0][7] = 2.0000000000000000E-02;
      ce[0][8] = 1.0000000000000000E-02;
      ce[0][9] = 2.9999999999999999E-02;
      ce[0][10] = 5.0000000000000000E-01;
      ce[0][11] = 4.0000000000000002E-01;
      ce[0][12] = 2.9999999999999999E-01;
      ce[1][0] = 1.0000000000000000E+00;
      ce[1][1] = 0.0000000000000000E+00;
      ce[1][2] = 0.0000000000000000E+00;
      ce[1][3] = 0.0000000000000000E+00;
      ce[1][4] = 1.0000000000000000E+00;
      ce[1][5] = 2.0000000000000000E+00;
      ce[1][6] = 3.0000000000000000E+00;
      ce[1][7] = 1.0000000000000000E-02;
      ce[1][8] = 2.9999999999999999E-02;
      ce[1][9] = 2.0000000000000000E-02;
      ce[1][10] = 4.0000000000000002E-01;
      ce[1][11] = 2.9999999999999999E-01;
      ce[1][12] = 5.0000000000000000E-01;
      ce[2][0] = 2.0000000000000000E+00;
      ce[2][1] = 2.0000000000000000E+00;
      ce[2][2] = 0.0000000000000000E+00;
      ce[2][3] = 0.0000000000000000E+00;
      ce[2][4] = 0.0000000000000000E+00;
      ce[2][5] = 2.0000000000000000E+00;
      ce[2][6] = 3.0000000000000000E+00;
      ce[2][7] = 4.0000000000000001E-02;
      ce[2][8] = 2.9999999999999999E-02;
      ce[2][9] = 5.0000000000000003E-02;
      ce[2][10] = 2.9999999999999999E-01;
      ce[2][11] = 5.0000000000000000E-01;
      ce[2][12] = 4.0000000000000002E-01;
      ce[3][0] = 2.0000000000000000E+00;
      ce[3][1] = 2.0000000000000000E+00;
      ce[3][2] = 0.0000000000000000E+00;
      ce[3][3] = 0.0000000000000000E+00;
      ce[3][4] = 0.0000000000000000E+00;
      ce[3][5] = 2.0000000000000000E+00;
      ce[3][6] = 3.0000000000000000E+00;
      ce[3][7] = 2.9999999999999999E-02;
      ce[3][8] = 5.0000000000000003E-02;
      ce[3][9] = 4.0000000000000001E-02;
      ce[3][10] = 2.0000000000000001E-01;
      ce[3][11] = 1.0000000000000001E-01;
      ce[3][12] = 2.9999999999999999E-01;
      ce[4][0] = 5.0000000000000000E+00;
      ce[4][1] = 4.0000000000000000E+00;
      ce[4][2] = 3.0000000000000000E+00;
      ce[4][3] = 2.0000000000000000E+00;
      ce[4][4] = 1.0000000000000001E-01;
      ce[4][5] = 4.0000000000000002E-01;
      ce[4][6] = 2.9999999999999999E-01;
      ce[4][7] = 5.0000000000000003E-02;
      ce[4][8] = 4.0000000000000001E-02;
      ce[4][9] = 2.9999999999999999E-02;
      ce[4][10] = 1.0000000000000001E-01;
      ce[4][11] = 2.9999999999999999E-01;
      ce[4][12] = 2.0000000000000001E-01;
      c1 = 1.3999999999999999E+00;
      c2 = 4.0000000000000002E-01;
      c3 = 1.0000000000000001E-01;
      c4 = 1.0000000000000000E+00;
      c5 = 1.3999999999999999E+00;
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
      V95 = dx3;
/* == set_constants#block1.bb3 ==*/
} else {
      V95 = dx4;
/* == set_constants#block1.bb4 ==*/
}
      dxmax = V95;
if (dy2>dy4) {
 /* == set_constants#block1.bb5 ==*/
      V96 = dy2;
/* == set_constants#block1.bb6 ==*/
} else {
      V96 = dy4;
/* == set_constants#block1.bb7 ==*/
}
      dymax = V96;
if (dz2>dz3) {
 /* == set_constants#block1.bb8 ==*/
      V97 = dz2;
/* == set_constants#block1.bb9 ==*/
} else {
      V97 = dz3;
/* == set_constants#block1.bb10 ==*/
}
      dzmax = V97;
if (dy1>dz1) {
 /* == set_constants#block1.bb11 ==*/
      V98 = dy1;
/* == set_constants#block1.bb12 ==*/
} else {
      V98 = dz1;
/* == set_constants#block1.bb13 ==*/
}
if (dx1>V98) {
 /* == set_constants#block1.bb14 ==*/
      V99 = dx1;
      goto L7;
/* == set_constants#block1.bb15 ==*/
}
if (dy1>dz1) {
 /* == set_constants#block1.bb16 ==*/
      V100 = dy1;
/* == set_constants#block1.bb17 ==*/
} else {
      V100 = dz1;
/* == set_constants#block1.bb18 ==*/
}
      V99 = V100;
/* == set_constants#block1.bb19 ==*/
L7:;
      dssp = 2.5000000000000000E-01*V99;
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
/* *** Module 107: set_constants */
/* ******************* */
static void set_constants_PE1()
{
      double V95/* $tmp0 */;
      double V96/* $tmp1 */;
      double V97/* $tmp2 */;
      double V98/* $tmp3 */;
      double V99/* $tmp4 */;
      double V100/* $tmp5 */;

/* @decl:pe1:module107@ */
/* == set_constants#block1 ==*/
/* == set_constants#block1.bb1 ==*/
      ce[0][0] = 2.0000000000000000E+00;
      ce[0][1] = 0.0000000000000000E+00;
      ce[0][2] = 0.0000000000000000E+00;
      ce[0][3] = 4.0000000000000000E+00;
      ce[0][4] = 5.0000000000000000E+00;
      ce[0][5] = 3.0000000000000000E+00;
      ce[0][6] = 5.0000000000000000E-01;
      ce[0][7] = 2.0000000000000000E-02;
      ce[0][8] = 1.0000000000000000E-02;
      ce[0][9] = 2.9999999999999999E-02;
      ce[0][10] = 5.0000000000000000E-01;
      ce[0][11] = 4.0000000000000002E-01;
      ce[0][12] = 2.9999999999999999E-01;
      ce[1][0] = 1.0000000000000000E+00;
      ce[1][1] = 0.0000000000000000E+00;
      ce[1][2] = 0.0000000000000000E+00;
      ce[1][3] = 0.0000000000000000E+00;
      ce[1][4] = 1.0000000000000000E+00;
      ce[1][5] = 2.0000000000000000E+00;
      ce[1][6] = 3.0000000000000000E+00;
      ce[1][7] = 1.0000000000000000E-02;
      ce[1][8] = 2.9999999999999999E-02;
      ce[1][9] = 2.0000000000000000E-02;
      ce[1][10] = 4.0000000000000002E-01;
      ce[1][11] = 2.9999999999999999E-01;
      ce[1][12] = 5.0000000000000000E-01;
      ce[2][0] = 2.0000000000000000E+00;
      ce[2][1] = 2.0000000000000000E+00;
      ce[2][2] = 0.0000000000000000E+00;
      ce[2][3] = 0.0000000000000000E+00;
      ce[2][4] = 0.0000000000000000E+00;
      ce[2][5] = 2.0000000000000000E+00;
      ce[2][6] = 3.0000000000000000E+00;
      ce[2][7] = 4.0000000000000001E-02;
      ce[2][8] = 2.9999999999999999E-02;
      ce[2][9] = 5.0000000000000003E-02;
      ce[2][10] = 2.9999999999999999E-01;
      ce[2][11] = 5.0000000000000000E-01;
      ce[2][12] = 4.0000000000000002E-01;
      ce[3][0] = 2.0000000000000000E+00;
      ce[3][1] = 2.0000000000000000E+00;
      ce[3][2] = 0.0000000000000000E+00;
      ce[3][3] = 0.0000000000000000E+00;
      ce[3][4] = 0.0000000000000000E+00;
      ce[3][5] = 2.0000000000000000E+00;
      ce[3][6] = 3.0000000000000000E+00;
      ce[3][7] = 2.9999999999999999E-02;
      ce[3][8] = 5.0000000000000003E-02;
      ce[3][9] = 4.0000000000000001E-02;
      ce[3][10] = 2.0000000000000001E-01;
      ce[3][11] = 1.0000000000000001E-01;
      ce[3][12] = 2.9999999999999999E-01;
      ce[4][0] = 5.0000000000000000E+00;
      ce[4][1] = 4.0000000000000000E+00;
      ce[4][2] = 3.0000000000000000E+00;
      ce[4][3] = 2.0000000000000000E+00;
      ce[4][4] = 1.0000000000000001E-01;
      ce[4][5] = 4.0000000000000002E-01;
      ce[4][6] = 2.9999999999999999E-01;
      ce[4][7] = 5.0000000000000003E-02;
      ce[4][8] = 4.0000000000000001E-02;
      ce[4][9] = 2.9999999999999999E-02;
      ce[4][10] = 1.0000000000000001E-01;
      ce[4][11] = 2.9999999999999999E-01;
      ce[4][12] = 2.0000000000000001E-01;
      c1 = 1.3999999999999999E+00;
      c2 = 4.0000000000000002E-01;
      c3 = 1.0000000000000001E-01;
      c4 = 1.0000000000000000E+00;
      c5 = 1.3999999999999999E+00;
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
      V95 = dx3;
/* == set_constants#block1.bb3 ==*/
} else {
      V95 = dx4;
/* == set_constants#block1.bb4 ==*/
}
      dxmax = V95;
if (dy2>dy4) {
 /* == set_constants#block1.bb5 ==*/
      V96 = dy2;
/* == set_constants#block1.bb6 ==*/
} else {
      V96 = dy4;
/* == set_constants#block1.bb7 ==*/
}
      dymax = V96;
if (dz2>dz3) {
 /* == set_constants#block1.bb8 ==*/
      V97 = dz2;
/* == set_constants#block1.bb9 ==*/
} else {
      V97 = dz3;
/* == set_constants#block1.bb10 ==*/
}
      dzmax = V97;
if (dy1>dz1) {
 /* == set_constants#block1.bb11 ==*/
      V98 = dy1;
/* == set_constants#block1.bb12 ==*/
} else {
      V98 = dz1;
/* == set_constants#block1.bb13 ==*/
}
if (dx1>V98) {
 /* == set_constants#block1.bb14 ==*/
      V99 = dx1;
      goto L7;
/* == set_constants#block1.bb15 ==*/
}
if (dy1>dz1) {
 /* == set_constants#block1.bb16 ==*/
      V100 = dy1;
/* == set_constants#block1.bb17 ==*/
} else {
      V100 = dz1;
/* == set_constants#block1.bb18 ==*/
}
      V99 = V100;
/* == set_constants#block1.bb19 ==*/
L7:;
      dssp = 2.5000000000000000E-01*V99;
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
      double xi_NO130/* xi */;
      double eta_NO131/* eta */;
      double zeta_NO132/* zeta */;
      double Pxi_NO133/* Pxi */;
      double Peta_NO134/* Peta */;
      double Pzeta_NO135/* Pzeta */;
      double eta_NO136/* eta */;
      double zeta_NO137/* zeta */;
      double eta_NO138/* eta */;
      double zeta_NO139/* zeta */;
      double xi_NO140/* xi */;
      double zeta_NO141/* zeta */;
      double xi_NO142/* xi */;
      double zeta_NO143/* zeta */;
      double xi_NO144/* xi */;
      double eta_NO145/* eta */;
      double xi_NO146/* xi */;
      double eta_NO147/* eta */;
      int i_NO148/* i */;
      int m_NO149/* m */;
      int k_NO150/* k */;
      int j_NO151/* j */;
      int i_NO152/* i */;
      int ix_NO153/* ix */;
      int iy_NO154/* iy */;
      int iz_NO155/* iz */;
      int m_NO156/* m */;
      int k_NO157/* k */;
      int j_NO158/* j */;
      int j_NO159/* j */;
      int m_NO160/* m */;
      int k_NO161/* k */;
      int j_NO162/* j */;
      int m_NO163/* m */;
      int k_NO164/* k */;
      int i_NO165/* i */;
      int m_NO166/* m */;
      int k_NO167/* k */;
      int i_NO168/* i */;
      int m_NO169/* m */;
      int k_NO170/* k */;
      int i_NO171/* i */;
      int m_NO172/* m */;
      int j_NO173/* j */;
      int i_NO174/* i */;
      int m_NO175/* m */;
      int j_NO176/* j */;
      double Pface_NO57[2][3][5];/* Pface */
      double temp_NO58[5];/* temp */
      double temp_NO59[5];/* temp */
      double temp_NO60[5];/* temp */
      double temp_NO61[5];/* temp */
      double temp_NO62[5];/* temp */
      double temp_NO63[5];/* temp */

/* @decl:pe0:module101@ */
/* == initialize#block1 ==*/
/* == initialize#block1.doall1 ==*/
      for (i_NO148 = 0 ; i_NO148 <= 5 ; i_NO148 += 1){
/* == initialize#block1.doall1.loop1 ==*/
      for (j_NO151 = 0 ; j_NO151 <= 11 ; j_NO151 += 1){
/* == initialize#block1.doall1.loop1.loop1 ==*/
      for (k_NO150 = 0 ; k_NO150 <= 11 ; k_NO150 += 1){
/* == initialize#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO149 = 0 ; m_NO149 <= 4 ; m_NO149 += 1){
/* == initialize#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      u[i_NO148][j_NO151][k_NO150][m_NO149] = 1.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe0:module101:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][1]++;
while (M101_CL0_PC0_barrier_flg[0][1][1] < M101_CL0_PC0_barrier_flg[0][0][1]) {
}
M101_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall2 ==*/
      for (i_NO152 = 0 ; i_NO152 <= grid_points[0]/ 2-1 ; i_NO152 += 1){
/* == initialize#block1.doall2.bb1 ==*/
      xi_NO130 = (double)(i_NO152)*dnxm1;
/* == initialize#block1.doall2.loop2 ==*/
      for (j_NO158 = 0 ; j_NO158 <= grid_points[1]-1 ; j_NO158 += 1){
/* == initialize#block1.doall2.loop2.bb1 ==*/
      eta_NO131 = (double)(j_NO158)*dnym1;
/* == initialize#block1.doall2.loop2.loop2 ==*/
      for (k_NO157 = 0 ; k_NO157 <= grid_points[2]-1 ; k_NO157 += 1){
/* == initialize#block1.doall2.loop2.loop2.bb1 ==*/
      zeta_NO132 = (double)(k_NO157)*dnzm1;
/* == initialize#block1.doall2.loop2.loop2.loop2 ==*/
      for (ix_NO153 = 0 ; ix_NO153 <= 1 ; ix_NO153 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop2.sb1 ==*/
      exact_solution_PE0((double)(ix_NO153),eta_NO131,zeta_NO132,(&Pface_NO57[ix_NO153][0][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop3 ==*/
      for (iy_NO154 = 0 ; iy_NO154 <= 1 ; iy_NO154 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop3.sb1 ==*/
      exact_solution_PE0(xi_NO130,(double)(iy_NO154),zeta_NO132,(&Pface_NO57[iy_NO154][1][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop4 ==*/
      for (iz_NO155 = 0 ; iz_NO155 <= 1 ; iz_NO155 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop4.sb1 ==*/
      exact_solution_PE0(xi_NO130,eta_NO131,(double)(iz_NO155),(&Pface_NO57[iz_NO155][2][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop5 ==*/
      for (m_NO156 = 0 ; m_NO156 <= 4 ; m_NO156 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop5.bb1 ==*/
      Pxi_NO133 = xi_NO130*Pface_NO57[1][0][m_NO156]+(1.0000000000000000E+00-xi_NO130)*Pface_NO57[0][0][m_NO156];
      Peta_NO134 = eta_NO131*Pface_NO57[1][1][m_NO156]+(1.0000000000000000E+00-eta_NO131)*Pface_NO57[0][1][m_NO156];
      Pzeta_NO135 = zeta_NO132*Pface_NO57[1][2][m_NO156]+(1.0000000000000000E+00-zeta_NO132)*Pface_NO57[0][2][m_NO156];
      u[i_NO152][j_NO158][k_NO157][m_NO156] = Pxi_NO133+Peta_NO134+Pzeta_NO135-Pxi_NO133*Peta_NO134-Pxi_NO133*Pzeta_NO135-Peta_NO134*Pzeta_NO135+Pxi_NO133*Peta_NO134*Pzeta_NO135;
      }
      }
      }
      }
/* barrier_start:pe0:module101:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][2]++;
while (M101_CL0_PC0_barrier_flg[0][1][2] < M101_CL0_PC0_barrier_flg[0][0][2]) {
}
M101_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb3 ==*/
      M101_CL0_PC0_i_NO95 = 0;
      M101_CL0_PC0_xi_NO102 = 0.0000000000000000E+00;
/* barrier_start:pe0:module101:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][3]++;
while (M101_CL0_PC0_barrier_flg[0][1][3] < M101_CL0_PC0_barrier_flg[0][0][3]) {
}
M101_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall4 ==*/
      for (j_NO159 = 0 ; j_NO159 <= grid_points[1]/ 2-1 ; j_NO159 += 1){
/* == initialize#block1.doall4.bb1 ==*/
      eta_NO136 = (double)(j_NO159)*dnym1;
/* == initialize#block1.doall4.loop2 ==*/
      for (k_NO161 = 0 ; k_NO161 <= grid_points[2]-1 ; k_NO161 += 1){
/* == initialize#block1.doall4.loop2.bb1 ==*/
      zeta_NO137 = (double)(k_NO161)*dnzm1;
/* == initialize#block1.doall4.loop2.sb2 ==*/
      exact_solution_PE0(M101_CL0_PC0_xi_NO102,eta_NO136,zeta_NO137,(&temp_NO58[0]));
/* == initialize#block1.doall4.loop2.loop3 ==*/
      for (m_NO160 = 0 ; m_NO160 <= 4 ; m_NO160 += 1){
/* == initialize#block1.doall4.loop2.loop3.bb1 ==*/
      u[M101_CL0_PC0_i_NO95][j_NO159][k_NO161][m_NO160] = temp_NO58[m_NO160];
      }
      }
      }
/* barrier_start:pe0:module101:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][4]++;
while (M101_CL0_PC0_barrier_flg[0][1][4] < M101_CL0_PC0_barrier_flg[0][0][4]) {
}
M101_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb5 ==*/
      M101_CL0_PC0_i_NO95 = grid_points[0]-1;
      M101_CL0_PC0_xi_NO102 = 1.0000000000000000E+00;
/* barrier_start:pe0:module101:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][5]++;
while (M101_CL0_PC0_barrier_flg[0][1][5] < M101_CL0_PC0_barrier_flg[0][0][5]) {
}
M101_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall6 ==*/
      for (j_NO162 = 0 ; j_NO162 <= grid_points[1]/ 2-1 ; j_NO162 += 1){
/* == initialize#block1.doall6.bb1 ==*/
      eta_NO138 = (double)(j_NO162)*dnym1;
/* == initialize#block1.doall6.loop2 ==*/
      for (k_NO164 = 0 ; k_NO164 <= grid_points[2]-1 ; k_NO164 += 1){
/* == initialize#block1.doall6.loop2.bb1 ==*/
      zeta_NO139 = (double)(k_NO164)*dnzm1;
/* == initialize#block1.doall6.loop2.sb2 ==*/
      exact_solution_PE0(M101_CL0_PC0_xi_NO102,eta_NO138,zeta_NO139,(&temp_NO59[0]));
/* == initialize#block1.doall6.loop2.loop3 ==*/
      for (m_NO163 = 0 ; m_NO163 <= 4 ; m_NO163 += 1){
/* == initialize#block1.doall6.loop2.loop3.bb1 ==*/
      u[M101_CL0_PC0_i_NO95][j_NO162][k_NO164][m_NO163] = temp_NO59[m_NO163];
      }
      }
      }
/* barrier_start:pe0:module101:no6 */
#pragma omp flush

/* == GROUP BARRIER6 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][6]++;
while (M101_CL0_PC0_barrier_flg[0][1][6] < M101_CL0_PC0_barrier_flg[0][0][6]) {
}
M101_CL0_PC0_barrier_flg[1][0][6]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb7 ==*/
      M101_CL0_PC0_j_NO96 = 0;
      M101_CL0_PC0_eta_NO103 = 0.0000000000000000E+00;
/* barrier_start:pe0:module101:no7 */
#pragma omp flush

/* == GROUP BARRIER7 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][7]++;
while (M101_CL0_PC0_barrier_flg[0][1][7] < M101_CL0_PC0_barrier_flg[0][0][7]) {
}
M101_CL0_PC0_barrier_flg[1][0][7]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall8 ==*/
      for (i_NO165 = 0 ; i_NO165 <= grid_points[0]/ 2-1 ; i_NO165 += 1){
/* == initialize#block1.doall8.bb1 ==*/
      xi_NO140 = (double)(i_NO165)*dnxm1;
/* == initialize#block1.doall8.loop2 ==*/
      for (k_NO167 = 0 ; k_NO167 <= grid_points[2]-1 ; k_NO167 += 1){
/* == initialize#block1.doall8.loop2.bb1 ==*/
      zeta_NO141 = (double)(k_NO167)*dnzm1;
/* == initialize#block1.doall8.loop2.sb2 ==*/
      exact_solution_PE0(xi_NO140,M101_CL0_PC0_eta_NO103,zeta_NO141,(&temp_NO60[0]));
/* == initialize#block1.doall8.loop2.loop3 ==*/
      for (m_NO166 = 0 ; m_NO166 <= 4 ; m_NO166 += 1){
/* == initialize#block1.doall8.loop2.loop3.bb1 ==*/
      u[i_NO165][M101_CL0_PC0_j_NO96][k_NO167][m_NO166] = temp_NO60[m_NO166];
      }
      }
      }
/* barrier_start:pe0:module101:no8 */
#pragma omp flush

/* == GROUP BARRIER8 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][8]++;
while (M101_CL0_PC0_barrier_flg[0][1][8] < M101_CL0_PC0_barrier_flg[0][0][8]) {
}
M101_CL0_PC0_barrier_flg[1][0][8]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb9 ==*/
      M101_CL0_PC0_j_NO96 = grid_points[1]-1;
      M101_CL0_PC0_eta_NO103 = 1.0000000000000000E+00;
/* barrier_start:pe0:module101:no9 */
#pragma omp flush

/* == GROUP BARRIER9 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][9]++;
while (M101_CL0_PC0_barrier_flg[0][1][9] < M101_CL0_PC0_barrier_flg[0][0][9]) {
}
M101_CL0_PC0_barrier_flg[1][0][9]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall10 ==*/
      for (i_NO168 = 0 ; i_NO168 <= grid_points[0]/ 2-1 ; i_NO168 += 1){
/* == initialize#block1.doall10.bb1 ==*/
      xi_NO142 = (double)(i_NO168)*dnxm1;
/* == initialize#block1.doall10.loop2 ==*/
      for (k_NO170 = 0 ; k_NO170 <= grid_points[2]-1 ; k_NO170 += 1){
/* == initialize#block1.doall10.loop2.bb1 ==*/
      zeta_NO143 = (double)(k_NO170)*dnzm1;
/* == initialize#block1.doall10.loop2.sb2 ==*/
      exact_solution_PE0(xi_NO142,M101_CL0_PC0_eta_NO103,zeta_NO143,(&temp_NO61[0]));
/* == initialize#block1.doall10.loop2.loop3 ==*/
      for (m_NO169 = 0 ; m_NO169 <= 4 ; m_NO169 += 1){
/* == initialize#block1.doall10.loop2.loop3.bb1 ==*/
      u[i_NO168][M101_CL0_PC0_j_NO96][k_NO170][m_NO169] = temp_NO61[m_NO169];
      }
      }
      }
/* barrier_start:pe0:module101:no10 */
#pragma omp flush

/* == GROUP BARRIER10 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][10]++;
while (M101_CL0_PC0_barrier_flg[0][1][10] < M101_CL0_PC0_barrier_flg[0][0][10]) {
}
M101_CL0_PC0_barrier_flg[1][0][10]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb11 ==*/
      M101_CL0_PC0_k_NO97 = 0;
      M101_CL0_PC0_zeta_NO104 = 0.0000000000000000E+00;
/* barrier_start:pe0:module101:no11 */
#pragma omp flush

/* == GROUP BARRIER11 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][11]++;
while (M101_CL0_PC0_barrier_flg[0][1][11] < M101_CL0_PC0_barrier_flg[0][0][11]) {
}
M101_CL0_PC0_barrier_flg[1][0][11]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall12 ==*/
      for (i_NO171 = 0 ; i_NO171 <= grid_points[0]/ 2-1 ; i_NO171 += 1){
/* == initialize#block1.doall12.bb1 ==*/
      xi_NO144 = (double)(i_NO171)*dnxm1;
/* == initialize#block1.doall12.loop2 ==*/
      for (j_NO173 = 0 ; j_NO173 <= grid_points[1]-1 ; j_NO173 += 1){
/* == initialize#block1.doall12.loop2.bb1 ==*/
      eta_NO145 = (double)(j_NO173)*dnym1;
/* == initialize#block1.doall12.loop2.sb2 ==*/
      exact_solution_PE0(xi_NO144,eta_NO145,M101_CL0_PC0_zeta_NO104,(&temp_NO62[0]));
/* == initialize#block1.doall12.loop2.loop3 ==*/
      for (m_NO172 = 0 ; m_NO172 <= 4 ; m_NO172 += 1){
/* == initialize#block1.doall12.loop2.loop3.bb1 ==*/
      u[i_NO171][j_NO173][M101_CL0_PC0_k_NO97][m_NO172] = temp_NO62[m_NO172];
      }
      }
      }
/* barrier_start:pe0:module101:no12 */
#pragma omp flush

/* == GROUP BARRIER12 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][12]++;
while (M101_CL0_PC0_barrier_flg[0][1][12] < M101_CL0_PC0_barrier_flg[0][0][12]) {
}
M101_CL0_PC0_barrier_flg[1][0][12]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb13 ==*/
      M101_CL0_PC0_k_NO97 = grid_points[2]-1;
      M101_CL0_PC0_zeta_NO104 = 1.0000000000000000E+00;
/* barrier_start:pe0:module101:no13 */
#pragma omp flush

/* == GROUP BARRIER13 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][13]++;
while (M101_CL0_PC0_barrier_flg[0][1][13] < M101_CL0_PC0_barrier_flg[0][0][13]) {
}
M101_CL0_PC0_barrier_flg[1][0][13]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall14 ==*/
      for (i_NO174 = 0 ; i_NO174 <= grid_points[0]/ 2-1 ; i_NO174 += 1){
/* == initialize#block1.doall14.bb1 ==*/
      xi_NO146 = (double)(i_NO174)*dnxm1;
/* == initialize#block1.doall14.loop2 ==*/
      for (j_NO176 = 0 ; j_NO176 <= grid_points[1]-1 ; j_NO176 += 1){
/* == initialize#block1.doall14.loop2.bb1 ==*/
      eta_NO147 = (double)(j_NO176)*dnym1;
/* == initialize#block1.doall14.loop2.sb2 ==*/
      exact_solution_PE0(xi_NO146,eta_NO147,M101_CL0_PC0_zeta_NO104,(&temp_NO63[0]));
/* == initialize#block1.doall14.loop2.loop3 ==*/
      for (m_NO175 = 0 ; m_NO175 <= 4 ; m_NO175 += 1){
/* == initialize#block1.doall14.loop2.loop3.bb1 ==*/
      u[i_NO174][j_NO176][M101_CL0_PC0_k_NO97][m_NO175] = temp_NO63[m_NO175];
      }
      }
      }
/* barrier_start:pe0:module101:no14 */
#pragma omp flush

/* == GROUP BARRIER14 0(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][0][14]++;
while (M101_CL0_PC0_barrier_flg[0][1][14] < M101_CL0_PC0_barrier_flg[0][0][14]) {
}
M101_CL0_PC0_barrier_flg[1][0][14]++;

#pragma omp flush
/* barrier_finish:pe0:module101:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb15 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 101: initialize */
/* ******************* */
static void initialize_PE1()
{
      double xi_NO130/* xi */;
      double eta_NO131/* eta */;
      double zeta_NO132/* zeta */;
      double Pxi_NO133/* Pxi */;
      double Peta_NO134/* Peta */;
      double Pzeta_NO135/* Pzeta */;
      double eta_NO136/* eta */;
      double zeta_NO137/* zeta */;
      double eta_NO138/* eta */;
      double zeta_NO139/* zeta */;
      double xi_NO140/* xi */;
      double zeta_NO141/* zeta */;
      double xi_NO142/* xi */;
      double zeta_NO143/* zeta */;
      double xi_NO144/* xi */;
      double eta_NO145/* eta */;
      double xi_NO146/* xi */;
      double eta_NO147/* eta */;
      int i_NO148/* i */;
      int m_NO149/* m */;
      int k_NO150/* k */;
      int j_NO151/* j */;
      int i_NO152/* i */;
      int ix_NO153/* ix */;
      int iy_NO154/* iy */;
      int iz_NO155/* iz */;
      int m_NO156/* m */;
      int k_NO157/* k */;
      int j_NO158/* j */;
      int j_NO159/* j */;
      int m_NO160/* m */;
      int k_NO161/* k */;
      int j_NO162/* j */;
      int m_NO163/* m */;
      int k_NO164/* k */;
      int i_NO165/* i */;
      int m_NO166/* m */;
      int k_NO167/* k */;
      int i_NO168/* i */;
      int m_NO169/* m */;
      int k_NO170/* k */;
      int i_NO171/* i */;
      int m_NO172/* m */;
      int j_NO173/* j */;
      int i_NO174/* i */;
      int m_NO175/* m */;
      int j_NO176/* j */;
      double Pface_NO57[2][3][5];/* Pface */
      double temp_NO58[5];/* temp */
      double temp_NO59[5];/* temp */
      double temp_NO60[5];/* temp */
      double temp_NO61[5];/* temp */
      double temp_NO62[5];/* temp */
      double temp_NO63[5];/* temp */

/* @decl:pe1:module101@ */
/* == initialize#block1 ==*/
/* == initialize#block1.doall1 ==*/
      for (i_NO148 = 6 ; i_NO148 <= 11 ; i_NO148 += 1){
/* == initialize#block1.doall1.loop1 ==*/
      for (j_NO151 = 0 ; j_NO151 <= 11 ; j_NO151 += 1){
/* == initialize#block1.doall1.loop1.loop1 ==*/
      for (k_NO150 = 0 ; k_NO150 <= 11 ; k_NO150 += 1){
/* == initialize#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO149 = 0 ; m_NO149 <= 4 ; m_NO149 += 1){
/* == initialize#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      u[i_NO148][j_NO151][k_NO150][m_NO149] = 1.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe1:module101:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][1]++;
while (M101_CL0_PC0_barrier_flg[1][0][1] < M101_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall2 ==*/
      for (i_NO152 = grid_points[0]/ 2 ; i_NO152 <= grid_points[0]-1 ; i_NO152 += 1){
/* == initialize#block1.doall2.bb1 ==*/
      xi_NO130 = (double)(i_NO152)*dnxm1;
/* == initialize#block1.doall2.loop2 ==*/
      for (j_NO158 = 0 ; j_NO158 <= grid_points[1]-1 ; j_NO158 += 1){
/* == initialize#block1.doall2.loop2.bb1 ==*/
      eta_NO131 = (double)(j_NO158)*dnym1;
/* == initialize#block1.doall2.loop2.loop2 ==*/
      for (k_NO157 = 0 ; k_NO157 <= grid_points[2]-1 ; k_NO157 += 1){
/* == initialize#block1.doall2.loop2.loop2.bb1 ==*/
      zeta_NO132 = (double)(k_NO157)*dnzm1;
/* == initialize#block1.doall2.loop2.loop2.loop2 ==*/
      for (ix_NO153 = 0 ; ix_NO153 <= 1 ; ix_NO153 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop2.sb1 ==*/
      exact_solution_PE1((double)(ix_NO153),eta_NO131,zeta_NO132,(&Pface_NO57[ix_NO153][0][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop3 ==*/
      for (iy_NO154 = 0 ; iy_NO154 <= 1 ; iy_NO154 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop3.sb1 ==*/
      exact_solution_PE1(xi_NO130,(double)(iy_NO154),zeta_NO132,(&Pface_NO57[iy_NO154][1][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop4 ==*/
      for (iz_NO155 = 0 ; iz_NO155 <= 1 ; iz_NO155 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop4.sb1 ==*/
      exact_solution_PE1(xi_NO130,eta_NO131,(double)(iz_NO155),(&Pface_NO57[iz_NO155][2][0]));
      }
/* == initialize#block1.doall2.loop2.loop2.loop5 ==*/
      for (m_NO156 = 0 ; m_NO156 <= 4 ; m_NO156 += 1){
/* == initialize#block1.doall2.loop2.loop2.loop5.bb1 ==*/
      Pxi_NO133 = xi_NO130*Pface_NO57[1][0][m_NO156]+(1.0000000000000000E+00-xi_NO130)*Pface_NO57[0][0][m_NO156];
      Peta_NO134 = eta_NO131*Pface_NO57[1][1][m_NO156]+(1.0000000000000000E+00-eta_NO131)*Pface_NO57[0][1][m_NO156];
      Pzeta_NO135 = zeta_NO132*Pface_NO57[1][2][m_NO156]+(1.0000000000000000E+00-zeta_NO132)*Pface_NO57[0][2][m_NO156];
      u[i_NO152][j_NO158][k_NO157][m_NO156] = Pxi_NO133+Peta_NO134+Pzeta_NO135-Pxi_NO133*Peta_NO134-Pxi_NO133*Pzeta_NO135-Peta_NO134*Pzeta_NO135+Pxi_NO133*Peta_NO134*Pzeta_NO135;
      }
      }
      }
      }
/* barrier_start:pe1:module101:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][2]++;
while (M101_CL0_PC0_barrier_flg[1][0][2] < M101_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb3 ==*/
/* barrier_start:pe1:module101:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][3]++;
while (M101_CL0_PC0_barrier_flg[1][0][3] < M101_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall4 ==*/
      for (j_NO159 = grid_points[1]/ 2 ; j_NO159 <= grid_points[1]-1 ; j_NO159 += 1){
/* == initialize#block1.doall4.bb1 ==*/
      eta_NO136 = (double)(j_NO159)*dnym1;
/* == initialize#block1.doall4.loop2 ==*/
      for (k_NO161 = 0 ; k_NO161 <= grid_points[2]-1 ; k_NO161 += 1){
/* == initialize#block1.doall4.loop2.bb1 ==*/
      zeta_NO137 = (double)(k_NO161)*dnzm1;
/* == initialize#block1.doall4.loop2.sb2 ==*/
      exact_solution_PE1(M101_CL0_PC0_xi_NO102,eta_NO136,zeta_NO137,(&temp_NO58[0]));
/* == initialize#block1.doall4.loop2.loop3 ==*/
      for (m_NO160 = 0 ; m_NO160 <= 4 ; m_NO160 += 1){
/* == initialize#block1.doall4.loop2.loop3.bb1 ==*/
      u[M101_CL0_PC0_i_NO95][j_NO159][k_NO161][m_NO160] = temp_NO58[m_NO160];
      }
      }
      }
/* barrier_start:pe1:module101:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][4]++;
while (M101_CL0_PC0_barrier_flg[1][0][4] < M101_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb5 ==*/
/* barrier_start:pe1:module101:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][5]++;
while (M101_CL0_PC0_barrier_flg[1][0][5] < M101_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall6 ==*/
      for (j_NO162 = grid_points[1]/ 2 ; j_NO162 <= grid_points[1]-1 ; j_NO162 += 1){
/* == initialize#block1.doall6.bb1 ==*/
      eta_NO138 = (double)(j_NO162)*dnym1;
/* == initialize#block1.doall6.loop2 ==*/
      for (k_NO164 = 0 ; k_NO164 <= grid_points[2]-1 ; k_NO164 += 1){
/* == initialize#block1.doall6.loop2.bb1 ==*/
      zeta_NO139 = (double)(k_NO164)*dnzm1;
/* == initialize#block1.doall6.loop2.sb2 ==*/
      exact_solution_PE1(M101_CL0_PC0_xi_NO102,eta_NO138,zeta_NO139,(&temp_NO59[0]));
/* == initialize#block1.doall6.loop2.loop3 ==*/
      for (m_NO163 = 0 ; m_NO163 <= 4 ; m_NO163 += 1){
/* == initialize#block1.doall6.loop2.loop3.bb1 ==*/
      u[M101_CL0_PC0_i_NO95][j_NO162][k_NO164][m_NO163] = temp_NO59[m_NO163];
      }
      }
      }
/* barrier_start:pe1:module101:no6 */
#pragma omp flush

/* == GROUP BARRIER6 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][6]++;
while (M101_CL0_PC0_barrier_flg[1][0][6] < M101_CL0_PC0_barrier_flg[0][1][6]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb7 ==*/
/* barrier_start:pe1:module101:no7 */
#pragma omp flush

/* == GROUP BARRIER7 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][7]++;
while (M101_CL0_PC0_barrier_flg[1][0][7] < M101_CL0_PC0_barrier_flg[0][1][7]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall8 ==*/
      for (i_NO165 = grid_points[0]/ 2 ; i_NO165 <= grid_points[0]-1 ; i_NO165 += 1){
/* == initialize#block1.doall8.bb1 ==*/
      xi_NO140 = (double)(i_NO165)*dnxm1;
/* == initialize#block1.doall8.loop2 ==*/
      for (k_NO167 = 0 ; k_NO167 <= grid_points[2]-1 ; k_NO167 += 1){
/* == initialize#block1.doall8.loop2.bb1 ==*/
      zeta_NO141 = (double)(k_NO167)*dnzm1;
/* == initialize#block1.doall8.loop2.sb2 ==*/
      exact_solution_PE1(xi_NO140,M101_CL0_PC0_eta_NO103,zeta_NO141,(&temp_NO60[0]));
/* == initialize#block1.doall8.loop2.loop3 ==*/
      for (m_NO166 = 0 ; m_NO166 <= 4 ; m_NO166 += 1){
/* == initialize#block1.doall8.loop2.loop3.bb1 ==*/
      u[i_NO165][M101_CL0_PC0_j_NO96][k_NO167][m_NO166] = temp_NO60[m_NO166];
      }
      }
      }
/* barrier_start:pe1:module101:no8 */
#pragma omp flush

/* == GROUP BARRIER8 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][8]++;
while (M101_CL0_PC0_barrier_flg[1][0][8] < M101_CL0_PC0_barrier_flg[0][1][8]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb9 ==*/
/* barrier_start:pe1:module101:no9 */
#pragma omp flush

/* == GROUP BARRIER9 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][9]++;
while (M101_CL0_PC0_barrier_flg[1][0][9] < M101_CL0_PC0_barrier_flg[0][1][9]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall10 ==*/
      for (i_NO168 = grid_points[0]/ 2 ; i_NO168 <= grid_points[0]-1 ; i_NO168 += 1){
/* == initialize#block1.doall10.bb1 ==*/
      xi_NO142 = (double)(i_NO168)*dnxm1;
/* == initialize#block1.doall10.loop2 ==*/
      for (k_NO170 = 0 ; k_NO170 <= grid_points[2]-1 ; k_NO170 += 1){
/* == initialize#block1.doall10.loop2.bb1 ==*/
      zeta_NO143 = (double)(k_NO170)*dnzm1;
/* == initialize#block1.doall10.loop2.sb2 ==*/
      exact_solution_PE1(xi_NO142,M101_CL0_PC0_eta_NO103,zeta_NO143,(&temp_NO61[0]));
/* == initialize#block1.doall10.loop2.loop3 ==*/
      for (m_NO169 = 0 ; m_NO169 <= 4 ; m_NO169 += 1){
/* == initialize#block1.doall10.loop2.loop3.bb1 ==*/
      u[i_NO168][M101_CL0_PC0_j_NO96][k_NO170][m_NO169] = temp_NO61[m_NO169];
      }
      }
      }
/* barrier_start:pe1:module101:no10 */
#pragma omp flush

/* == GROUP BARRIER10 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][10]++;
while (M101_CL0_PC0_barrier_flg[1][0][10] < M101_CL0_PC0_barrier_flg[0][1][10]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb11 ==*/
/* barrier_start:pe1:module101:no11 */
#pragma omp flush

/* == GROUP BARRIER11 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][11]++;
while (M101_CL0_PC0_barrier_flg[1][0][11] < M101_CL0_PC0_barrier_flg[0][1][11]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall12 ==*/
      for (i_NO171 = grid_points[0]/ 2 ; i_NO171 <= grid_points[0]-1 ; i_NO171 += 1){
/* == initialize#block1.doall12.bb1 ==*/
      xi_NO144 = (double)(i_NO171)*dnxm1;
/* == initialize#block1.doall12.loop2 ==*/
      for (j_NO173 = 0 ; j_NO173 <= grid_points[1]-1 ; j_NO173 += 1){
/* == initialize#block1.doall12.loop2.bb1 ==*/
      eta_NO145 = (double)(j_NO173)*dnym1;
/* == initialize#block1.doall12.loop2.sb2 ==*/
      exact_solution_PE1(xi_NO144,eta_NO145,M101_CL0_PC0_zeta_NO104,(&temp_NO62[0]));
/* == initialize#block1.doall12.loop2.loop3 ==*/
      for (m_NO172 = 0 ; m_NO172 <= 4 ; m_NO172 += 1){
/* == initialize#block1.doall12.loop2.loop3.bb1 ==*/
      u[i_NO171][j_NO173][M101_CL0_PC0_k_NO97][m_NO172] = temp_NO62[m_NO172];
      }
      }
      }
/* barrier_start:pe1:module101:no12 */
#pragma omp flush

/* == GROUP BARRIER12 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][12]++;
while (M101_CL0_PC0_barrier_flg[1][0][12] < M101_CL0_PC0_barrier_flg[0][1][12]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.bb13 ==*/
/* barrier_start:pe1:module101:no13 */
#pragma omp flush

/* == GROUP BARRIER13 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][13]++;
while (M101_CL0_PC0_barrier_flg[1][0][13] < M101_CL0_PC0_barrier_flg[0][1][13]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == initialize#block1.doall14 ==*/
      for (i_NO174 = grid_points[0]/ 2 ; i_NO174 <= grid_points[0]-1 ; i_NO174 += 1){
/* == initialize#block1.doall14.bb1 ==*/
      xi_NO146 = (double)(i_NO174)*dnxm1;
/* == initialize#block1.doall14.loop2 ==*/
      for (j_NO176 = 0 ; j_NO176 <= grid_points[1]-1 ; j_NO176 += 1){
/* == initialize#block1.doall14.loop2.bb1 ==*/
      eta_NO147 = (double)(j_NO176)*dnym1;
/* == initialize#block1.doall14.loop2.sb2 ==*/
      exact_solution_PE1(xi_NO146,eta_NO147,M101_CL0_PC0_zeta_NO104,(&temp_NO63[0]));
/* == initialize#block1.doall14.loop2.loop3 ==*/
      for (m_NO175 = 0 ; m_NO175 <= 4 ; m_NO175 += 1){
/* == initialize#block1.doall14.loop2.loop3.bb1 ==*/
      u[i_NO174][j_NO176][M101_CL0_PC0_k_NO97][m_NO175] = temp_NO63[m_NO175];
      }
      }
      }
/* barrier_start:pe1:module101:no14 */
#pragma omp flush

/* == GROUP BARRIER14 1(0,1) ==*/
M101_CL0_PC0_barrier_flg[0][1][14]++;
while (M101_CL0_PC0_barrier_flg[1][0][14] < M101_CL0_PC0_barrier_flg[0][1][14]) {
}

#pragma omp flush
/* barrier_finish:pe1:module101:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
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
      int i_NO104/* i */;
      int n_NO105/* n */;
      int m_NO106/* m */;
      int k_NO107/* k */;
      int j_NO108/* j */;
      int i_NO109/* i */;
      int m_NO110/* m */;
      int k_NO111/* k */;
      int j_NO112/* j */;

/* @decl:pe0:module102@ */
/* == lhsinit#block1 ==*/
/* == lhsinit#block1.doall1 ==*/
      for (i_NO104 = 0 ; i_NO104 <= grid_points[0]/ 2-1 ; i_NO104 += 1){
/* == lhsinit#block1.doall1.loop1 ==*/
      for (j_NO108 = 0 ; j_NO108 <= grid_points[1]-1 ; j_NO108 += 1){
/* == lhsinit#block1.doall1.loop1.loop1 ==*/
      for (k_NO107 = 0 ; k_NO107 <= grid_points[2]-1 ; k_NO107 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO106 = 0 ; m_NO106 <= 4 ; m_NO106 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1.loop1 ==*/
      for (n_NO105 = 0 ; n_NO105 <= 4 ; n_NO105 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1.loop1.bb1 ==*/
      lhs[i_NO104][j_NO108][k_NO107][0][m_NO106][n_NO105] = 0.0000000000000000E+00;
      lhs[i_NO104][j_NO108][k_NO107][1][m_NO106][n_NO105] = 0.0000000000000000E+00;
      lhs[i_NO104][j_NO108][k_NO107][2][m_NO106][n_NO105] = 0.0000000000000000E+00;
      }
      }
      }
      }
      }
/* barrier_start:pe0:module102:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M102_CL0_PC0_barrier_flg[0][0][1]++;
while (M102_CL0_PC0_barrier_flg[0][1][1] < M102_CL0_PC0_barrier_flg[0][0][1]) {
}
M102_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module102:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsinit#block1.doall2 ==*/
      for (i_NO109 = 0 ; i_NO109 <= grid_points[0]/ 2-1 ; i_NO109 += 1){
/* == lhsinit#block1.doall2.loop1 ==*/
      for (j_NO112 = 0 ; j_NO112 <= grid_points[1]-1 ; j_NO112 += 1){
/* == lhsinit#block1.doall2.loop1.loop1 ==*/
      for (k_NO111 = 0 ; k_NO111 <= grid_points[2]-1 ; k_NO111 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1 ==*/
      for (m_NO110 = 0 ; m_NO110 <= 4 ; m_NO110 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      lhs[i_NO109][j_NO112][k_NO111][1][m_NO110][m_NO110] = 1.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe0:module102:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M102_CL0_PC0_barrier_flg[0][0][2]++;
while (M102_CL0_PC0_barrier_flg[0][1][2] < M102_CL0_PC0_barrier_flg[0][0][2]) {
}
M102_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module102:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsinit#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 102: lhsinit */
/* ******************* */
static void lhsinit_PE1()
{
      int i_NO104/* i */;
      int n_NO105/* n */;
      int m_NO106/* m */;
      int k_NO107/* k */;
      int j_NO108/* j */;
      int i_NO109/* i */;
      int m_NO110/* m */;
      int k_NO111/* k */;
      int j_NO112/* j */;

/* @decl:pe1:module102@ */
/* == lhsinit#block1 ==*/
/* == lhsinit#block1.doall1 ==*/
      for (i_NO104 = grid_points[0]/ 2 ; i_NO104 <= grid_points[0]-1 ; i_NO104 += 1){
/* == lhsinit#block1.doall1.loop1 ==*/
      for (j_NO108 = 0 ; j_NO108 <= grid_points[1]-1 ; j_NO108 += 1){
/* == lhsinit#block1.doall1.loop1.loop1 ==*/
      for (k_NO107 = 0 ; k_NO107 <= grid_points[2]-1 ; k_NO107 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO106 = 0 ; m_NO106 <= 4 ; m_NO106 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1.loop1 ==*/
      for (n_NO105 = 0 ; n_NO105 <= 4 ; n_NO105 += 1){
/* == lhsinit#block1.doall1.loop1.loop1.loop1.loop1.bb1 ==*/
      lhs[i_NO104][j_NO108][k_NO107][0][m_NO106][n_NO105] = 0.0000000000000000E+00;
      lhs[i_NO104][j_NO108][k_NO107][1][m_NO106][n_NO105] = 0.0000000000000000E+00;
      lhs[i_NO104][j_NO108][k_NO107][2][m_NO106][n_NO105] = 0.0000000000000000E+00;
      }
      }
      }
      }
      }
/* barrier_start:pe1:module102:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M102_CL0_PC0_barrier_flg[0][1][1]++;
while (M102_CL0_PC0_barrier_flg[1][0][1] < M102_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module102:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsinit#block1.doall2 ==*/
      for (i_NO109 = grid_points[0]/ 2 ; i_NO109 <= grid_points[0]-1 ; i_NO109 += 1){
/* == lhsinit#block1.doall2.loop1 ==*/
      for (j_NO112 = 0 ; j_NO112 <= grid_points[1]-1 ; j_NO112 += 1){
/* == lhsinit#block1.doall2.loop1.loop1 ==*/
      for (k_NO111 = 0 ; k_NO111 <= grid_points[2]-1 ; k_NO111 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1 ==*/
      for (m_NO110 = 0 ; m_NO110 <= 4 ; m_NO110 += 1){
/* == lhsinit#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      lhs[i_NO109][j_NO112][k_NO111][1][m_NO110][m_NO110] = 1.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe1:module102:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M102_CL0_PC0_barrier_flg[0][1][2]++;
while (M102_CL0_PC0_barrier_flg[1][0][2] < M102_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module102:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
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
      double xi_NO143/* xi */;
      double dtpp_NO144/* dtpp */;
      int ip1_NO145/* ip1 */;
      int im1_NO146/* im1 */;
      int i_NO147/* i */;
      int i_NO148/* i */;
      double eta_NO149/* eta */;
      double dtpp_NO150/* dtpp */;
      int jp1_NO151/* jp1 */;
      int jm1_NO152/* jm1 */;
      int j_NO153/* j */;
      int j_NO154/* j */;
      double zeta_NO155/* zeta */;
      double dtpp_NO156/* dtpp */;
      int km1_NO157/* km1 */;
      int kp1_NO158/* kp1 */;
      int k_NO159/* k */;
      int k_NO160/* k */;
      int i_NO161/* i */;
      int m_NO162/* m */;
      int k_NO163/* k */;
      int j_NO164/* j */;
      int j_NO165/* j */;
      int k_NO166/* k */;
      int i_NO167/* i */;
      int m_NO168/* m */;
      int m_NO169/* m */;
      int i_NO170/* i */;
      int m_NO171/* m */;
      int m_NO172/* m */;
      int i_NO173/* i */;
      int m_NO174/* m */;
      int i_NO175/* i */;
      int k_NO176/* k */;
      int j_NO177/* j */;
      int m_NO178/* m */;
      int m_NO179/* m */;
      int j_NO180/* j */;
      int m_NO181/* m */;
      int m_NO182/* m */;
      int j_NO183/* j */;
      int m_NO184/* m */;
      int i_NO185/* i */;
      int j_NO186/* j */;
      int k_NO187/* k */;
      int m_NO188/* m */;
      int m_NO189/* m */;
      int k_NO190/* k */;
      int m_NO191/* m */;
      int m_NO192/* m */;
      int k_NO193/* k */;
      int m_NO194/* m */;
      int i_NO195/* i */;
      int m_NO196/* m */;
      int k_NO197/* k */;
      int j_NO198/* j */;
      double dtemp_NO56[5];/* dtemp */
      double dtemp_NO57[5];/* dtemp */
      double dtemp_NO58[5];/* dtemp */

/* @decl:pe0:module99@ */
/* == exact_rhs#block1 ==*/
/* == exact_rhs#block1.doall1 ==*/
      for (i_NO161 = 0 ; i_NO161 <= grid_points[0]/ 2-1 ; i_NO161 += 1){
/* == exact_rhs#block1.doall1.loop1 ==*/
      for (j_NO164 = 0 ; j_NO164 <= grid_points[1]-1 ; j_NO164 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1 ==*/
      for (k_NO163 = 0 ; k_NO163 <= grid_points[2]-1 ; k_NO163 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO162 = 0 ; m_NO162 <= 4 ; m_NO162 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      forcing[i_NO161][j_NO164][k_NO163][m_NO162] = 0.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe0:module99:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][0][1]++;
while (M99_CL0_PC0_barrier_flg[0][1][1] < M99_CL0_PC0_barrier_flg[0][0][1]) {
}
M99_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module99:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block2 ==*/
L20006:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=3) == */
M99_CL0_PC0_SS_MTG_COUNT3[0] = M99_CL0_PC0_SS_MTG_COUNT3[0] + 1;

#pragma omp flush
M99_CL0_PC0_SCHE_FLG3[1] = 1;
#pragma omp flush
/* == exact_rhs#block1.block2.loop1 ==*/
L40038:;
/* @mtstart:pe0:module99:mt1@ */
      for (j_NO165 = 1 ; j_NO165 <= grid_points[1]-1-1 ; j_NO165 += 1){
/* == exact_rhs#block1.block2.loop1.bb1 ==*/
      M99_CL0_PC0_eta_NO96 = (double)(j_NO165)*dnym1;
/* == exact_rhs#block1.block2.loop1.loop2 ==*/
      for (k_NO166 = 1 ; k_NO166 <= grid_points[2]-1-1 ; k_NO166 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.bb1 ==*/
      M99_CL0_PC0_zeta_NO97 = (double)(k_NO166)*dnzm1;
/* == exact_rhs#block1.block2.loop1.loop2.doall2 ==*/
      for (i_NO167 = 0 ; i_NO167 <= grid_points[0]-1 ; i_NO167 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall2.bb1 ==*/
      xi_NO143 = (double)(i_NO167)*dnxm1;
/* == exact_rhs#block1.block2.loop1.loop2.doall2.sb2 ==*/
      exact_solution_c1_PE0(xi_NO143,M99_CL0_PC0_eta_NO96,M99_CL0_PC0_zeta_NO97,(&dtemp_NO56[0]));
/* == exact_rhs#block1.block2.loop1.loop2.doall2.loop3 ==*/
      for (m_NO168 = 0 ; m_NO168 <= 4 ; m_NO168 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall2.loop3.bb1 ==*/
      ue[i_NO167][m_NO168] = dtemp_NO56[m_NO168];
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall2.bb4 ==*/
      dtpp_NO144 = 1.0000000000000000E+00/ dtemp_NO56[0];
/* == exact_rhs#block1.block2.loop1.loop2.doall2.loop5 ==*/
      for (m_NO169 = 1 ; m_NO169 <= 4 ; m_NO169 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall2.loop5.bb1 ==*/
      buf[i_NO167][m_NO169] = dtpp_NO144*dtemp_NO56[m_NO169];
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall2.bb6 ==*/
      cuf[i_NO167] = buf[i_NO167][1]*buf[i_NO167][1];
      buf[i_NO167][0] = cuf[i_NO167]+buf[i_NO167][2]*buf[i_NO167][2]+buf[i_NO167][3]*buf[i_NO167][3];
      q[i_NO167] = 5.0000000000000000E-01*(buf[i_NO167][1]*ue[i_NO167][1]+buf[i_NO167][2]*ue[i_NO167][2]+buf[i_NO167][3]*ue[i_NO167][3]);
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall3 ==*/
      for (i_NO170 = 1 ; i_NO170 <= grid_points[0]-1-1 ; i_NO170 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall3.bb1 ==*/
      im1_NO146 = i_NO170-1;
      ip1_NO145 = i_NO170+1;
      forcing[i_NO170][j_NO165][k_NO166][0] = forcing[i_NO170][j_NO165][k_NO166][0]-tx2*(ue[ip1_NO145][1]-ue[im1_NO146][1])+dx1tx1*(ue[ip1_NO145][0]-2.0000000000000000E+00*ue[i_NO170][0]+ue[im1_NO146][0]);
      forcing[i_NO170][j_NO165][k_NO166][1] = forcing[i_NO170][j_NO165][k_NO166][1]-tx2*(ue[ip1_NO145][1]*buf[ip1_NO145][1]+c2*(ue[ip1_NO145][4]-q[ip1_NO145])-(ue[im1_NO146][1]*buf[im1_NO146][1]+c2*(ue[im1_NO146][4]-q[im1_NO146])))+xxcon1*(buf[ip1_NO145][1]-2.0000000000000000E+00*buf[i_NO170][1]+buf[im1_NO146][1])+dx2tx1*(ue[ip1_NO145][1]-2.0000000000000000E+00*ue[i_NO170][1]+ue[im1_NO146][1]);
      forcing[i_NO170][j_NO165][k_NO166][2] = forcing[i_NO170][j_NO165][k_NO166][2]-tx2*(ue[ip1_NO145][2]*buf[ip1_NO145][1]-ue[im1_NO146][2]*buf[im1_NO146][1])+xxcon2*(buf[ip1_NO145][2]-2.0000000000000000E+00*buf[i_NO170][2]+buf[im1_NO146][2])+dx3tx1*(ue[ip1_NO145][2]-2.0000000000000000E+00*ue[i_NO170][2]+ue[im1_NO146][2]);
      forcing[i_NO170][j_NO165][k_NO166][3] = forcing[i_NO170][j_NO165][k_NO166][3]-tx2*(ue[ip1_NO145][3]*buf[ip1_NO145][1]-ue[im1_NO146][3]*buf[im1_NO146][1])+xxcon2*(buf[ip1_NO145][3]-2.0000000000000000E+00*buf[i_NO170][3]+buf[im1_NO146][3])+dx4tx1*(ue[ip1_NO145][3]-2.0000000000000000E+00*ue[i_NO170][3]+ue[im1_NO146][3]);
      forcing[i_NO170][j_NO165][k_NO166][4] = forcing[i_NO170][j_NO165][k_NO166][4]-tx2*(buf[ip1_NO145][1]*(c1*ue[ip1_NO145][4]-c2*q[ip1_NO145])-buf[im1_NO146][1]*(c1*ue[im1_NO146][4]-c2*q[im1_NO146]))+5.0000000000000000E-01*xxcon3*(buf[ip1_NO145][0]-2.0000000000000000E+00*buf[i_NO170][0]+buf[im1_NO146][0])+xxcon4*(cuf[ip1_NO145]-2.0000000000000000E+00*cuf[i_NO170]+cuf[im1_NO146])+xxcon5*(buf[ip1_NO145][4]-2.0000000000000000E+00*buf[i_NO170][4]+buf[im1_NO146][4])+dx5tx1*(ue[ip1_NO145][4]-2.0000000000000000E+00*ue[i_NO170][4]+ue[im1_NO146][4]);
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall4 ==*/
      for (m_NO171 = 0 ; m_NO171 <= 4 ; m_NO171 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall4.bb1 ==*/
      i_NO147 = 1;
      forcing[i_NO147][j_NO165][k_NO166][m_NO171] = forcing[i_NO147][j_NO165][k_NO166][m_NO171]-dssp*(5.0000000000000000E+00*ue[i_NO147][m_NO171]-4.0000000000000000E+00*ue[i_NO147+1][m_NO171]+ue[i_NO147+2][m_NO171]);
      i_NO147 = 2;
      forcing[i_NO147][j_NO165][k_NO166][m_NO171] = forcing[i_NO147][j_NO165][k_NO166][m_NO171]-dssp*((-4.0000000000000000E+00)*ue[i_NO147-1][m_NO171]+6.0000000000000000E+00*ue[i_NO147][m_NO171]-4.0000000000000000E+00*ue[i_NO147+1][m_NO171]+ue[i_NO147+2][m_NO171]);
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall5 ==*/
      for (m_NO172 = 0 ; m_NO172 <= 4 ; m_NO172 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall5.loop1 ==*/
      for (i_NO173 = 3 ; i_NO173 <= grid_points[0]-3-1 ; i_NO173 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall5.loop1.bb1 ==*/
      forcing[i_NO173][j_NO165][k_NO166][m_NO172] = forcing[i_NO173][j_NO165][k_NO166][m_NO172]-dssp*(ue[i_NO173-2][m_NO172]-4.0000000000000000E+00*ue[i_NO173-1][m_NO172]+6.0000000000000000E+00*ue[i_NO173][m_NO172]-4.0000000000000000E+00*ue[i_NO173+1][m_NO172]+ue[i_NO173+2][m_NO172]);
      }
      }
/* == exact_rhs#block1.block2.loop1.loop2.doall6 ==*/
      for (m_NO174 = 0 ; m_NO174 <= 4 ; m_NO174 += 1){
/* == exact_rhs#block1.block2.loop1.loop2.doall6.bb1 ==*/
      i_NO148 = grid_points[0]-3;
      forcing[i_NO148][j_NO165][k_NO166][m_NO174] = forcing[i_NO148][j_NO165][k_NO166][m_NO174]-dssp*(ue[i_NO148-2][m_NO174]-4.0000000000000000E+00*ue[i_NO148-1][m_NO174]+6.0000000000000000E+00*ue[i_NO148][m_NO174]-4.0000000000000000E+00*ue[i_NO148+1][m_NO174]);
      i_NO148 = grid_points[0]-2;
      forcing[i_NO148][j_NO165][k_NO166][m_NO174] = forcing[i_NO148][j_NO165][k_NO166][m_NO174]-dssp*(ue[i_NO148-2][m_NO174]-4.0000000000000000E+00*ue[i_NO148-1][m_NO174]+5.0000000000000000E+00*ue[i_NO148][m_NO174]);
      }
      }
      }

/* @mtend:pe0:module99:mt1@ */
/* == MT3.1 END == */
while(M99_CL0_PC0_STASCHE_END_FLAG3[1][0] != M99_CL0_PC0_SS_MTG_COUNT3[0]) {
}
M99_CL0_PC0_STASCHE_END_FLAG3[0][1] = M99_CL0_PC0_SS_MTG_COUNT3[0];
/* == exact_rhs#block1.block2.emt2 ==*/
L40039:;
/* @mtstart:pe0:module99:mt2@ */
      goto L1;

/* @mtend:pe0:module99:mt2@ */
/* == MT3.2 END == */
/* == Hierarchy H:3 END == */
L1:;
/* barrier_start:pe0:module99:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][0][2]++;
while (M99_CL0_PC0_barrier_flg[0][1][2] < M99_CL0_PC0_barrier_flg[0][0][2]) {
}
M99_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module99:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block3 ==*/
L20008:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=4) == */
M99_CL0_PC0_SS_MTG_COUNT4[0] = M99_CL0_PC0_SS_MTG_COUNT4[0] + 1;

#pragma omp flush
M99_CL0_PC0_SCHE_FLG4[1] = 1;
#pragma omp flush
/* == exact_rhs#block1.block3.loop1 ==*/
L40040:;
/* @mtstart:pe0:module99:mt1@ */
      for (i_NO175 = 1 ; i_NO175 <= grid_points[0]-1-1 ; i_NO175 += 1){
/* == exact_rhs#block1.block3.loop1.bb1 ==*/
      M99_CL0_PC0_xi_NO95 = (double)(i_NO175)*dnxm1;
/* == exact_rhs#block1.block3.loop1.loop2 ==*/
      for (k_NO176 = 1 ; k_NO176 <= grid_points[2]-1-1 ; k_NO176 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.bb1 ==*/
      M99_CL0_PC0_zeta_NO97 = (double)(k_NO176)*dnzm1;
/* == exact_rhs#block1.block3.loop1.loop2.doall2 ==*/
      for (j_NO177 = 0 ; j_NO177 <= grid_points[1]-1 ; j_NO177 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall2.bb1 ==*/
      eta_NO149 = (double)(j_NO177)*dnym1;
/* == exact_rhs#block1.block3.loop1.loop2.doall2.sb2 ==*/
      exact_solution_c1_PE0(M99_CL0_PC0_xi_NO95,eta_NO149,M99_CL0_PC0_zeta_NO97,(&dtemp_NO57[0]));
/* == exact_rhs#block1.block3.loop1.loop2.doall2.loop3 ==*/
      for (m_NO178 = 0 ; m_NO178 <= 4 ; m_NO178 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall2.loop3.bb1 ==*/
      ue[j_NO177][m_NO178] = dtemp_NO57[m_NO178];
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall2.bb4 ==*/
      dtpp_NO150 = 1.0000000000000000E+00/ dtemp_NO57[0];
/* == exact_rhs#block1.block3.loop1.loop2.doall2.loop5 ==*/
      for (m_NO179 = 1 ; m_NO179 <= 4 ; m_NO179 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall2.loop5.bb1 ==*/
      buf[j_NO177][m_NO179] = dtpp_NO150*dtemp_NO57[m_NO179];
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall2.bb6 ==*/
      cuf[j_NO177] = buf[j_NO177][2]*buf[j_NO177][2];
      buf[j_NO177][0] = cuf[j_NO177]+buf[j_NO177][1]*buf[j_NO177][1]+buf[j_NO177][3]*buf[j_NO177][3];
      q[j_NO177] = 5.0000000000000000E-01*(buf[j_NO177][1]*ue[j_NO177][1]+buf[j_NO177][2]*ue[j_NO177][2]+buf[j_NO177][3]*ue[j_NO177][3]);
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall3 ==*/
      for (j_NO180 = 1 ; j_NO180 <= grid_points[1]-1-1 ; j_NO180 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall3.bb1 ==*/
      jm1_NO152 = j_NO180-1;
      jp1_NO151 = j_NO180+1;
      forcing[i_NO175][j_NO180][k_NO176][0] = forcing[i_NO175][j_NO180][k_NO176][0]-ty2*(ue[jp1_NO151][2]-ue[jm1_NO152][2])+dy1ty1*(ue[jp1_NO151][0]-2.0000000000000000E+00*ue[j_NO180][0]+ue[jm1_NO152][0]);
      forcing[i_NO175][j_NO180][k_NO176][1] = forcing[i_NO175][j_NO180][k_NO176][1]-ty2*(ue[jp1_NO151][1]*buf[jp1_NO151][2]-ue[jm1_NO152][1]*buf[jm1_NO152][2])+yycon2*(buf[jp1_NO151][1]-2.0000000000000000E+00*buf[j_NO180][1]+buf[jm1_NO152][1])+dy2ty1*(ue[jp1_NO151][1]-2.0000000000000000E+00*ue[j_NO180][1]+ue[jm1_NO152][1]);
      forcing[i_NO175][j_NO180][k_NO176][2] = forcing[i_NO175][j_NO180][k_NO176][2]-ty2*(ue[jp1_NO151][2]*buf[jp1_NO151][2]+c2*(ue[jp1_NO151][4]-q[jp1_NO151])-(ue[jm1_NO152][2]*buf[jm1_NO152][2]+c2*(ue[jm1_NO152][4]-q[jm1_NO152])))+yycon1*(buf[jp1_NO151][2]-2.0000000000000000E+00*buf[j_NO180][2]+buf[jm1_NO152][2])+dy3ty1*(ue[jp1_NO151][2]-2.0000000000000000E+00*ue[j_NO180][2]+ue[jm1_NO152][2]);
      forcing[i_NO175][j_NO180][k_NO176][3] = forcing[i_NO175][j_NO180][k_NO176][3]-ty2*(ue[jp1_NO151][3]*buf[jp1_NO151][2]-ue[jm1_NO152][3]*buf[jm1_NO152][2])+yycon2*(buf[jp1_NO151][3]-2.0000000000000000E+00*buf[j_NO180][3]+buf[jm1_NO152][3])+dy4ty1*(ue[jp1_NO151][3]-2.0000000000000000E+00*ue[j_NO180][3]+ue[jm1_NO152][3]);
      forcing[i_NO175][j_NO180][k_NO176][4] = forcing[i_NO175][j_NO180][k_NO176][4]-ty2*(buf[jp1_NO151][2]*(c1*ue[jp1_NO151][4]-c2*q[jp1_NO151])-buf[jm1_NO152][2]*(c1*ue[jm1_NO152][4]-c2*q[jm1_NO152]))+5.0000000000000000E-01*yycon3*(buf[jp1_NO151][0]-2.0000000000000000E+00*buf[j_NO180][0]+buf[jm1_NO152][0])+yycon4*(cuf[jp1_NO151]-2.0000000000000000E+00*cuf[j_NO180]+cuf[jm1_NO152])+yycon5*(buf[jp1_NO151][4]-2.0000000000000000E+00*buf[j_NO180][4]+buf[jm1_NO152][4])+dy5ty1*(ue[jp1_NO151][4]-2.0000000000000000E+00*ue[j_NO180][4]+ue[jm1_NO152][4]);
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall4 ==*/
      for (m_NO181 = 0 ; m_NO181 <= 4 ; m_NO181 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall4.bb1 ==*/
      j_NO153 = 1;
      forcing[i_NO175][j_NO153][k_NO176][m_NO181] = forcing[i_NO175][j_NO153][k_NO176][m_NO181]-dssp*(5.0000000000000000E+00*ue[j_NO153][m_NO181]-4.0000000000000000E+00*ue[j_NO153+1][m_NO181]+ue[j_NO153+2][m_NO181]);
      j_NO153 = 2;
      forcing[i_NO175][j_NO153][k_NO176][m_NO181] = forcing[i_NO175][j_NO153][k_NO176][m_NO181]-dssp*((-4.0000000000000000E+00)*ue[j_NO153-1][m_NO181]+6.0000000000000000E+00*ue[j_NO153][m_NO181]-4.0000000000000000E+00*ue[j_NO153+1][m_NO181]+ue[j_NO153+2][m_NO181]);
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall5 ==*/
      for (m_NO182 = 0 ; m_NO182 <= 4 ; m_NO182 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall5.loop1 ==*/
      for (j_NO183 = 3 ; j_NO183 <= grid_points[1]-3-1 ; j_NO183 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall5.loop1.bb1 ==*/
      forcing[i_NO175][j_NO183][k_NO176][m_NO182] = forcing[i_NO175][j_NO183][k_NO176][m_NO182]-dssp*(ue[j_NO183-2][m_NO182]-4.0000000000000000E+00*ue[j_NO183-1][m_NO182]+6.0000000000000000E+00*ue[j_NO183][m_NO182]-4.0000000000000000E+00*ue[j_NO183+1][m_NO182]+ue[j_NO183+2][m_NO182]);
      }
      }
/* == exact_rhs#block1.block3.loop1.loop2.doall6 ==*/
      for (m_NO184 = 0 ; m_NO184 <= 4 ; m_NO184 += 1){
/* == exact_rhs#block1.block3.loop1.loop2.doall6.bb1 ==*/
      j_NO154 = grid_points[1]-3;
      forcing[i_NO175][j_NO154][k_NO176][m_NO184] = forcing[i_NO175][j_NO154][k_NO176][m_NO184]-dssp*(ue[j_NO154-2][m_NO184]-4.0000000000000000E+00*ue[j_NO154-1][m_NO184]+6.0000000000000000E+00*ue[j_NO154][m_NO184]-4.0000000000000000E+00*ue[j_NO154+1][m_NO184]);
      j_NO154 = grid_points[1]-2;
      forcing[i_NO175][j_NO154][k_NO176][m_NO184] = forcing[i_NO175][j_NO154][k_NO176][m_NO184]-dssp*(ue[j_NO154-2][m_NO184]-4.0000000000000000E+00*ue[j_NO154-1][m_NO184]+5.0000000000000000E+00*ue[j_NO154][m_NO184]);
      }
      }
      }

/* @mtend:pe0:module99:mt1@ */
/* == MT4.1 END == */
while(M99_CL0_PC0_STASCHE_END_FLAG4[1][0] != M99_CL0_PC0_SS_MTG_COUNT4[0]) {
}
M99_CL0_PC0_STASCHE_END_FLAG4[0][1] = M99_CL0_PC0_SS_MTG_COUNT4[0];
/* == exact_rhs#block1.block3.emt2 ==*/
L40041:;
/* @mtstart:pe0:module99:mt2@ */
      goto L2;

/* @mtend:pe0:module99:mt2@ */
/* == MT4.2 END == */
/* == Hierarchy H:4 END == */
L2:;
/* barrier_start:pe0:module99:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][0][3]++;
while (M99_CL0_PC0_barrier_flg[0][1][3] < M99_CL0_PC0_barrier_flg[0][0][3]) {
}
M99_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module99:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block4 ==*/
L20010:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=5) == */
M99_CL0_PC0_SS_MTG_COUNT5[0] = M99_CL0_PC0_SS_MTG_COUNT5[0] + 1;

#pragma omp flush
M99_CL0_PC0_SCHE_FLG5[1] = 1;
#pragma omp flush
/* == exact_rhs#block1.block4.loop1 ==*/
L40042:;
/* @mtstart:pe0:module99:mt1@ */
      for (i_NO185 = 1 ; i_NO185 <= grid_points[0]-1-1 ; i_NO185 += 1){
/* == exact_rhs#block1.block4.loop1.bb1 ==*/
      M99_CL0_PC0_xi_NO95 = (double)(i_NO185)*dnxm1;
/* == exact_rhs#block1.block4.loop1.loop2 ==*/
      for (j_NO186 = 1 ; j_NO186 <= grid_points[1]-1-1 ; j_NO186 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.bb1 ==*/
      M99_CL0_PC0_eta_NO96 = (double)(j_NO186)*dnym1;
/* == exact_rhs#block1.block4.loop1.loop2.doall2 ==*/
      for (k_NO187 = 0 ; k_NO187 <= grid_points[2]-1 ; k_NO187 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall2.bb1 ==*/
      zeta_NO155 = (double)(k_NO187)*dnzm1;
/* == exact_rhs#block1.block4.loop1.loop2.doall2.sb2 ==*/
      exact_solution_c1_PE0(M99_CL0_PC0_xi_NO95,M99_CL0_PC0_eta_NO96,zeta_NO155,(&dtemp_NO58[0]));
/* == exact_rhs#block1.block4.loop1.loop2.doall2.loop3 ==*/
      for (m_NO188 = 0 ; m_NO188 <= 4 ; m_NO188 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall2.loop3.bb1 ==*/
      ue[k_NO187][m_NO188] = dtemp_NO58[m_NO188];
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall2.bb4 ==*/
      dtpp_NO156 = 1.0000000000000000E+00/ dtemp_NO58[0];
/* == exact_rhs#block1.block4.loop1.loop2.doall2.loop5 ==*/
      for (m_NO189 = 1 ; m_NO189 <= 4 ; m_NO189 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall2.loop5.bb1 ==*/
      buf[k_NO187][m_NO189] = dtpp_NO156*dtemp_NO58[m_NO189];
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall2.bb6 ==*/
      cuf[k_NO187] = buf[k_NO187][3]*buf[k_NO187][3];
      buf[k_NO187][0] = cuf[k_NO187]+buf[k_NO187][1]*buf[k_NO187][1]+buf[k_NO187][2]*buf[k_NO187][2];
      q[k_NO187] = 5.0000000000000000E-01*(buf[k_NO187][1]*ue[k_NO187][1]+buf[k_NO187][2]*ue[k_NO187][2]+buf[k_NO187][3]*ue[k_NO187][3]);
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall3 ==*/
      for (k_NO190 = 1 ; k_NO190 <= grid_points[2]-1-1 ; k_NO190 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall3.bb1 ==*/
      km1_NO157 = k_NO190-1;
      kp1_NO158 = k_NO190+1;
      forcing[i_NO185][j_NO186][k_NO190][0] = forcing[i_NO185][j_NO186][k_NO190][0]-tz2*(ue[kp1_NO158][3]-ue[km1_NO157][3])+dz1tz1*(ue[kp1_NO158][0]-2.0000000000000000E+00*ue[k_NO190][0]+ue[km1_NO157][0]);
      forcing[i_NO185][j_NO186][k_NO190][1] = forcing[i_NO185][j_NO186][k_NO190][1]-tz2*(ue[kp1_NO158][1]*buf[kp1_NO158][3]-ue[km1_NO157][1]*buf[km1_NO157][3])+zzcon2*(buf[kp1_NO158][1]-2.0000000000000000E+00*buf[k_NO190][1]+buf[km1_NO157][1])+dz2tz1*(ue[kp1_NO158][1]-2.0000000000000000E+00*ue[k_NO190][1]+ue[km1_NO157][1]);
      forcing[i_NO185][j_NO186][k_NO190][2] = forcing[i_NO185][j_NO186][k_NO190][2]-tz2*(ue[kp1_NO158][2]*buf[kp1_NO158][3]-ue[km1_NO157][2]*buf[km1_NO157][3])+zzcon2*(buf[kp1_NO158][2]-2.0000000000000000E+00*buf[k_NO190][2]+buf[km1_NO157][2])+dz3tz1*(ue[kp1_NO158][2]-2.0000000000000000E+00*ue[k_NO190][2]+ue[km1_NO157][2]);
      forcing[i_NO185][j_NO186][k_NO190][3] = forcing[i_NO185][j_NO186][k_NO190][3]-tz2*(ue[kp1_NO158][3]*buf[kp1_NO158][3]+c2*(ue[kp1_NO158][4]-q[kp1_NO158])-(ue[km1_NO157][3]*buf[km1_NO157][3]+c2*(ue[km1_NO157][4]-q[km1_NO157])))+zzcon1*(buf[kp1_NO158][3]-2.0000000000000000E+00*buf[k_NO190][3]+buf[km1_NO157][3])+dz4tz1*(ue[kp1_NO158][3]-2.0000000000000000E+00*ue[k_NO190][3]+ue[km1_NO157][3]);
      forcing[i_NO185][j_NO186][k_NO190][4] = forcing[i_NO185][j_NO186][k_NO190][4]-tz2*(buf[kp1_NO158][3]*(c1*ue[kp1_NO158][4]-c2*q[kp1_NO158])-buf[km1_NO157][3]*(c1*ue[km1_NO157][4]-c2*q[km1_NO157]))+5.0000000000000000E-01*zzcon3*(buf[kp1_NO158][0]-2.0000000000000000E+00*buf[k_NO190][0]+buf[km1_NO157][0])+zzcon4*(cuf[kp1_NO158]-2.0000000000000000E+00*cuf[k_NO190]+cuf[km1_NO157])+zzcon5*(buf[kp1_NO158][4]-2.0000000000000000E+00*buf[k_NO190][4]+buf[km1_NO157][4])+dz5tz1*(ue[kp1_NO158][4]-2.0000000000000000E+00*ue[k_NO190][4]+ue[km1_NO157][4]);
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall4 ==*/
      for (m_NO191 = 0 ; m_NO191 <= 4 ; m_NO191 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall4.bb1 ==*/
      k_NO159 = 1;
      forcing[i_NO185][j_NO186][k_NO159][m_NO191] = forcing[i_NO185][j_NO186][k_NO159][m_NO191]-dssp*(5.0000000000000000E+00*ue[k_NO159][m_NO191]-4.0000000000000000E+00*ue[k_NO159+1][m_NO191]+ue[k_NO159+2][m_NO191]);
      k_NO159 = 2;
      forcing[i_NO185][j_NO186][k_NO159][m_NO191] = forcing[i_NO185][j_NO186][k_NO159][m_NO191]-dssp*((-4.0000000000000000E+00)*ue[k_NO159-1][m_NO191]+6.0000000000000000E+00*ue[k_NO159][m_NO191]-4.0000000000000000E+00*ue[k_NO159+1][m_NO191]+ue[k_NO159+2][m_NO191]);
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall5 ==*/
      for (m_NO192 = 0 ; m_NO192 <= 4 ; m_NO192 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall5.loop1 ==*/
      for (k_NO193 = 3 ; k_NO193 <= grid_points[2]-3-1 ; k_NO193 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall5.loop1.bb1 ==*/
      forcing[i_NO185][j_NO186][k_NO193][m_NO192] = forcing[i_NO185][j_NO186][k_NO193][m_NO192]-dssp*(ue[k_NO193-2][m_NO192]-4.0000000000000000E+00*ue[k_NO193-1][m_NO192]+6.0000000000000000E+00*ue[k_NO193][m_NO192]-4.0000000000000000E+00*ue[k_NO193+1][m_NO192]+ue[k_NO193+2][m_NO192]);
      }
      }
/* == exact_rhs#block1.block4.loop1.loop2.doall6 ==*/
      for (m_NO194 = 0 ; m_NO194 <= 4 ; m_NO194 += 1){
/* == exact_rhs#block1.block4.loop1.loop2.doall6.bb1 ==*/
      k_NO160 = grid_points[2]-3;
      forcing[i_NO185][j_NO186][k_NO160][m_NO194] = forcing[i_NO185][j_NO186][k_NO160][m_NO194]-dssp*(ue[k_NO160-2][m_NO194]-4.0000000000000000E+00*ue[k_NO160-1][m_NO194]+6.0000000000000000E+00*ue[k_NO160][m_NO194]-4.0000000000000000E+00*ue[k_NO160+1][m_NO194]);
      k_NO160 = grid_points[2]-2;
      forcing[i_NO185][j_NO186][k_NO160][m_NO194] = forcing[i_NO185][j_NO186][k_NO160][m_NO194]-dssp*(ue[k_NO160-2][m_NO194]-4.0000000000000000E+00*ue[k_NO160-1][m_NO194]+5.0000000000000000E+00*ue[k_NO160][m_NO194]);
      }
      }
      }

/* @mtend:pe0:module99:mt1@ */
/* == MT5.1 END == */
while(M99_CL0_PC0_STASCHE_END_FLAG5[1][0] != M99_CL0_PC0_SS_MTG_COUNT5[0]) {
}
M99_CL0_PC0_STASCHE_END_FLAG5[0][1] = M99_CL0_PC0_SS_MTG_COUNT5[0];
/* == exact_rhs#block1.block4.emt2 ==*/
L40043:;
/* @mtstart:pe0:module99:mt2@ */
      goto L3;

/* @mtend:pe0:module99:mt2@ */
/* == MT5.2 END == */
/* == Hierarchy H:5 END == */
L3:;
/* barrier_start:pe0:module99:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][0][4]++;
while (M99_CL0_PC0_barrier_flg[0][1][4] < M99_CL0_PC0_barrier_flg[0][0][4]) {
}
M99_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module99:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.doall5 ==*/
      for (i_NO195 = 1 ; i_NO195 <= (grid_points[0]+(-2))/ 2 ; i_NO195 += 1){
/* == exact_rhs#block1.doall5.loop1 ==*/
      for (j_NO198 = 1 ; j_NO198 <= grid_points[1]-1-1 ; j_NO198 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1 ==*/
      for (k_NO197 = 1 ; k_NO197 <= grid_points[2]-1-1 ; k_NO197 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1 ==*/
      for (m_NO196 = 0 ; m_NO196 <= 4 ; m_NO196 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1.bb1 ==*/
      forcing[i_NO195][j_NO198][k_NO197][m_NO196] = (-1.0000000000000000E+00)*forcing[i_NO195][j_NO198][k_NO197][m_NO196];
      }
      }
      }
      }
/* barrier_start:pe0:module99:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][0][5]++;
while (M99_CL0_PC0_barrier_flg[0][1][5] < M99_CL0_PC0_barrier_flg[0][0][5]) {
}
M99_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module99:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.bb6 ==*/
      goto L4;
L4:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 99: exact_rhs */
/* ******************* */
static void exact_rhs_PE1()
{
      double xi_NO143/* xi */;
      double dtpp_NO144/* dtpp */;
      int ip1_NO145/* ip1 */;
      int im1_NO146/* im1 */;
      int i_NO147/* i */;
      int i_NO148/* i */;
      double eta_NO149/* eta */;
      double dtpp_NO150/* dtpp */;
      int jp1_NO151/* jp1 */;
      int jm1_NO152/* jm1 */;
      int j_NO153/* j */;
      int j_NO154/* j */;
      double zeta_NO155/* zeta */;
      double dtpp_NO156/* dtpp */;
      int km1_NO157/* km1 */;
      int kp1_NO158/* kp1 */;
      int k_NO159/* k */;
      int k_NO160/* k */;
      int i_NO161/* i */;
      int m_NO162/* m */;
      int k_NO163/* k */;
      int j_NO164/* j */;
      int j_NO165/* j */;
      int k_NO166/* k */;
      int i_NO167/* i */;
      int m_NO168/* m */;
      int m_NO169/* m */;
      int i_NO170/* i */;
      int m_NO171/* m */;
      int m_NO172/* m */;
      int i_NO173/* i */;
      int m_NO174/* m */;
      int i_NO175/* i */;
      int k_NO176/* k */;
      int j_NO177/* j */;
      int m_NO178/* m */;
      int m_NO179/* m */;
      int j_NO180/* j */;
      int m_NO181/* m */;
      int m_NO182/* m */;
      int j_NO183/* j */;
      int m_NO184/* m */;
      int i_NO185/* i */;
      int j_NO186/* j */;
      int k_NO187/* k */;
      int m_NO188/* m */;
      int m_NO189/* m */;
      int k_NO190/* k */;
      int m_NO191/* m */;
      int m_NO192/* m */;
      int k_NO193/* k */;
      int m_NO194/* m */;
      int i_NO195/* i */;
      int m_NO196/* m */;
      int k_NO197/* k */;
      int j_NO198/* j */;
      double dtemp_NO56[5];/* dtemp */
      double dtemp_NO57[5];/* dtemp */
      double dtemp_NO58[5];/* dtemp */

/* @decl:pe1:module99@ */
/* == exact_rhs#block1 ==*/
/* == exact_rhs#block1.doall1 ==*/
      for (i_NO161 = grid_points[0]/ 2 ; i_NO161 <= grid_points[0]-1 ; i_NO161 += 1){
/* == exact_rhs#block1.doall1.loop1 ==*/
      for (j_NO164 = 0 ; j_NO164 <= grid_points[1]-1 ; j_NO164 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1 ==*/
      for (k_NO163 = 0 ; k_NO163 <= grid_points[2]-1 ; k_NO163 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO162 = 0 ; m_NO162 <= 4 ; m_NO162 += 1){
/* == exact_rhs#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      forcing[i_NO161][j_NO164][k_NO163][m_NO162] = 0.0000000000000000E+00;
      }
      }
      }
      }
/* barrier_start:pe1:module99:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][1][1]++;
while (M99_CL0_PC0_barrier_flg[1][0][1] < M99_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module99:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block2 ==*/
L20012:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=3) == */
M99_CL0_PC0_SS_MTG_COUNT3[1] = M99_CL0_PC0_SS_MTG_COUNT3[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M99_CL0_PC0_SCHE_FLG3[1] != 1) {
}
M99_CL0_PC0_SCHE_FLG3[1] = 0;
#pragma omp flush
M99_CL0_PC0_STASCHE_END_FLAG3[1][0] = M99_CL0_PC0_SS_MTG_COUNT3[1];
while(M99_CL0_PC0_STASCHE_END_FLAG3[0][1] != M99_CL0_PC0_SS_MTG_COUNT3[1]) {
}
/* == exact_rhs#block1.block2.emt2 ==*/
L40039:;
/* @mtstart:pe1:module99:mt2@ */
      goto L1;

/* @mtend:pe1:module99:mt2@ */
/* == MT3.2 END == */
/* == Hierarchy H:3 END == */
L1:;
/* barrier_start:pe1:module99:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][1][2]++;
while (M99_CL0_PC0_barrier_flg[1][0][2] < M99_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module99:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block3 ==*/
L20014:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=4) == */
M99_CL0_PC0_SS_MTG_COUNT4[1] = M99_CL0_PC0_SS_MTG_COUNT4[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M99_CL0_PC0_SCHE_FLG4[1] != 1) {
}
M99_CL0_PC0_SCHE_FLG4[1] = 0;
#pragma omp flush
M99_CL0_PC0_STASCHE_END_FLAG4[1][0] = M99_CL0_PC0_SS_MTG_COUNT4[1];
while(M99_CL0_PC0_STASCHE_END_FLAG4[0][1] != M99_CL0_PC0_SS_MTG_COUNT4[1]) {
}
/* == exact_rhs#block1.block3.emt2 ==*/
L40041:;
/* @mtstart:pe1:module99:mt2@ */
      goto L2;

/* @mtend:pe1:module99:mt2@ */
/* == MT4.2 END == */
/* == Hierarchy H:4 END == */
L2:;
/* barrier_start:pe1:module99:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][1][3]++;
while (M99_CL0_PC0_barrier_flg[1][0][3] < M99_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module99:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.block4 ==*/
L20016:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=5) == */
M99_CL0_PC0_SS_MTG_COUNT5[1] = M99_CL0_PC0_SS_MTG_COUNT5[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M99_CL0_PC0_SCHE_FLG5[1] != 1) {
}
M99_CL0_PC0_SCHE_FLG5[1] = 0;
#pragma omp flush
M99_CL0_PC0_STASCHE_END_FLAG5[1][0] = M99_CL0_PC0_SS_MTG_COUNT5[1];
while(M99_CL0_PC0_STASCHE_END_FLAG5[0][1] != M99_CL0_PC0_SS_MTG_COUNT5[1]) {
}
/* == exact_rhs#block1.block4.emt2 ==*/
L40043:;
/* @mtstart:pe1:module99:mt2@ */
      goto L3;

/* @mtend:pe1:module99:mt2@ */
/* == MT5.2 END == */
/* == Hierarchy H:5 END == */
L3:;
/* barrier_start:pe1:module99:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][1][4]++;
while (M99_CL0_PC0_barrier_flg[1][0][4] < M99_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module99:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.doall5 ==*/
      for (i_NO195 = (grid_points[0]+(-2))/ 2+1 ; i_NO195 <= grid_points[0]-1-1 ; i_NO195 += 1){
/* == exact_rhs#block1.doall5.loop1 ==*/
      for (j_NO198 = 1 ; j_NO198 <= grid_points[1]-1-1 ; j_NO198 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1 ==*/
      for (k_NO197 = 1 ; k_NO197 <= grid_points[2]-1-1 ; k_NO197 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1 ==*/
      for (m_NO196 = 0 ; m_NO196 <= 4 ; m_NO196 += 1){
/* == exact_rhs#block1.doall5.loop1.loop1.loop1.bb1 ==*/
      forcing[i_NO195][j_NO198][k_NO197][m_NO196] = (-1.0000000000000000E+00)*forcing[i_NO195][j_NO198][k_NO197][m_NO196];
      }
      }
      }
      }
/* barrier_start:pe1:module99:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M99_CL0_PC0_barrier_flg[0][1][5]++;
while (M99_CL0_PC0_barrier_flg[1][0][5] < M99_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module99:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == exact_rhs#block1.bb6 ==*/
      goto L4;
L4:;
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
/* barrier_start:pe0:module96:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][0][1]++;
while (M96_CL0_PC0_barrier_flg[0][1][1] < M96_CL0_PC0_barrier_flg[0][0][1]) {
}
M96_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module96:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb2 ==*/
      x_solve_PE0();
/* barrier_start:pe0:module96:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][0][2]++;
while (M96_CL0_PC0_barrier_flg[0][1][2] < M96_CL0_PC0_barrier_flg[0][0][2]) {
}
M96_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module96:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb3 ==*/
      y_solve_PE0();
/* barrier_start:pe0:module96:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][0][3]++;
while (M96_CL0_PC0_barrier_flg[0][1][3] < M96_CL0_PC0_barrier_flg[0][0][3]) {
}
M96_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module96:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb4 ==*/
      z_solve_PE0();
/* barrier_start:pe0:module96:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][0][4]++;
while (M96_CL0_PC0_barrier_flg[0][1][4] < M96_CL0_PC0_barrier_flg[0][0][4]) {
}
M96_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module96:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb5 ==*/
      add_PE0();
/* barrier_start:pe0:module96:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][0][5]++;
while (M96_CL0_PC0_barrier_flg[0][1][5] < M96_CL0_PC0_barrier_flg[0][0][5]) {
}
M96_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module96:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.bb6 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 96: adi */
/* ******************* */
static void adi_PE1()
{

/* @decl:pe1:module96@ */
/* == adi#block1 ==*/
/* == adi#block1.sb1 ==*/
      compute_rhs_PE1();
/* barrier_start:pe1:module96:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][1][1]++;
while (M96_CL0_PC0_barrier_flg[1][0][1] < M96_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module96:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb2 ==*/
      x_solve_PE1();
/* barrier_start:pe1:module96:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][1][2]++;
while (M96_CL0_PC0_barrier_flg[1][0][2] < M96_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module96:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb3 ==*/
      y_solve_PE1();
/* barrier_start:pe1:module96:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][1][3]++;
while (M96_CL0_PC0_barrier_flg[1][0][3] < M96_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module96:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb4 ==*/
      z_solve_PE1();
/* barrier_start:pe1:module96:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][1][4]++;
while (M96_CL0_PC0_barrier_flg[1][0][4] < M96_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module96:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.sb5 ==*/
      add_PE1();
/* barrier_start:pe1:module96:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M96_CL0_PC0_barrier_flg[0][1][5]++;
while (M96_CL0_PC0_barrier_flg[1][0][5] < M96_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module96:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == adi#block1.bb6 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 108: verify */
/* ******************* */
static void verify_PE0(int no_time_steps,
      char* class,
      int* verified)
{
      int m_NO128/* m */;
      int m_NO129/* m */;
      int m_NO130/* m */;
      int m_NO131/* m */;
      int m_NO132/* m */;
      int NEWV00133/* NEWV00133 */;
      int NEWV00134/* NEWV00134 */;

/* @decl:pe0:module108@ */
/* == verify#block1 ==*/
/* == verify#block1.bb1 ==*/
      M108_CL0_PC0_epsilon = 1.0000000000000000E-08;
/* barrier_start:pe0:module108:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][1]++;
while (M108_CL0_PC0_barrier_flg[0][1][1] < M108_CL0_PC0_barrier_flg[0][0][1]) {
}
M108_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block2 ==*/
L20012:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=6) == */
M108_CL0_PC0_SS_MTG_COUNT6[0] = M108_CL0_PC0_SS_MTG_COUNT6[0] + 1;

#pragma omp flush
M108_CL0_PC0_SCHE_FLG6[1] = 1;
#pragma omp flush
/* == verify#block1.block2.sb1 ==*/
L40044:;
/* @mtstart:pe0:module108:mt1@ */
      error_norm_PE0((&M108_CL0_PC0_xce[0]));

/* @mtend:pe0:module108:mt1@ */
/* == MT6.1 END == */
while(M108_CL0_PC0_STASCHE_END_FLAG6[1][0] != M108_CL0_PC0_SS_MTG_COUNT6[0]) {
}
M108_CL0_PC0_STASCHE_END_FLAG6[0][1] = M108_CL0_PC0_SS_MTG_COUNT6[0];
/* == verify#block1.block2.emt2 ==*/
L40045:;
/* @mtstart:pe0:module108:mt2@ */
      goto L65;

/* @mtend:pe0:module108:mt2@ */
/* == MT6.2 END == */
/* == Hierarchy H:6 END == */
L65:;
/* barrier_start:pe0:module108:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][2]++;
while (M108_CL0_PC0_barrier_flg[0][1][2] < M108_CL0_PC0_barrier_flg[0][0][2]) {
}
M108_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.sb3 ==*/
      compute_rhs_PE0();
/* barrier_start:pe0:module108:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][3]++;
while (M108_CL0_PC0_barrier_flg[0][1][3] < M108_CL0_PC0_barrier_flg[0][0][3]) {
}
M108_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block4 ==*/
L20014:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=7) == */
M108_CL0_PC0_SS_MTG_COUNT7[0] = M108_CL0_PC0_SS_MTG_COUNT7[0] + 1;

#pragma omp flush
M108_CL0_PC0_SCHE_FLG7[1] = 1;
#pragma omp flush
/* == verify#block1.block4.sb1 ==*/
L40046:;
/* @mtstart:pe0:module108:mt1@ */
      rhs_norm_PE0((&M108_CL0_PC0_xcr[0]));

/* @mtend:pe0:module108:mt1@ */
/* == MT7.1 END == */
while(M108_CL0_PC0_STASCHE_END_FLAG7[1][0] != M108_CL0_PC0_SS_MTG_COUNT7[0]) {
}
M108_CL0_PC0_STASCHE_END_FLAG7[0][1] = M108_CL0_PC0_SS_MTG_COUNT7[0];
/* == verify#block1.block4.emt2 ==*/
L40047:;
/* @mtstart:pe0:module108:mt2@ */
      goto L66;

/* @mtend:pe0:module108:mt2@ */
/* == MT7.2 END == */
/* == Hierarchy H:7 END == */
L66:;
/* barrier_start:pe0:module108:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][4]++;
while (M108_CL0_PC0_barrier_flg[0][1][4] < M108_CL0_PC0_barrier_flg[0][0][4]) {
}
M108_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall5 ==*/
      for (m_NO128 = 0 ; m_NO128 <= 5/ 2-1 ; m_NO128 += 1){
/* == verify#block1.doall5.bb1 ==*/
      M108_CL0_PC0_xcr[m_NO128][0] = M108_CL0_PC0_xcr[m_NO128][0]/ dt;
      }
/* barrier_start:pe0:module108:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][5]++;
while (M108_CL0_PC0_barrier_flg[0][1][5] < M108_CL0_PC0_barrier_flg[0][0][5]) {
}
M108_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb6 ==*/
      *(class) = (char)(85);
      *(verified) = 1;
/* barrier_start:pe0:module108:no6 */
#pragma omp flush

/* == GROUP BARRIER6 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][6]++;
while (M108_CL0_PC0_barrier_flg[0][1][6] < M108_CL0_PC0_barrier_flg[0][0][6]) {
}
M108_CL0_PC0_barrier_flg[1][0][6]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall7 ==*/
      for (m_NO129 = 0 ; m_NO129 <= 5/ 2-1 ; m_NO129 += 1){
/* == verify#block1.doall7.bb1 ==*/
      M108_CL0_PC0_xcrref[m_NO129][0] = 1.0000000000000000E+00;
      M108_CL0_PC0_xceref[m_NO129][0] = 1.0000000000000000E+00;
      }
/* barrier_start:pe0:module108:no7 */
#pragma omp flush

/* == GROUP BARRIER7 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][7]++;
while (M108_CL0_PC0_barrier_flg[0][1][7] < M108_CL0_PC0_barrier_flg[0][0][7]) {
}
M108_CL0_PC0_barrier_flg[1][0][7]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb8 ==*/
if (!(grid_points[0]==12)) goto L14;
/* == verify#block1.bb9 ==*/
if (!(grid_points[1]==12)) goto L14;
/* == verify#block1.bb10 ==*/
if (!(grid_points[2]==12)) goto L14;
/* == verify#block1.bb11 ==*/
if (!(no_time_steps==60)) goto L14;
/* == verify#block1.bb12 ==*/
      M108_CL0_PC0_V101 = 1;
/* barrier_start:pe0:module108:no8 */
#pragma omp flush

/* == GROUP BARRIER8 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][8]++;
while (M108_CL0_PC0_barrier_flg[0][1][8] < M108_CL0_PC0_barrier_flg[0][0][8]) {
}
M108_CL0_PC0_barrier_flg[1][0][8]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L13;
/* == verify#block1.bb13 ==*/
L14:;
      M108_CL0_PC0_V101 = 0;
/* barrier_start:pe0:module108:no9 */
#pragma omp flush

/* == GROUP BARRIER9 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][9]++;
while (M108_CL0_PC0_barrier_flg[0][1][9] < M108_CL0_PC0_barrier_flg[0][0][9]) {
}
M108_CL0_PC0_barrier_flg[1][0][9]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb14 ==*/
L13:;
if (!(M108_CL0_PC0_V101!=0)) goto L11;
/* == verify#block1.bb15 ==*/
      *(class) = (char)(83);
      M108_CL0_PC0_dtref = 1.0000000000000000E-02;
      M108_CL0_PC0_xcrref[0][0] = 1.7034283709541309E-01;
      M108_CL0_PC0_xcrref[1][0] = 1.2975252070034100E-02;
      M108_CL0_PC0_xcrref[2][0] = 3.2527926989486047E-02;
      M108_CL0_PC0_xcrref[3][0] = 2.6436421275166801E-02;
      M108_CL0_PC0_xcrref[4][0] = 1.9211784131744430E-01;
      M108_CL0_PC0_xceref[0][0] = 4.9976913345811582E-04;
      M108_CL0_PC0_xceref[1][0] = 4.5195666782961930E-05;
      M108_CL0_PC0_xceref[2][0] = 7.3973765172921353E-05;
      M108_CL0_PC0_xceref[3][0] = 7.3821238632439733E-05;
      M108_CL0_PC0_xceref[4][0] = 8.9269630987491447E-04;
/* barrier_start:pe0:module108:no10 */
#pragma omp flush

/* == GROUP BARRIER10 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][10]++;
while (M108_CL0_PC0_barrier_flg[0][1][10] < M108_CL0_PC0_barrier_flg[0][0][10]) {
}
M108_CL0_PC0_barrier_flg[1][0][10]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L12;
/* == verify#block1.bb16 ==*/
L11:;
if (!(grid_points[0]==24)) goto L18;
/* == verify#block1.bb17 ==*/
if (!(grid_points[1]==24)) goto L18;
/* == verify#block1.bb18 ==*/
if (!(grid_points[2]==24)) goto L18;
/* == verify#block1.bb19 ==*/
if (!(no_time_steps==200)) goto L18;
/* == verify#block1.bb20 ==*/
      M108_CL0_PC0_V102 = 1;
/* barrier_start:pe0:module108:no11 */
#pragma omp flush

/* == GROUP BARRIER11 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][11]++;
while (M108_CL0_PC0_barrier_flg[0][1][11] < M108_CL0_PC0_barrier_flg[0][0][11]) {
}
M108_CL0_PC0_barrier_flg[1][0][11]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L17;
/* == verify#block1.bb21 ==*/
L18:;
      M108_CL0_PC0_V102 = 0;
/* barrier_start:pe0:module108:no12 */
#pragma omp flush

/* == GROUP BARRIER12 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][12]++;
while (M108_CL0_PC0_barrier_flg[0][1][12] < M108_CL0_PC0_barrier_flg[0][0][12]) {
}
M108_CL0_PC0_barrier_flg[1][0][12]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb22 ==*/
L17:;
if (M108_CL0_PC0_V102!=0) {
 /* == verify#block1.bb23 ==*/
      *(class) = (char)(87);
      M108_CL0_PC0_dtref = 8.0000000000000004E-04;
      M108_CL0_PC0_xcrref[0][0] = 1.1255904093440000E+02;
      M108_CL0_PC0_xcrref[1][0] = 1.1800075957310000E+01;
      M108_CL0_PC0_xcrref[2][0] = 2.7103297678459999E+01;
      M108_CL0_PC0_xcrref[3][0] = 2.4691749376690002E+01;
      M108_CL0_PC0_xcrref[4][0] = 2.6384278743170000E+02;
      M108_CL0_PC0_xceref[0][0] = 4.4196557360080000E+00;
      M108_CL0_PC0_xceref[1][0] = 4.6385312600020001E-01;
      M108_CL0_PC0_xceref[2][0] = 1.0115517499669999E+00;
      M108_CL0_PC0_xceref[3][0] = 9.2358787299440004E-01;
      M108_CL0_PC0_xceref[4][0] = 1.0180458377180001E+01;
/* barrier_start:pe0:module108:no13 */
#pragma omp flush

/* == GROUP BARRIER13 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][13]++;
while (M108_CL0_PC0_barrier_flg[0][1][13] < M108_CL0_PC0_barrier_flg[0][0][13]) {
}
M108_CL0_PC0_barrier_flg[1][0][13]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L16;
/* == verify#block1.bb24 ==*/
}
if (!(grid_points[0]==64)) goto L22;
/* == verify#block1.bb25 ==*/
if (!(grid_points[1]==64)) goto L22;
/* == verify#block1.bb26 ==*/
if (!(grid_points[2]==64)) goto L22;
/* == verify#block1.bb27 ==*/
if (!(no_time_steps==200)) goto L22;
/* == verify#block1.bb28 ==*/
      M108_CL0_PC0_V103 = 1;
/* barrier_start:pe0:module108:no14 */
#pragma omp flush

/* == GROUP BARRIER14 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][14]++;
while (M108_CL0_PC0_barrier_flg[0][1][14] < M108_CL0_PC0_barrier_flg[0][0][14]) {
}
M108_CL0_PC0_barrier_flg[1][0][14]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L21;
/* == verify#block1.bb29 ==*/
L22:;
      M108_CL0_PC0_V103 = 0;
/* barrier_start:pe0:module108:no15 */
#pragma omp flush

/* == GROUP BARRIER15 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][15]++;
while (M108_CL0_PC0_barrier_flg[0][1][15] < M108_CL0_PC0_barrier_flg[0][0][15]) {
}
M108_CL0_PC0_barrier_flg[1][0][15]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb30 ==*/
L21:;
if (M108_CL0_PC0_V103!=0) {
 /* == verify#block1.bb31 ==*/
      *(class) = (char)(65);
      M108_CL0_PC0_dtref = 8.0000000000000004E-04;
      M108_CL0_PC0_xcrref[0][0] = 1.0806346714637260E+02;
      M108_CL0_PC0_xcrref[1][0] = 1.1319730901220810E+01;
      M108_CL0_PC0_xcrref[2][0] = 2.5974354511582469E+01;
      M108_CL0_PC0_xcrref[3][0] = 2.3665622544678911E+01;
      M108_CL0_PC0_xcrref[4][0] = 2.5278963211748339E+02;
      M108_CL0_PC0_xceref[0][0] = 4.2348416040525034E+00;
      M108_CL0_PC0_xceref[1][0] = 4.4390282496995698E-01;
      M108_CL0_PC0_xceref[2][0] = 9.6692480136345649E-01;
      M108_CL0_PC0_xceref[3][0] = 8.8302063039765477E-01;
      M108_CL0_PC0_xceref[4][0] = 9.7379901770829278E+00;
/* barrier_start:pe0:module108:no16 */
#pragma omp flush

/* == GROUP BARRIER16 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][16]++;
while (M108_CL0_PC0_barrier_flg[0][1][16] < M108_CL0_PC0_barrier_flg[0][0][16]) {
}
M108_CL0_PC0_barrier_flg[1][0][16]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L20;
/* == verify#block1.bb32 ==*/
}
if (!(grid_points[0]==102)) goto L26;
/* == verify#block1.bb33 ==*/
if (!(grid_points[1]==102)) goto L26;
/* == verify#block1.bb34 ==*/
if (!(grid_points[2]==102)) goto L26;
/* == verify#block1.bb35 ==*/
if (!(no_time_steps==200)) goto L26;
/* == verify#block1.bb36 ==*/
      M108_CL0_PC0_V104 = 1;
/* barrier_start:pe0:module108:no17 */
#pragma omp flush

/* == GROUP BARRIER17 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][17]++;
while (M108_CL0_PC0_barrier_flg[0][1][17] < M108_CL0_PC0_barrier_flg[0][0][17]) {
}
M108_CL0_PC0_barrier_flg[1][0][17]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L25;
/* == verify#block1.bb37 ==*/
L26:;
      M108_CL0_PC0_V104 = 0;
/* barrier_start:pe0:module108:no18 */
#pragma omp flush

/* == GROUP BARRIER18 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][18]++;
while (M108_CL0_PC0_barrier_flg[0][1][18] < M108_CL0_PC0_barrier_flg[0][0][18]) {
}
M108_CL0_PC0_barrier_flg[1][0][18]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb38 ==*/
L25:;
if (M108_CL0_PC0_V104!=0) {
 /* == verify#block1.bb39 ==*/
      *(class) = (char)(66);
      M108_CL0_PC0_dtref = 2.9999999999999997E-04;
      M108_CL0_PC0_xcrref[0][0] = 1.4233597229287250E+03;
      M108_CL0_PC0_xcrref[1][0] = 9.9330522590150238E+01;
      M108_CL0_PC0_xcrref[2][0] = 3.5646025644535291E+02;
      M108_CL0_PC0_xcrref[3][0] = 3.2485447959084092E+02;
      M108_CL0_PC0_xcrref[4][0] = 3.2707541254659359E+03;
      M108_CL0_PC0_xceref[0][0] = 5.2969847140936857E+01;
      M108_CL0_PC0_xceref[1][0] = 4.4632896115670668E+00;
      M108_CL0_PC0_xceref[2][0] = 1.3122573342210170E+01;
      M108_CL0_PC0_xceref[3][0] = 1.2006925323559139E+01;
      M108_CL0_PC0_xceref[4][0] = 1.2459576151035991E+02;
/* barrier_start:pe0:module108:no19 */
#pragma omp flush

/* == GROUP BARRIER19 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][19]++;
while (M108_CL0_PC0_barrier_flg[0][1][19] < M108_CL0_PC0_barrier_flg[0][0][19]) {
}
M108_CL0_PC0_barrier_flg[1][0][19]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L24;
/* == verify#block1.bb40 ==*/
}
if (!(grid_points[0]==162)) goto L30;
/* == verify#block1.bb41 ==*/
if (!(grid_points[1]==162)) goto L30;
/* == verify#block1.bb42 ==*/
if (!(grid_points[2]==162)) goto L30;
/* == verify#block1.bb43 ==*/
if (!(no_time_steps==200)) goto L30;
/* == verify#block1.bb44 ==*/
      M108_CL0_PC0_V105 = 1;
/* barrier_start:pe0:module108:no20 */
#pragma omp flush

/* == GROUP BARRIER20 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][20]++;
while (M108_CL0_PC0_barrier_flg[0][1][20] < M108_CL0_PC0_barrier_flg[0][0][20]) {
}
M108_CL0_PC0_barrier_flg[1][0][20]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L29;
/* == verify#block1.bb45 ==*/
L30:;
      M108_CL0_PC0_V105 = 0;
/* barrier_start:pe0:module108:no21 */
#pragma omp flush

/* == GROUP BARRIER21 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][21]++;
while (M108_CL0_PC0_barrier_flg[0][1][21] < M108_CL0_PC0_barrier_flg[0][0][21]) {
}
M108_CL0_PC0_barrier_flg[1][0][21]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb46 ==*/
L29:;
if (M108_CL0_PC0_V105!=0) {
 /* == verify#block1.bb47 ==*/
      *(class) = (char)(67);
      M108_CL0_PC0_dtref = 1.0000000000000000E-04;
      M108_CL0_PC0_xcrref[0][0] = 6.2398116551764606E+03;
      M108_CL0_PC0_xcrref[1][0] = 5.0793239190423958E+02;
      M108_CL0_PC0_xcrref[2][0] = 1.5423530093013601E+03;
      M108_CL0_PC0_xcrref[3][0] = 1.3302387929291190E+03;
      M108_CL0_PC0_xcrref[4][0] = 1.1604087428436451E+04;
      M108_CL0_PC0_xceref[0][0] = 1.6462008369091271E+02;
      M108_CL0_PC0_xceref[1][0] = 1.1497107903824309E+01;
      M108_CL0_PC0_xceref[2][0] = 4.1207446207461508E+01;
      M108_CL0_PC0_xceref[3][0] = 3.7087651059694167E+01;
      M108_CL0_PC0_xceref[4][0] = 3.6211053051841259E+02;
/* barrier_start:pe0:module108:no22 */
#pragma omp flush

/* == GROUP BARRIER22 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][22]++;
while (M108_CL0_PC0_barrier_flg[0][1][22] < M108_CL0_PC0_barrier_flg[0][0][22]) {
}
M108_CL0_PC0_barrier_flg[1][0][22]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb48 ==*/
} else {
      *(verified) = 0;
/* barrier_start:pe0:module108:no23 */
#pragma omp flush

/* == GROUP BARRIER23 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][23]++;
while (M108_CL0_PC0_barrier_flg[0][1][23] < M108_CL0_PC0_barrier_flg[0][0][23]) {
}
M108_CL0_PC0_barrier_flg[1][0][23]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb49 ==*/
}
/* barrier_start:pe0:module108:no24 */
#pragma omp flush

/* == GROUP BARRIER24 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][24]++;
while (M108_CL0_PC0_barrier_flg[0][1][24] < M108_CL0_PC0_barrier_flg[0][0][24]) {
}
M108_CL0_PC0_barrier_flg[1][0][24]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb50 ==*/
L24:;
/* barrier_start:pe0:module108:no25 */
#pragma omp flush

/* == GROUP BARRIER25 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][25]++;
while (M108_CL0_PC0_barrier_flg[0][1][25] < M108_CL0_PC0_barrier_flg[0][0][25]) {
}
M108_CL0_PC0_barrier_flg[1][0][25]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb51 ==*/
L20:;
/* barrier_start:pe0:module108:no26 */
#pragma omp flush

/* == GROUP BARRIER26 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][26]++;
while (M108_CL0_PC0_barrier_flg[0][1][26] < M108_CL0_PC0_barrier_flg[0][0][26]) {
}
M108_CL0_PC0_barrier_flg[1][0][26]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb52 ==*/
L16:;
/* barrier_start:pe0:module108:no27 */
#pragma omp flush

/* == GROUP BARRIER27 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][27]++;
while (M108_CL0_PC0_barrier_flg[0][1][27] < M108_CL0_PC0_barrier_flg[0][0][27]) {
}
M108_CL0_PC0_barrier_flg[1][0][27]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb53 ==*/
L12:;
/* barrier_start:pe0:module108:no28 */
#pragma omp flush

/* == GROUP BARRIER28 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][28]++;
while (M108_CL0_PC0_barrier_flg[0][1][28] < M108_CL0_PC0_barrier_flg[0][0][28]) {
}
M108_CL0_PC0_barrier_flg[1][0][28]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall54 ==*/
      for (m_NO130 = 0 ; m_NO130 <= 5/ 2-1 ; m_NO130 += 1){
/* == verify#block1.doall54.bb1 ==*/
      M108_CL0_PC0_xcrdif[m_NO130][0] = fabs((M108_CL0_PC0_xcr[m_NO130][0]-M108_CL0_PC0_xcrref[m_NO130][0])/ M108_CL0_PC0_xcrref[m_NO130][0]);
      M108_CL0_PC0_xcedif[m_NO130][0] = fabs((M108_CL0_PC0_xce[m_NO130]-M108_CL0_PC0_xceref[m_NO130][0])/ M108_CL0_PC0_xceref[m_NO130][0]);
      }
/* barrier_start:pe0:module108:no29 */
#pragma omp flush

/* == GROUP BARRIER29 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][29]++;
while (M108_CL0_PC0_barrier_flg[0][1][29] < M108_CL0_PC0_barrier_flg[0][0][29]) {
}
M108_CL0_PC0_barrier_flg[1][0][29]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb55 ==*/
      NEWV00133 = (int)(class[0])!=85;
/* barrier_start:pe0:module108:no30 */
#pragma omp flush

/* == GROUP BARRIER30 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][30]++;
while (M108_CL0_PC0_barrier_flg[0][1][30] < M108_CL0_PC0_barrier_flg[0][0][30]) {
}
M108_CL0_PC0_barrier_flg[1][0][30]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
if (!(NEWV00133)) goto L36;
/* == verify#block1.bb56 ==*/
      M108_CL0_PC0_V106 = printf((&*" Verification being performed for class %1c\n"),(int)(class[0]));
/* barrier_start:pe0:module108:no31 */
#pragma omp flush

/* == GROUP BARRIER31 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][31]++;
while (M108_CL0_PC0_barrier_flg[0][1][31] < M108_CL0_PC0_barrier_flg[0][0][31]) {
}
M108_CL0_PC0_barrier_flg[1][0][31]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb57 ==*/
      M108_CL0_PC0_V107 = printf((&*" accuracy setting for epsilon = %20.13e\n"),M108_CL0_PC0_epsilon);
/* barrier_start:pe0:module108:no32 */
#pragma omp flush

/* == GROUP BARRIER32 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][32]++;
while (M108_CL0_PC0_barrier_flg[0][1][32] < M108_CL0_PC0_barrier_flg[0][0][32]) {
}
M108_CL0_PC0_barrier_flg[1][0][32]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb58 ==*/
if (!(fabs(dt-M108_CL0_PC0_dtref)>M108_CL0_PC0_epsilon)) goto L38;
/* == verify#block1.bb59 ==*/
      *(verified) = 0;
      *(class) = (char)(85);
/* barrier_start:pe0:module108:no33 */
#pragma omp flush

/* == GROUP BARRIER33 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][33]++;
while (M108_CL0_PC0_barrier_flg[0][1][33] < M108_CL0_PC0_barrier_flg[0][0][33]) {
}
M108_CL0_PC0_barrier_flg[1][0][33]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb60 ==*/
      M108_CL0_PC0_V108 = printf((&*" DT does not match the reference value of %15.8e\n"),M108_CL0_PC0_dtref);
/* barrier_start:pe0:module108:no34 */
#pragma omp flush

/* == GROUP BARRIER34 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][34]++;
while (M108_CL0_PC0_barrier_flg[0][1][34] < M108_CL0_PC0_barrier_flg[0][0][34]) {
}
M108_CL0_PC0_barrier_flg[1][0][34]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no34 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb61 ==*/
L38:;
      goto L37;
/* == verify#block1.bb62 ==*/
L36:;
/* barrier_start:pe0:module108:no35 */
#pragma omp flush

/* == GROUP BARRIER35 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][35]++;
while (M108_CL0_PC0_barrier_flg[0][1][35] < M108_CL0_PC0_barrier_flg[0][0][35]) {
}
M108_CL0_PC0_barrier_flg[1][0][35]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no35 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb63 ==*/
      M108_CL0_PC0_V109 = printf((&*" Unknown class\n"));
/* barrier_start:pe0:module108:no36 */
#pragma omp flush

/* == GROUP BARRIER36 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][36]++;
while (M108_CL0_PC0_barrier_flg[0][1][36] < M108_CL0_PC0_barrier_flg[0][0][36]) {
}
M108_CL0_PC0_barrier_flg[1][0][36]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no36 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb64 ==*/
L37:;
if ((int)(class[0])!=85) {
 /* == verify#block1.bb65 ==*/
      M108_CL0_PC0_V110 = printf((&*" Comparison of RMS-norms of residual\n"));
/* barrier_start:pe0:module108:no37 */
#pragma omp flush

/* == GROUP BARRIER37 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][37]++;
while (M108_CL0_PC0_barrier_flg[0][1][37] < M108_CL0_PC0_barrier_flg[0][0][37]) {
}
M108_CL0_PC0_barrier_flg[1][0][37]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no37 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb66 ==*/
/* == verify#block1.bb67 ==*/
} else {
/* barrier_start:pe0:module108:no38 */
#pragma omp flush

/* == GROUP BARRIER38 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][38]++;
while (M108_CL0_PC0_barrier_flg[0][1][38] < M108_CL0_PC0_barrier_flg[0][0][38]) {
}
M108_CL0_PC0_barrier_flg[1][0][38]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no38 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb68 ==*/
      M108_CL0_PC0_V111 = printf((&*" RMS-norms of residual\n"));
/* barrier_start:pe0:module108:no39 */
#pragma omp flush

/* == GROUP BARRIER39 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][39]++;
while (M108_CL0_PC0_barrier_flg[0][1][39] < M108_CL0_PC0_barrier_flg[0][0][39]) {
}
M108_CL0_PC0_barrier_flg[1][0][39]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no39 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb69 ==*/
}
/* barrier_start:pe0:module108:no40 */
#pragma omp flush

/* == GROUP BARRIER40 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][40]++;
while (M108_CL0_PC0_barrier_flg[0][1][40] < M108_CL0_PC0_barrier_flg[0][0][40]) {
}
M108_CL0_PC0_barrier_flg[1][0][40]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no40 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block70 ==*/
L20016:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=8) == */
M108_CL0_PC0_SS_MTG_COUNT8[0] = M108_CL0_PC0_SS_MTG_COUNT8[0] + 1;

#pragma omp flush
M108_CL0_PC0_SCHE_FLG8[1] = 1;
#pragma omp flush
/* == verify#block1.block70.loop1 ==*/
L40048:;
/* @mtstart:pe0:module108:mt1@ */
      for (m_NO131 = 0 ; m_NO131 <= 4 ; m_NO131 += 1){
/* == verify#block1.block70.loop1.bb1 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.block70.loop1.bb2 ==*/
      M108_CL0_PC0_V112 = printf((&*"          %2d%20.13e\n"),m_NO131,M108_CL0_PC0_xcr[m_NO131][0]);
/* == verify#block1.block70.loop1.bb3 ==*/
      goto L47;
/* == verify#block1.block70.loop1.bb4 ==*/
}
if (M108_CL0_PC0_xcrdif[m_NO131][0]>M108_CL0_PC0_epsilon) {
 /* == verify#block1.block70.loop1.bb5 ==*/
      *(verified) = 0;
/* == verify#block1.block70.loop1.bb6 ==*/
      M108_CL0_PC0_V113 = printf((&*" FAILURE: %2d%20.13e%20.13e%20.13e\n"),m_NO131,M108_CL0_PC0_xcr[m_NO131][0],M108_CL0_PC0_xcrref[m_NO131][0],M108_CL0_PC0_xcrdif[m_NO131][0]);
/* == verify#block1.block70.loop1.bb7 ==*/
/* == verify#block1.block70.loop1.bb8 ==*/
} else {
/* == verify#block1.block70.loop1.bb9 ==*/
      M108_CL0_PC0_V114 = printf((&*"          %2d%20.13e%20.13e%20.13e\n"),m_NO131,M108_CL0_PC0_xcr[m_NO131][0],M108_CL0_PC0_xcrref[m_NO131][0],M108_CL0_PC0_xcrdif[m_NO131][0]);
/* == verify#block1.block70.loop1.bb10 ==*/
}
/* == verify#block1.block70.loop1.bb11 ==*/
L47:;
      }

/* @mtend:pe0:module108:mt1@ */
/* == MT8.1 END == */
while(M108_CL0_PC0_STASCHE_END_FLAG8[1][0] != M108_CL0_PC0_SS_MTG_COUNT8[0]) {
}
M108_CL0_PC0_STASCHE_END_FLAG8[0][1] = M108_CL0_PC0_SS_MTG_COUNT8[0];
/* == verify#block1.block70.emt2 ==*/
L40049:;
/* @mtstart:pe0:module108:mt2@ */
      goto L67;

/* @mtend:pe0:module108:mt2@ */
/* == MT8.2 END == */
/* == Hierarchy H:8 END == */
L67:;
/* barrier_start:pe0:module108:no41 */
#pragma omp flush

/* == GROUP BARRIER41 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][41]++;
while (M108_CL0_PC0_barrier_flg[0][1][41] < M108_CL0_PC0_barrier_flg[0][0][41]) {
}
M108_CL0_PC0_barrier_flg[1][0][41]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no41 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb71 ==*/
if ((int)(class[0])!=85) {
 /* == verify#block1.bb72 ==*/
      M108_CL0_PC0_V115 = printf((&*" Comparison of RMS-norms of solution error\n"));
/* barrier_start:pe0:module108:no42 */
#pragma omp flush

/* == GROUP BARRIER42 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][42]++;
while (M108_CL0_PC0_barrier_flg[0][1][42] < M108_CL0_PC0_barrier_flg[0][0][42]) {
}
M108_CL0_PC0_barrier_flg[1][0][42]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no42 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb73 ==*/
/* == verify#block1.bb74 ==*/
} else {
/* barrier_start:pe0:module108:no43 */
#pragma omp flush

/* == GROUP BARRIER43 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][43]++;
while (M108_CL0_PC0_barrier_flg[0][1][43] < M108_CL0_PC0_barrier_flg[0][0][43]) {
}
M108_CL0_PC0_barrier_flg[1][0][43]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no43 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb75 ==*/
      M108_CL0_PC0_V116 = printf((&*" RMS-norms of solution error\n"));
/* barrier_start:pe0:module108:no44 */
#pragma omp flush

/* == GROUP BARRIER44 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][44]++;
while (M108_CL0_PC0_barrier_flg[0][1][44] < M108_CL0_PC0_barrier_flg[0][0][44]) {
}
M108_CL0_PC0_barrier_flg[1][0][44]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no44 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb76 ==*/
}
/* barrier_start:pe0:module108:no45 */
#pragma omp flush

/* == GROUP BARRIER45 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][45]++;
while (M108_CL0_PC0_barrier_flg[0][1][45] < M108_CL0_PC0_barrier_flg[0][0][45]) {
}
M108_CL0_PC0_barrier_flg[1][0][45]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no45 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block77 ==*/
L20018:;
/* == STASCHE VARIABLE INITIALIZE (mtg_id=9) == */
M108_CL0_PC0_SS_MTG_COUNT9[0] = M108_CL0_PC0_SS_MTG_COUNT9[0] + 1;

#pragma omp flush
M108_CL0_PC0_SCHE_FLG9[1] = 1;
#pragma omp flush
/* == verify#block1.block77.loop1 ==*/
L40050:;
/* @mtstart:pe0:module108:mt1@ */
      for (m_NO132 = 0 ; m_NO132 <= 4 ; m_NO132 += 1){
/* == verify#block1.block77.loop1.bb1 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.block77.loop1.bb2 ==*/
      M108_CL0_PC0_V117 = printf((&*"          %2d%20.13e\n"),m_NO132,M108_CL0_PC0_xce[m_NO132]);
/* == verify#block1.block77.loop1.bb3 ==*/
      goto L58;
/* == verify#block1.block77.loop1.bb4 ==*/
}
if (M108_CL0_PC0_xcedif[m_NO132][0]>M108_CL0_PC0_epsilon) {
 /* == verify#block1.block77.loop1.bb5 ==*/
      *(verified) = 0;
/* == verify#block1.block77.loop1.bb6 ==*/
      M108_CL0_PC0_V118 = printf((&*" FAILURE: %2d%20.13e%20.13e%20.13e\n"),m_NO132,M108_CL0_PC0_xce[m_NO132],M108_CL0_PC0_xceref[m_NO132][0],M108_CL0_PC0_xcedif[m_NO132][0]);
/* == verify#block1.block77.loop1.bb7 ==*/
/* == verify#block1.block77.loop1.bb8 ==*/
} else {
/* == verify#block1.block77.loop1.bb9 ==*/
      M108_CL0_PC0_V119 = printf((&*"          %2d%20.13e%20.13e%20.13e\n"),m_NO132,M108_CL0_PC0_xce[m_NO132],M108_CL0_PC0_xceref[m_NO132][0],M108_CL0_PC0_xcedif[m_NO132][0]);
/* == verify#block1.block77.loop1.bb10 ==*/
}
/* == verify#block1.block77.loop1.bb11 ==*/
L58:;
      }

/* @mtend:pe0:module108:mt1@ */
/* == MT9.1 END == */
while(M108_CL0_PC0_STASCHE_END_FLAG9[1][0] != M108_CL0_PC0_SS_MTG_COUNT9[0]) {
}
M108_CL0_PC0_STASCHE_END_FLAG9[0][1] = M108_CL0_PC0_SS_MTG_COUNT9[0];
/* == verify#block1.block77.emt2 ==*/
L40051:;
/* @mtstart:pe0:module108:mt2@ */
      goto L68;

/* @mtend:pe0:module108:mt2@ */
/* == MT9.2 END == */
/* == Hierarchy H:9 END == */
L68:;
/* barrier_start:pe0:module108:no46 */
#pragma omp flush

/* == GROUP BARRIER46 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][46]++;
while (M108_CL0_PC0_barrier_flg[0][1][46] < M108_CL0_PC0_barrier_flg[0][0][46]) {
}
M108_CL0_PC0_barrier_flg[1][0][46]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no46 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb78 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.bb79 ==*/
      M108_CL0_PC0_V120 = printf((&*" No reference values provided\n"));
/* barrier_start:pe0:module108:no47 */
#pragma omp flush

/* == GROUP BARRIER47 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][47]++;
while (M108_CL0_PC0_barrier_flg[0][1][47] < M108_CL0_PC0_barrier_flg[0][0][47]) {
}
M108_CL0_PC0_barrier_flg[1][0][47]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no47 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb80 ==*/
      M108_CL0_PC0_V121 = printf((&*" No verification performed\n"));
/* barrier_start:pe0:module108:no48 */
#pragma omp flush

/* == GROUP BARRIER48 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][48]++;
while (M108_CL0_PC0_barrier_flg[0][1][48] < M108_CL0_PC0_barrier_flg[0][0][48]) {
}
M108_CL0_PC0_barrier_flg[1][0][48]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no48 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb81 ==*/
      goto L62;
/* == verify#block1.bb82 ==*/
}
if (verified[0]==1) {
 /* == verify#block1.bb83 ==*/
      M108_CL0_PC0_V122 = printf((&*" Verification Successful\n"));
/* barrier_start:pe0:module108:no49 */
#pragma omp flush

/* == GROUP BARRIER49 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][49]++;
while (M108_CL0_PC0_barrier_flg[0][1][49] < M108_CL0_PC0_barrier_flg[0][0][49]) {
}
M108_CL0_PC0_barrier_flg[1][0][49]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no49 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb84 ==*/
/* == verify#block1.bb85 ==*/
} else {
/* barrier_start:pe0:module108:no50 */
#pragma omp flush

/* == GROUP BARRIER50 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][50]++;
while (M108_CL0_PC0_barrier_flg[0][1][50] < M108_CL0_PC0_barrier_flg[0][0][50]) {
}
M108_CL0_PC0_barrier_flg[1][0][50]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no50 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb86 ==*/
      M108_CL0_PC0_V123 = printf((&*" Verification failed\n"));
/* barrier_start:pe0:module108:no51 */
#pragma omp flush

/* == GROUP BARRIER51 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][51]++;
while (M108_CL0_PC0_barrier_flg[0][1][51] < M108_CL0_PC0_barrier_flg[0][0][51]) {
}
M108_CL0_PC0_barrier_flg[1][0][51]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no51 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb87 ==*/
}
/* barrier_start:pe0:module108:no52 */
#pragma omp flush

/* == GROUP BARRIER52 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][52]++;
while (M108_CL0_PC0_barrier_flg[0][1][52] < M108_CL0_PC0_barrier_flg[0][0][52]) {
}
M108_CL0_PC0_barrier_flg[1][0][52]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no52 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb88 ==*/
L62:;
/* barrier_start:pe0:module108:no53 */
#pragma omp flush

/* == GROUP BARRIER53 0(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][0][53]++;
while (M108_CL0_PC0_barrier_flg[0][1][53] < M108_CL0_PC0_barrier_flg[0][0][53]) {
}
M108_CL0_PC0_barrier_flg[1][0][53]++;

#pragma omp flush
/* barrier_finish:pe0:module108:no53 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb89 ==*/
      goto L69;
L69:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 108: verify */
/* ******************* */
static void verify_PE1(int no_time_steps,
      char* class,
      int* verified)
{
      int m_NO128/* m */;
      int m_NO129/* m */;
      int m_NO130/* m */;
      int m_NO131/* m */;
      int m_NO132/* m */;
      int NEWV00133/* NEWV00133 */;
      int NEWV00134/* NEWV00134 */;

/* @decl:pe1:module108@ */
/* == verify#block1 ==*/
/* == verify#block1.bb1 ==*/
/* barrier_start:pe1:module108:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][1]++;
while (M108_CL0_PC0_barrier_flg[1][0][1] < M108_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block2 ==*/
L20020:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=6) == */
M108_CL0_PC0_SS_MTG_COUNT6[1] = M108_CL0_PC0_SS_MTG_COUNT6[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M108_CL0_PC0_SCHE_FLG6[1] != 1) {
}
M108_CL0_PC0_SCHE_FLG6[1] = 0;
#pragma omp flush
M108_CL0_PC0_STASCHE_END_FLAG6[1][0] = M108_CL0_PC0_SS_MTG_COUNT6[1];
while(M108_CL0_PC0_STASCHE_END_FLAG6[0][1] != M108_CL0_PC0_SS_MTG_COUNT6[1]) {
}
/* == verify#block1.block2.emt2 ==*/
L40045:;
/* @mtstart:pe1:module108:mt2@ */
      goto L65;

/* @mtend:pe1:module108:mt2@ */
/* == MT6.2 END == */
/* == Hierarchy H:6 END == */
L65:;
/* barrier_start:pe1:module108:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][2]++;
while (M108_CL0_PC0_barrier_flg[1][0][2] < M108_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.sb3 ==*/
      compute_rhs_PE1();
/* barrier_start:pe1:module108:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][3]++;
while (M108_CL0_PC0_barrier_flg[1][0][3] < M108_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block4 ==*/
L20022:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=7) == */
M108_CL0_PC0_SS_MTG_COUNT7[1] = M108_CL0_PC0_SS_MTG_COUNT7[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M108_CL0_PC0_SCHE_FLG7[1] != 1) {
}
M108_CL0_PC0_SCHE_FLG7[1] = 0;
#pragma omp flush
M108_CL0_PC0_STASCHE_END_FLAG7[1][0] = M108_CL0_PC0_SS_MTG_COUNT7[1];
while(M108_CL0_PC0_STASCHE_END_FLAG7[0][1] != M108_CL0_PC0_SS_MTG_COUNT7[1]) {
}
/* == verify#block1.block4.emt2 ==*/
L40047:;
/* @mtstart:pe1:module108:mt2@ */
      goto L66;

/* @mtend:pe1:module108:mt2@ */
/* == MT7.2 END == */
/* == Hierarchy H:7 END == */
L66:;
/* barrier_start:pe1:module108:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][4]++;
while (M108_CL0_PC0_barrier_flg[1][0][4] < M108_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall5 ==*/
      for (m_NO128 = 5/ 2 ; m_NO128 <= 4 ; m_NO128 += 1){
/* == verify#block1.doall5.bb1 ==*/
      M108_CL0_PC0_xcr[m_NO128][0] = M108_CL0_PC0_xcr[m_NO128][0]/ dt;
      }
/* barrier_start:pe1:module108:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][5]++;
while (M108_CL0_PC0_barrier_flg[1][0][5] < M108_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb6 ==*/
/* barrier_start:pe1:module108:no6 */
#pragma omp flush

/* == GROUP BARRIER6 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][6]++;
while (M108_CL0_PC0_barrier_flg[1][0][6] < M108_CL0_PC0_barrier_flg[0][1][6]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall7 ==*/
      for (m_NO129 = 5/ 2 ; m_NO129 <= 4 ; m_NO129 += 1){
/* == verify#block1.doall7.bb1 ==*/
      M108_CL0_PC0_xcrref[m_NO129][0] = 1.0000000000000000E+00;
      M108_CL0_PC0_xceref[m_NO129][0] = 1.0000000000000000E+00;
      }
/* barrier_start:pe1:module108:no7 */
#pragma omp flush

/* == GROUP BARRIER7 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][7]++;
while (M108_CL0_PC0_barrier_flg[1][0][7] < M108_CL0_PC0_barrier_flg[0][1][7]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb8 ==*/
if (!(grid_points[0]==12)) goto L14;
/* == verify#block1.bb9 ==*/
if (!(grid_points[1]==12)) goto L14;
/* == verify#block1.bb10 ==*/
if (!(grid_points[2]==12)) goto L14;
/* == verify#block1.bb11 ==*/
if (!(no_time_steps==60)) goto L14;
/* == verify#block1.bb12 ==*/
/* barrier_start:pe1:module108:no8 */
#pragma omp flush

/* == GROUP BARRIER8 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][8]++;
while (M108_CL0_PC0_barrier_flg[1][0][8] < M108_CL0_PC0_barrier_flg[0][1][8]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L13;
/* == verify#block1.bb13 ==*/
L14:;
/* barrier_start:pe1:module108:no9 */
#pragma omp flush

/* == GROUP BARRIER9 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][9]++;
while (M108_CL0_PC0_barrier_flg[1][0][9] < M108_CL0_PC0_barrier_flg[0][1][9]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb14 ==*/
L13:;
if (M108_CL0_PC0_V101!=0) {
 /* == verify#block1.bb15 ==*/
/* barrier_start:pe1:module108:no10 */
#pragma omp flush

/* == GROUP BARRIER10 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][10]++;
while (M108_CL0_PC0_barrier_flg[1][0][10] < M108_CL0_PC0_barrier_flg[0][1][10]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L12;
/* == verify#block1.bb16 ==*/
}
if (!(grid_points[0]==24)) goto L18;
/* == verify#block1.bb17 ==*/
if (!(grid_points[1]==24)) goto L18;
/* == verify#block1.bb18 ==*/
if (!(grid_points[2]==24)) goto L18;
/* == verify#block1.bb19 ==*/
if (!(no_time_steps==200)) goto L18;
/* == verify#block1.bb20 ==*/
/* barrier_start:pe1:module108:no11 */
#pragma omp flush

/* == GROUP BARRIER11 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][11]++;
while (M108_CL0_PC0_barrier_flg[1][0][11] < M108_CL0_PC0_barrier_flg[0][1][11]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L17;
/* == verify#block1.bb21 ==*/
L18:;
/* barrier_start:pe1:module108:no12 */
#pragma omp flush

/* == GROUP BARRIER12 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][12]++;
while (M108_CL0_PC0_barrier_flg[1][0][12] < M108_CL0_PC0_barrier_flg[0][1][12]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb22 ==*/
L17:;
if (M108_CL0_PC0_V102!=0) {
 /* == verify#block1.bb23 ==*/
/* barrier_start:pe1:module108:no13 */
#pragma omp flush

/* == GROUP BARRIER13 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][13]++;
while (M108_CL0_PC0_barrier_flg[1][0][13] < M108_CL0_PC0_barrier_flg[0][1][13]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L16;
/* == verify#block1.bb24 ==*/
}
if (!(grid_points[0]==64)) goto L22;
/* == verify#block1.bb25 ==*/
if (!(grid_points[1]==64)) goto L22;
/* == verify#block1.bb26 ==*/
if (!(grid_points[2]==64)) goto L22;
/* == verify#block1.bb27 ==*/
if (!(no_time_steps==200)) goto L22;
/* == verify#block1.bb28 ==*/
/* barrier_start:pe1:module108:no14 */
#pragma omp flush

/* == GROUP BARRIER14 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][14]++;
while (M108_CL0_PC0_barrier_flg[1][0][14] < M108_CL0_PC0_barrier_flg[0][1][14]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L21;
/* == verify#block1.bb29 ==*/
L22:;
/* barrier_start:pe1:module108:no15 */
#pragma omp flush

/* == GROUP BARRIER15 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][15]++;
while (M108_CL0_PC0_barrier_flg[1][0][15] < M108_CL0_PC0_barrier_flg[0][1][15]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb30 ==*/
L21:;
if (M108_CL0_PC0_V103!=0) {
 /* == verify#block1.bb31 ==*/
/* barrier_start:pe1:module108:no16 */
#pragma omp flush

/* == GROUP BARRIER16 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][16]++;
while (M108_CL0_PC0_barrier_flg[1][0][16] < M108_CL0_PC0_barrier_flg[0][1][16]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L20;
/* == verify#block1.bb32 ==*/
}
if (!(grid_points[0]==102)) goto L26;
/* == verify#block1.bb33 ==*/
if (!(grid_points[1]==102)) goto L26;
/* == verify#block1.bb34 ==*/
if (!(grid_points[2]==102)) goto L26;
/* == verify#block1.bb35 ==*/
if (!(no_time_steps==200)) goto L26;
/* == verify#block1.bb36 ==*/
/* barrier_start:pe1:module108:no17 */
#pragma omp flush

/* == GROUP BARRIER17 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][17]++;
while (M108_CL0_PC0_barrier_flg[1][0][17] < M108_CL0_PC0_barrier_flg[0][1][17]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L25;
/* == verify#block1.bb37 ==*/
L26:;
/* barrier_start:pe1:module108:no18 */
#pragma omp flush

/* == GROUP BARRIER18 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][18]++;
while (M108_CL0_PC0_barrier_flg[1][0][18] < M108_CL0_PC0_barrier_flg[0][1][18]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb38 ==*/
L25:;
if (M108_CL0_PC0_V104!=0) {
 /* == verify#block1.bb39 ==*/
/* barrier_start:pe1:module108:no19 */
#pragma omp flush

/* == GROUP BARRIER19 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][19]++;
while (M108_CL0_PC0_barrier_flg[1][0][19] < M108_CL0_PC0_barrier_flg[0][1][19]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L24;
/* == verify#block1.bb40 ==*/
}
if (!(grid_points[0]==162)) goto L30;
/* == verify#block1.bb41 ==*/
if (!(grid_points[1]==162)) goto L30;
/* == verify#block1.bb42 ==*/
if (!(grid_points[2]==162)) goto L30;
/* == verify#block1.bb43 ==*/
if (!(no_time_steps==200)) goto L30;
/* == verify#block1.bb44 ==*/
/* barrier_start:pe1:module108:no20 */
#pragma omp flush

/* == GROUP BARRIER20 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][20]++;
while (M108_CL0_PC0_barrier_flg[1][0][20] < M108_CL0_PC0_barrier_flg[0][1][20]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      goto L29;
/* == verify#block1.bb45 ==*/
L30:;
/* barrier_start:pe1:module108:no21 */
#pragma omp flush

/* == GROUP BARRIER21 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][21]++;
while (M108_CL0_PC0_barrier_flg[1][0][21] < M108_CL0_PC0_barrier_flg[0][1][21]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb46 ==*/
L29:;
if (M108_CL0_PC0_V105!=0) {
 /* == verify#block1.bb47 ==*/
/* barrier_start:pe1:module108:no22 */
#pragma omp flush

/* == GROUP BARRIER22 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][22]++;
while (M108_CL0_PC0_barrier_flg[1][0][22] < M108_CL0_PC0_barrier_flg[0][1][22]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb48 ==*/
} else {
/* barrier_start:pe1:module108:no23 */
#pragma omp flush

/* == GROUP BARRIER23 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][23]++;
while (M108_CL0_PC0_barrier_flg[1][0][23] < M108_CL0_PC0_barrier_flg[0][1][23]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb49 ==*/
}
/* barrier_start:pe1:module108:no24 */
#pragma omp flush

/* == GROUP BARRIER24 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][24]++;
while (M108_CL0_PC0_barrier_flg[1][0][24] < M108_CL0_PC0_barrier_flg[0][1][24]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb50 ==*/
L24:;
/* barrier_start:pe1:module108:no25 */
#pragma omp flush

/* == GROUP BARRIER25 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][25]++;
while (M108_CL0_PC0_barrier_flg[1][0][25] < M108_CL0_PC0_barrier_flg[0][1][25]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb51 ==*/
L20:;
/* barrier_start:pe1:module108:no26 */
#pragma omp flush

/* == GROUP BARRIER26 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][26]++;
while (M108_CL0_PC0_barrier_flg[1][0][26] < M108_CL0_PC0_barrier_flg[0][1][26]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb52 ==*/
L16:;
/* barrier_start:pe1:module108:no27 */
#pragma omp flush

/* == GROUP BARRIER27 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][27]++;
while (M108_CL0_PC0_barrier_flg[1][0][27] < M108_CL0_PC0_barrier_flg[0][1][27]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb53 ==*/
L12:;
/* barrier_start:pe1:module108:no28 */
#pragma omp flush

/* == GROUP BARRIER28 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][28]++;
while (M108_CL0_PC0_barrier_flg[1][0][28] < M108_CL0_PC0_barrier_flg[0][1][28]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.doall54 ==*/
      for (m_NO130 = 5/ 2 ; m_NO130 <= 4 ; m_NO130 += 1){
/* == verify#block1.doall54.bb1 ==*/
      M108_CL0_PC0_xcrdif[m_NO130][0] = fabs((M108_CL0_PC0_xcr[m_NO130][0]-M108_CL0_PC0_xcrref[m_NO130][0])/ M108_CL0_PC0_xcrref[m_NO130][0]);
      M108_CL0_PC0_xcedif[m_NO130][0] = fabs((M108_CL0_PC0_xce[m_NO130]-M108_CL0_PC0_xceref[m_NO130][0])/ M108_CL0_PC0_xceref[m_NO130][0]);
      }
/* barrier_start:pe1:module108:no29 */
#pragma omp flush

/* == GROUP BARRIER29 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][29]++;
while (M108_CL0_PC0_barrier_flg[1][0][29] < M108_CL0_PC0_barrier_flg[0][1][29]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb55 ==*/
      NEWV00134 = (int)(class[0])!=85;
/* barrier_start:pe1:module108:no30 */
#pragma omp flush

/* == GROUP BARRIER30 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][30]++;
while (M108_CL0_PC0_barrier_flg[1][0][30] < M108_CL0_PC0_barrier_flg[0][1][30]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
if (!(NEWV00134)) goto L36;
/* == verify#block1.bb56 ==*/
/* barrier_start:pe1:module108:no31 */
#pragma omp flush

/* == GROUP BARRIER31 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][31]++;
while (M108_CL0_PC0_barrier_flg[1][0][31] < M108_CL0_PC0_barrier_flg[0][1][31]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb57 ==*/
/* barrier_start:pe1:module108:no32 */
#pragma omp flush

/* == GROUP BARRIER32 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][32]++;
while (M108_CL0_PC0_barrier_flg[1][0][32] < M108_CL0_PC0_barrier_flg[0][1][32]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb58 ==*/
if (!(fabs(dt-M108_CL0_PC0_dtref)>M108_CL0_PC0_epsilon)) goto L38;
/* == verify#block1.bb59 ==*/
/* barrier_start:pe1:module108:no33 */
#pragma omp flush

/* == GROUP BARRIER33 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][33]++;
while (M108_CL0_PC0_barrier_flg[1][0][33] < M108_CL0_PC0_barrier_flg[0][1][33]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb60 ==*/
/* barrier_start:pe1:module108:no34 */
#pragma omp flush

/* == GROUP BARRIER34 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][34]++;
while (M108_CL0_PC0_barrier_flg[1][0][34] < M108_CL0_PC0_barrier_flg[0][1][34]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no34 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb61 ==*/
L38:;
      goto L37;
/* == verify#block1.bb62 ==*/
L36:;
/* barrier_start:pe1:module108:no35 */
#pragma omp flush

/* == GROUP BARRIER35 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][35]++;
while (M108_CL0_PC0_barrier_flg[1][0][35] < M108_CL0_PC0_barrier_flg[0][1][35]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no35 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb63 ==*/
/* barrier_start:pe1:module108:no36 */
#pragma omp flush

/* == GROUP BARRIER36 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][36]++;
while (M108_CL0_PC0_barrier_flg[1][0][36] < M108_CL0_PC0_barrier_flg[0][1][36]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no36 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb64 ==*/
L37:;
if ((int)(class[0])!=85) {
 /* == verify#block1.bb65 ==*/
/* barrier_start:pe1:module108:no37 */
#pragma omp flush

/* == GROUP BARRIER37 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][37]++;
while (M108_CL0_PC0_barrier_flg[1][0][37] < M108_CL0_PC0_barrier_flg[0][1][37]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no37 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb66 ==*/
/* == verify#block1.bb67 ==*/
} else {
/* barrier_start:pe1:module108:no38 */
#pragma omp flush

/* == GROUP BARRIER38 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][38]++;
while (M108_CL0_PC0_barrier_flg[1][0][38] < M108_CL0_PC0_barrier_flg[0][1][38]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no38 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb68 ==*/
/* barrier_start:pe1:module108:no39 */
#pragma omp flush

/* == GROUP BARRIER39 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][39]++;
while (M108_CL0_PC0_barrier_flg[1][0][39] < M108_CL0_PC0_barrier_flg[0][1][39]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no39 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb69 ==*/
}
/* barrier_start:pe1:module108:no40 */
#pragma omp flush

/* == GROUP BARRIER40 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][40]++;
while (M108_CL0_PC0_barrier_flg[1][0][40] < M108_CL0_PC0_barrier_flg[0][1][40]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no40 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block70 ==*/
L20024:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=8) == */
M108_CL0_PC0_SS_MTG_COUNT8[1] = M108_CL0_PC0_SS_MTG_COUNT8[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M108_CL0_PC0_SCHE_FLG8[1] != 1) {
}
M108_CL0_PC0_SCHE_FLG8[1] = 0;
#pragma omp flush
M108_CL0_PC0_STASCHE_END_FLAG8[1][0] = M108_CL0_PC0_SS_MTG_COUNT8[1];
while(M108_CL0_PC0_STASCHE_END_FLAG8[0][1] != M108_CL0_PC0_SS_MTG_COUNT8[1]) {
}
/* == verify#block1.block70.emt2 ==*/
L40049:;
/* @mtstart:pe1:module108:mt2@ */
      goto L67;

/* @mtend:pe1:module108:mt2@ */
/* == MT8.2 END == */
/* == Hierarchy H:8 END == */
L67:;
/* barrier_start:pe1:module108:no41 */
#pragma omp flush

/* == GROUP BARRIER41 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][41]++;
while (M108_CL0_PC0_barrier_flg[1][0][41] < M108_CL0_PC0_barrier_flg[0][1][41]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no41 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb71 ==*/
if ((int)(class[0])!=85) {
 /* == verify#block1.bb72 ==*/
/* barrier_start:pe1:module108:no42 */
#pragma omp flush

/* == GROUP BARRIER42 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][42]++;
while (M108_CL0_PC0_barrier_flg[1][0][42] < M108_CL0_PC0_barrier_flg[0][1][42]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no42 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb73 ==*/
/* == verify#block1.bb74 ==*/
} else {
/* barrier_start:pe1:module108:no43 */
#pragma omp flush

/* == GROUP BARRIER43 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][43]++;
while (M108_CL0_PC0_barrier_flg[1][0][43] < M108_CL0_PC0_barrier_flg[0][1][43]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no43 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb75 ==*/
/* barrier_start:pe1:module108:no44 */
#pragma omp flush

/* == GROUP BARRIER44 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][44]++;
while (M108_CL0_PC0_barrier_flg[1][0][44] < M108_CL0_PC0_barrier_flg[0][1][44]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no44 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb76 ==*/
}
/* barrier_start:pe1:module108:no45 */
#pragma omp flush

/* == GROUP BARRIER45 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][45]++;
while (M108_CL0_PC0_barrier_flg[1][0][45] < M108_CL0_PC0_barrier_flg[0][1][45]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no45 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.block77 ==*/
L20026:;
/* == STASCHE VARIABEL INITIALIZE (mtg_id=9) == */
M108_CL0_PC0_SS_MTG_COUNT9[1] = M108_CL0_PC0_SS_MTG_COUNT9[1] + 1;
/* == WAIT FOR STASCHE INITIALIZE == */
while(M108_CL0_PC0_SCHE_FLG9[1] != 1) {
}
M108_CL0_PC0_SCHE_FLG9[1] = 0;
#pragma omp flush
M108_CL0_PC0_STASCHE_END_FLAG9[1][0] = M108_CL0_PC0_SS_MTG_COUNT9[1];
while(M108_CL0_PC0_STASCHE_END_FLAG9[0][1] != M108_CL0_PC0_SS_MTG_COUNT9[1]) {
}
/* == verify#block1.block77.emt2 ==*/
L40051:;
/* @mtstart:pe1:module108:mt2@ */
      goto L68;

/* @mtend:pe1:module108:mt2@ */
/* == MT9.2 END == */
/* == Hierarchy H:9 END == */
L68:;
/* barrier_start:pe1:module108:no46 */
#pragma omp flush

/* == GROUP BARRIER46 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][46]++;
while (M108_CL0_PC0_barrier_flg[1][0][46] < M108_CL0_PC0_barrier_flg[0][1][46]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no46 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb78 ==*/
if ((int)(class[0])==85) {
 /* == verify#block1.bb79 ==*/
/* barrier_start:pe1:module108:no47 */
#pragma omp flush

/* == GROUP BARRIER47 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][47]++;
while (M108_CL0_PC0_barrier_flg[1][0][47] < M108_CL0_PC0_barrier_flg[0][1][47]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no47 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb80 ==*/
/* barrier_start:pe1:module108:no48 */
#pragma omp flush

/* == GROUP BARRIER48 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][48]++;
while (M108_CL0_PC0_barrier_flg[1][0][48] < M108_CL0_PC0_barrier_flg[0][1][48]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no48 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb81 ==*/
      goto L62;
/* == verify#block1.bb82 ==*/
}
if (verified[0]==1) {
 /* == verify#block1.bb83 ==*/
/* barrier_start:pe1:module108:no49 */
#pragma omp flush

/* == GROUP BARRIER49 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][49]++;
while (M108_CL0_PC0_barrier_flg[1][0][49] < M108_CL0_PC0_barrier_flg[0][1][49]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no49 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb84 ==*/
/* == verify#block1.bb85 ==*/
} else {
/* barrier_start:pe1:module108:no50 */
#pragma omp flush

/* == GROUP BARRIER50 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][50]++;
while (M108_CL0_PC0_barrier_flg[1][0][50] < M108_CL0_PC0_barrier_flg[0][1][50]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no50 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb86 ==*/
/* barrier_start:pe1:module108:no51 */
#pragma omp flush

/* == GROUP BARRIER51 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][51]++;
while (M108_CL0_PC0_barrier_flg[1][0][51] < M108_CL0_PC0_barrier_flg[0][1][51]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no51 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb87 ==*/
}
/* barrier_start:pe1:module108:no52 */
#pragma omp flush

/* == GROUP BARRIER52 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][52]++;
while (M108_CL0_PC0_barrier_flg[1][0][52] < M108_CL0_PC0_barrier_flg[0][1][52]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no52 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb88 ==*/
L62:;
/* barrier_start:pe1:module108:no53 */
#pragma omp flush

/* == GROUP BARRIER53 1(0,1) ==*/
M108_CL0_PC0_barrier_flg[0][1][53]++;
while (M108_CL0_PC0_barrier_flg[1][0][53] < M108_CL0_PC0_barrier_flg[0][1][53]) {
}

#pragma omp flush
/* barrier_finish:pe1:module108:no53 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == verify#block1.bb89 ==*/
      goto L69;
L69:;
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
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe0:module100@ */
/* == exact_solution#block1 ==*/
/* == exact_solution#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 100: exact_solution */
/* ******************* */
static void exact_solution_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe1:module100@ */
/* == exact_solution#block1 ==*/
/* == exact_solution#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 123: exact_solution_c1 */
/* ******************* */
static void exact_solution_c1_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe0:module123@ */
/* == exact_solution_c1#block1 ==*/
/* == exact_solution_c1#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution_c1#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution_c1#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 123: exact_solution_c1 */
/* ******************* */
static void exact_solution_c1_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe1:module123@ */
/* == exact_solution_c1#block1 ==*/
/* == exact_solution_c1#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution_c1#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution_c1#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 106: compute_rhs */
/* ******************* */
static void compute_rhs_PE0()
{
      double rho_inv_NO173/* rho_inv */;
      double uijk_NO174/* uijk */;
      double up1_NO175/* up1 */;
      double um1_NO176/* um1 */;
      double vijk_NO177/* vijk */;
      double vp1_NO178/* vp1 */;
      double vm1_NO179/* vm1 */;
      double wijk_NO180/* wijk */;
      double wp1_NO181/* wp1 */;
      double wm1_NO182/* wm1 */;
      int i_NO183/* i */;
      int k_NO184/* k */;
      int j_NO185/* j */;
      int i_NO186/* i */;
      int m_NO187/* m */;
      int k_NO188/* k */;
      int j_NO189/* j */;
      int i_NO190/* i */;
      int k_NO191/* k */;
      int j_NO192/* j */;
      int j_NO193/* j */;
      int m_NO194/* m */;
      int k_NO195/* k */;
      int j_NO196/* j */;
      int m_NO197/* m */;
      int k_NO198/* k */;
      int i_NO199/* i */;
      int m_NO200/* m */;
      int k_NO201/* k */;
      int j_NO202/* j */;
      int j_NO203/* j */;
      int m_NO204/* m */;
      int k_NO205/* k */;
      int j_NO206/* j */;
      int m_NO207/* m */;
      int k_NO208/* k */;
      int i_NO209/* i */;
      int k_NO210/* k */;
      int j_NO211/* j */;
      int i_NO212/* i */;
      int m_NO213/* m */;
      int k_NO214/* k */;
      int i_NO215/* i */;
      int m_NO216/* m */;
      int k_NO217/* k */;
      int i_NO218/* i */;
      int m_NO219/* m */;
      int k_NO220/* k */;
      int j_NO221/* j */;
      int i_NO222/* i */;
      int m_NO223/* m */;
      int k_NO224/* k */;
      int i_NO225/* i */;
      int m_NO226/* m */;
      int k_NO227/* k */;
      int i_NO228/* i */;
      int k_NO229/* k */;
      int j_NO230/* j */;
      int i_NO231/* i */;
      int m_NO232/* m */;
      int j_NO233/* j */;
      int i_NO234/* i */;
      int m_NO235/* m */;
      int j_NO236/* j */;
      int i_NO237/* i */;
      int m_NO238/* m */;
      int k_NO239/* k */;
      int j_NO240/* j */;
      int i_NO241/* i */;
      int m_NO242/* m */;
      int j_NO243/* j */;
      int i_NO244/* i */;
      int m_NO245/* m */;
      int j_NO246/* j */;
      int j_NO247/* j */;
      int i_NO248/* i */;
      int m_NO249/* m */;
      int k_NO250/* k */;

/* @decl:pe0:module106@ */
/* == compute_rhs#block1 ==*/
/* == compute_rhs#block1.doall1 ==*/
      for (i_NO183 = 0 ; i_NO183 <= grid_points[0]/ 2-1 ; i_NO183 += 1){
/* == compute_rhs#block1.doall1.loop1 ==*/
      for (j_NO185 = 0 ; j_NO185 <= grid_points[1]-1 ; j_NO185 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1 ==*/
      for (k_NO184 = 0 ; k_NO184 <= grid_points[2]-1 ; k_NO184 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1.bb1 ==*/
      rho_inv_NO173 = 1.0000000000000000E+00/ u[i_NO183][j_NO185][k_NO184][0];
      rho_i[i_NO183][j_NO185][k_NO184] = rho_inv_NO173;
      us[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][1]*rho_inv_NO173;
      vs[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][2]*rho_inv_NO173;
      ws[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][3]*rho_inv_NO173;
      square[i_NO183][j_NO185][k_NO184] = 5.0000000000000000E-01*(u[i_NO183][j_NO185][k_NO184][1]*u[i_NO183][j_NO185][k_NO184][1]+u[i_NO183][j_NO185][k_NO184][2]*u[i_NO183][j_NO185][k_NO184][2]+u[i_NO183][j_NO185][k_NO184][3]*u[i_NO183][j_NO185][k_NO184][3])*rho_inv_NO173;
      qs[i_NO183][j_NO185][k_NO184] = square[i_NO183][j_NO185][k_NO184]*rho_inv_NO173;
      }
      }
      }
/* barrier_start:pe0:module106:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][1]++;
while (M106_CL0_PC0_barrier_flg[0][1][1] < M106_CL0_PC0_barrier_flg[0][0][1]) {
}
M106_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall2 ==*/
      for (i_NO186 = 0 ; i_NO186 <= grid_points[0]/ 2-1 ; i_NO186 += 1){
/* == compute_rhs#block1.doall2.loop1 ==*/
      for (j_NO189 = 0 ; j_NO189 <= grid_points[1]-1 ; j_NO189 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1 ==*/
      for (k_NO188 = 0 ; k_NO188 <= grid_points[2]-1 ; k_NO188 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1 ==*/
      for (m_NO187 = 0 ; m_NO187 <= 4 ; m_NO187 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO186][j_NO189][k_NO188][m_NO187] = forcing[i_NO186][j_NO189][k_NO188][m_NO187];
      }
      }
      }
      }
/* barrier_start:pe0:module106:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][2]++;
while (M106_CL0_PC0_barrier_flg[0][1][2] < M106_CL0_PC0_barrier_flg[0][0][2]) {
}
M106_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall3 ==*/
      for (i_NO190 = 1 ; i_NO190 <= (grid_points[0]+(-2))/ 2 ; i_NO190 += 1){
/* == compute_rhs#block1.doall3.loop1 ==*/
      for (j_NO192 = 1 ; j_NO192 <= grid_points[1]-1-1 ; j_NO192 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1 ==*/
      for (k_NO191 = 1 ; k_NO191 <= grid_points[2]-1-1 ; k_NO191 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1.bb1 ==*/
      uijk_NO174 = us[i_NO190][j_NO192][k_NO191];
      up1_NO175 = us[i_NO190+1][j_NO192][k_NO191];
      um1_NO176 = us[i_NO190-1][j_NO192][k_NO191];
      rhs[i_NO190][j_NO192][k_NO191][0] = rhs[i_NO190][j_NO192][k_NO191][0]+dx1tx1*(u[i_NO190+1][j_NO192][k_NO191][0]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][0]+u[i_NO190-1][j_NO192][k_NO191][0])-tx2*(u[i_NO190+1][j_NO192][k_NO191][1]-u[i_NO190-1][j_NO192][k_NO191][1]);
      rhs[i_NO190][j_NO192][k_NO191][1] = rhs[i_NO190][j_NO192][k_NO191][1]+dx2tx1*(u[i_NO190+1][j_NO192][k_NO191][1]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][1]+u[i_NO190-1][j_NO192][k_NO191][1])+xxcon2*con43*(up1_NO175-2.0000000000000000E+00*uijk_NO174+um1_NO176)-tx2*(u[i_NO190+1][j_NO192][k_NO191][1]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][1]*um1_NO176+(u[i_NO190+1][j_NO192][k_NO191][4]-square[i_NO190+1][j_NO192][k_NO191]-u[i_NO190-1][j_NO192][k_NO191][4]+square[i_NO190-1][j_NO192][k_NO191])*c2);
      rhs[i_NO190][j_NO192][k_NO191][2] = rhs[i_NO190][j_NO192][k_NO191][2]+dx3tx1*(u[i_NO190+1][j_NO192][k_NO191][2]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][2]+u[i_NO190-1][j_NO192][k_NO191][2])+xxcon2*(vs[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*vs[i_NO190][j_NO192][k_NO191]+vs[i_NO190-1][j_NO192][k_NO191])-tx2*(u[i_NO190+1][j_NO192][k_NO191][2]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][2]*um1_NO176);
      rhs[i_NO190][j_NO192][k_NO191][3] = rhs[i_NO190][j_NO192][k_NO191][3]+dx4tx1*(u[i_NO190+1][j_NO192][k_NO191][3]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][3]+u[i_NO190-1][j_NO192][k_NO191][3])+xxcon2*(ws[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*ws[i_NO190][j_NO192][k_NO191]+ws[i_NO190-1][j_NO192][k_NO191])-tx2*(u[i_NO190+1][j_NO192][k_NO191][3]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][3]*um1_NO176);
      rhs[i_NO190][j_NO192][k_NO191][4] = rhs[i_NO190][j_NO192][k_NO191][4]+dx5tx1*(u[i_NO190+1][j_NO192][k_NO191][4]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][4]+u[i_NO190-1][j_NO192][k_NO191][4])+xxcon3*(qs[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*qs[i_NO190][j_NO192][k_NO191]+qs[i_NO190-1][j_NO192][k_NO191])+xxcon4*(up1_NO175*up1_NO175-2.0000000000000000E+00*uijk_NO174*uijk_NO174+um1_NO176*um1_NO176)+xxcon5*(u[i_NO190+1][j_NO192][k_NO191][4]*rho_i[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][4]*rho_i[i_NO190][j_NO192][k_NO191]+u[i_NO190-1][j_NO192][k_NO191][4]*rho_i[i_NO190-1][j_NO192][k_NO191])-tx2*((c1*u[i_NO190+1][j_NO192][k_NO191][4]-c2*square[i_NO190+1][j_NO192][k_NO191])*up1_NO175-(c1*u[i_NO190-1][j_NO192][k_NO191][4]-c2*square[i_NO190-1][j_NO192][k_NO191])*um1_NO176);
      }
      }
      }
/* barrier_start:pe0:module106:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][3]++;
while (M106_CL0_PC0_barrier_flg[0][1][3] < M106_CL0_PC0_barrier_flg[0][0][3]) {
}
M106_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb4 ==*/
      M106_CL0_PC0_i_NO95 = 1;
/* barrier_start:pe0:module106:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][4]++;
while (M106_CL0_PC0_barrier_flg[0][1][4] < M106_CL0_PC0_barrier_flg[0][0][4]) {
}
M106_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall5 ==*/
      for (j_NO193 = 1 ; j_NO193 <= (grid_points[1]+(-2))/ 2 ; j_NO193 += 1){
/* == compute_rhs#block1.doall5.loop1 ==*/
      for (k_NO195 = 1 ; k_NO195 <= grid_points[2]-1-1 ; k_NO195 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1 ==*/
      for (m_NO194 = 0 ; m_NO194 <= 4 ; m_NO194 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194] = rhs[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194]-dssp*(5.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO193][k_NO195][m_NO194]+u[M106_CL0_PC0_i_NO95+2][j_NO193][k_NO195][m_NO194]);
      }
      }
      }
/* barrier_start:pe0:module106:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][5]++;
while (M106_CL0_PC0_barrier_flg[0][1][5] < M106_CL0_PC0_barrier_flg[0][0][5]) {
}
M106_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb6 ==*/
      M106_CL0_PC0_i_NO95 = 2;
/* barrier_start:pe0:module106:no6 */
#pragma omp flush

/* == GROUP BARRIER6 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][6]++;
while (M106_CL0_PC0_barrier_flg[0][1][6] < M106_CL0_PC0_barrier_flg[0][0][6]) {
}
M106_CL0_PC0_barrier_flg[1][0][6]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall7 ==*/
      for (j_NO196 = 1 ; j_NO196 <= (grid_points[1]+(-2))/ 2 ; j_NO196 += 1){
/* == compute_rhs#block1.doall7.loop1 ==*/
      for (k_NO198 = 1 ; k_NO198 <= grid_points[2]-1-1 ; k_NO198 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1 ==*/
      for (m_NO197 = 0 ; m_NO197 <= 4 ; m_NO197 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197] = rhs[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197]-dssp*((-4.0000000000000000E+00)*u[M106_CL0_PC0_i_NO95-1][j_NO196][k_NO198][m_NO197]+6.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO196][k_NO198][m_NO197]+u[M106_CL0_PC0_i_NO95+2][j_NO196][k_NO198][m_NO197]);
      }
      }
      }
/* barrier_start:pe0:module106:no7 */
#pragma omp flush

/* == GROUP BARRIER7 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][7]++;
while (M106_CL0_PC0_barrier_flg[0][1][7] < M106_CL0_PC0_barrier_flg[0][0][7]) {
}
M106_CL0_PC0_barrier_flg[1][0][7]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall8 ==*/
      for (i_NO199 = 3 ; i_NO199 <= (grid_points[0]+(-6))/ 2+2 ; i_NO199 += 1){
/* == compute_rhs#block1.doall8.loop1 ==*/
      for (j_NO202 = 1 ; j_NO202 <= grid_points[1]-1-1 ; j_NO202 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1 ==*/
      for (k_NO201 = 1 ; k_NO201 <= grid_points[2]-1-1 ; k_NO201 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1 ==*/
      for (m_NO200 = 0 ; m_NO200 <= 4 ; m_NO200 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO199][j_NO202][k_NO201][m_NO200] = rhs[i_NO199][j_NO202][k_NO201][m_NO200]-dssp*(u[i_NO199-2][j_NO202][k_NO201][m_NO200]-4.0000000000000000E+00*u[i_NO199-1][j_NO202][k_NO201][m_NO200]+6.0000000000000000E+00*u[i_NO199][j_NO202][k_NO201][m_NO200]-4.0000000000000000E+00*u[i_NO199+1][j_NO202][k_NO201][m_NO200]+u[i_NO199+2][j_NO202][k_NO201][m_NO200]);
      }
      }
      }
      }
/* barrier_start:pe0:module106:no8 */
#pragma omp flush

/* == GROUP BARRIER8 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][8]++;
while (M106_CL0_PC0_barrier_flg[0][1][8] < M106_CL0_PC0_barrier_flg[0][0][8]) {
}
M106_CL0_PC0_barrier_flg[1][0][8]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb9 ==*/
      M106_CL0_PC0_i_NO95 = grid_points[0]-3;
/* barrier_start:pe0:module106:no9 */
#pragma omp flush

/* == GROUP BARRIER9 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][9]++;
while (M106_CL0_PC0_barrier_flg[0][1][9] < M106_CL0_PC0_barrier_flg[0][0][9]) {
}
M106_CL0_PC0_barrier_flg[1][0][9]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall10 ==*/
      for (j_NO203 = 1 ; j_NO203 <= (grid_points[1]+(-2))/ 2 ; j_NO203 += 1){
/* == compute_rhs#block1.doall10.loop1 ==*/
      for (k_NO205 = 1 ; k_NO205 <= grid_points[2]-1-1 ; k_NO205 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1 ==*/
      for (m_NO204 = 0 ; m_NO204 <= 4 ; m_NO204 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204] = rhs[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204]-dssp*(u[M106_CL0_PC0_i_NO95-2][j_NO203][k_NO205][m_NO204]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95-1][j_NO203][k_NO205][m_NO204]+6.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO203][k_NO205][m_NO204]);
      }
      }
      }
/* barrier_start:pe0:module106:no10 */
#pragma omp flush

/* == GROUP BARRIER10 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][10]++;
while (M106_CL0_PC0_barrier_flg[0][1][10] < M106_CL0_PC0_barrier_flg[0][0][10]) {
}
M106_CL0_PC0_barrier_flg[1][0][10]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb11 ==*/
      M106_CL0_PC0_i_NO95 = grid_points[0]-2;
/* barrier_start:pe0:module106:no11 */
#pragma omp flush

/* == GROUP BARRIER11 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][11]++;
while (M106_CL0_PC0_barrier_flg[0][1][11] < M106_CL0_PC0_barrier_flg[0][0][11]) {
}
M106_CL0_PC0_barrier_flg[1][0][11]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall12 ==*/
      for (j_NO206 = 1 ; j_NO206 <= (grid_points[1]+(-2))/ 2 ; j_NO206 += 1){
/* == compute_rhs#block1.doall12.loop1 ==*/
      for (k_NO208 = 1 ; k_NO208 <= grid_points[2]-1-1 ; k_NO208 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1 ==*/
      for (m_NO207 = 0 ; m_NO207 <= 4 ; m_NO207 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207] = rhs[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207]-dssp*(u[M106_CL0_PC0_i_NO95-2][j_NO206][k_NO208][m_NO207]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95-1][j_NO206][k_NO208][m_NO207]+5.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207]);
      }
      }
      }
/* barrier_start:pe0:module106:no12 */
#pragma omp flush

/* == GROUP BARRIER12 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][12]++;
while (M106_CL0_PC0_barrier_flg[0][1][12] < M106_CL0_PC0_barrier_flg[0][0][12]) {
}
M106_CL0_PC0_barrier_flg[1][0][12]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall13 ==*/
      for (i_NO209 = 1 ; i_NO209 <= (grid_points[0]+(-2))/ 2 ; i_NO209 += 1){
/* == compute_rhs#block1.doall13.loop1 ==*/
      for (j_NO211 = 1 ; j_NO211 <= grid_points[1]-1-1 ; j_NO211 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1 ==*/
      for (k_NO210 = 1 ; k_NO210 <= grid_points[2]-1-1 ; k_NO210 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1.bb1 ==*/
      vijk_NO177 = vs[i_NO209][j_NO211][k_NO210];
      vp1_NO178 = vs[i_NO209][j_NO211+1][k_NO210];
      vm1_NO179 = vs[i_NO209][j_NO211-1][k_NO210];
      rhs[i_NO209][j_NO211][k_NO210][0] = rhs[i_NO209][j_NO211][k_NO210][0]+dy1ty1*(u[i_NO209][j_NO211+1][k_NO210][0]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][0]+u[i_NO209][j_NO211-1][k_NO210][0])-ty2*(u[i_NO209][j_NO211+1][k_NO210][2]-u[i_NO209][j_NO211-1][k_NO210][2]);
      rhs[i_NO209][j_NO211][k_NO210][1] = rhs[i_NO209][j_NO211][k_NO210][1]+dy2ty1*(u[i_NO209][j_NO211+1][k_NO210][1]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][1]+u[i_NO209][j_NO211-1][k_NO210][1])+yycon2*(us[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*us[i_NO209][j_NO211][k_NO210]+us[i_NO209][j_NO211-1][k_NO210])-ty2*(u[i_NO209][j_NO211+1][k_NO210][1]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][1]*vm1_NO179);
      rhs[i_NO209][j_NO211][k_NO210][2] = rhs[i_NO209][j_NO211][k_NO210][2]+dy3ty1*(u[i_NO209][j_NO211+1][k_NO210][2]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][2]+u[i_NO209][j_NO211-1][k_NO210][2])+yycon2*con43*(vp1_NO178-2.0000000000000000E+00*vijk_NO177+vm1_NO179)-ty2*(u[i_NO209][j_NO211+1][k_NO210][2]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][2]*vm1_NO179+(u[i_NO209][j_NO211+1][k_NO210][4]-square[i_NO209][j_NO211+1][k_NO210]-u[i_NO209][j_NO211-1][k_NO210][4]+square[i_NO209][j_NO211-1][k_NO210])*c2);
      rhs[i_NO209][j_NO211][k_NO210][3] = rhs[i_NO209][j_NO211][k_NO210][3]+dy4ty1*(u[i_NO209][j_NO211+1][k_NO210][3]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][3]+u[i_NO209][j_NO211-1][k_NO210][3])+yycon2*(ws[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*ws[i_NO209][j_NO211][k_NO210]+ws[i_NO209][j_NO211-1][k_NO210])-ty2*(u[i_NO209][j_NO211+1][k_NO210][3]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][3]*vm1_NO179);
      rhs[i_NO209][j_NO211][k_NO210][4] = rhs[i_NO209][j_NO211][k_NO210][4]+dy5ty1*(u[i_NO209][j_NO211+1][k_NO210][4]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][4]+u[i_NO209][j_NO211-1][k_NO210][4])+yycon3*(qs[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*qs[i_NO209][j_NO211][k_NO210]+qs[i_NO209][j_NO211-1][k_NO210])+yycon4*(vp1_NO178*vp1_NO178-2.0000000000000000E+00*vijk_NO177*vijk_NO177+vm1_NO179*vm1_NO179)+yycon5*(u[i_NO209][j_NO211+1][k_NO210][4]*rho_i[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][4]*rho_i[i_NO209][j_NO211][k_NO210]+u[i_NO209][j_NO211-1][k_NO210][4]*rho_i[i_NO209][j_NO211-1][k_NO210])-ty2*((c1*u[i_NO209][j_NO211+1][k_NO210][4]-c2*square[i_NO209][j_NO211+1][k_NO210])*vp1_NO178-(c1*u[i_NO209][j_NO211-1][k_NO210][4]-c2*square[i_NO209][j_NO211-1][k_NO210])*vm1_NO179);
      }
      }
      }
/* barrier_start:pe0:module106:no13 */
#pragma omp flush

/* == GROUP BARRIER13 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][13]++;
while (M106_CL0_PC0_barrier_flg[0][1][13] < M106_CL0_PC0_barrier_flg[0][0][13]) {
}
M106_CL0_PC0_barrier_flg[1][0][13]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb14 ==*/
      M106_CL0_PC0_j_NO96 = 1;
/* barrier_start:pe0:module106:no14 */
#pragma omp flush

/* == GROUP BARRIER14 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][14]++;
while (M106_CL0_PC0_barrier_flg[0][1][14] < M106_CL0_PC0_barrier_flg[0][0][14]) {
}
M106_CL0_PC0_barrier_flg[1][0][14]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall15 ==*/
      for (i_NO212 = 1 ; i_NO212 <= (grid_points[0]+(-2))/ 2 ; i_NO212 += 1){
/* == compute_rhs#block1.doall15.loop1 ==*/
      for (k_NO214 = 1 ; k_NO214 <= grid_points[2]-1-1 ; k_NO214 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1 ==*/
      for (m_NO213 = 0 ; m_NO213 <= 4 ; m_NO213 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1.bb1 ==*/
      rhs[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213] = rhs[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213]-dssp*(5.0000000000000000E+00*u[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213]-4.0000000000000000E+00*u[i_NO212][M106_CL0_PC0_j_NO96+1][k_NO214][m_NO213]+u[i_NO212][M106_CL0_PC0_j_NO96+2][k_NO214][m_NO213]);
      }
      }
      }
/* barrier_start:pe0:module106:no15 */
#pragma omp flush

/* == GROUP BARRIER15 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][15]++;
while (M106_CL0_PC0_barrier_flg[0][1][15] < M106_CL0_PC0_barrier_flg[0][0][15]) {
}
M106_CL0_PC0_barrier_flg[1][0][15]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb16 ==*/
      M106_CL0_PC0_j_NO96 = 2;
/* barrier_start:pe0:module106:no16 */
#pragma omp flush

/* == GROUP BARRIER16 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][16]++;
while (M106_CL0_PC0_barrier_flg[0][1][16] < M106_CL0_PC0_barrier_flg[0][0][16]) {
}
M106_CL0_PC0_barrier_flg[1][0][16]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall17 ==*/
      for (i_NO215 = 1 ; i_NO215 <= (grid_points[0]+(-2))/ 2 ; i_NO215 += 1){
/* == compute_rhs#block1.doall17.loop1 ==*/
      for (k_NO217 = 1 ; k_NO217 <= grid_points[2]-1-1 ; k_NO217 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1 ==*/
      for (m_NO216 = 0 ; m_NO216 <= 4 ; m_NO216 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1.bb1 ==*/
      rhs[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216] = rhs[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216]-dssp*((-4.0000000000000000E+00)*u[i_NO215][M106_CL0_PC0_j_NO96-1][k_NO217][m_NO216]+6.0000000000000000E+00*u[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216]-4.0000000000000000E+00*u[i_NO215][M106_CL0_PC0_j_NO96+1][k_NO217][m_NO216]+u[i_NO215][M106_CL0_PC0_j_NO96+2][k_NO217][m_NO216]);
      }
      }
      }
/* barrier_start:pe0:module106:no17 */
#pragma omp flush

/* == GROUP BARRIER17 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][17]++;
while (M106_CL0_PC0_barrier_flg[0][1][17] < M106_CL0_PC0_barrier_flg[0][0][17]) {
}
M106_CL0_PC0_barrier_flg[1][0][17]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall18 ==*/
      for (i_NO218 = 1 ; i_NO218 <= (grid_points[0]+(-2))/ 2 ; i_NO218 += 1){
/* == compute_rhs#block1.doall18.loop1 ==*/
      for (j_NO221 = 3 ; j_NO221 <= grid_points[1]-3-1 ; j_NO221 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1 ==*/
      for (k_NO220 = 1 ; k_NO220 <= grid_points[2]-1-1 ; k_NO220 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1 ==*/
      for (m_NO219 = 0 ; m_NO219 <= 4 ; m_NO219 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO218][j_NO221][k_NO220][m_NO219] = rhs[i_NO218][j_NO221][k_NO220][m_NO219]-dssp*(u[i_NO218][j_NO221-2][k_NO220][m_NO219]-4.0000000000000000E+00*u[i_NO218][j_NO221-1][k_NO220][m_NO219]+6.0000000000000000E+00*u[i_NO218][j_NO221][k_NO220][m_NO219]-4.0000000000000000E+00*u[i_NO218][j_NO221+1][k_NO220][m_NO219]+u[i_NO218][j_NO221+2][k_NO220][m_NO219]);
      }
      }
      }
      }
/* barrier_start:pe0:module106:no18 */
#pragma omp flush

/* == GROUP BARRIER18 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][18]++;
while (M106_CL0_PC0_barrier_flg[0][1][18] < M106_CL0_PC0_barrier_flg[0][0][18]) {
}
M106_CL0_PC0_barrier_flg[1][0][18]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb19 ==*/
      M106_CL0_PC0_j_NO96 = grid_points[1]-3;
/* barrier_start:pe0:module106:no19 */
#pragma omp flush

/* == GROUP BARRIER19 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][19]++;
while (M106_CL0_PC0_barrier_flg[0][1][19] < M106_CL0_PC0_barrier_flg[0][0][19]) {
}
M106_CL0_PC0_barrier_flg[1][0][19]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall20 ==*/
      for (i_NO222 = 1 ; i_NO222 <= (grid_points[0]+(-2))/ 2 ; i_NO222 += 1){
/* == compute_rhs#block1.doall20.loop1 ==*/
      for (k_NO224 = 1 ; k_NO224 <= grid_points[2]-1-1 ; k_NO224 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1 ==*/
      for (m_NO223 = 0 ; m_NO223 <= 4 ; m_NO223 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1.bb1 ==*/
      rhs[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223] = rhs[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223]-dssp*(u[i_NO222][M106_CL0_PC0_j_NO96-2][k_NO224][m_NO223]-4.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96-1][k_NO224][m_NO223]+6.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223]-4.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96+1][k_NO224][m_NO223]);
      }
      }
      }
/* barrier_start:pe0:module106:no20 */
#pragma omp flush

/* == GROUP BARRIER20 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][20]++;
while (M106_CL0_PC0_barrier_flg[0][1][20] < M106_CL0_PC0_barrier_flg[0][0][20]) {
}
M106_CL0_PC0_barrier_flg[1][0][20]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb21 ==*/
      M106_CL0_PC0_j_NO96 = grid_points[1]-2;
/* barrier_start:pe0:module106:no21 */
#pragma omp flush

/* == GROUP BARRIER21 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][21]++;
while (M106_CL0_PC0_barrier_flg[0][1][21] < M106_CL0_PC0_barrier_flg[0][0][21]) {
}
M106_CL0_PC0_barrier_flg[1][0][21]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall22 ==*/
      for (i_NO225 = 1 ; i_NO225 <= (grid_points[0]+(-2))/ 2 ; i_NO225 += 1){
/* == compute_rhs#block1.doall22.loop1 ==*/
      for (k_NO227 = 1 ; k_NO227 <= grid_points[2]-1-1 ; k_NO227 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1 ==*/
      for (m_NO226 = 0 ; m_NO226 <= 4 ; m_NO226 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1.bb1 ==*/
      rhs[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226] = rhs[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226]-dssp*(u[i_NO225][M106_CL0_PC0_j_NO96-2][k_NO227][m_NO226]-4.0000000000000000E+00*u[i_NO225][M106_CL0_PC0_j_NO96-1][k_NO227][m_NO226]+5.0000000000000000E+00*u[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226]);
      }
      }
      }
/* barrier_start:pe0:module106:no22 */
#pragma omp flush

/* == GROUP BARRIER22 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][22]++;
while (M106_CL0_PC0_barrier_flg[0][1][22] < M106_CL0_PC0_barrier_flg[0][0][22]) {
}
M106_CL0_PC0_barrier_flg[1][0][22]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall23 ==*/
      for (i_NO228 = 1 ; i_NO228 <= (grid_points[0]+(-2))/ 2 ; i_NO228 += 1){
/* == compute_rhs#block1.doall23.loop1 ==*/
      for (j_NO230 = 1 ; j_NO230 <= grid_points[1]-1-1 ; j_NO230 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1 ==*/
      for (k_NO229 = 1 ; k_NO229 <= grid_points[2]-1-1 ; k_NO229 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1.bb1 ==*/
      wijk_NO180 = ws[i_NO228][j_NO230][k_NO229];
      wp1_NO181 = ws[i_NO228][j_NO230][k_NO229+1];
      wm1_NO182 = ws[i_NO228][j_NO230][k_NO229-1];
      rhs[i_NO228][j_NO230][k_NO229][0] = rhs[i_NO228][j_NO230][k_NO229][0]+dz1tz1*(u[i_NO228][j_NO230][k_NO229+1][0]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][0]+u[i_NO228][j_NO230][k_NO229-1][0])-tz2*(u[i_NO228][j_NO230][k_NO229+1][3]-u[i_NO228][j_NO230][k_NO229-1][3]);
      rhs[i_NO228][j_NO230][k_NO229][1] = rhs[i_NO228][j_NO230][k_NO229][1]+dz2tz1*(u[i_NO228][j_NO230][k_NO229+1][1]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][1]+u[i_NO228][j_NO230][k_NO229-1][1])+zzcon2*(us[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*us[i_NO228][j_NO230][k_NO229]+us[i_NO228][j_NO230][k_NO229-1])-tz2*(u[i_NO228][j_NO230][k_NO229+1][1]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][1]*wm1_NO182);
      rhs[i_NO228][j_NO230][k_NO229][2] = rhs[i_NO228][j_NO230][k_NO229][2]+dz3tz1*(u[i_NO228][j_NO230][k_NO229+1][2]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][2]+u[i_NO228][j_NO230][k_NO229-1][2])+zzcon2*(vs[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*vs[i_NO228][j_NO230][k_NO229]+vs[i_NO228][j_NO230][k_NO229-1])-tz2*(u[i_NO228][j_NO230][k_NO229+1][2]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][2]*wm1_NO182);
      rhs[i_NO228][j_NO230][k_NO229][3] = rhs[i_NO228][j_NO230][k_NO229][3]+dz4tz1*(u[i_NO228][j_NO230][k_NO229+1][3]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][3]+u[i_NO228][j_NO230][k_NO229-1][3])+zzcon2*con43*(wp1_NO181-2.0000000000000000E+00*wijk_NO180+wm1_NO182)-tz2*(u[i_NO228][j_NO230][k_NO229+1][3]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][3]*wm1_NO182+(u[i_NO228][j_NO230][k_NO229+1][4]-square[i_NO228][j_NO230][k_NO229+1]-u[i_NO228][j_NO230][k_NO229-1][4]+square[i_NO228][j_NO230][k_NO229-1])*c2);
      rhs[i_NO228][j_NO230][k_NO229][4] = rhs[i_NO228][j_NO230][k_NO229][4]+dz5tz1*(u[i_NO228][j_NO230][k_NO229+1][4]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][4]+u[i_NO228][j_NO230][k_NO229-1][4])+zzcon3*(qs[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*qs[i_NO228][j_NO230][k_NO229]+qs[i_NO228][j_NO230][k_NO229-1])+zzcon4*(wp1_NO181*wp1_NO181-2.0000000000000000E+00*wijk_NO180*wijk_NO180+wm1_NO182*wm1_NO182)+zzcon5*(u[i_NO228][j_NO230][k_NO229+1][4]*rho_i[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][4]*rho_i[i_NO228][j_NO230][k_NO229]+u[i_NO228][j_NO230][k_NO229-1][4]*rho_i[i_NO228][j_NO230][k_NO229-1])-tz2*((c1*u[i_NO228][j_NO230][k_NO229+1][4]-c2*square[i_NO228][j_NO230][k_NO229+1])*wp1_NO181-(c1*u[i_NO228][j_NO230][k_NO229-1][4]-c2*square[i_NO228][j_NO230][k_NO229-1])*wm1_NO182);
      }
      }
      }
/* barrier_start:pe0:module106:no23 */
#pragma omp flush

/* == GROUP BARRIER23 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][23]++;
while (M106_CL0_PC0_barrier_flg[0][1][23] < M106_CL0_PC0_barrier_flg[0][0][23]) {
}
M106_CL0_PC0_barrier_flg[1][0][23]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb24 ==*/
      M106_CL0_PC0_k_NO97 = 1;
/* barrier_start:pe0:module106:no24 */
#pragma omp flush

/* == GROUP BARRIER24 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][24]++;
while (M106_CL0_PC0_barrier_flg[0][1][24] < M106_CL0_PC0_barrier_flg[0][0][24]) {
}
M106_CL0_PC0_barrier_flg[1][0][24]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall25 ==*/
      for (i_NO231 = 1 ; i_NO231 <= (grid_points[0]+(-2))/ 2 ; i_NO231 += 1){
/* == compute_rhs#block1.doall25.loop1 ==*/
      for (j_NO233 = 1 ; j_NO233 <= grid_points[1]-1-1 ; j_NO233 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1 ==*/
      for (m_NO232 = 0 ; m_NO232 <= 4 ; m_NO232 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1.bb1 ==*/
      rhs[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232] = rhs[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232]-dssp*(5.0000000000000000E+00*u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232]-4.0000000000000000E+00*u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97+1][m_NO232]+u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97+2][m_NO232]);
      }
      }
      }
/* barrier_start:pe0:module106:no25 */
#pragma omp flush

/* == GROUP BARRIER25 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][25]++;
while (M106_CL0_PC0_barrier_flg[0][1][25] < M106_CL0_PC0_barrier_flg[0][0][25]) {
}
M106_CL0_PC0_barrier_flg[1][0][25]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb26 ==*/
      M106_CL0_PC0_k_NO97 = 2;
/* barrier_start:pe0:module106:no26 */
#pragma omp flush

/* == GROUP BARRIER26 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][26]++;
while (M106_CL0_PC0_barrier_flg[0][1][26] < M106_CL0_PC0_barrier_flg[0][0][26]) {
}
M106_CL0_PC0_barrier_flg[1][0][26]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall27 ==*/
      for (i_NO234 = 1 ; i_NO234 <= (grid_points[0]+(-2))/ 2 ; i_NO234 += 1){
/* == compute_rhs#block1.doall27.loop1 ==*/
      for (j_NO236 = 1 ; j_NO236 <= grid_points[1]-1-1 ; j_NO236 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1 ==*/
      for (m_NO235 = 0 ; m_NO235 <= 4 ; m_NO235 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1.bb1 ==*/
      rhs[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235] = rhs[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235]-dssp*((-4.0000000000000000E+00)*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97-1][m_NO235]+6.0000000000000000E+00*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235]-4.0000000000000000E+00*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97+1][m_NO235]+u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97+2][m_NO235]);
      }
      }
      }
/* barrier_start:pe0:module106:no27 */
#pragma omp flush

/* == GROUP BARRIER27 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][27]++;
while (M106_CL0_PC0_barrier_flg[0][1][27] < M106_CL0_PC0_barrier_flg[0][0][27]) {
}
M106_CL0_PC0_barrier_flg[1][0][27]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall28 ==*/
      for (i_NO237 = 1 ; i_NO237 <= (grid_points[0]+(-2))/ 2 ; i_NO237 += 1){
/* == compute_rhs#block1.doall28.loop1 ==*/
      for (j_NO240 = 1 ; j_NO240 <= grid_points[1]-1-1 ; j_NO240 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1 ==*/
      for (k_NO239 = 3 ; k_NO239 <= grid_points[2]-3-1 ; k_NO239 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1 ==*/
      for (m_NO238 = 0 ; m_NO238 <= 4 ; m_NO238 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO237][j_NO240][k_NO239][m_NO238] = rhs[i_NO237][j_NO240][k_NO239][m_NO238]-dssp*(u[i_NO237][j_NO240][k_NO239-2][m_NO238]-4.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239-1][m_NO238]+6.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239][m_NO238]-4.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239+1][m_NO238]+u[i_NO237][j_NO240][k_NO239+2][m_NO238]);
      }
      }
      }
      }
/* barrier_start:pe0:module106:no28 */
#pragma omp flush

/* == GROUP BARRIER28 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][28]++;
while (M106_CL0_PC0_barrier_flg[0][1][28] < M106_CL0_PC0_barrier_flg[0][0][28]) {
}
M106_CL0_PC0_barrier_flg[1][0][28]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb29 ==*/
      M106_CL0_PC0_k_NO97 = grid_points[2]-3;
/* barrier_start:pe0:module106:no29 */
#pragma omp flush

/* == GROUP BARRIER29 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][29]++;
while (M106_CL0_PC0_barrier_flg[0][1][29] < M106_CL0_PC0_barrier_flg[0][0][29]) {
}
M106_CL0_PC0_barrier_flg[1][0][29]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall30 ==*/
      for (i_NO241 = 1 ; i_NO241 <= (grid_points[0]+(-2))/ 2 ; i_NO241 += 1){
/* == compute_rhs#block1.doall30.loop1 ==*/
      for (j_NO243 = 1 ; j_NO243 <= grid_points[1]-1-1 ; j_NO243 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1 ==*/
      for (m_NO242 = 0 ; m_NO242 <= 4 ; m_NO242 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1.bb1 ==*/
      rhs[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242] = rhs[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242]-dssp*(u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97-2][m_NO242]-4.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97-1][m_NO242]+6.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242]-4.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97+1][m_NO242]);
      }
      }
      }
/* barrier_start:pe0:module106:no30 */
#pragma omp flush

/* == GROUP BARRIER30 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][30]++;
while (M106_CL0_PC0_barrier_flg[0][1][30] < M106_CL0_PC0_barrier_flg[0][0][30]) {
}
M106_CL0_PC0_barrier_flg[1][0][30]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb31 ==*/
      M106_CL0_PC0_k_NO97 = grid_points[2]-2;
/* barrier_start:pe0:module106:no31 */
#pragma omp flush

/* == GROUP BARRIER31 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][31]++;
while (M106_CL0_PC0_barrier_flg[0][1][31] < M106_CL0_PC0_barrier_flg[0][0][31]) {
}
M106_CL0_PC0_barrier_flg[1][0][31]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall32 ==*/
      for (i_NO244 = 1 ; i_NO244 <= (grid_points[0]+(-2))/ 2 ; i_NO244 += 1){
/* == compute_rhs#block1.doall32.loop1 ==*/
      for (j_NO246 = 1 ; j_NO246 <= grid_points[1]-1-1 ; j_NO246 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1 ==*/
      for (m_NO245 = 0 ; m_NO245 <= 4 ; m_NO245 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1.bb1 ==*/
      rhs[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245] = rhs[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245]-dssp*(u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97-2][m_NO245]-4.0000000000000000E+00*u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97-1][m_NO245]+5.0000000000000000E+00*u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245]);
      }
      }
      }
/* barrier_start:pe0:module106:no32 */
#pragma omp flush

/* == GROUP BARRIER32 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][32]++;
while (M106_CL0_PC0_barrier_flg[0][1][32] < M106_CL0_PC0_barrier_flg[0][0][32]) {
}
M106_CL0_PC0_barrier_flg[1][0][32]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall33 ==*/
      for (j_NO247 = 1 ; j_NO247 <= (grid_points[1]+(-2))/ 2 ; j_NO247 += 1){
/* == compute_rhs#block1.doall33.loop1 ==*/
      for (k_NO250 = 1 ; k_NO250 <= grid_points[2]-1-1 ; k_NO250 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1 ==*/
      for (m_NO249 = 0 ; m_NO249 <= 4 ; m_NO249 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1 ==*/
      for (i_NO248 = 1 ; i_NO248 <= grid_points[0]-1-1 ; i_NO248 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO248][j_NO247][k_NO250][m_NO249] = rhs[i_NO248][j_NO247][k_NO250][m_NO249]*dt;
      }
      }
      }
      }
/* barrier_start:pe0:module106:no33 */
#pragma omp flush

/* == GROUP BARRIER33 0(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][0][33]++;
while (M106_CL0_PC0_barrier_flg[0][1][33] < M106_CL0_PC0_barrier_flg[0][0][33]) {
}
M106_CL0_PC0_barrier_flg[1][0][33]++;

#pragma omp flush
/* barrier_finish:pe0:module106:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb34 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 106: compute_rhs */
/* ******************* */
static void compute_rhs_PE1()
{
      double rho_inv_NO173/* rho_inv */;
      double uijk_NO174/* uijk */;
      double up1_NO175/* up1 */;
      double um1_NO176/* um1 */;
      double vijk_NO177/* vijk */;
      double vp1_NO178/* vp1 */;
      double vm1_NO179/* vm1 */;
      double wijk_NO180/* wijk */;
      double wp1_NO181/* wp1 */;
      double wm1_NO182/* wm1 */;
      int i_NO183/* i */;
      int k_NO184/* k */;
      int j_NO185/* j */;
      int i_NO186/* i */;
      int m_NO187/* m */;
      int k_NO188/* k */;
      int j_NO189/* j */;
      int i_NO190/* i */;
      int k_NO191/* k */;
      int j_NO192/* j */;
      int j_NO193/* j */;
      int m_NO194/* m */;
      int k_NO195/* k */;
      int j_NO196/* j */;
      int m_NO197/* m */;
      int k_NO198/* k */;
      int i_NO199/* i */;
      int m_NO200/* m */;
      int k_NO201/* k */;
      int j_NO202/* j */;
      int j_NO203/* j */;
      int m_NO204/* m */;
      int k_NO205/* k */;
      int j_NO206/* j */;
      int m_NO207/* m */;
      int k_NO208/* k */;
      int i_NO209/* i */;
      int k_NO210/* k */;
      int j_NO211/* j */;
      int i_NO212/* i */;
      int m_NO213/* m */;
      int k_NO214/* k */;
      int i_NO215/* i */;
      int m_NO216/* m */;
      int k_NO217/* k */;
      int i_NO218/* i */;
      int m_NO219/* m */;
      int k_NO220/* k */;
      int j_NO221/* j */;
      int i_NO222/* i */;
      int m_NO223/* m */;
      int k_NO224/* k */;
      int i_NO225/* i */;
      int m_NO226/* m */;
      int k_NO227/* k */;
      int i_NO228/* i */;
      int k_NO229/* k */;
      int j_NO230/* j */;
      int i_NO231/* i */;
      int m_NO232/* m */;
      int j_NO233/* j */;
      int i_NO234/* i */;
      int m_NO235/* m */;
      int j_NO236/* j */;
      int i_NO237/* i */;
      int m_NO238/* m */;
      int k_NO239/* k */;
      int j_NO240/* j */;
      int i_NO241/* i */;
      int m_NO242/* m */;
      int j_NO243/* j */;
      int i_NO244/* i */;
      int m_NO245/* m */;
      int j_NO246/* j */;
      int j_NO247/* j */;
      int i_NO248/* i */;
      int m_NO249/* m */;
      int k_NO250/* k */;

/* @decl:pe1:module106@ */
/* == compute_rhs#block1 ==*/
/* == compute_rhs#block1.doall1 ==*/
      for (i_NO183 = grid_points[0]/ 2 ; i_NO183 <= grid_points[0]-1 ; i_NO183 += 1){
/* == compute_rhs#block1.doall1.loop1 ==*/
      for (j_NO185 = 0 ; j_NO185 <= grid_points[1]-1 ; j_NO185 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1 ==*/
      for (k_NO184 = 0 ; k_NO184 <= grid_points[2]-1 ; k_NO184 += 1){
/* == compute_rhs#block1.doall1.loop1.loop1.bb1 ==*/
      rho_inv_NO173 = 1.0000000000000000E+00/ u[i_NO183][j_NO185][k_NO184][0];
      rho_i[i_NO183][j_NO185][k_NO184] = rho_inv_NO173;
      us[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][1]*rho_inv_NO173;
      vs[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][2]*rho_inv_NO173;
      ws[i_NO183][j_NO185][k_NO184] = u[i_NO183][j_NO185][k_NO184][3]*rho_inv_NO173;
      square[i_NO183][j_NO185][k_NO184] = 5.0000000000000000E-01*(u[i_NO183][j_NO185][k_NO184][1]*u[i_NO183][j_NO185][k_NO184][1]+u[i_NO183][j_NO185][k_NO184][2]*u[i_NO183][j_NO185][k_NO184][2]+u[i_NO183][j_NO185][k_NO184][3]*u[i_NO183][j_NO185][k_NO184][3])*rho_inv_NO173;
      qs[i_NO183][j_NO185][k_NO184] = square[i_NO183][j_NO185][k_NO184]*rho_inv_NO173;
      }
      }
      }
/* barrier_start:pe1:module106:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][1]++;
while (M106_CL0_PC0_barrier_flg[1][0][1] < M106_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall2 ==*/
      for (i_NO186 = grid_points[0]/ 2 ; i_NO186 <= grid_points[0]-1 ; i_NO186 += 1){
/* == compute_rhs#block1.doall2.loop1 ==*/
      for (j_NO189 = 0 ; j_NO189 <= grid_points[1]-1 ; j_NO189 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1 ==*/
      for (k_NO188 = 0 ; k_NO188 <= grid_points[2]-1 ; k_NO188 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1 ==*/
      for (m_NO187 = 0 ; m_NO187 <= 4 ; m_NO187 += 1){
/* == compute_rhs#block1.doall2.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO186][j_NO189][k_NO188][m_NO187] = forcing[i_NO186][j_NO189][k_NO188][m_NO187];
      }
      }
      }
      }
/* barrier_start:pe1:module106:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][2]++;
while (M106_CL0_PC0_barrier_flg[1][0][2] < M106_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall3 ==*/
      for (i_NO190 = (grid_points[0]+(-2))/ 2+1 ; i_NO190 <= grid_points[0]-1-1 ; i_NO190 += 1){
/* == compute_rhs#block1.doall3.loop1 ==*/
      for (j_NO192 = 1 ; j_NO192 <= grid_points[1]-1-1 ; j_NO192 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1 ==*/
      for (k_NO191 = 1 ; k_NO191 <= grid_points[2]-1-1 ; k_NO191 += 1){
/* == compute_rhs#block1.doall3.loop1.loop1.bb1 ==*/
      uijk_NO174 = us[i_NO190][j_NO192][k_NO191];
      up1_NO175 = us[i_NO190+1][j_NO192][k_NO191];
      um1_NO176 = us[i_NO190-1][j_NO192][k_NO191];
      rhs[i_NO190][j_NO192][k_NO191][0] = rhs[i_NO190][j_NO192][k_NO191][0]+dx1tx1*(u[i_NO190+1][j_NO192][k_NO191][0]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][0]+u[i_NO190-1][j_NO192][k_NO191][0])-tx2*(u[i_NO190+1][j_NO192][k_NO191][1]-u[i_NO190-1][j_NO192][k_NO191][1]);
      rhs[i_NO190][j_NO192][k_NO191][1] = rhs[i_NO190][j_NO192][k_NO191][1]+dx2tx1*(u[i_NO190+1][j_NO192][k_NO191][1]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][1]+u[i_NO190-1][j_NO192][k_NO191][1])+xxcon2*con43*(up1_NO175-2.0000000000000000E+00*uijk_NO174+um1_NO176)-tx2*(u[i_NO190+1][j_NO192][k_NO191][1]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][1]*um1_NO176+(u[i_NO190+1][j_NO192][k_NO191][4]-square[i_NO190+1][j_NO192][k_NO191]-u[i_NO190-1][j_NO192][k_NO191][4]+square[i_NO190-1][j_NO192][k_NO191])*c2);
      rhs[i_NO190][j_NO192][k_NO191][2] = rhs[i_NO190][j_NO192][k_NO191][2]+dx3tx1*(u[i_NO190+1][j_NO192][k_NO191][2]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][2]+u[i_NO190-1][j_NO192][k_NO191][2])+xxcon2*(vs[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*vs[i_NO190][j_NO192][k_NO191]+vs[i_NO190-1][j_NO192][k_NO191])-tx2*(u[i_NO190+1][j_NO192][k_NO191][2]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][2]*um1_NO176);
      rhs[i_NO190][j_NO192][k_NO191][3] = rhs[i_NO190][j_NO192][k_NO191][3]+dx4tx1*(u[i_NO190+1][j_NO192][k_NO191][3]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][3]+u[i_NO190-1][j_NO192][k_NO191][3])+xxcon2*(ws[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*ws[i_NO190][j_NO192][k_NO191]+ws[i_NO190-1][j_NO192][k_NO191])-tx2*(u[i_NO190+1][j_NO192][k_NO191][3]*up1_NO175-u[i_NO190-1][j_NO192][k_NO191][3]*um1_NO176);
      rhs[i_NO190][j_NO192][k_NO191][4] = rhs[i_NO190][j_NO192][k_NO191][4]+dx5tx1*(u[i_NO190+1][j_NO192][k_NO191][4]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][4]+u[i_NO190-1][j_NO192][k_NO191][4])+xxcon3*(qs[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*qs[i_NO190][j_NO192][k_NO191]+qs[i_NO190-1][j_NO192][k_NO191])+xxcon4*(up1_NO175*up1_NO175-2.0000000000000000E+00*uijk_NO174*uijk_NO174+um1_NO176*um1_NO176)+xxcon5*(u[i_NO190+1][j_NO192][k_NO191][4]*rho_i[i_NO190+1][j_NO192][k_NO191]-2.0000000000000000E+00*u[i_NO190][j_NO192][k_NO191][4]*rho_i[i_NO190][j_NO192][k_NO191]+u[i_NO190-1][j_NO192][k_NO191][4]*rho_i[i_NO190-1][j_NO192][k_NO191])-tx2*((c1*u[i_NO190+1][j_NO192][k_NO191][4]-c2*square[i_NO190+1][j_NO192][k_NO191])*up1_NO175-(c1*u[i_NO190-1][j_NO192][k_NO191][4]-c2*square[i_NO190-1][j_NO192][k_NO191])*um1_NO176);
      }
      }
      }
/* barrier_start:pe1:module106:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][3]++;
while (M106_CL0_PC0_barrier_flg[1][0][3] < M106_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb4 ==*/
/* barrier_start:pe1:module106:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][4]++;
while (M106_CL0_PC0_barrier_flg[1][0][4] < M106_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall5 ==*/
      for (j_NO193 = (grid_points[1]+(-2))/ 2+1 ; j_NO193 <= grid_points[1]-1-1 ; j_NO193 += 1){
/* == compute_rhs#block1.doall5.loop1 ==*/
      for (k_NO195 = 1 ; k_NO195 <= grid_points[2]-1-1 ; k_NO195 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1 ==*/
      for (m_NO194 = 0 ; m_NO194 <= 4 ; m_NO194 += 1){
/* == compute_rhs#block1.doall5.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194] = rhs[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194]-dssp*(5.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO193][k_NO195][m_NO194]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO193][k_NO195][m_NO194]+u[M106_CL0_PC0_i_NO95+2][j_NO193][k_NO195][m_NO194]);
      }
      }
      }
/* barrier_start:pe1:module106:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][5]++;
while (M106_CL0_PC0_barrier_flg[1][0][5] < M106_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb6 ==*/
/* barrier_start:pe1:module106:no6 */
#pragma omp flush

/* == GROUP BARRIER6 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][6]++;
while (M106_CL0_PC0_barrier_flg[1][0][6] < M106_CL0_PC0_barrier_flg[0][1][6]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no6 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall7 ==*/
      for (j_NO196 = (grid_points[1]+(-2))/ 2+1 ; j_NO196 <= grid_points[1]-1-1 ; j_NO196 += 1){
/* == compute_rhs#block1.doall7.loop1 ==*/
      for (k_NO198 = 1 ; k_NO198 <= grid_points[2]-1-1 ; k_NO198 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1 ==*/
      for (m_NO197 = 0 ; m_NO197 <= 4 ; m_NO197 += 1){
/* == compute_rhs#block1.doall7.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197] = rhs[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197]-dssp*((-4.0000000000000000E+00)*u[M106_CL0_PC0_i_NO95-1][j_NO196][k_NO198][m_NO197]+6.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO196][k_NO198][m_NO197]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO196][k_NO198][m_NO197]+u[M106_CL0_PC0_i_NO95+2][j_NO196][k_NO198][m_NO197]);
      }
      }
      }
/* barrier_start:pe1:module106:no7 */
#pragma omp flush

/* == GROUP BARRIER7 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][7]++;
while (M106_CL0_PC0_barrier_flg[1][0][7] < M106_CL0_PC0_barrier_flg[0][1][7]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no7 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall8 ==*/
      for (i_NO199 = (grid_points[0]+(-6))/ 2+3 ; i_NO199 <= grid_points[0]-3-1 ; i_NO199 += 1){
/* == compute_rhs#block1.doall8.loop1 ==*/
      for (j_NO202 = 1 ; j_NO202 <= grid_points[1]-1-1 ; j_NO202 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1 ==*/
      for (k_NO201 = 1 ; k_NO201 <= grid_points[2]-1-1 ; k_NO201 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1 ==*/
      for (m_NO200 = 0 ; m_NO200 <= 4 ; m_NO200 += 1){
/* == compute_rhs#block1.doall8.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO199][j_NO202][k_NO201][m_NO200] = rhs[i_NO199][j_NO202][k_NO201][m_NO200]-dssp*(u[i_NO199-2][j_NO202][k_NO201][m_NO200]-4.0000000000000000E+00*u[i_NO199-1][j_NO202][k_NO201][m_NO200]+6.0000000000000000E+00*u[i_NO199][j_NO202][k_NO201][m_NO200]-4.0000000000000000E+00*u[i_NO199+1][j_NO202][k_NO201][m_NO200]+u[i_NO199+2][j_NO202][k_NO201][m_NO200]);
      }
      }
      }
      }
/* barrier_start:pe1:module106:no8 */
#pragma omp flush

/* == GROUP BARRIER8 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][8]++;
while (M106_CL0_PC0_barrier_flg[1][0][8] < M106_CL0_PC0_barrier_flg[0][1][8]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no8 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb9 ==*/
/* barrier_start:pe1:module106:no9 */
#pragma omp flush

/* == GROUP BARRIER9 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][9]++;
while (M106_CL0_PC0_barrier_flg[1][0][9] < M106_CL0_PC0_barrier_flg[0][1][9]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no9 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall10 ==*/
      for (j_NO203 = (grid_points[1]+(-2))/ 2+1 ; j_NO203 <= grid_points[1]-1-1 ; j_NO203 += 1){
/* == compute_rhs#block1.doall10.loop1 ==*/
      for (k_NO205 = 1 ; k_NO205 <= grid_points[2]-1-1 ; k_NO205 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1 ==*/
      for (m_NO204 = 0 ; m_NO204 <= 4 ; m_NO204 += 1){
/* == compute_rhs#block1.doall10.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204] = rhs[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204]-dssp*(u[M106_CL0_PC0_i_NO95-2][j_NO203][k_NO205][m_NO204]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95-1][j_NO203][k_NO205][m_NO204]+6.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO203][k_NO205][m_NO204]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95+1][j_NO203][k_NO205][m_NO204]);
      }
      }
      }
/* barrier_start:pe1:module106:no10 */
#pragma omp flush

/* == GROUP BARRIER10 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][10]++;
while (M106_CL0_PC0_barrier_flg[1][0][10] < M106_CL0_PC0_barrier_flg[0][1][10]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no10 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb11 ==*/
/* barrier_start:pe1:module106:no11 */
#pragma omp flush

/* == GROUP BARRIER11 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][11]++;
while (M106_CL0_PC0_barrier_flg[1][0][11] < M106_CL0_PC0_barrier_flg[0][1][11]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no11 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall12 ==*/
      for (j_NO206 = (grid_points[1]+(-2))/ 2+1 ; j_NO206 <= grid_points[1]-1-1 ; j_NO206 += 1){
/* == compute_rhs#block1.doall12.loop1 ==*/
      for (k_NO208 = 1 ; k_NO208 <= grid_points[2]-1-1 ; k_NO208 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1 ==*/
      for (m_NO207 = 0 ; m_NO207 <= 4 ; m_NO207 += 1){
/* == compute_rhs#block1.doall12.loop1.loop1.bb1 ==*/
      rhs[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207] = rhs[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207]-dssp*(u[M106_CL0_PC0_i_NO95-2][j_NO206][k_NO208][m_NO207]-4.0000000000000000E+00*u[M106_CL0_PC0_i_NO95-1][j_NO206][k_NO208][m_NO207]+5.0000000000000000E+00*u[M106_CL0_PC0_i_NO95][j_NO206][k_NO208][m_NO207]);
      }
      }
      }
/* barrier_start:pe1:module106:no12 */
#pragma omp flush

/* == GROUP BARRIER12 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][12]++;
while (M106_CL0_PC0_barrier_flg[1][0][12] < M106_CL0_PC0_barrier_flg[0][1][12]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no12 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall13 ==*/
      for (i_NO209 = (grid_points[0]+(-2))/ 2+1 ; i_NO209 <= grid_points[0]-1-1 ; i_NO209 += 1){
/* == compute_rhs#block1.doall13.loop1 ==*/
      for (j_NO211 = 1 ; j_NO211 <= grid_points[1]-1-1 ; j_NO211 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1 ==*/
      for (k_NO210 = 1 ; k_NO210 <= grid_points[2]-1-1 ; k_NO210 += 1){
/* == compute_rhs#block1.doall13.loop1.loop1.bb1 ==*/
      vijk_NO177 = vs[i_NO209][j_NO211][k_NO210];
      vp1_NO178 = vs[i_NO209][j_NO211+1][k_NO210];
      vm1_NO179 = vs[i_NO209][j_NO211-1][k_NO210];
      rhs[i_NO209][j_NO211][k_NO210][0] = rhs[i_NO209][j_NO211][k_NO210][0]+dy1ty1*(u[i_NO209][j_NO211+1][k_NO210][0]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][0]+u[i_NO209][j_NO211-1][k_NO210][0])-ty2*(u[i_NO209][j_NO211+1][k_NO210][2]-u[i_NO209][j_NO211-1][k_NO210][2]);
      rhs[i_NO209][j_NO211][k_NO210][1] = rhs[i_NO209][j_NO211][k_NO210][1]+dy2ty1*(u[i_NO209][j_NO211+1][k_NO210][1]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][1]+u[i_NO209][j_NO211-1][k_NO210][1])+yycon2*(us[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*us[i_NO209][j_NO211][k_NO210]+us[i_NO209][j_NO211-1][k_NO210])-ty2*(u[i_NO209][j_NO211+1][k_NO210][1]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][1]*vm1_NO179);
      rhs[i_NO209][j_NO211][k_NO210][2] = rhs[i_NO209][j_NO211][k_NO210][2]+dy3ty1*(u[i_NO209][j_NO211+1][k_NO210][2]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][2]+u[i_NO209][j_NO211-1][k_NO210][2])+yycon2*con43*(vp1_NO178-2.0000000000000000E+00*vijk_NO177+vm1_NO179)-ty2*(u[i_NO209][j_NO211+1][k_NO210][2]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][2]*vm1_NO179+(u[i_NO209][j_NO211+1][k_NO210][4]-square[i_NO209][j_NO211+1][k_NO210]-u[i_NO209][j_NO211-1][k_NO210][4]+square[i_NO209][j_NO211-1][k_NO210])*c2);
      rhs[i_NO209][j_NO211][k_NO210][3] = rhs[i_NO209][j_NO211][k_NO210][3]+dy4ty1*(u[i_NO209][j_NO211+1][k_NO210][3]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][3]+u[i_NO209][j_NO211-1][k_NO210][3])+yycon2*(ws[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*ws[i_NO209][j_NO211][k_NO210]+ws[i_NO209][j_NO211-1][k_NO210])-ty2*(u[i_NO209][j_NO211+1][k_NO210][3]*vp1_NO178-u[i_NO209][j_NO211-1][k_NO210][3]*vm1_NO179);
      rhs[i_NO209][j_NO211][k_NO210][4] = rhs[i_NO209][j_NO211][k_NO210][4]+dy5ty1*(u[i_NO209][j_NO211+1][k_NO210][4]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][4]+u[i_NO209][j_NO211-1][k_NO210][4])+yycon3*(qs[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*qs[i_NO209][j_NO211][k_NO210]+qs[i_NO209][j_NO211-1][k_NO210])+yycon4*(vp1_NO178*vp1_NO178-2.0000000000000000E+00*vijk_NO177*vijk_NO177+vm1_NO179*vm1_NO179)+yycon5*(u[i_NO209][j_NO211+1][k_NO210][4]*rho_i[i_NO209][j_NO211+1][k_NO210]-2.0000000000000000E+00*u[i_NO209][j_NO211][k_NO210][4]*rho_i[i_NO209][j_NO211][k_NO210]+u[i_NO209][j_NO211-1][k_NO210][4]*rho_i[i_NO209][j_NO211-1][k_NO210])-ty2*((c1*u[i_NO209][j_NO211+1][k_NO210][4]-c2*square[i_NO209][j_NO211+1][k_NO210])*vp1_NO178-(c1*u[i_NO209][j_NO211-1][k_NO210][4]-c2*square[i_NO209][j_NO211-1][k_NO210])*vm1_NO179);
      }
      }
      }
/* barrier_start:pe1:module106:no13 */
#pragma omp flush

/* == GROUP BARRIER13 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][13]++;
while (M106_CL0_PC0_barrier_flg[1][0][13] < M106_CL0_PC0_barrier_flg[0][1][13]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no13 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb14 ==*/
/* barrier_start:pe1:module106:no14 */
#pragma omp flush

/* == GROUP BARRIER14 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][14]++;
while (M106_CL0_PC0_barrier_flg[1][0][14] < M106_CL0_PC0_barrier_flg[0][1][14]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no14 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall15 ==*/
      for (i_NO212 = (grid_points[0]+(-2))/ 2+1 ; i_NO212 <= grid_points[0]-1-1 ; i_NO212 += 1){
/* == compute_rhs#block1.doall15.loop1 ==*/
      for (k_NO214 = 1 ; k_NO214 <= grid_points[2]-1-1 ; k_NO214 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1 ==*/
      for (m_NO213 = 0 ; m_NO213 <= 4 ; m_NO213 += 1){
/* == compute_rhs#block1.doall15.loop1.loop1.bb1 ==*/
      rhs[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213] = rhs[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213]-dssp*(5.0000000000000000E+00*u[i_NO212][M106_CL0_PC0_j_NO96][k_NO214][m_NO213]-4.0000000000000000E+00*u[i_NO212][M106_CL0_PC0_j_NO96+1][k_NO214][m_NO213]+u[i_NO212][M106_CL0_PC0_j_NO96+2][k_NO214][m_NO213]);
      }
      }
      }
/* barrier_start:pe1:module106:no15 */
#pragma omp flush

/* == GROUP BARRIER15 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][15]++;
while (M106_CL0_PC0_barrier_flg[1][0][15] < M106_CL0_PC0_barrier_flg[0][1][15]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no15 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb16 ==*/
/* barrier_start:pe1:module106:no16 */
#pragma omp flush

/* == GROUP BARRIER16 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][16]++;
while (M106_CL0_PC0_barrier_flg[1][0][16] < M106_CL0_PC0_barrier_flg[0][1][16]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no16 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall17 ==*/
      for (i_NO215 = (grid_points[0]+(-2))/ 2+1 ; i_NO215 <= grid_points[0]-1-1 ; i_NO215 += 1){
/* == compute_rhs#block1.doall17.loop1 ==*/
      for (k_NO217 = 1 ; k_NO217 <= grid_points[2]-1-1 ; k_NO217 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1 ==*/
      for (m_NO216 = 0 ; m_NO216 <= 4 ; m_NO216 += 1){
/* == compute_rhs#block1.doall17.loop1.loop1.bb1 ==*/
      rhs[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216] = rhs[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216]-dssp*((-4.0000000000000000E+00)*u[i_NO215][M106_CL0_PC0_j_NO96-1][k_NO217][m_NO216]+6.0000000000000000E+00*u[i_NO215][M106_CL0_PC0_j_NO96][k_NO217][m_NO216]-4.0000000000000000E+00*u[i_NO215][M106_CL0_PC0_j_NO96+1][k_NO217][m_NO216]+u[i_NO215][M106_CL0_PC0_j_NO96+2][k_NO217][m_NO216]);
      }
      }
      }
/* barrier_start:pe1:module106:no17 */
#pragma omp flush

/* == GROUP BARRIER17 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][17]++;
while (M106_CL0_PC0_barrier_flg[1][0][17] < M106_CL0_PC0_barrier_flg[0][1][17]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no17 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall18 ==*/
      for (i_NO218 = (grid_points[0]+(-2))/ 2+1 ; i_NO218 <= grid_points[0]-1-1 ; i_NO218 += 1){
/* == compute_rhs#block1.doall18.loop1 ==*/
      for (j_NO221 = 3 ; j_NO221 <= grid_points[1]-3-1 ; j_NO221 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1 ==*/
      for (k_NO220 = 1 ; k_NO220 <= grid_points[2]-1-1 ; k_NO220 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1 ==*/
      for (m_NO219 = 0 ; m_NO219 <= 4 ; m_NO219 += 1){
/* == compute_rhs#block1.doall18.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO218][j_NO221][k_NO220][m_NO219] = rhs[i_NO218][j_NO221][k_NO220][m_NO219]-dssp*(u[i_NO218][j_NO221-2][k_NO220][m_NO219]-4.0000000000000000E+00*u[i_NO218][j_NO221-1][k_NO220][m_NO219]+6.0000000000000000E+00*u[i_NO218][j_NO221][k_NO220][m_NO219]-4.0000000000000000E+00*u[i_NO218][j_NO221+1][k_NO220][m_NO219]+u[i_NO218][j_NO221+2][k_NO220][m_NO219]);
      }
      }
      }
      }
/* barrier_start:pe1:module106:no18 */
#pragma omp flush

/* == GROUP BARRIER18 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][18]++;
while (M106_CL0_PC0_barrier_flg[1][0][18] < M106_CL0_PC0_barrier_flg[0][1][18]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no18 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb19 ==*/
/* barrier_start:pe1:module106:no19 */
#pragma omp flush

/* == GROUP BARRIER19 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][19]++;
while (M106_CL0_PC0_barrier_flg[1][0][19] < M106_CL0_PC0_barrier_flg[0][1][19]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no19 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall20 ==*/
      for (i_NO222 = (grid_points[0]+(-2))/ 2+1 ; i_NO222 <= grid_points[0]-1-1 ; i_NO222 += 1){
/* == compute_rhs#block1.doall20.loop1 ==*/
      for (k_NO224 = 1 ; k_NO224 <= grid_points[2]-1-1 ; k_NO224 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1 ==*/
      for (m_NO223 = 0 ; m_NO223 <= 4 ; m_NO223 += 1){
/* == compute_rhs#block1.doall20.loop1.loop1.bb1 ==*/
      rhs[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223] = rhs[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223]-dssp*(u[i_NO222][M106_CL0_PC0_j_NO96-2][k_NO224][m_NO223]-4.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96-1][k_NO224][m_NO223]+6.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96][k_NO224][m_NO223]-4.0000000000000000E+00*u[i_NO222][M106_CL0_PC0_j_NO96+1][k_NO224][m_NO223]);
      }
      }
      }
/* barrier_start:pe1:module106:no20 */
#pragma omp flush

/* == GROUP BARRIER20 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][20]++;
while (M106_CL0_PC0_barrier_flg[1][0][20] < M106_CL0_PC0_barrier_flg[0][1][20]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no20 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb21 ==*/
/* barrier_start:pe1:module106:no21 */
#pragma omp flush

/* == GROUP BARRIER21 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][21]++;
while (M106_CL0_PC0_barrier_flg[1][0][21] < M106_CL0_PC0_barrier_flg[0][1][21]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no21 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall22 ==*/
      for (i_NO225 = (grid_points[0]+(-2))/ 2+1 ; i_NO225 <= grid_points[0]-1-1 ; i_NO225 += 1){
/* == compute_rhs#block1.doall22.loop1 ==*/
      for (k_NO227 = 1 ; k_NO227 <= grid_points[2]-1-1 ; k_NO227 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1 ==*/
      for (m_NO226 = 0 ; m_NO226 <= 4 ; m_NO226 += 1){
/* == compute_rhs#block1.doall22.loop1.loop1.bb1 ==*/
      rhs[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226] = rhs[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226]-dssp*(u[i_NO225][M106_CL0_PC0_j_NO96-2][k_NO227][m_NO226]-4.0000000000000000E+00*u[i_NO225][M106_CL0_PC0_j_NO96-1][k_NO227][m_NO226]+5.0000000000000000E+00*u[i_NO225][M106_CL0_PC0_j_NO96][k_NO227][m_NO226]);
      }
      }
      }
/* barrier_start:pe1:module106:no22 */
#pragma omp flush

/* == GROUP BARRIER22 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][22]++;
while (M106_CL0_PC0_barrier_flg[1][0][22] < M106_CL0_PC0_barrier_flg[0][1][22]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no22 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall23 ==*/
      for (i_NO228 = (grid_points[0]+(-2))/ 2+1 ; i_NO228 <= grid_points[0]-1-1 ; i_NO228 += 1){
/* == compute_rhs#block1.doall23.loop1 ==*/
      for (j_NO230 = 1 ; j_NO230 <= grid_points[1]-1-1 ; j_NO230 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1 ==*/
      for (k_NO229 = 1 ; k_NO229 <= grid_points[2]-1-1 ; k_NO229 += 1){
/* == compute_rhs#block1.doall23.loop1.loop1.bb1 ==*/
      wijk_NO180 = ws[i_NO228][j_NO230][k_NO229];
      wp1_NO181 = ws[i_NO228][j_NO230][k_NO229+1];
      wm1_NO182 = ws[i_NO228][j_NO230][k_NO229-1];
      rhs[i_NO228][j_NO230][k_NO229][0] = rhs[i_NO228][j_NO230][k_NO229][0]+dz1tz1*(u[i_NO228][j_NO230][k_NO229+1][0]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][0]+u[i_NO228][j_NO230][k_NO229-1][0])-tz2*(u[i_NO228][j_NO230][k_NO229+1][3]-u[i_NO228][j_NO230][k_NO229-1][3]);
      rhs[i_NO228][j_NO230][k_NO229][1] = rhs[i_NO228][j_NO230][k_NO229][1]+dz2tz1*(u[i_NO228][j_NO230][k_NO229+1][1]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][1]+u[i_NO228][j_NO230][k_NO229-1][1])+zzcon2*(us[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*us[i_NO228][j_NO230][k_NO229]+us[i_NO228][j_NO230][k_NO229-1])-tz2*(u[i_NO228][j_NO230][k_NO229+1][1]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][1]*wm1_NO182);
      rhs[i_NO228][j_NO230][k_NO229][2] = rhs[i_NO228][j_NO230][k_NO229][2]+dz3tz1*(u[i_NO228][j_NO230][k_NO229+1][2]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][2]+u[i_NO228][j_NO230][k_NO229-1][2])+zzcon2*(vs[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*vs[i_NO228][j_NO230][k_NO229]+vs[i_NO228][j_NO230][k_NO229-1])-tz2*(u[i_NO228][j_NO230][k_NO229+1][2]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][2]*wm1_NO182);
      rhs[i_NO228][j_NO230][k_NO229][3] = rhs[i_NO228][j_NO230][k_NO229][3]+dz4tz1*(u[i_NO228][j_NO230][k_NO229+1][3]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][3]+u[i_NO228][j_NO230][k_NO229-1][3])+zzcon2*con43*(wp1_NO181-2.0000000000000000E+00*wijk_NO180+wm1_NO182)-tz2*(u[i_NO228][j_NO230][k_NO229+1][3]*wp1_NO181-u[i_NO228][j_NO230][k_NO229-1][3]*wm1_NO182+(u[i_NO228][j_NO230][k_NO229+1][4]-square[i_NO228][j_NO230][k_NO229+1]-u[i_NO228][j_NO230][k_NO229-1][4]+square[i_NO228][j_NO230][k_NO229-1])*c2);
      rhs[i_NO228][j_NO230][k_NO229][4] = rhs[i_NO228][j_NO230][k_NO229][4]+dz5tz1*(u[i_NO228][j_NO230][k_NO229+1][4]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][4]+u[i_NO228][j_NO230][k_NO229-1][4])+zzcon3*(qs[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*qs[i_NO228][j_NO230][k_NO229]+qs[i_NO228][j_NO230][k_NO229-1])+zzcon4*(wp1_NO181*wp1_NO181-2.0000000000000000E+00*wijk_NO180*wijk_NO180+wm1_NO182*wm1_NO182)+zzcon5*(u[i_NO228][j_NO230][k_NO229+1][4]*rho_i[i_NO228][j_NO230][k_NO229+1]-2.0000000000000000E+00*u[i_NO228][j_NO230][k_NO229][4]*rho_i[i_NO228][j_NO230][k_NO229]+u[i_NO228][j_NO230][k_NO229-1][4]*rho_i[i_NO228][j_NO230][k_NO229-1])-tz2*((c1*u[i_NO228][j_NO230][k_NO229+1][4]-c2*square[i_NO228][j_NO230][k_NO229+1])*wp1_NO181-(c1*u[i_NO228][j_NO230][k_NO229-1][4]-c2*square[i_NO228][j_NO230][k_NO229-1])*wm1_NO182);
      }
      }
      }
/* barrier_start:pe1:module106:no23 */
#pragma omp flush

/* == GROUP BARRIER23 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][23]++;
while (M106_CL0_PC0_barrier_flg[1][0][23] < M106_CL0_PC0_barrier_flg[0][1][23]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no23 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb24 ==*/
/* barrier_start:pe1:module106:no24 */
#pragma omp flush

/* == GROUP BARRIER24 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][24]++;
while (M106_CL0_PC0_barrier_flg[1][0][24] < M106_CL0_PC0_barrier_flg[0][1][24]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no24 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall25 ==*/
      for (i_NO231 = (grid_points[0]+(-2))/ 2+1 ; i_NO231 <= grid_points[0]-1-1 ; i_NO231 += 1){
/* == compute_rhs#block1.doall25.loop1 ==*/
      for (j_NO233 = 1 ; j_NO233 <= grid_points[1]-1-1 ; j_NO233 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1 ==*/
      for (m_NO232 = 0 ; m_NO232 <= 4 ; m_NO232 += 1){
/* == compute_rhs#block1.doall25.loop1.loop1.bb1 ==*/
      rhs[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232] = rhs[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232]-dssp*(5.0000000000000000E+00*u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97][m_NO232]-4.0000000000000000E+00*u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97+1][m_NO232]+u[i_NO231][j_NO233][M106_CL0_PC0_k_NO97+2][m_NO232]);
      }
      }
      }
/* barrier_start:pe1:module106:no25 */
#pragma omp flush

/* == GROUP BARRIER25 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][25]++;
while (M106_CL0_PC0_barrier_flg[1][0][25] < M106_CL0_PC0_barrier_flg[0][1][25]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no25 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb26 ==*/
/* barrier_start:pe1:module106:no26 */
#pragma omp flush

/* == GROUP BARRIER26 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][26]++;
while (M106_CL0_PC0_barrier_flg[1][0][26] < M106_CL0_PC0_barrier_flg[0][1][26]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no26 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall27 ==*/
      for (i_NO234 = (grid_points[0]+(-2))/ 2+1 ; i_NO234 <= grid_points[0]-1-1 ; i_NO234 += 1){
/* == compute_rhs#block1.doall27.loop1 ==*/
      for (j_NO236 = 1 ; j_NO236 <= grid_points[1]-1-1 ; j_NO236 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1 ==*/
      for (m_NO235 = 0 ; m_NO235 <= 4 ; m_NO235 += 1){
/* == compute_rhs#block1.doall27.loop1.loop1.bb1 ==*/
      rhs[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235] = rhs[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235]-dssp*((-4.0000000000000000E+00)*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97-1][m_NO235]+6.0000000000000000E+00*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97][m_NO235]-4.0000000000000000E+00*u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97+1][m_NO235]+u[i_NO234][j_NO236][M106_CL0_PC0_k_NO97+2][m_NO235]);
      }
      }
      }
/* barrier_start:pe1:module106:no27 */
#pragma omp flush

/* == GROUP BARRIER27 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][27]++;
while (M106_CL0_PC0_barrier_flg[1][0][27] < M106_CL0_PC0_barrier_flg[0][1][27]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no27 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall28 ==*/
      for (i_NO237 = (grid_points[0]+(-2))/ 2+1 ; i_NO237 <= grid_points[0]-1-1 ; i_NO237 += 1){
/* == compute_rhs#block1.doall28.loop1 ==*/
      for (j_NO240 = 1 ; j_NO240 <= grid_points[1]-1-1 ; j_NO240 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1 ==*/
      for (k_NO239 = 3 ; k_NO239 <= grid_points[2]-3-1 ; k_NO239 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1 ==*/
      for (m_NO238 = 0 ; m_NO238 <= 4 ; m_NO238 += 1){
/* == compute_rhs#block1.doall28.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO237][j_NO240][k_NO239][m_NO238] = rhs[i_NO237][j_NO240][k_NO239][m_NO238]-dssp*(u[i_NO237][j_NO240][k_NO239-2][m_NO238]-4.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239-1][m_NO238]+6.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239][m_NO238]-4.0000000000000000E+00*u[i_NO237][j_NO240][k_NO239+1][m_NO238]+u[i_NO237][j_NO240][k_NO239+2][m_NO238]);
      }
      }
      }
      }
/* barrier_start:pe1:module106:no28 */
#pragma omp flush

/* == GROUP BARRIER28 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][28]++;
while (M106_CL0_PC0_barrier_flg[1][0][28] < M106_CL0_PC0_barrier_flg[0][1][28]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no28 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb29 ==*/
/* barrier_start:pe1:module106:no29 */
#pragma omp flush

/* == GROUP BARRIER29 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][29]++;
while (M106_CL0_PC0_barrier_flg[1][0][29] < M106_CL0_PC0_barrier_flg[0][1][29]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no29 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall30 ==*/
      for (i_NO241 = (grid_points[0]+(-2))/ 2+1 ; i_NO241 <= grid_points[0]-1-1 ; i_NO241 += 1){
/* == compute_rhs#block1.doall30.loop1 ==*/
      for (j_NO243 = 1 ; j_NO243 <= grid_points[1]-1-1 ; j_NO243 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1 ==*/
      for (m_NO242 = 0 ; m_NO242 <= 4 ; m_NO242 += 1){
/* == compute_rhs#block1.doall30.loop1.loop1.bb1 ==*/
      rhs[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242] = rhs[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242]-dssp*(u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97-2][m_NO242]-4.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97-1][m_NO242]+6.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97][m_NO242]-4.0000000000000000E+00*u[i_NO241][j_NO243][M106_CL0_PC0_k_NO97+1][m_NO242]);
      }
      }
      }
/* barrier_start:pe1:module106:no30 */
#pragma omp flush

/* == GROUP BARRIER30 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][30]++;
while (M106_CL0_PC0_barrier_flg[1][0][30] < M106_CL0_PC0_barrier_flg[0][1][30]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no30 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb31 ==*/
/* barrier_start:pe1:module106:no31 */
#pragma omp flush

/* == GROUP BARRIER31 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][31]++;
while (M106_CL0_PC0_barrier_flg[1][0][31] < M106_CL0_PC0_barrier_flg[0][1][31]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no31 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall32 ==*/
      for (i_NO244 = (grid_points[0]+(-2))/ 2+1 ; i_NO244 <= grid_points[0]-1-1 ; i_NO244 += 1){
/* == compute_rhs#block1.doall32.loop1 ==*/
      for (j_NO246 = 1 ; j_NO246 <= grid_points[1]-1-1 ; j_NO246 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1 ==*/
      for (m_NO245 = 0 ; m_NO245 <= 4 ; m_NO245 += 1){
/* == compute_rhs#block1.doall32.loop1.loop1.bb1 ==*/
      rhs[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245] = rhs[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245]-dssp*(u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97-2][m_NO245]-4.0000000000000000E+00*u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97-1][m_NO245]+5.0000000000000000E+00*u[i_NO244][j_NO246][M106_CL0_PC0_k_NO97][m_NO245]);
      }
      }
      }
/* barrier_start:pe1:module106:no32 */
#pragma omp flush

/* == GROUP BARRIER32 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][32]++;
while (M106_CL0_PC0_barrier_flg[1][0][32] < M106_CL0_PC0_barrier_flg[0][1][32]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no32 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.doall33 ==*/
      for (j_NO247 = (grid_points[1]+(-2))/ 2+1 ; j_NO247 <= grid_points[1]-1-1 ; j_NO247 += 1){
/* == compute_rhs#block1.doall33.loop1 ==*/
      for (k_NO250 = 1 ; k_NO250 <= grid_points[2]-1-1 ; k_NO250 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1 ==*/
      for (m_NO249 = 0 ; m_NO249 <= 4 ; m_NO249 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1 ==*/
      for (i_NO248 = 1 ; i_NO248 <= grid_points[0]-1-1 ; i_NO248 += 1){
/* == compute_rhs#block1.doall33.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO248][j_NO247][k_NO250][m_NO249] = rhs[i_NO248][j_NO247][k_NO250][m_NO249]*dt;
      }
      }
      }
      }
/* barrier_start:pe1:module106:no33 */
#pragma omp flush

/* == GROUP BARRIER33 1(0,1) ==*/
M106_CL0_PC0_barrier_flg[0][1][33]++;
while (M106_CL0_PC0_barrier_flg[1][0][33] < M106_CL0_PC0_barrier_flg[0][1][33]) {
}

#pragma omp flush
/* barrier_finish:pe1:module106:no33 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == compute_rhs#block1.bb34 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 109: x_solve */
/* ******************* */
static void x_solve_PE0()
{

/* @decl:pe0:module109@ */
/* == x_solve#block1 ==*/
/* == x_solve#block1.sb1 ==*/
      lhsx_PE0();
/* barrier_start:pe0:module109:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][0][1]++;
while (M109_CL0_PC0_barrier_flg[0][1][1] < M109_CL0_PC0_barrier_flg[0][0][1]) {
}
M109_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module109:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.sb2 ==*/
      x_solve_cell_PE0();
/* barrier_start:pe0:module109:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][0][2]++;
while (M109_CL0_PC0_barrier_flg[0][1][2] < M109_CL0_PC0_barrier_flg[0][0][2]) {
}
M109_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module109:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.sb3 ==*/
      x_backsubstitute_PE0();
/* barrier_start:pe0:module109:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][0][3]++;
while (M109_CL0_PC0_barrier_flg[0][1][3] < M109_CL0_PC0_barrier_flg[0][0][3]) {
}
M109_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module109:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 109: x_solve */
/* ******************* */
static void x_solve_PE1()
{

/* @decl:pe1:module109@ */
/* == x_solve#block1 ==*/
/* == x_solve#block1.sb1 ==*/
      lhsx_PE1();
/* barrier_start:pe1:module109:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][1][1]++;
while (M109_CL0_PC0_barrier_flg[1][0][1] < M109_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module109:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.sb2 ==*/
      x_solve_cell_PE1();
/* barrier_start:pe1:module109:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][1][2]++;
while (M109_CL0_PC0_barrier_flg[1][0][2] < M109_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module109:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.sb3 ==*/
      x_backsubstitute_PE1();
/* barrier_start:pe1:module109:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M109_CL0_PC0_barrier_flg[0][1][3]++;
while (M109_CL0_PC0_barrier_flg[1][0][3] < M109_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module109:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 116: y_solve */
/* ******************* */
static void y_solve_PE0()
{

/* @decl:pe0:module116@ */
/* == y_solve#block1 ==*/
/* == y_solve#block1.sb1 ==*/
      lhsy_PE0();
/* barrier_start:pe0:module116:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][0][1]++;
while (M116_CL0_PC0_barrier_flg[0][1][1] < M116_CL0_PC0_barrier_flg[0][0][1]) {
}
M116_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module116:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.sb2 ==*/
      y_solve_cell_PE0();
/* barrier_start:pe0:module116:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][0][2]++;
while (M116_CL0_PC0_barrier_flg[0][1][2] < M116_CL0_PC0_barrier_flg[0][0][2]) {
}
M116_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module116:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.sb3 ==*/
      y_backsubstitute_PE0();
/* barrier_start:pe0:module116:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][0][3]++;
while (M116_CL0_PC0_barrier_flg[0][1][3] < M116_CL0_PC0_barrier_flg[0][0][3]) {
}
M116_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module116:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 116: y_solve */
/* ******************* */
static void y_solve_PE1()
{

/* @decl:pe1:module116@ */
/* == y_solve#block1 ==*/
/* == y_solve#block1.sb1 ==*/
      lhsy_PE1();
/* barrier_start:pe1:module116:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][1][1]++;
while (M116_CL0_PC0_barrier_flg[1][0][1] < M116_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module116:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.sb2 ==*/
      y_solve_cell_PE1();
/* barrier_start:pe1:module116:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][1][2]++;
while (M116_CL0_PC0_barrier_flg[1][0][2] < M116_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module116:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.sb3 ==*/
      y_backsubstitute_PE1();
/* barrier_start:pe1:module116:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M116_CL0_PC0_barrier_flg[0][1][3]++;
while (M116_CL0_PC0_barrier_flg[1][0][3] < M116_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module116:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 119: z_solve */
/* ******************* */
static void z_solve_PE0()
{

/* @decl:pe0:module119@ */
/* == z_solve#block1 ==*/
/* == z_solve#block1.sb1 ==*/
      lhsz_PE0();
/* barrier_start:pe0:module119:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][0][1]++;
while (M119_CL0_PC0_barrier_flg[0][1][1] < M119_CL0_PC0_barrier_flg[0][0][1]) {
}
M119_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module119:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.sb2 ==*/
      z_solve_cell_PE0();
/* barrier_start:pe0:module119:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][0][2]++;
while (M119_CL0_PC0_barrier_flg[0][1][2] < M119_CL0_PC0_barrier_flg[0][0][2]) {
}
M119_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module119:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.sb3 ==*/
      z_backsubstitute_PE0();
/* barrier_start:pe0:module119:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][0][3]++;
while (M119_CL0_PC0_barrier_flg[0][1][3] < M119_CL0_PC0_barrier_flg[0][0][3]) {
}
M119_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module119:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 119: z_solve */
/* ******************* */
static void z_solve_PE1()
{

/* @decl:pe1:module119@ */
/* == z_solve#block1 ==*/
/* == z_solve#block1.sb1 ==*/
      lhsz_PE1();
/* barrier_start:pe1:module119:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][1][1]++;
while (M119_CL0_PC0_barrier_flg[1][0][1] < M119_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module119:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.sb2 ==*/
      z_solve_cell_PE1();
/* barrier_start:pe1:module119:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][1][2]++;
while (M119_CL0_PC0_barrier_flg[1][0][2] < M119_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module119:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.sb3 ==*/
      z_backsubstitute_PE1();
/* barrier_start:pe1:module119:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M119_CL0_PC0_barrier_flg[0][1][3]++;
while (M119_CL0_PC0_barrier_flg[1][0][3] < M119_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module119:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve#block1.bb4 ==*/
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
      int i_NO99/* i */;
      int m_NO100/* m */;
      int k_NO101/* k */;
      int j_NO102/* j */;

/* @decl:pe0:module95@ */
/* == add#block1 ==*/
/* == add#block1.doall1 ==*/
      for (i_NO99 = 1 ; i_NO99 <= (grid_points[0]+(-2))/ 2 ; i_NO99 += 1){
/* == add#block1.doall1.loop1 ==*/
      for (j_NO102 = 1 ; j_NO102 <= grid_points[1]-1-1 ; j_NO102 += 1){
/* == add#block1.doall1.loop1.loop1 ==*/
      for (k_NO101 = 1 ; k_NO101 <= grid_points[2]-1-1 ; k_NO101 += 1){
/* == add#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == add#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      u[i_NO99][j_NO102][k_NO101][m_NO100] = u[i_NO99][j_NO102][k_NO101][m_NO100]+rhs[i_NO99][j_NO102][k_NO101][m_NO100];
      }
      }
      }
      }
/* barrier_start:pe0:module95:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M95_CL0_PC0_barrier_flg[0][0][1]++;
while (M95_CL0_PC0_barrier_flg[0][1][1] < M95_CL0_PC0_barrier_flg[0][0][1]) {
}
M95_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module95:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == add#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 95: add */
/* ******************* */
static void add_PE1()
{
      int i_NO99/* i */;
      int m_NO100/* m */;
      int k_NO101/* k */;
      int j_NO102/* j */;

/* @decl:pe1:module95@ */
/* == add#block1 ==*/
/* == add#block1.doall1 ==*/
      for (i_NO99 = (grid_points[0]+(-2))/ 2+1 ; i_NO99 <= grid_points[0]-1-1 ; i_NO99 += 1){
/* == add#block1.doall1.loop1 ==*/
      for (j_NO102 = 1 ; j_NO102 <= grid_points[1]-1-1 ; j_NO102 += 1){
/* == add#block1.doall1.loop1.loop1 ==*/
      for (k_NO101 = 1 ; k_NO101 <= grid_points[2]-1-1 ; k_NO101 += 1){
/* == add#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == add#block1.doall1.loop1.loop1.loop1.bb1 ==*/
      u[i_NO99][j_NO102][k_NO101][m_NO100] = u[i_NO99][j_NO102][k_NO101][m_NO100]+rhs[i_NO99][j_NO102][k_NO101][m_NO100];
      }
      }
      }
      }
/* barrier_start:pe1:module95:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M95_CL0_PC0_barrier_flg[0][1][1]++;
while (M95_CL0_PC0_barrier_flg[1][0][1] < M95_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module95:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
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
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int m_NO99/* m */;
      int d_NO100/* d */;
      double xi/* xi */;
      double eta/* eta */;
      double zeta/* zeta */;
      double add_NO104/* add */;
      int m_NO105/* m */;
      int m_NO106/* m */;
      double add_NO107/* add */;
      int m_NO108/* m */;
      int i_NO109/* i */;
      int j_NO110/* j */;
      int k_NO111/* k */;
      int m_NO112/* m */;
      int m_NO113/* m */;
      int d_NO114/* d */;

/* @decl:pe0:module97@ */
/* == error_norm#block1 ==*/
/* == error_norm#block1.doall1 ==*/
      for (m_NO108 = 0 ; m_NO108 <= 4 ; m_NO108 += 1){
/* == error_norm#block1.doall1.bb1 ==*/
      (rms[m_NO108]) = 0.0000000000000000E+00;
      }
/* == error_norm#block1.loop2 ==*/
      for (i_NO109 = 0 ; i_NO109 <= grid_points[0]-1 ; i_NO109 += 1){
/* == error_norm#block1.loop2.bb1 ==*/
      xi = (double)(i_NO109)*dnxm1;
/* == error_norm#block1.loop2.loop2 ==*/
      for (j_NO110 = 0 ; j_NO110 <= grid_points[1]-1 ; j_NO110 += 1){
/* == error_norm#block1.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO110)*dnym1;
/* == error_norm#block1.loop2.loop2.loop2 ==*/
      for (k_NO111 = 0 ; k_NO111 <= grid_points[2]-1 ; k_NO111 += 1){
/* == error_norm#block1.loop2.loop2.loop2.bb1 ==*/
      zeta = (double)(k_NO111)*dnzm1;
/* == error_norm#block1.loop2.loop2.loop2.sb2 ==*/
      exact_solution_c2_PE0(xi,eta,zeta,(&M97_CL0_PC0_u_exact[0]));
/* == error_norm#block1.loop2.loop2.loop2.doall3 ==*/
      for (m_NO112 = 0 ; m_NO112 <= 4 ; m_NO112 += 1){
/* == error_norm#block1.loop2.loop2.loop2.doall3.bb1 ==*/
      add_NO107 = u[i_NO109][j_NO110][k_NO111][m_NO112]-M97_CL0_PC0_u_exact[m_NO112];
      (rms[m_NO112]) = (rms[m_NO112])+add_NO107*add_NO107;
      }
      }
      }
      }
/* == error_norm#block1.doall3 ==*/
      for (m_NO113 = 0 ; m_NO113 <= 4 ; m_NO113 += 1){
/* == error_norm#block1.doall3.loop1 ==*/
      for (d_NO114 = 0 ; d_NO114 <= 2 ; d_NO114 += 1){
/* == error_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO113]) = (rms[m_NO113])/ (double)(grid_points[d_NO114]-2);
      }
/* == error_norm#block1.doall3.bb2 ==*/
      (rms[m_NO113]) = sqrt((rms[m_NO113]));
      }
/* == error_norm#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 97: error_norm */
/* ******************* */
static void error_norm_PE1(double* rms)
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int m_NO99/* m */;
      int d_NO100/* d */;
      double xi/* xi */;
      double eta/* eta */;
      double zeta/* zeta */;
      double add_NO104/* add */;
      int m_NO105/* m */;
      int m_NO106/* m */;
      double add_NO107/* add */;
      int m_NO108/* m */;
      int i_NO109/* i */;
      int j_NO110/* j */;
      int k_NO111/* k */;
      int m_NO112/* m */;
      int m_NO113/* m */;
      int d_NO114/* d */;

/* @decl:pe1:module97@ */
/* == error_norm#block1 ==*/
/* == error_norm#block1.doall1 ==*/
      for (m_NO108 = 0 ; m_NO108 <= 4 ; m_NO108 += 1){
/* == error_norm#block1.doall1.bb1 ==*/
      (rms[m_NO108]) = 0.0000000000000000E+00;
      }
/* == error_norm#block1.loop2 ==*/
      for (i_NO109 = 0 ; i_NO109 <= grid_points[0]-1 ; i_NO109 += 1){
/* == error_norm#block1.loop2.bb1 ==*/
      xi = (double)(i_NO109)*dnxm1;
/* == error_norm#block1.loop2.loop2 ==*/
      for (j_NO110 = 0 ; j_NO110 <= grid_points[1]-1 ; j_NO110 += 1){
/* == error_norm#block1.loop2.loop2.bb1 ==*/
      eta = (double)(j_NO110)*dnym1;
/* == error_norm#block1.loop2.loop2.loop2 ==*/
      for (k_NO111 = 0 ; k_NO111 <= grid_points[2]-1 ; k_NO111 += 1){
/* == error_norm#block1.loop2.loop2.loop2.bb1 ==*/
      zeta = (double)(k_NO111)*dnzm1;
/* == error_norm#block1.loop2.loop2.loop2.sb2 ==*/
      exact_solution_c2_PE1(xi,eta,zeta,(&M97_CL0_PC1_u_exact[0]));
/* == error_norm#block1.loop2.loop2.loop2.doall3 ==*/
      for (m_NO112 = 0 ; m_NO112 <= 4 ; m_NO112 += 1){
/* == error_norm#block1.loop2.loop2.loop2.doall3.bb1 ==*/
      add_NO107 = u[i_NO109][j_NO110][k_NO111][m_NO112]-M97_CL0_PC1_u_exact[m_NO112];
      (rms[m_NO112]) = (rms[m_NO112])+add_NO107*add_NO107;
      }
      }
      }
      }
/* == error_norm#block1.doall3 ==*/
      for (m_NO113 = 0 ; m_NO113 <= 4 ; m_NO113 += 1){
/* == error_norm#block1.doall3.loop1 ==*/
      for (d_NO114 = 0 ; d_NO114 <= 2 ; d_NO114 += 1){
/* == error_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO113]) = (rms[m_NO113])/ (double)(grid_points[d_NO114]-2);
      }
/* == error_norm#block1.doall3.bb2 ==*/
      (rms[m_NO113]) = sqrt((rms[m_NO113]));
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
static void rhs_norm_PE0(double(* rms)[4])
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int d_NO99/* d */;
      int m_NO100/* m */;
      double add_NO101/* add */;
      int m_NO102/* m */;
      int m_NO103/* m */;
      double add_NO104/* add */;
      int m_NO105/* m */;
      int i_NO106/* i */;
      int j_NO107/* j */;
      int k_NO108/* k */;
      int m_NO109/* m */;
      int m_NO110/* m */;
      int d_NO111/* d */;

/* @decl:pe0:module98@ */
/* == rhs_norm#block1 ==*/
/* == rhs_norm#block1.doall1 ==*/
      for (m_NO105 = 0 ; m_NO105 <= 4 ; m_NO105 += 1){
/* == rhs_norm#block1.doall1.bb1 ==*/
      (rms[m_NO105][0]) = 0.0000000000000000E+00;
      }
/* == rhs_norm#block1.loop2 ==*/
      for (i_NO106 = 1 ; i_NO106 <= grid_points[0]-1-1 ; i_NO106 += 1){
/* == rhs_norm#block1.loop2.loop1 ==*/
      for (j_NO107 = 1 ; j_NO107 <= grid_points[1]-1-1 ; j_NO107 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1 ==*/
      for (k_NO108 = 1 ; k_NO108 <= grid_points[2]-1-1 ; k_NO108 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1 ==*/
      for (m_NO109 = 0 ; m_NO109 <= 4 ; m_NO109 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1.bb1 ==*/
      add_NO104 = rhs[i_NO106][j_NO107][k_NO108][m_NO109];
      (rms[m_NO109][0]) = (rms[m_NO109][0])+add_NO104*add_NO104;
      }
      }
      }
      }
/* == rhs_norm#block1.doall3 ==*/
      for (m_NO110 = 0 ; m_NO110 <= 4 ; m_NO110 += 1){
/* == rhs_norm#block1.doall3.loop1 ==*/
      for (d_NO111 = 0 ; d_NO111 <= 2 ; d_NO111 += 1){
/* == rhs_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO110][0]) = (rms[m_NO110][0])/ (double)(grid_points[d_NO111]-2);
      }
/* == rhs_norm#block1.doall3.bb2 ==*/
      (rms[m_NO110][0]) = sqrt((rms[m_NO110][0]));
      }
/* == rhs_norm#block1.bb4 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 98: rhs_norm */
/* ******************* */
static void rhs_norm_PE1(double(* rms)[4])
{
      int i_NO96/* i */;
      int j_NO97/* j */;
      int k_NO98/* k */;
      int d_NO99/* d */;
      int m_NO100/* m */;
      double add_NO101/* add */;
      int m_NO102/* m */;
      int m_NO103/* m */;
      double add_NO104/* add */;
      int m_NO105/* m */;
      int i_NO106/* i */;
      int j_NO107/* j */;
      int k_NO108/* k */;
      int m_NO109/* m */;
      int m_NO110/* m */;
      int d_NO111/* d */;

/* @decl:pe1:module98@ */
/* == rhs_norm#block1 ==*/
/* == rhs_norm#block1.doall1 ==*/
      for (m_NO105 = 0 ; m_NO105 <= 4 ; m_NO105 += 1){
/* == rhs_norm#block1.doall1.bb1 ==*/
      (rms[m_NO105][0]) = 0.0000000000000000E+00;
      }
/* == rhs_norm#block1.loop2 ==*/
      for (i_NO106 = 1 ; i_NO106 <= grid_points[0]-1-1 ; i_NO106 += 1){
/* == rhs_norm#block1.loop2.loop1 ==*/
      for (j_NO107 = 1 ; j_NO107 <= grid_points[1]-1-1 ; j_NO107 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1 ==*/
      for (k_NO108 = 1 ; k_NO108 <= grid_points[2]-1-1 ; k_NO108 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1 ==*/
      for (m_NO109 = 0 ; m_NO109 <= 4 ; m_NO109 += 1){
/* == rhs_norm#block1.loop2.loop1.loop1.doall1.bb1 ==*/
      add_NO104 = rhs[i_NO106][j_NO107][k_NO108][m_NO109];
      (rms[m_NO109][0]) = (rms[m_NO109][0])+add_NO104*add_NO104;
      }
      }
      }
      }
/* == rhs_norm#block1.doall3 ==*/
      for (m_NO110 = 0 ; m_NO110 <= 4 ; m_NO110 += 1){
/* == rhs_norm#block1.doall3.loop1 ==*/
      for (d_NO111 = 0 ; d_NO111 <= 2 ; d_NO111 += 1){
/* == rhs_norm#block1.doall3.loop1.bb1 ==*/
      (rms[m_NO110][0]) = (rms[m_NO110][0])/ (double)(grid_points[d_NO111]-2);
      }
/* == rhs_norm#block1.doall3.bb2 ==*/
      (rms[m_NO110][0]) = sqrt((rms[m_NO110][0]));
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
      double tmp1_NO102/* tmp1 */;
      double tmp2_NO103/* tmp2 */;
      double tmp3_NO104/* tmp3 */;
      int j_NO105/* j */;
      int i_NO106/* i */;
      int i_NO107/* i */;
      int k_NO108/* k */;

/* @decl:pe0:module103@ */
/* == lhsx#block1 ==*/
/* == lhsx#block1.doall1 ==*/
      for (j_NO105 = 1 ; j_NO105 <= (grid_points[1]+(-2))/ 2 ; j_NO105 += 1){
/* == lhsx#block1.doall1.loop1 ==*/
      for (k_NO108 = 1 ; k_NO108 <= grid_points[2]-1-1 ; k_NO108 += 1){
/* == lhsx#block1.doall1.loop1.loop1 ==*/
      for (i_NO106 = 0 ; i_NO106 <= grid_points[0]-1 ; i_NO106 += 1){
/* == lhsx#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO102 = 1.0000000000000000E+00/ u[i_NO106][j_NO105][k_NO108][0];
      tmp2_NO103 = tmp1_NO102*tmp1_NO102;
      tmp3_NO104 = tmp1_NO102*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][0][0] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][1] = 1.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][2] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][3] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][1][0] = -(u[i_NO106][j_NO105][k_NO108][1]*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1])+c2*5.0000000000000000E-01*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][1][1] = (2.0000000000000000E+00-c2)*(u[i_NO106][j_NO105][k_NO108][1]/ u[i_NO106][j_NO105][k_NO108][0]);
      fjac[i_NO106][j_NO105][k_NO108][1][2] = -c2*(u[i_NO106][j_NO105][k_NO108][2]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][1][3] = -c2*(u[i_NO106][j_NO105][k_NO108][3]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][1][4] = c2;
      fjac[i_NO106][j_NO105][k_NO108][2][0] = -(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][2])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][2][1] = u[i_NO106][j_NO105][k_NO108][2]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][2][2] = u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][2][3] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][2][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][3][0] = -(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][3][1] = u[i_NO106][j_NO105][k_NO108][3]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][3][2] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][3][3] = u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][3][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][4][0] = (c2*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103-c1*(u[i_NO106][j_NO105][k_NO108][4]*tmp1_NO102))*(u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][4][1] = c1*u[i_NO106][j_NO105][k_NO108][4]*tmp1_NO102-5.0000000000000000E-01*c2*(3.0000000000000000E+00*u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][2] = -c2*(u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][1])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][3] = -c2*(u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][1])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][4] = c1*(u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102);
      njac[i_NO106][j_NO105][k_NO108][0][0] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][0] = -con43*c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1];
      njac[i_NO106][j_NO105][k_NO108][1][1] = con43*c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][1][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][0] = -c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][2];
      njac[i_NO106][j_NO105][k_NO108][2][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][2] = c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][2][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][0] = -c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][3];
      njac[i_NO106][j_NO105][k_NO108][3][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][3] = c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][3][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][4][0] = (c1345-con43*c3c4)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1])-(c3c4-c1345)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2])-(c3c4-c1345)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])-c1345*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][4];
      njac[i_NO106][j_NO105][k_NO108][4][1] = (con43*c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1];
      njac[i_NO106][j_NO105][k_NO108][4][2] = (c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][2];
      njac[i_NO106][j_NO105][k_NO108][4][3] = (c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][3];
      njac[i_NO106][j_NO105][k_NO108][4][4] = c1345*tmp1_NO102;
      }
/* == lhsx#block1.doall1.loop1.loop2 ==*/
      for (i_NO107 = 1 ; i_NO107 <= grid_points[0]-1-1 ; i_NO107 += 1){
/* == lhsx#block1.doall1.loop1.loop2.bb1 ==*/
      tmp1_NO102 = dt*tx1;
      tmp2_NO103 = dt*tx2;
      lhs[i_NO107][j_NO105][k_NO108][0][0][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][0]-tmp1_NO102*dx1;
      lhs[i_NO107][j_NO105][k_NO108][0][0][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][0][0][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][0][0][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][0][0][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][0][1][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][0][1][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][1]-tmp1_NO102*dx2;
      lhs[i_NO107][j_NO105][k_NO108][0][1][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][0][1][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][0][1][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][0][2][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][0][2][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][0][2][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][2]-tmp1_NO102*dx3;
      lhs[i_NO107][j_NO105][k_NO108][0][2][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][0][2][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][0][3][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][0][3][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][0][3][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][0][3][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][3]-tmp1_NO102*dx4;
      lhs[i_NO107][j_NO105][k_NO108][0][3][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][0][4][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][0][4][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][0][4][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][0][4][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][0][4][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][4]-tmp1_NO102*dx5;
      lhs[i_NO107][j_NO105][k_NO108][1][0][0] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][0]+tmp1_NO102*2.0000000000000000E+00*dx1;
      lhs[i_NO107][j_NO105][k_NO108][1][0][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][1][0][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][1][0][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][1][0][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][1][1][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][1][1][1] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][1]+tmp1_NO102*2.0000000000000000E+00*dx2;
      lhs[i_NO107][j_NO105][k_NO108][1][1][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][1][1][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][1][1][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][1][2][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][1][2][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][1][2][2] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][2]+tmp1_NO102*2.0000000000000000E+00*dx3;
      lhs[i_NO107][j_NO105][k_NO108][1][2][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][1][2][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][1][3][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][1][3][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][1][3][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][1][3][3] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][3]+tmp1_NO102*2.0000000000000000E+00*dx4;
      lhs[i_NO107][j_NO105][k_NO108][1][3][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][1][4][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][1][4][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][1][4][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][1][4][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][1][4][4] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][4]+tmp1_NO102*2.0000000000000000E+00*dx5;
      lhs[i_NO107][j_NO105][k_NO108][2][0][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][0]-tmp1_NO102*dx1;
      lhs[i_NO107][j_NO105][k_NO108][2][0][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][2][0][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][2][0][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][2][0][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][2][1][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][2][1][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][1]-tmp1_NO102*dx2;
      lhs[i_NO107][j_NO105][k_NO108][2][1][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][2][1][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][2][1][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][2][2][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][2][2][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][2][2][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][2]-tmp1_NO102*dx3;
      lhs[i_NO107][j_NO105][k_NO108][2][2][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][2][2][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][2][3][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][2][3][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][2][3][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][2][3][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][3]-tmp1_NO102*dx4;
      lhs[i_NO107][j_NO105][k_NO108][2][3][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][2][4][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][2][4][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][2][4][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][2][4][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][2][4][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][4]-tmp1_NO102*dx5;
      }
      }
      }
/* barrier_start:pe0:module103:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M103_CL0_PC0_barrier_flg[0][0][1]++;
while (M103_CL0_PC0_barrier_flg[0][1][1] < M103_CL0_PC0_barrier_flg[0][0][1]) {
}
M103_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module103:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsx#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 103: lhsx */
/* ******************* */
static void lhsx_PE1()
{
      double tmp1_NO102/* tmp1 */;
      double tmp2_NO103/* tmp2 */;
      double tmp3_NO104/* tmp3 */;
      int j_NO105/* j */;
      int i_NO106/* i */;
      int i_NO107/* i */;
      int k_NO108/* k */;

/* @decl:pe1:module103@ */
/* == lhsx#block1 ==*/
/* == lhsx#block1.doall1 ==*/
      for (j_NO105 = (grid_points[1]+(-2))/ 2+1 ; j_NO105 <= grid_points[1]-1-1 ; j_NO105 += 1){
/* == lhsx#block1.doall1.loop1 ==*/
      for (k_NO108 = 1 ; k_NO108 <= grid_points[2]-1-1 ; k_NO108 += 1){
/* == lhsx#block1.doall1.loop1.loop1 ==*/
      for (i_NO106 = 0 ; i_NO106 <= grid_points[0]-1 ; i_NO106 += 1){
/* == lhsx#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO102 = 1.0000000000000000E+00/ u[i_NO106][j_NO105][k_NO108][0];
      tmp2_NO103 = tmp1_NO102*tmp1_NO102;
      tmp3_NO104 = tmp1_NO102*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][0][0] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][1] = 1.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][2] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][3] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][0][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][1][0] = -(u[i_NO106][j_NO105][k_NO108][1]*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1])+c2*5.0000000000000000E-01*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][1][1] = (2.0000000000000000E+00-c2)*(u[i_NO106][j_NO105][k_NO108][1]/ u[i_NO106][j_NO105][k_NO108][0]);
      fjac[i_NO106][j_NO105][k_NO108][1][2] = -c2*(u[i_NO106][j_NO105][k_NO108][2]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][1][3] = -c2*(u[i_NO106][j_NO105][k_NO108][3]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][1][4] = c2;
      fjac[i_NO106][j_NO105][k_NO108][2][0] = -(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][2])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][2][1] = u[i_NO106][j_NO105][k_NO108][2]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][2][2] = u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][2][3] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][2][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][3][0] = -(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][3][1] = u[i_NO106][j_NO105][k_NO108][3]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][3][2] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][3][3] = u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102;
      fjac[i_NO106][j_NO105][k_NO108][3][4] = 0.0000000000000000E+00;
      fjac[i_NO106][j_NO105][k_NO108][4][0] = (c2*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103-c1*(u[i_NO106][j_NO105][k_NO108][4]*tmp1_NO102))*(u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102);
      fjac[i_NO106][j_NO105][k_NO108][4][1] = c1*u[i_NO106][j_NO105][k_NO108][4]*tmp1_NO102-5.0000000000000000E-01*c2*(3.0000000000000000E+00*u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1]+u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2]+u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][2] = -c2*(u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][1])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][3] = -c2*(u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][1])*tmp2_NO103;
      fjac[i_NO106][j_NO105][k_NO108][4][4] = c1*(u[i_NO106][j_NO105][k_NO108][1]*tmp1_NO102);
      njac[i_NO106][j_NO105][k_NO108][0][0] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][0][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][0] = -con43*c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1];
      njac[i_NO106][j_NO105][k_NO108][1][1] = con43*c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][1][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][1][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][0] = -c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][2];
      njac[i_NO106][j_NO105][k_NO108][2][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][2] = c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][2][3] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][2][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][0] = -c3c4*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][3];
      njac[i_NO106][j_NO105][k_NO108][3][1] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][2] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][3][3] = c3c4*tmp1_NO102;
      njac[i_NO106][j_NO105][k_NO108][3][4] = 0.0000000000000000E+00;
      njac[i_NO106][j_NO105][k_NO108][4][0] = (c1345-con43*c3c4)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][1]*u[i_NO106][j_NO105][k_NO108][1])-(c3c4-c1345)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][2]*u[i_NO106][j_NO105][k_NO108][2])-(c3c4-c1345)*tmp3_NO104*(u[i_NO106][j_NO105][k_NO108][3]*u[i_NO106][j_NO105][k_NO108][3])-c1345*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][4];
      njac[i_NO106][j_NO105][k_NO108][4][1] = (con43*c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][1];
      njac[i_NO106][j_NO105][k_NO108][4][2] = (c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][2];
      njac[i_NO106][j_NO105][k_NO108][4][3] = (c3c4-c1345)*tmp2_NO103*u[i_NO106][j_NO105][k_NO108][3];
      njac[i_NO106][j_NO105][k_NO108][4][4] = c1345*tmp1_NO102;
      }
/* == lhsx#block1.doall1.loop1.loop2 ==*/
      for (i_NO107 = 1 ; i_NO107 <= grid_points[0]-1-1 ; i_NO107 += 1){
/* == lhsx#block1.doall1.loop1.loop2.bb1 ==*/
      tmp1_NO102 = dt*tx1;
      tmp2_NO103 = dt*tx2;
      lhs[i_NO107][j_NO105][k_NO108][0][0][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][0]-tmp1_NO102*dx1;
      lhs[i_NO107][j_NO105][k_NO108][0][0][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][0][0][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][0][0][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][0][0][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][0][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][0][1][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][0][1][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][1]-tmp1_NO102*dx2;
      lhs[i_NO107][j_NO105][k_NO108][0][1][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][0][1][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][0][1][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][1][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][0][2][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][0][2][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][0][2][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][2]-tmp1_NO102*dx3;
      lhs[i_NO107][j_NO105][k_NO108][0][2][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][0][2][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][2][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][0][3][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][0][3][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][0][3][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][0][3][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][3]-tmp1_NO102*dx4;
      lhs[i_NO107][j_NO105][k_NO108][0][3][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][3][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][0][4][0] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][0]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][0][4][1] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][1]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][0][4][2] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][2]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][0][4][3] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][3]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][0][4][4] = -tmp2_NO103*fjac[i_NO107-1][j_NO105][k_NO108][4][4]-tmp1_NO102*njac[i_NO107-1][j_NO105][k_NO108][4][4]-tmp1_NO102*dx5;
      lhs[i_NO107][j_NO105][k_NO108][1][0][0] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][0]+tmp1_NO102*2.0000000000000000E+00*dx1;
      lhs[i_NO107][j_NO105][k_NO108][1][0][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][1][0][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][1][0][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][1][0][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][1][1][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][1][1][1] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][1]+tmp1_NO102*2.0000000000000000E+00*dx2;
      lhs[i_NO107][j_NO105][k_NO108][1][1][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][1][1][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][1][1][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][1][2][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][1][2][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][1][2][2] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][2]+tmp1_NO102*2.0000000000000000E+00*dx3;
      lhs[i_NO107][j_NO105][k_NO108][1][2][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][1][2][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][1][3][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][1][3][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][1][3][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][1][3][3] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][3]+tmp1_NO102*2.0000000000000000E+00*dx4;
      lhs[i_NO107][j_NO105][k_NO108][1][3][4] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][1][4][0] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][1][4][1] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][1][4][2] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][1][4][3] = tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][1][4][4] = 1.0000000000000000E+00+tmp1_NO102*2.0000000000000000E+00*njac[i_NO107][j_NO105][k_NO108][4][4]+tmp1_NO102*2.0000000000000000E+00*dx5;
      lhs[i_NO107][j_NO105][k_NO108][2][0][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][0]-tmp1_NO102*dx1;
      lhs[i_NO107][j_NO105][k_NO108][2][0][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][1];
      lhs[i_NO107][j_NO105][k_NO108][2][0][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][2];
      lhs[i_NO107][j_NO105][k_NO108][2][0][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][3];
      lhs[i_NO107][j_NO105][k_NO108][2][0][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][0][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][0][4];
      lhs[i_NO107][j_NO105][k_NO108][2][1][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][0];
      lhs[i_NO107][j_NO105][k_NO108][2][1][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][1]-tmp1_NO102*dx2;
      lhs[i_NO107][j_NO105][k_NO108][2][1][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][2];
      lhs[i_NO107][j_NO105][k_NO108][2][1][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][3];
      lhs[i_NO107][j_NO105][k_NO108][2][1][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][1][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][1][4];
      lhs[i_NO107][j_NO105][k_NO108][2][2][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][0];
      lhs[i_NO107][j_NO105][k_NO108][2][2][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][1];
      lhs[i_NO107][j_NO105][k_NO108][2][2][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][2]-tmp1_NO102*dx3;
      lhs[i_NO107][j_NO105][k_NO108][2][2][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][3];
      lhs[i_NO107][j_NO105][k_NO108][2][2][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][2][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][2][4];
      lhs[i_NO107][j_NO105][k_NO108][2][3][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][0];
      lhs[i_NO107][j_NO105][k_NO108][2][3][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][1];
      lhs[i_NO107][j_NO105][k_NO108][2][3][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][2];
      lhs[i_NO107][j_NO105][k_NO108][2][3][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][3]-tmp1_NO102*dx4;
      lhs[i_NO107][j_NO105][k_NO108][2][3][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][3][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][3][4];
      lhs[i_NO107][j_NO105][k_NO108][2][4][0] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][0]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][0];
      lhs[i_NO107][j_NO105][k_NO108][2][4][1] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][1]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][1];
      lhs[i_NO107][j_NO105][k_NO108][2][4][2] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][2]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][2];
      lhs[i_NO107][j_NO105][k_NO108][2][4][3] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][3]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][3];
      lhs[i_NO107][j_NO105][k_NO108][2][4][4] = tmp2_NO103*fjac[i_NO107+1][j_NO105][k_NO108][4][4]-tmp1_NO102*njac[i_NO107+1][j_NO105][k_NO108][4][4]-tmp1_NO102*dx5;
      }
      }
      }
/* barrier_start:pe1:module103:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M103_CL0_PC0_barrier_flg[0][1][1]++;
while (M103_CL0_PC0_barrier_flg[1][0][1] < M103_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module103:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsx#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 111: x_solve_cell */
/* ******************* */
static void x_solve_cell_PE0()
{
      int j_NO103/* j */;
      int k_NO104/* k */;
      int i_NO105/* i */;
      int j_NO106/* j */;
      int k_NO107/* k */;
      int j_NO108/* j */;
      int k_NO109/* k */;

/* @decl:pe0:module111@ */
/* == x_solve_cell#block1 ==*/
/* == x_solve_cell#block1.bb1 ==*/
      M111_CL0_PC0_isize = grid_points[0]-1;
/* barrier_start:pe0:module111:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][0][1]++;
while (M111_CL0_PC0_barrier_flg[0][1][1] < M111_CL0_PC0_barrier_flg[0][0][1]) {
}
M111_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module111:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.doall2 ==*/
      for (j_NO103 = 1 ; j_NO103 <= (grid_points[1]+(-2))/ 2 ; j_NO103 += 1){
/* == x_solve_cell#block1.doall2.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == x_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE0((&lhs[0][j_NO103][k_NO104][1][0]),(&lhs[0][j_NO103][k_NO104][2][0]),(&rhs[0][j_NO103][k_NO104][0]));
      }
      }
/* barrier_start:pe0:module111:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][0][2]++;
while (M111_CL0_PC0_barrier_flg[0][1][2] < M111_CL0_PC0_barrier_flg[0][0][2]) {
}
M111_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module111:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.loop3 ==*/
      for (i_NO105 = 1 ; i_NO105 <= M111_CL0_PC0_isize-1 ; i_NO105 += 1){
/* == x_solve_cell#block1.loop3.doall1 ==*/
      for (j_NO106 = 1 ; j_NO106 <= (grid_points[1]+(-2))/ 2 ; j_NO106 += 1){
/* == x_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (k_NO107 = 1 ; k_NO107 <= grid_points[2]-1-1 ; k_NO107 += 1){
/* == x_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[i_NO105][j_NO106][k_NO107][0][0]),(&rhs[i_NO105-1][j_NO106][k_NO107][0]),(&rhs[i_NO105][j_NO106][k_NO107][0]));
/* == x_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[i_NO105][j_NO106][k_NO107][0][0]),(&lhs[i_NO105-1][j_NO106][k_NO107][2][0]),(&lhs[i_NO105][j_NO106][k_NO107][1][0]));
/* == x_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE0((&lhs[i_NO105][j_NO106][k_NO107][1][0]),(&lhs[i_NO105][j_NO106][k_NO107][2][0]),(&rhs[i_NO105][j_NO106][k_NO107][0]));
      }
      }
/* barrier_start:pe0:module111:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][0][3]++;
while (M111_CL0_PC0_barrier_flg[0][1][3] < M111_CL0_PC0_barrier_flg[0][0][3]) {
}
M111_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module111:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe0:module111:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][0][4]++;
while (M111_CL0_PC0_barrier_flg[0][1][4] < M111_CL0_PC0_barrier_flg[0][0][4]) {
}
M111_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module111:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.doall4 ==*/
      for (j_NO108 = 1 ; j_NO108 <= (grid_points[1]+(-2))/ 2 ; j_NO108 += 1){
/* == x_solve_cell#block1.doall4.loop1 ==*/
      for (k_NO109 = 1 ; k_NO109 <= grid_points[2]-1-1 ; k_NO109 += 1){
/* == x_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0][0]),(&rhs[M111_CL0_PC0_isize-1][j_NO108][k_NO109][0]),(&rhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0]));
/* == x_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0][0]),(&lhs[M111_CL0_PC0_isize-1][j_NO108][k_NO109][2][0]),(&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][1][0]));
/* == x_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE0((&lhs[M111_CL0_PC0_i_NO95][j_NO108][k_NO109][1][0]),(&rhs[M111_CL0_PC0_i_NO95][j_NO108][k_NO109][0]));
      }
      }
/* barrier_start:pe0:module111:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][0][5]++;
while (M111_CL0_PC0_barrier_flg[0][1][5] < M111_CL0_PC0_barrier_flg[0][0][5]) {
}
M111_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module111:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 111: x_solve_cell */
/* ******************* */
static void x_solve_cell_PE1()
{
      int j_NO103/* j */;
      int k_NO104/* k */;
      int i_NO105/* i */;
      int j_NO106/* j */;
      int k_NO107/* k */;
      int j_NO108/* j */;
      int k_NO109/* k */;

/* @decl:pe1:module111@ */
/* == x_solve_cell#block1 ==*/
/* == x_solve_cell#block1.bb1 ==*/
/* barrier_start:pe1:module111:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][1][1]++;
while (M111_CL0_PC0_barrier_flg[1][0][1] < M111_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module111:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.doall2 ==*/
      for (j_NO103 = (grid_points[1]+(-2))/ 2+1 ; j_NO103 <= grid_points[1]-1-1 ; j_NO103 += 1){
/* == x_solve_cell#block1.doall2.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == x_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE1((&lhs[0][j_NO103][k_NO104][1][0]),(&lhs[0][j_NO103][k_NO104][2][0]),(&rhs[0][j_NO103][k_NO104][0]));
      }
      }
/* barrier_start:pe1:module111:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][1][2]++;
while (M111_CL0_PC0_barrier_flg[1][0][2] < M111_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module111:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.loop3 ==*/
      for (i_NO105 = 1 ; i_NO105 <= M111_CL0_PC0_isize-1 ; i_NO105 += 1){
/* == x_solve_cell#block1.loop3.doall1 ==*/
      for (j_NO106 = (grid_points[1]+(-2))/ 2+1 ; j_NO106 <= grid_points[1]-1-1 ; j_NO106 += 1){
/* == x_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (k_NO107 = 1 ; k_NO107 <= grid_points[2]-1-1 ; k_NO107 += 1){
/* == x_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[i_NO105][j_NO106][k_NO107][0][0]),(&rhs[i_NO105-1][j_NO106][k_NO107][0]),(&rhs[i_NO105][j_NO106][k_NO107][0]));
/* == x_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[i_NO105][j_NO106][k_NO107][0][0]),(&lhs[i_NO105-1][j_NO106][k_NO107][2][0]),(&lhs[i_NO105][j_NO106][k_NO107][1][0]));
/* == x_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE1((&lhs[i_NO105][j_NO106][k_NO107][1][0]),(&lhs[i_NO105][j_NO106][k_NO107][2][0]),(&rhs[i_NO105][j_NO106][k_NO107][0]));
      }
      }
/* barrier_start:pe1:module111:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][1][3]++;
while (M111_CL0_PC0_barrier_flg[1][0][3] < M111_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module111:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
      M111_CL0_PC0_i_NO95 = i_NO105;
/* barrier_start:pe1:module111:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][1][4]++;
while (M111_CL0_PC0_barrier_flg[1][0][4] < M111_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module111:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.doall4 ==*/
      for (j_NO108 = (grid_points[1]+(-2))/ 2+1 ; j_NO108 <= grid_points[1]-1-1 ; j_NO108 += 1){
/* == x_solve_cell#block1.doall4.loop1 ==*/
      for (k_NO109 = 1 ; k_NO109 <= grid_points[2]-1-1 ; k_NO109 += 1){
/* == x_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0][0]),(&rhs[M111_CL0_PC0_isize-1][j_NO108][k_NO109][0]),(&rhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0]));
/* == x_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][0][0]),(&lhs[M111_CL0_PC0_isize-1][j_NO108][k_NO109][2][0]),(&lhs[M111_CL0_PC0_isize][j_NO108][k_NO109][1][0]));
/* == x_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE1((&lhs[M111_CL0_PC0_i_NO95][j_NO108][k_NO109][1][0]),(&rhs[M111_CL0_PC0_i_NO95][j_NO108][k_NO109][0]));
      }
      }
/* barrier_start:pe1:module111:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M111_CL0_PC0_barrier_flg[0][1][5]++;
while (M111_CL0_PC0_barrier_flg[1][0][5] < M111_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module111:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 110: x_backsubstitute */
/* ******************* */
static void x_backsubstitute_PE0()
{
      int i_NO100/* i */;
      int j_NO101/* j */;
      int n_NO102/* n */;
      int m_NO103/* m */;
      int k_NO104/* k */;

/* @decl:pe0:module110@ */
/* == x_backsubstitute#block1 ==*/
/* == x_backsubstitute#block1.loop1 ==*/
      for (i_NO100 = grid_points[0]-2 ; i_NO100 >= 0 ; i_NO100 += (-1)){
/* == x_backsubstitute#block1.loop1.doall1 ==*/
      for (j_NO101 = 1 ; j_NO101 <= (grid_points[1]+(-2))/ 2 ; j_NO101 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1 ==*/
      for (m_NO103 = 0 ; m_NO103 <= 4 ; m_NO103 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1 ==*/
      for (n_NO102 = 0 ; n_NO102 <= 4 ; n_NO102 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO100][j_NO101][k_NO104][m_NO103] = rhs[i_NO100][j_NO101][k_NO104][m_NO103]-lhs[i_NO100][j_NO101][k_NO104][2][m_NO103][n_NO102]*rhs[i_NO100+1][j_NO101][k_NO104][n_NO102];
      }
      }
      }
      }
/* barrier_start:pe0:module110:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M110_CL0_PC0_barrier_flg[0][0][1]++;
while (M110_CL0_PC0_barrier_flg[0][1][1] < M110_CL0_PC0_barrier_flg[0][0][1]) {
}
M110_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module110:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe0:module110:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M110_CL0_PC0_barrier_flg[0][0][2]++;
while (M110_CL0_PC0_barrier_flg[0][1][2] < M110_CL0_PC0_barrier_flg[0][0][2]) {
}
M110_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module110:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_backsubstitute#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 110: x_backsubstitute */
/* ******************* */
static void x_backsubstitute_PE1()
{
      int i_NO100/* i */;
      int j_NO101/* j */;
      int n_NO102/* n */;
      int m_NO103/* m */;
      int k_NO104/* k */;

/* @decl:pe1:module110@ */
/* == x_backsubstitute#block1 ==*/
/* == x_backsubstitute#block1.loop1 ==*/
      for (i_NO100 = grid_points[0]-2 ; i_NO100 >= 0 ; i_NO100 += (-1)){
/* == x_backsubstitute#block1.loop1.doall1 ==*/
      for (j_NO101 = (grid_points[1]+(-2))/ 2+1 ; j_NO101 <= grid_points[1]-1-1 ; j_NO101 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1 ==*/
      for (m_NO103 = 0 ; m_NO103 <= 4 ; m_NO103 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1 ==*/
      for (n_NO102 = 0 ; n_NO102 <= 4 ; n_NO102 += 1){
/* == x_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO100][j_NO101][k_NO104][m_NO103] = rhs[i_NO100][j_NO101][k_NO104][m_NO103]-lhs[i_NO100][j_NO101][k_NO104][2][m_NO103][n_NO102]*rhs[i_NO100+1][j_NO101][k_NO104][n_NO102];
      }
      }
      }
      }
/* barrier_start:pe1:module110:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M110_CL0_PC0_barrier_flg[0][1][1]++;
while (M110_CL0_PC0_barrier_flg[1][0][1] < M110_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module110:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe1:module110:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M110_CL0_PC0_barrier_flg[0][1][2]++;
while (M110_CL0_PC0_barrier_flg[1][0][2] < M110_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module110:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == x_backsubstitute#block1.bb2 ==*/
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
      double tmp1_NO104/* tmp1 */;
      double tmp2_NO105/* tmp2 */;
      double tmp3_NO106/* tmp3 */;
      double tmp1_NO107/* tmp1 */;
      double tmp2_NO108/* tmp2 */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int j_NO114/* j */;

/* @decl:pe0:module104@ */
/* == lhsy#block1 ==*/
/* == lhsy#block1.doall1 ==*/
      for (i_NO109 = 1 ; i_NO109 <= (grid_points[0]+(-2))/ 2 ; i_NO109 += 1){
/* == lhsy#block1.doall1.loop1 ==*/
      for (j_NO111 = 0 ; j_NO111 <= grid_points[1]-1 ; j_NO111 += 1){
/* == lhsy#block1.doall1.loop1.loop1 ==*/
      for (k_NO110 = 1 ; k_NO110 <= grid_points[2]-1-1 ; k_NO110 += 1){
/* == lhsy#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO104 = 1.0000000000000000E+00/ u[i_NO109][j_NO111][k_NO110][0];
      tmp2_NO105 = tmp1_NO104*tmp1_NO104;
      tmp3_NO106 = tmp1_NO104*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][2] = 1.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][0] = -(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][2])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][1][1] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][2] = u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]*tmp2_NO105)+5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][2][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][2] = (2.0000000000000000E+00-c2)*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][3] = -c2*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][4] = c2;
      fjac[i_NO109][j_NO111][k_NO110][3][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][3][2] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][3] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][4][0] = (c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105-c1*u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104)*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][4][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][2]*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][2] = c1*u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104-5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+3.0000000000000000E+00*u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][4][3] = -c2*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][4] = c1*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][1][1] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][0] = -con43*c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][2] = con43*c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][2][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][3] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][4][0] = (c1345-c3c4)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1])-(con43*c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2])-(c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])-c1345*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][4];
      njac[i_NO109][j_NO111][k_NO110][4][1] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][4][2] = (con43*c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][4][3] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][4][4] = c1345*tmp1_NO104;
      }
      }
      }
/* barrier_start:pe0:module104:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M104_CL0_PC0_barrier_flg[0][0][1]++;
while (M104_CL0_PC0_barrier_flg[0][1][1] < M104_CL0_PC0_barrier_flg[0][0][1]) {
}
M104_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module104:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsy#block1.doall2 ==*/
      for (i_NO112 = 1 ; i_NO112 <= (grid_points[0]+(-2))/ 2 ; i_NO112 += 1){
/* == lhsy#block1.doall2.loop1 ==*/
      for (j_NO114 = 1 ; j_NO114 <= grid_points[1]-1-1 ; j_NO114 += 1){
/* == lhsy#block1.doall2.loop1.loop1 ==*/
      for (k_NO113 = 1 ; k_NO113 <= grid_points[2]-1-1 ; k_NO113 += 1){
/* == lhsy#block1.doall2.loop1.loop1.bb1 ==*/
      tmp1_NO107 = dt*ty1;
      tmp2_NO108 = dt*ty2;
      lhs[i_NO112][j_NO114][k_NO113][0][0][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][0]-tmp1_NO107*dy1;
      lhs[i_NO112][j_NO114][k_NO113][0][0][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][0][0][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][0][0][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][0][0][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][0][1][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][0][1][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][1]-tmp1_NO107*dy2;
      lhs[i_NO112][j_NO114][k_NO113][0][1][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][0][1][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][0][1][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][0][2][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][0][2][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][0][2][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][2]-tmp1_NO107*dy3;
      lhs[i_NO112][j_NO114][k_NO113][0][2][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][0][2][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][0][3][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][0][3][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][0][3][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][0][3][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][3]-tmp1_NO107*dy4;
      lhs[i_NO112][j_NO114][k_NO113][0][3][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][0][4][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][0][4][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][0][4][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][0][4][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][0][4][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][4]-tmp1_NO107*dy5;
      lhs[i_NO112][j_NO114][k_NO113][1][0][0] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][0]+tmp1_NO107*2.0000000000000000E+00*dy1;
      lhs[i_NO112][j_NO114][k_NO113][1][0][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][1][0][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][1][0][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][1][0][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][1][1][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][1][1][1] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][1]+tmp1_NO107*2.0000000000000000E+00*dy2;
      lhs[i_NO112][j_NO114][k_NO113][1][1][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][1][1][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][1][1][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][1][2][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][1][2][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][1][2][2] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][2]+tmp1_NO107*2.0000000000000000E+00*dy3;
      lhs[i_NO112][j_NO114][k_NO113][1][2][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][1][2][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][1][3][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][1][3][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][1][3][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][1][3][3] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][3]+tmp1_NO107*2.0000000000000000E+00*dy4;
      lhs[i_NO112][j_NO114][k_NO113][1][3][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][1][4][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][1][4][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][1][4][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][1][4][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][1][4][4] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][4]+tmp1_NO107*2.0000000000000000E+00*dy5;
      lhs[i_NO112][j_NO114][k_NO113][2][0][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][0]-tmp1_NO107*dy1;
      lhs[i_NO112][j_NO114][k_NO113][2][0][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][2][0][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][2][0][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][2][0][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][2][1][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][2][1][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][1]-tmp1_NO107*dy2;
      lhs[i_NO112][j_NO114][k_NO113][2][1][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][2][1][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][2][1][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][2][2][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][2][2][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][2][2][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][2]-tmp1_NO107*dy3;
      lhs[i_NO112][j_NO114][k_NO113][2][2][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][2][2][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][2][3][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][2][3][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][2][3][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][2][3][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][3]-tmp1_NO107*dy4;
      lhs[i_NO112][j_NO114][k_NO113][2][3][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][2][4][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][2][4][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][2][4][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][2][4][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][2][4][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][4]-tmp1_NO107*dy5;
      }
      }
      }
/* barrier_start:pe0:module104:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M104_CL0_PC0_barrier_flg[0][0][2]++;
while (M104_CL0_PC0_barrier_flg[0][1][2] < M104_CL0_PC0_barrier_flg[0][0][2]) {
}
M104_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module104:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsy#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 104: lhsy */
/* ******************* */
static void lhsy_PE1()
{
      double tmp1_NO104/* tmp1 */;
      double tmp2_NO105/* tmp2 */;
      double tmp3_NO106/* tmp3 */;
      double tmp1_NO107/* tmp1 */;
      double tmp2_NO108/* tmp2 */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int j_NO114/* j */;

/* @decl:pe1:module104@ */
/* == lhsy#block1 ==*/
/* == lhsy#block1.doall1 ==*/
      for (i_NO109 = (grid_points[0]+(-2))/ 2+1 ; i_NO109 <= grid_points[0]-1-1 ; i_NO109 += 1){
/* == lhsy#block1.doall1.loop1 ==*/
      for (j_NO111 = 0 ; j_NO111 <= grid_points[1]-1 ; j_NO111 += 1){
/* == lhsy#block1.doall1.loop1.loop1 ==*/
      for (k_NO110 = 1 ; k_NO110 <= grid_points[2]-1-1 ; k_NO110 += 1){
/* == lhsy#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO104 = 1.0000000000000000E+00/ u[i_NO109][j_NO111][k_NO110][0];
      tmp2_NO105 = tmp1_NO104*tmp1_NO104;
      tmp3_NO106 = tmp1_NO104*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][2] = 1.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][0] = -(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][2])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][1][1] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][2] = u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]*tmp2_NO105)+5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][2][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][2] = (2.0000000000000000E+00-c2)*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][3] = -c2*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][4] = c2;
      fjac[i_NO109][j_NO111][k_NO110][3][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][3][2] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][3] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][4][0] = (c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105-c1*u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104)*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][4][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][2]*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][2] = c1*u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104-5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+3.0000000000000000E+00*u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][4][3] = -c2*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][4] = c1*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][1][1] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][0] = -con43*c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][2] = con43*c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][2][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][3] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][4][0] = (c1345-c3c4)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1])-(con43*c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2])-(c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])-c1345*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][4];
      njac[i_NO109][j_NO111][k_NO110][4][1] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][4][2] = (con43*c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][4][3] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][4][4] = c1345*tmp1_NO104;
      }
      }
      }
/* barrier_start:pe1:module104:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M104_CL0_PC0_barrier_flg[0][1][1]++;
while (M104_CL0_PC0_barrier_flg[1][0][1] < M104_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module104:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsy#block1.doall2 ==*/
      for (i_NO112 = (grid_points[0]+(-2))/ 2+1 ; i_NO112 <= grid_points[0]-1-1 ; i_NO112 += 1){
/* == lhsy#block1.doall2.loop1 ==*/
      for (j_NO114 = 1 ; j_NO114 <= grid_points[1]-1-1 ; j_NO114 += 1){
/* == lhsy#block1.doall2.loop1.loop1 ==*/
      for (k_NO113 = 1 ; k_NO113 <= grid_points[2]-1-1 ; k_NO113 += 1){
/* == lhsy#block1.doall2.loop1.loop1.bb1 ==*/
      tmp1_NO107 = dt*ty1;
      tmp2_NO108 = dt*ty2;
      lhs[i_NO112][j_NO114][k_NO113][0][0][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][0]-tmp1_NO107*dy1;
      lhs[i_NO112][j_NO114][k_NO113][0][0][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][0][0][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][0][0][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][0][0][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][0][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][0][1][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][0][1][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][1]-tmp1_NO107*dy2;
      lhs[i_NO112][j_NO114][k_NO113][0][1][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][0][1][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][0][1][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][1][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][0][2][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][0][2][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][0][2][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][2]-tmp1_NO107*dy3;
      lhs[i_NO112][j_NO114][k_NO113][0][2][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][0][2][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][2][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][0][3][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][0][3][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][0][3][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][0][3][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][3]-tmp1_NO107*dy4;
      lhs[i_NO112][j_NO114][k_NO113][0][3][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][3][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][0][4][0] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][0]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][0][4][1] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][1]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][0][4][2] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][2]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][0][4][3] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][3]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][0][4][4] = -tmp2_NO108*fjac[i_NO112][j_NO114-1][k_NO113][4][4]-tmp1_NO107*njac[i_NO112][j_NO114-1][k_NO113][4][4]-tmp1_NO107*dy5;
      lhs[i_NO112][j_NO114][k_NO113][1][0][0] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][0]+tmp1_NO107*2.0000000000000000E+00*dy1;
      lhs[i_NO112][j_NO114][k_NO113][1][0][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][1][0][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][1][0][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][1][0][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][1][1][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][1][1][1] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][1]+tmp1_NO107*2.0000000000000000E+00*dy2;
      lhs[i_NO112][j_NO114][k_NO113][1][1][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][1][1][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][1][1][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][1][2][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][1][2][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][1][2][2] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][2]+tmp1_NO107*2.0000000000000000E+00*dy3;
      lhs[i_NO112][j_NO114][k_NO113][1][2][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][1][2][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][1][3][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][1][3][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][1][3][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][1][3][3] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][3]+tmp1_NO107*2.0000000000000000E+00*dy4;
      lhs[i_NO112][j_NO114][k_NO113][1][3][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][1][4][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][1][4][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][1][4][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][1][4][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][1][4][4] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][4]+tmp1_NO107*2.0000000000000000E+00*dy5;
      lhs[i_NO112][j_NO114][k_NO113][2][0][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][0]-tmp1_NO107*dy1;
      lhs[i_NO112][j_NO114][k_NO113][2][0][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][2][0][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][2][0][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][2][0][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][0][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][2][1][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][2][1][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][1]-tmp1_NO107*dy2;
      lhs[i_NO112][j_NO114][k_NO113][2][1][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][2][1][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][2][1][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][1][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][2][2][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][2][2][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][2][2][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][2]-tmp1_NO107*dy3;
      lhs[i_NO112][j_NO114][k_NO113][2][2][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][2][2][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][2][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][2][3][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][2][3][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][2][3][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][2][3][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][3]-tmp1_NO107*dy4;
      lhs[i_NO112][j_NO114][k_NO113][2][3][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][3][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][2][4][0] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][0]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][2][4][1] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][1]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][2][4][2] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][2]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][2][4][3] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][3]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][2][4][4] = tmp2_NO108*fjac[i_NO112][j_NO114+1][k_NO113][4][4]-tmp1_NO107*njac[i_NO112][j_NO114+1][k_NO113][4][4]-tmp1_NO107*dy5;
      }
      }
      }
/* barrier_start:pe1:module104:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M104_CL0_PC0_barrier_flg[0][1][2]++;
while (M104_CL0_PC0_barrier_flg[1][0][2] < M104_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module104:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsy#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 118: y_solve_cell */
/* ******************* */
static void y_solve_cell_PE0()
{
      int i_NO103/* i */;
      int k_NO104/* k */;
      int j_NO105/* j */;
      int i_NO106/* i */;
      int k_NO107/* k */;
      int i_NO108/* i */;
      int k_NO109/* k */;

/* @decl:pe0:module118@ */
/* == y_solve_cell#block1 ==*/
/* == y_solve_cell#block1.bb1 ==*/
      M118_CL0_PC0_jsize = grid_points[1]-1;
/* barrier_start:pe0:module118:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][0][1]++;
while (M118_CL0_PC0_barrier_flg[0][1][1] < M118_CL0_PC0_barrier_flg[0][0][1]) {
}
M118_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module118:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.doall2 ==*/
      for (i_NO103 = 1 ; i_NO103 <= (grid_points[0]+(-2))/ 2 ; i_NO103 += 1){
/* == y_solve_cell#block1.doall2.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == y_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE0((&lhs[i_NO103][0][k_NO104][1][0]),(&lhs[i_NO103][0][k_NO104][2][0]),(&rhs[i_NO103][0][k_NO104][0]));
      }
      }
/* barrier_start:pe0:module118:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][0][2]++;
while (M118_CL0_PC0_barrier_flg[0][1][2] < M118_CL0_PC0_barrier_flg[0][0][2]) {
}
M118_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module118:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.loop3 ==*/
      for (j_NO105 = 1 ; j_NO105 <= M118_CL0_PC0_jsize-1 ; j_NO105 += 1){
/* == y_solve_cell#block1.loop3.doall1 ==*/
      for (i_NO106 = 1 ; i_NO106 <= (grid_points[0]+(-2))/ 2 ; i_NO106 += 1){
/* == y_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (k_NO107 = 1 ; k_NO107 <= grid_points[2]-1-1 ; k_NO107 += 1){
/* == y_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[i_NO106][j_NO105][k_NO107][0][0]),(&rhs[i_NO106][j_NO105-1][k_NO107][0]),(&rhs[i_NO106][j_NO105][k_NO107][0]));
/* == y_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[i_NO106][j_NO105][k_NO107][0][0]),(&lhs[i_NO106][j_NO105-1][k_NO107][2][0]),(&lhs[i_NO106][j_NO105][k_NO107][1][0]));
/* == y_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE0((&lhs[i_NO106][j_NO105][k_NO107][1][0]),(&lhs[i_NO106][j_NO105][k_NO107][2][0]),(&rhs[i_NO106][j_NO105][k_NO107][0]));
      }
      }
/* barrier_start:pe0:module118:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][0][3]++;
while (M118_CL0_PC0_barrier_flg[0][1][3] < M118_CL0_PC0_barrier_flg[0][0][3]) {
}
M118_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module118:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe0:module118:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][0][4]++;
while (M118_CL0_PC0_barrier_flg[0][1][4] < M118_CL0_PC0_barrier_flg[0][0][4]) {
}
M118_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module118:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.doall4 ==*/
      for (i_NO108 = 1 ; i_NO108 <= (grid_points[0]+(-2))/ 2 ; i_NO108 += 1){
/* == y_solve_cell#block1.doall4.loop1 ==*/
      for (k_NO109 = 1 ; k_NO109 <= grid_points[2]-1-1 ; k_NO109 += 1){
/* == y_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize-1][k_NO109][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0]));
/* == y_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0][0]),(&lhs[i_NO108][M118_CL0_PC0_jsize-1][k_NO109][2][0]),(&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][1][0]));
/* == y_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE0((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][1][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0]));
      }
      }
/* barrier_start:pe0:module118:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][0][5]++;
while (M118_CL0_PC0_barrier_flg[0][1][5] < M118_CL0_PC0_barrier_flg[0][0][5]) {
}
M118_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module118:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 118: y_solve_cell */
/* ******************* */
static void y_solve_cell_PE1()
{
      int i_NO103/* i */;
      int k_NO104/* k */;
      int j_NO105/* j */;
      int i_NO106/* i */;
      int k_NO107/* k */;
      int i_NO108/* i */;
      int k_NO109/* k */;

/* @decl:pe1:module118@ */
/* == y_solve_cell#block1 ==*/
/* == y_solve_cell#block1.bb1 ==*/
/* barrier_start:pe1:module118:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][1][1]++;
while (M118_CL0_PC0_barrier_flg[1][0][1] < M118_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module118:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.doall2 ==*/
      for (i_NO103 = (grid_points[0]+(-2))/ 2+1 ; i_NO103 <= grid_points[0]-1-1 ; i_NO103 += 1){
/* == y_solve_cell#block1.doall2.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == y_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE1((&lhs[i_NO103][0][k_NO104][1][0]),(&lhs[i_NO103][0][k_NO104][2][0]),(&rhs[i_NO103][0][k_NO104][0]));
      }
      }
/* barrier_start:pe1:module118:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][1][2]++;
while (M118_CL0_PC0_barrier_flg[1][0][2] < M118_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module118:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.loop3 ==*/
      for (j_NO105 = 1 ; j_NO105 <= M118_CL0_PC0_jsize-1 ; j_NO105 += 1){
/* == y_solve_cell#block1.loop3.doall1 ==*/
      for (i_NO106 = (grid_points[0]+(-2))/ 2+1 ; i_NO106 <= grid_points[0]-1-1 ; i_NO106 += 1){
/* == y_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (k_NO107 = 1 ; k_NO107 <= grid_points[2]-1-1 ; k_NO107 += 1){
/* == y_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[i_NO106][j_NO105][k_NO107][0][0]),(&rhs[i_NO106][j_NO105-1][k_NO107][0]),(&rhs[i_NO106][j_NO105][k_NO107][0]));
/* == y_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[i_NO106][j_NO105][k_NO107][0][0]),(&lhs[i_NO106][j_NO105-1][k_NO107][2][0]),(&lhs[i_NO106][j_NO105][k_NO107][1][0]));
/* == y_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE1((&lhs[i_NO106][j_NO105][k_NO107][1][0]),(&lhs[i_NO106][j_NO105][k_NO107][2][0]),(&rhs[i_NO106][j_NO105][k_NO107][0]));
      }
      }
/* barrier_start:pe1:module118:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][1][3]++;
while (M118_CL0_PC0_barrier_flg[1][0][3] < M118_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module118:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe1:module118:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][1][4]++;
while (M118_CL0_PC0_barrier_flg[1][0][4] < M118_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module118:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.doall4 ==*/
      for (i_NO108 = (grid_points[0]+(-2))/ 2+1 ; i_NO108 <= grid_points[0]-1-1 ; i_NO108 += 1){
/* == y_solve_cell#block1.doall4.loop1 ==*/
      for (k_NO109 = 1 ; k_NO109 <= grid_points[2]-1-1 ; k_NO109 += 1){
/* == y_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize-1][k_NO109][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0]));
/* == y_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0][0]),(&lhs[i_NO108][M118_CL0_PC0_jsize-1][k_NO109][2][0]),(&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][1][0]));
/* == y_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE1((&lhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][1][0]),(&rhs[i_NO108][M118_CL0_PC0_jsize][k_NO109][0]));
      }
      }
/* barrier_start:pe1:module118:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M118_CL0_PC0_barrier_flg[0][1][5]++;
while (M118_CL0_PC0_barrier_flg[1][0][5] < M118_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module118:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 117: y_backsubstitute */
/* ******************* */
static void y_backsubstitute_PE0()
{
      int j_NO100/* j */;
      int i_NO101/* i */;
      int n_NO102/* n */;
      int m_NO103/* m */;
      int k_NO104/* k */;

/* @decl:pe0:module117@ */
/* == y_backsubstitute#block1 ==*/
/* == y_backsubstitute#block1.loop1 ==*/
      for (j_NO100 = grid_points[1]-2 ; j_NO100 >= 0 ; j_NO100 += (-1)){
/* == y_backsubstitute#block1.loop1.doall1 ==*/
      for (i_NO101 = 1 ; i_NO101 <= (grid_points[0]+(-2))/ 2 ; i_NO101 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1 ==*/
      for (m_NO103 = 0 ; m_NO103 <= 4 ; m_NO103 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1 ==*/
      for (n_NO102 = 0 ; n_NO102 <= 4 ; n_NO102 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO101][j_NO100][k_NO104][m_NO103] = rhs[i_NO101][j_NO100][k_NO104][m_NO103]-lhs[i_NO101][j_NO100][k_NO104][2][m_NO103][n_NO102]*rhs[i_NO101][j_NO100+1][k_NO104][n_NO102];
      }
      }
      }
      }
/* barrier_start:pe0:module117:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M117_CL0_PC0_barrier_flg[0][0][1]++;
while (M117_CL0_PC0_barrier_flg[0][1][1] < M117_CL0_PC0_barrier_flg[0][0][1]) {
}
M117_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module117:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe0:module117:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M117_CL0_PC0_barrier_flg[0][0][2]++;
while (M117_CL0_PC0_barrier_flg[0][1][2] < M117_CL0_PC0_barrier_flg[0][0][2]) {
}
M117_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module117:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_backsubstitute#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 117: y_backsubstitute */
/* ******************* */
static void y_backsubstitute_PE1()
{
      int j_NO100/* j */;
      int i_NO101/* i */;
      int n_NO102/* n */;
      int m_NO103/* m */;
      int k_NO104/* k */;

/* @decl:pe1:module117@ */
/* == y_backsubstitute#block1 ==*/
/* == y_backsubstitute#block1.loop1 ==*/
      for (j_NO100 = grid_points[1]-2 ; j_NO100 >= 0 ; j_NO100 += (-1)){
/* == y_backsubstitute#block1.loop1.doall1 ==*/
      for (i_NO101 = (grid_points[0]+(-2))/ 2+1 ; i_NO101 <= grid_points[0]-1-1 ; i_NO101 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1 ==*/
      for (k_NO104 = 1 ; k_NO104 <= grid_points[2]-1-1 ; k_NO104 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1 ==*/
      for (m_NO103 = 0 ; m_NO103 <= 4 ; m_NO103 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1 ==*/
      for (n_NO102 = 0 ; n_NO102 <= 4 ; n_NO102 += 1){
/* == y_backsubstitute#block1.loop1.doall1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO101][j_NO100][k_NO104][m_NO103] = rhs[i_NO101][j_NO100][k_NO104][m_NO103]-lhs[i_NO101][j_NO100][k_NO104][2][m_NO103][n_NO102]*rhs[i_NO101][j_NO100+1][k_NO104][n_NO102];
      }
      }
      }
      }
/* barrier_start:pe1:module117:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M117_CL0_PC0_barrier_flg[0][1][1]++;
while (M117_CL0_PC0_barrier_flg[1][0][1] < M117_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module117:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe1:module117:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M117_CL0_PC0_barrier_flg[0][1][2]++;
while (M117_CL0_PC0_barrier_flg[1][0][2] < M117_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module117:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == y_backsubstitute#block1.bb2 ==*/
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
      double tmp1_NO104/* tmp1 */;
      double tmp2_NO105/* tmp2 */;
      double tmp3_NO106/* tmp3 */;
      double tmp1_NO107/* tmp1 */;
      double tmp2_NO108/* tmp2 */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int j_NO114/* j */;

/* @decl:pe0:module105@ */
/* == lhsz#block1 ==*/
/* == lhsz#block1.doall1 ==*/
      for (i_NO109 = 1 ; i_NO109 <= (grid_points[0]+(-2))/ 2 ; i_NO109 += 1){
/* == lhsz#block1.doall1.loop1 ==*/
      for (j_NO111 = 1 ; j_NO111 <= grid_points[1]-1-1 ; j_NO111 += 1){
/* == lhsz#block1.doall1.loop1.loop1 ==*/
      for (k_NO110 = 0 ; k_NO110 <= grid_points[2]-1 ; k_NO110 += 1){
/* == lhsz#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO104 = 1.0000000000000000E+00/ u[i_NO109][j_NO111][k_NO110][0];
      tmp2_NO105 = tmp1_NO104*tmp1_NO104;
      tmp3_NO106 = tmp1_NO104*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][3] = 1.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][0] = -(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][1][1] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][3] = u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][2] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][3] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][3][0] = -(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3]*tmp2_NO105)+5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][3][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][2] = -c2*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][3] = (2.0000000000000000E+00-c2)*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][4] = c2;
      fjac[i_NO109][j_NO111][k_NO110][4][0] = (c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105-c1*(u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104))*(u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104);
      fjac[i_NO109][j_NO111][k_NO110][4][1] = -c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][2] = -c2*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][3] = c1*(u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104)-5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+3.0000000000000000E+00*u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][4][4] = c1*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][1][1] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][2] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][2][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][0] = -con43*c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][3] = con43*c3*c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][4][0] = (c1345-c3c4)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1])-(c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2])-(con43*c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])-c1345*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][4];
      njac[i_NO109][j_NO111][k_NO110][4][1] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][4][2] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][4][3] = (con43*c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][4][4] = c1345*tmp1_NO104;
      }
      }
      }
/* barrier_start:pe0:module105:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M105_CL0_PC0_barrier_flg[0][0][1]++;
while (M105_CL0_PC0_barrier_flg[0][1][1] < M105_CL0_PC0_barrier_flg[0][0][1]) {
}
M105_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module105:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsz#block1.doall2 ==*/
      for (i_NO112 = 1 ; i_NO112 <= (grid_points[0]+(-2))/ 2 ; i_NO112 += 1){
/* == lhsz#block1.doall2.loop1 ==*/
      for (j_NO114 = 1 ; j_NO114 <= grid_points[1]-1-1 ; j_NO114 += 1){
/* == lhsz#block1.doall2.loop1.loop1 ==*/
      for (k_NO113 = 1 ; k_NO113 <= grid_points[2]-1-1 ; k_NO113 += 1){
/* == lhsz#block1.doall2.loop1.loop1.bb1 ==*/
      tmp1_NO107 = dt*tz1;
      tmp2_NO108 = dt*tz2;
      lhs[i_NO112][j_NO114][k_NO113][0][0][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][0]-tmp1_NO107*dz1;
      lhs[i_NO112][j_NO114][k_NO113][0][0][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][1];
      lhs[i_NO112][j_NO114][k_NO113][0][0][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][2];
      lhs[i_NO112][j_NO114][k_NO113][0][0][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][3];
      lhs[i_NO112][j_NO114][k_NO113][0][0][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][4];
      lhs[i_NO112][j_NO114][k_NO113][0][1][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][0];
      lhs[i_NO112][j_NO114][k_NO113][0][1][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][1]-tmp1_NO107*dz2;
      lhs[i_NO112][j_NO114][k_NO113][0][1][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][2];
      lhs[i_NO112][j_NO114][k_NO113][0][1][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][3];
      lhs[i_NO112][j_NO114][k_NO113][0][1][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][4];
      lhs[i_NO112][j_NO114][k_NO113][0][2][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][0];
      lhs[i_NO112][j_NO114][k_NO113][0][2][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][1];
      lhs[i_NO112][j_NO114][k_NO113][0][2][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][2]-tmp1_NO107*dz3;
      lhs[i_NO112][j_NO114][k_NO113][0][2][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][3];
      lhs[i_NO112][j_NO114][k_NO113][0][2][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][4];
      lhs[i_NO112][j_NO114][k_NO113][0][3][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][0];
      lhs[i_NO112][j_NO114][k_NO113][0][3][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][1];
      lhs[i_NO112][j_NO114][k_NO113][0][3][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][2];
      lhs[i_NO112][j_NO114][k_NO113][0][3][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][3]-tmp1_NO107*dz4;
      lhs[i_NO112][j_NO114][k_NO113][0][3][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][4];
      lhs[i_NO112][j_NO114][k_NO113][0][4][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][0];
      lhs[i_NO112][j_NO114][k_NO113][0][4][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][1];
      lhs[i_NO112][j_NO114][k_NO113][0][4][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][2];
      lhs[i_NO112][j_NO114][k_NO113][0][4][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][3];
      lhs[i_NO112][j_NO114][k_NO113][0][4][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][4]-tmp1_NO107*dz5;
      lhs[i_NO112][j_NO114][k_NO113][1][0][0] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][0]+tmp1_NO107*2.0000000000000000E+00*dz1;
      lhs[i_NO112][j_NO114][k_NO113][1][0][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][1][0][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][1][0][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][1][0][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][1][1][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][1][1][1] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][1]+tmp1_NO107*2.0000000000000000E+00*dz2;
      lhs[i_NO112][j_NO114][k_NO113][1][1][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][1][1][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][1][1][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][1][2][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][1][2][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][1][2][2] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][2]+tmp1_NO107*2.0000000000000000E+00*dz3;
      lhs[i_NO112][j_NO114][k_NO113][1][2][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][1][2][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][1][3][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][1][3][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][1][3][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][1][3][3] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][3]+tmp1_NO107*2.0000000000000000E+00*dz4;
      lhs[i_NO112][j_NO114][k_NO113][1][3][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][1][4][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][1][4][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][1][4][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][1][4][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][1][4][4] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][4]+tmp1_NO107*2.0000000000000000E+00*dz5;
      lhs[i_NO112][j_NO114][k_NO113][2][0][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][0]-tmp1_NO107*dz1;
      lhs[i_NO112][j_NO114][k_NO113][2][0][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][1];
      lhs[i_NO112][j_NO114][k_NO113][2][0][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][2];
      lhs[i_NO112][j_NO114][k_NO113][2][0][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][3];
      lhs[i_NO112][j_NO114][k_NO113][2][0][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][4];
      lhs[i_NO112][j_NO114][k_NO113][2][1][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][0];
      lhs[i_NO112][j_NO114][k_NO113][2][1][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][1]-tmp1_NO107*dz2;
      lhs[i_NO112][j_NO114][k_NO113][2][1][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][2];
      lhs[i_NO112][j_NO114][k_NO113][2][1][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][3];
      lhs[i_NO112][j_NO114][k_NO113][2][1][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][4];
      lhs[i_NO112][j_NO114][k_NO113][2][2][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][0];
      lhs[i_NO112][j_NO114][k_NO113][2][2][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][1];
      lhs[i_NO112][j_NO114][k_NO113][2][2][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][2]-tmp1_NO107*dz3;
      lhs[i_NO112][j_NO114][k_NO113][2][2][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][3];
      lhs[i_NO112][j_NO114][k_NO113][2][2][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][4];
      lhs[i_NO112][j_NO114][k_NO113][2][3][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][0];
      lhs[i_NO112][j_NO114][k_NO113][2][3][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][1];
      lhs[i_NO112][j_NO114][k_NO113][2][3][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][2];
      lhs[i_NO112][j_NO114][k_NO113][2][3][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][3]-tmp1_NO107*dz4;
      lhs[i_NO112][j_NO114][k_NO113][2][3][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][4];
      lhs[i_NO112][j_NO114][k_NO113][2][4][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][0];
      lhs[i_NO112][j_NO114][k_NO113][2][4][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][1];
      lhs[i_NO112][j_NO114][k_NO113][2][4][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][2];
      lhs[i_NO112][j_NO114][k_NO113][2][4][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][3];
      lhs[i_NO112][j_NO114][k_NO113][2][4][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][4]-tmp1_NO107*dz5;
      }
      }
      }
/* barrier_start:pe0:module105:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M105_CL0_PC0_barrier_flg[0][0][2]++;
while (M105_CL0_PC0_barrier_flg[0][1][2] < M105_CL0_PC0_barrier_flg[0][0][2]) {
}
M105_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module105:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsz#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 105: lhsz */
/* ******************* */
static void lhsz_PE1()
{
      double tmp1_NO104/* tmp1 */;
      double tmp2_NO105/* tmp2 */;
      double tmp3_NO106/* tmp3 */;
      double tmp1_NO107/* tmp1 */;
      double tmp2_NO108/* tmp2 */;
      int i_NO109/* i */;
      int k_NO110/* k */;
      int j_NO111/* j */;
      int i_NO112/* i */;
      int k_NO113/* k */;
      int j_NO114/* j */;

/* @decl:pe1:module105@ */
/* == lhsz#block1 ==*/
/* == lhsz#block1.doall1 ==*/
      for (i_NO109 = (grid_points[0]+(-2))/ 2+1 ; i_NO109 <= grid_points[0]-1-1 ; i_NO109 += 1){
/* == lhsz#block1.doall1.loop1 ==*/
      for (j_NO111 = 1 ; j_NO111 <= grid_points[1]-1-1 ; j_NO111 += 1){
/* == lhsz#block1.doall1.loop1.loop1 ==*/
      for (k_NO110 = 0 ; k_NO110 <= grid_points[2]-1 ; k_NO110 += 1){
/* == lhsz#block1.doall1.loop1.loop1.bb1 ==*/
      tmp1_NO104 = 1.0000000000000000E+00/ u[i_NO109][j_NO111][k_NO110][0];
      tmp2_NO105 = tmp1_NO104*tmp1_NO104;
      tmp3_NO106 = tmp1_NO104*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][3] = 1.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][0] = -(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][1][1] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][1][3] = u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][0] = -(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][2][2] = u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][3] = u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      fjac[i_NO109][j_NO111][k_NO110][3][0] = -(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3]*tmp2_NO105)+5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][3][1] = -c2*u[i_NO109][j_NO111][k_NO110][1]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][2] = -c2*u[i_NO109][j_NO111][k_NO110][2]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][3] = (2.0000000000000000E+00-c2)*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      fjac[i_NO109][j_NO111][k_NO110][3][4] = c2;
      fjac[i_NO109][j_NO111][k_NO110][4][0] = (c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105-c1*(u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104))*(u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104);
      fjac[i_NO109][j_NO111][k_NO110][4][1] = -c2*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][2] = -c2*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105;
      fjac[i_NO109][j_NO111][k_NO110][4][3] = c1*(u[i_NO109][j_NO111][k_NO110][4]*tmp1_NO104)-5.0000000000000000E-01*c2*((u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1]+u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2]+3.0000000000000000E+00*u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])*tmp2_NO105);
      fjac[i_NO109][j_NO111][k_NO110][4][4] = c1*u[i_NO109][j_NO111][k_NO110][3]*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][0][0] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][0][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][1][1] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][1][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][1][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][0] = -c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][2][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][2] = c3c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][2][3] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][2][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][0] = -con43*c3c4*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][3][1] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][2] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][3][3] = con43*c3*c4*tmp1_NO104;
      njac[i_NO109][j_NO111][k_NO110][3][4] = 0.0000000000000000E+00;
      njac[i_NO109][j_NO111][k_NO110][4][0] = (c1345-c3c4)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][1]*u[i_NO109][j_NO111][k_NO110][1])-(c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][2]*u[i_NO109][j_NO111][k_NO110][2])-(con43*c3c4-c1345)*tmp3_NO106*(u[i_NO109][j_NO111][k_NO110][3]*u[i_NO109][j_NO111][k_NO110][3])-c1345*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][4];
      njac[i_NO109][j_NO111][k_NO110][4][1] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][1];
      njac[i_NO109][j_NO111][k_NO110][4][2] = (c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][2];
      njac[i_NO109][j_NO111][k_NO110][4][3] = (con43*c3c4-c1345)*tmp2_NO105*u[i_NO109][j_NO111][k_NO110][3];
      njac[i_NO109][j_NO111][k_NO110][4][4] = c1345*tmp1_NO104;
      }
      }
      }
/* barrier_start:pe1:module105:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M105_CL0_PC0_barrier_flg[0][1][1]++;
while (M105_CL0_PC0_barrier_flg[1][0][1] < M105_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module105:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsz#block1.doall2 ==*/
      for (i_NO112 = (grid_points[0]+(-2))/ 2+1 ; i_NO112 <= grid_points[0]-1-1 ; i_NO112 += 1){
/* == lhsz#block1.doall2.loop1 ==*/
      for (j_NO114 = 1 ; j_NO114 <= grid_points[1]-1-1 ; j_NO114 += 1){
/* == lhsz#block1.doall2.loop1.loop1 ==*/
      for (k_NO113 = 1 ; k_NO113 <= grid_points[2]-1-1 ; k_NO113 += 1){
/* == lhsz#block1.doall2.loop1.loop1.bb1 ==*/
      tmp1_NO107 = dt*tz1;
      tmp2_NO108 = dt*tz2;
      lhs[i_NO112][j_NO114][k_NO113][0][0][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][0]-tmp1_NO107*dz1;
      lhs[i_NO112][j_NO114][k_NO113][0][0][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][1];
      lhs[i_NO112][j_NO114][k_NO113][0][0][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][2];
      lhs[i_NO112][j_NO114][k_NO113][0][0][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][3];
      lhs[i_NO112][j_NO114][k_NO113][0][0][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][0][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][0][4];
      lhs[i_NO112][j_NO114][k_NO113][0][1][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][0];
      lhs[i_NO112][j_NO114][k_NO113][0][1][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][1]-tmp1_NO107*dz2;
      lhs[i_NO112][j_NO114][k_NO113][0][1][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][2];
      lhs[i_NO112][j_NO114][k_NO113][0][1][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][3];
      lhs[i_NO112][j_NO114][k_NO113][0][1][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][1][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][1][4];
      lhs[i_NO112][j_NO114][k_NO113][0][2][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][0];
      lhs[i_NO112][j_NO114][k_NO113][0][2][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][1];
      lhs[i_NO112][j_NO114][k_NO113][0][2][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][2]-tmp1_NO107*dz3;
      lhs[i_NO112][j_NO114][k_NO113][0][2][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][3];
      lhs[i_NO112][j_NO114][k_NO113][0][2][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][2][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][2][4];
      lhs[i_NO112][j_NO114][k_NO113][0][3][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][0];
      lhs[i_NO112][j_NO114][k_NO113][0][3][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][1];
      lhs[i_NO112][j_NO114][k_NO113][0][3][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][2];
      lhs[i_NO112][j_NO114][k_NO113][0][3][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][3]-tmp1_NO107*dz4;
      lhs[i_NO112][j_NO114][k_NO113][0][3][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][3][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][3][4];
      lhs[i_NO112][j_NO114][k_NO113][0][4][0] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][0];
      lhs[i_NO112][j_NO114][k_NO113][0][4][1] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][1];
      lhs[i_NO112][j_NO114][k_NO113][0][4][2] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][2];
      lhs[i_NO112][j_NO114][k_NO113][0][4][3] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][3];
      lhs[i_NO112][j_NO114][k_NO113][0][4][4] = -tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113-1][4][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113-1][4][4]-tmp1_NO107*dz5;
      lhs[i_NO112][j_NO114][k_NO113][1][0][0] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][0]+tmp1_NO107*2.0000000000000000E+00*dz1;
      lhs[i_NO112][j_NO114][k_NO113][1][0][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][1];
      lhs[i_NO112][j_NO114][k_NO113][1][0][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][2];
      lhs[i_NO112][j_NO114][k_NO113][1][0][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][3];
      lhs[i_NO112][j_NO114][k_NO113][1][0][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][0][4];
      lhs[i_NO112][j_NO114][k_NO113][1][1][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][0];
      lhs[i_NO112][j_NO114][k_NO113][1][1][1] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][1]+tmp1_NO107*2.0000000000000000E+00*dz2;
      lhs[i_NO112][j_NO114][k_NO113][1][1][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][2];
      lhs[i_NO112][j_NO114][k_NO113][1][1][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][3];
      lhs[i_NO112][j_NO114][k_NO113][1][1][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][1][4];
      lhs[i_NO112][j_NO114][k_NO113][1][2][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][0];
      lhs[i_NO112][j_NO114][k_NO113][1][2][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][1];
      lhs[i_NO112][j_NO114][k_NO113][1][2][2] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][2]+tmp1_NO107*2.0000000000000000E+00*dz3;
      lhs[i_NO112][j_NO114][k_NO113][1][2][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][3];
      lhs[i_NO112][j_NO114][k_NO113][1][2][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][2][4];
      lhs[i_NO112][j_NO114][k_NO113][1][3][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][0];
      lhs[i_NO112][j_NO114][k_NO113][1][3][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][1];
      lhs[i_NO112][j_NO114][k_NO113][1][3][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][2];
      lhs[i_NO112][j_NO114][k_NO113][1][3][3] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][3]+tmp1_NO107*2.0000000000000000E+00*dz4;
      lhs[i_NO112][j_NO114][k_NO113][1][3][4] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][3][4];
      lhs[i_NO112][j_NO114][k_NO113][1][4][0] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][0];
      lhs[i_NO112][j_NO114][k_NO113][1][4][1] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][1];
      lhs[i_NO112][j_NO114][k_NO113][1][4][2] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][2];
      lhs[i_NO112][j_NO114][k_NO113][1][4][3] = tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][3];
      lhs[i_NO112][j_NO114][k_NO113][1][4][4] = 1.0000000000000000E+00+tmp1_NO107*2.0000000000000000E+00*njac[i_NO112][j_NO114][k_NO113][4][4]+tmp1_NO107*2.0000000000000000E+00*dz5;
      lhs[i_NO112][j_NO114][k_NO113][2][0][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][0]-tmp1_NO107*dz1;
      lhs[i_NO112][j_NO114][k_NO113][2][0][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][1];
      lhs[i_NO112][j_NO114][k_NO113][2][0][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][2];
      lhs[i_NO112][j_NO114][k_NO113][2][0][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][3];
      lhs[i_NO112][j_NO114][k_NO113][2][0][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][0][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][0][4];
      lhs[i_NO112][j_NO114][k_NO113][2][1][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][0];
      lhs[i_NO112][j_NO114][k_NO113][2][1][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][1]-tmp1_NO107*dz2;
      lhs[i_NO112][j_NO114][k_NO113][2][1][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][2];
      lhs[i_NO112][j_NO114][k_NO113][2][1][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][3];
      lhs[i_NO112][j_NO114][k_NO113][2][1][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][1][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][1][4];
      lhs[i_NO112][j_NO114][k_NO113][2][2][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][0];
      lhs[i_NO112][j_NO114][k_NO113][2][2][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][1];
      lhs[i_NO112][j_NO114][k_NO113][2][2][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][2]-tmp1_NO107*dz3;
      lhs[i_NO112][j_NO114][k_NO113][2][2][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][3];
      lhs[i_NO112][j_NO114][k_NO113][2][2][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][2][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][2][4];
      lhs[i_NO112][j_NO114][k_NO113][2][3][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][0];
      lhs[i_NO112][j_NO114][k_NO113][2][3][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][1];
      lhs[i_NO112][j_NO114][k_NO113][2][3][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][2];
      lhs[i_NO112][j_NO114][k_NO113][2][3][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][3]-tmp1_NO107*dz4;
      lhs[i_NO112][j_NO114][k_NO113][2][3][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][3][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][3][4];
      lhs[i_NO112][j_NO114][k_NO113][2][4][0] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][0]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][0];
      lhs[i_NO112][j_NO114][k_NO113][2][4][1] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][1]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][1];
      lhs[i_NO112][j_NO114][k_NO113][2][4][2] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][2]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][2];
      lhs[i_NO112][j_NO114][k_NO113][2][4][3] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][3]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][3];
      lhs[i_NO112][j_NO114][k_NO113][2][4][4] = tmp2_NO108*fjac[i_NO112][j_NO114][k_NO113+1][4][4]-tmp1_NO107*njac[i_NO112][j_NO114][k_NO113+1][4][4]-tmp1_NO107*dz5;
      }
      }
      }
/* barrier_start:pe1:module105:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M105_CL0_PC0_barrier_flg[0][1][2]++;
while (M105_CL0_PC0_barrier_flg[1][0][2] < M105_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module105:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == lhsz#block1.bb3 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 121: z_solve_cell */
/* ******************* */
static void z_solve_cell_PE0()
{
      int i_NO103/* i */;
      int j_NO104/* j */;
      int k_NO105/* k */;
      int i_NO106/* i */;
      int j_NO107/* j */;
      int i_NO108/* i */;
      int j_NO109/* j */;

/* @decl:pe0:module121@ */
/* == z_solve_cell#block1 ==*/
/* == z_solve_cell#block1.bb1 ==*/
      M121_CL0_PC0_ksize = grid_points[2]-1;
/* barrier_start:pe0:module121:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][0][1]++;
while (M121_CL0_PC0_barrier_flg[0][1][1] < M121_CL0_PC0_barrier_flg[0][0][1]) {
}
M121_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module121:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.doall2 ==*/
      for (i_NO103 = 1 ; i_NO103 <= (grid_points[0]+(-2))/ 2 ; i_NO103 += 1){
/* == z_solve_cell#block1.doall2.loop1 ==*/
      for (j_NO104 = 1 ; j_NO104 <= grid_points[1]-1-1 ; j_NO104 += 1){
/* == z_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE0((&lhs[i_NO103][j_NO104][0][1][0]),(&lhs[i_NO103][j_NO104][0][2][0]),(&rhs[i_NO103][j_NO104][0][0]));
      }
      }
/* barrier_start:pe0:module121:no2 */
#pragma omp flush

/* == GROUP BARRIER2 0(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][0][2]++;
while (M121_CL0_PC0_barrier_flg[0][1][2] < M121_CL0_PC0_barrier_flg[0][0][2]) {
}
M121_CL0_PC0_barrier_flg[1][0][2]++;

#pragma omp flush
/* barrier_finish:pe0:module121:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.loop3 ==*/
      for (k_NO105 = 1 ; k_NO105 <= M121_CL0_PC0_ksize-1 ; k_NO105 += 1){
/* == z_solve_cell#block1.loop3.doall1 ==*/
      for (i_NO106 = 1 ; i_NO106 <= (grid_points[0]+(-2))/ 2 ; i_NO106 += 1){
/* == z_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (j_NO107 = 1 ; j_NO107 <= grid_points[1]-1-1 ; j_NO107 += 1){
/* == z_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[i_NO106][j_NO107][k_NO105][0][0]),(&rhs[i_NO106][j_NO107][k_NO105-1][0]),(&rhs[i_NO106][j_NO107][k_NO105][0]));
/* == z_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[i_NO106][j_NO107][k_NO105][0][0]),(&lhs[i_NO106][j_NO107][k_NO105-1][2][0]),(&lhs[i_NO106][j_NO107][k_NO105][1][0]));
/* == z_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE0((&lhs[i_NO106][j_NO107][k_NO105][1][0]),(&lhs[i_NO106][j_NO107][k_NO105][2][0]),(&rhs[i_NO106][j_NO107][k_NO105][0]));
      }
      }
/* barrier_start:pe0:module121:no3 */
#pragma omp flush

/* == GROUP BARRIER3 0(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][0][3]++;
while (M121_CL0_PC0_barrier_flg[0][1][3] < M121_CL0_PC0_barrier_flg[0][0][3]) {
}
M121_CL0_PC0_barrier_flg[1][0][3]++;

#pragma omp flush
/* barrier_finish:pe0:module121:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe0:module121:no4 */
#pragma omp flush

/* == GROUP BARRIER4 0(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][0][4]++;
while (M121_CL0_PC0_barrier_flg[0][1][4] < M121_CL0_PC0_barrier_flg[0][0][4]) {
}
M121_CL0_PC0_barrier_flg[1][0][4]++;

#pragma omp flush
/* barrier_finish:pe0:module121:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.doall4 ==*/
      for (i_NO108 = 1 ; i_NO108 <= (grid_points[0]+(-2))/ 2 ; i_NO108 += 1){
/* == z_solve_cell#block1.doall4.loop1 ==*/
      for (j_NO109 = 1 ; j_NO109 <= grid_points[1]-1-1 ; j_NO109 += 1){
/* == z_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE0((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize-1][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0]));
/* == z_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE0((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0][0]),(&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize-1][2][0]),(&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][1][0]));
/* == z_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE0((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][1][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0]));
      }
      }
/* barrier_start:pe0:module121:no5 */
#pragma omp flush

/* == GROUP BARRIER5 0(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][0][5]++;
while (M121_CL0_PC0_barrier_flg[0][1][5] < M121_CL0_PC0_barrier_flg[0][0][5]) {
}
M121_CL0_PC0_barrier_flg[1][0][5]++;

#pragma omp flush
/* barrier_finish:pe0:module121:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 121: z_solve_cell */
/* ******************* */
static void z_solve_cell_PE1()
{
      int i_NO103/* i */;
      int j_NO104/* j */;
      int k_NO105/* k */;
      int i_NO106/* i */;
      int j_NO107/* j */;
      int i_NO108/* i */;
      int j_NO109/* j */;

/* @decl:pe1:module121@ */
/* == z_solve_cell#block1 ==*/
/* == z_solve_cell#block1.bb1 ==*/
/* barrier_start:pe1:module121:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][1][1]++;
while (M121_CL0_PC0_barrier_flg[1][0][1] < M121_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module121:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.doall2 ==*/
      for (i_NO103 = (grid_points[0]+(-2))/ 2+1 ; i_NO103 <= grid_points[0]-1-1 ; i_NO103 += 1){
/* == z_solve_cell#block1.doall2.loop1 ==*/
      for (j_NO104 = 1 ; j_NO104 <= grid_points[1]-1-1 ; j_NO104 += 1){
/* == z_solve_cell#block1.doall2.loop1.sb1 ==*/
      binvcrhs_PE1((&lhs[i_NO103][j_NO104][0][1][0]),(&lhs[i_NO103][j_NO104][0][2][0]),(&rhs[i_NO103][j_NO104][0][0]));
      }
      }
/* barrier_start:pe1:module121:no2 */
#pragma omp flush

/* == GROUP BARRIER2 1(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][1][2]++;
while (M121_CL0_PC0_barrier_flg[1][0][2] < M121_CL0_PC0_barrier_flg[0][1][2]) {
}

#pragma omp flush
/* barrier_finish:pe1:module121:no2 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.loop3 ==*/
      for (k_NO105 = 1 ; k_NO105 <= M121_CL0_PC0_ksize-1 ; k_NO105 += 1){
/* == z_solve_cell#block1.loop3.doall1 ==*/
      for (i_NO106 = (grid_points[0]+(-2))/ 2+1 ; i_NO106 <= grid_points[0]-1-1 ; i_NO106 += 1){
/* == z_solve_cell#block1.loop3.doall1.loop1 ==*/
      for (j_NO107 = 1 ; j_NO107 <= grid_points[1]-1-1 ; j_NO107 += 1){
/* == z_solve_cell#block1.loop3.doall1.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[i_NO106][j_NO107][k_NO105][0][0]),(&rhs[i_NO106][j_NO107][k_NO105-1][0]),(&rhs[i_NO106][j_NO107][k_NO105][0]));
/* == z_solve_cell#block1.loop3.doall1.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[i_NO106][j_NO107][k_NO105][0][0]),(&lhs[i_NO106][j_NO107][k_NO105-1][2][0]),(&lhs[i_NO106][j_NO107][k_NO105][1][0]));
/* == z_solve_cell#block1.loop3.doall1.loop1.sb3 ==*/
      binvcrhs_PE1((&lhs[i_NO106][j_NO107][k_NO105][1][0]),(&lhs[i_NO106][j_NO107][k_NO105][2][0]),(&rhs[i_NO106][j_NO107][k_NO105][0]));
      }
      }
/* barrier_start:pe1:module121:no3 */
#pragma omp flush

/* == GROUP BARRIER3 1(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][1][3]++;
while (M121_CL0_PC0_barrier_flg[1][0][3] < M121_CL0_PC0_barrier_flg[0][1][3]) {
}

#pragma omp flush
/* barrier_finish:pe1:module121:no3 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
      }
/* barrier_start:pe1:module121:no4 */
#pragma omp flush

/* == GROUP BARRIER4 1(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][1][4]++;
while (M121_CL0_PC0_barrier_flg[1][0][4] < M121_CL0_PC0_barrier_flg[0][1][4]) {
}

#pragma omp flush
/* barrier_finish:pe1:module121:no4 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.doall4 ==*/
      for (i_NO108 = (grid_points[0]+(-2))/ 2+1 ; i_NO108 <= grid_points[0]-1-1 ; i_NO108 += 1){
/* == z_solve_cell#block1.doall4.loop1 ==*/
      for (j_NO109 = 1 ; j_NO109 <= grid_points[1]-1-1 ; j_NO109 += 1){
/* == z_solve_cell#block1.doall4.loop1.sb1 ==*/
      matvec_sub_PE1((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize-1][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0]));
/* == z_solve_cell#block1.doall4.loop1.sb2 ==*/
      matmul_sub_PE1((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0][0]),(&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize-1][2][0]),(&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][1][0]));
/* == z_solve_cell#block1.doall4.loop1.sb3 ==*/
      binvrhs_PE1((&lhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][1][0]),(&rhs[i_NO108][j_NO109][M121_CL0_PC0_ksize][0]));
      }
      }
/* barrier_start:pe1:module121:no5 */
#pragma omp flush

/* == GROUP BARRIER5 1(0,1) ==*/
M121_CL0_PC0_barrier_flg[0][1][5]++;
while (M121_CL0_PC0_barrier_flg[1][0][5] < M121_CL0_PC0_barrier_flg[0][1][5]) {
}

#pragma omp flush
/* barrier_finish:pe1:module121:no5 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_solve_cell#block1.bb5 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 120: z_backsubstitute */
/* ******************* */
static void z_backsubstitute_PE0()
{
      int i_NO100/* i */;
      int n_NO101/* n */;
      int m_NO102/* m */;
      int k_NO103/* k */;
      int j_NO104/* j */;

/* @decl:pe0:module120@ */
/* == z_backsubstitute#block1 ==*/
/* == z_backsubstitute#block1.doall1 ==*/
      for (i_NO100 = 1 ; i_NO100 <= (grid_points[0]+(-2))/ 2 ; i_NO100 += 1){
/* == z_backsubstitute#block1.doall1.loop1 ==*/
      for (j_NO104 = 1 ; j_NO104 <= grid_points[1]-1-1 ; j_NO104 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1 ==*/
      for (k_NO103 = grid_points[2]-2 ; k_NO103 >= 0 ; k_NO103 += (-1)){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO102 = 0 ; m_NO102 <= 4 ; m_NO102 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1.loop1 ==*/
      for (n_NO101 = 0 ; n_NO101 <= 4 ; n_NO101 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO100][j_NO104][k_NO103][m_NO102] = rhs[i_NO100][j_NO104][k_NO103][m_NO102]-lhs[i_NO100][j_NO104][k_NO103][2][m_NO102][n_NO101]*rhs[i_NO100][j_NO104][k_NO103+1][n_NO101];
      }
      }
      }
      }
      }
/* barrier_start:pe0:module120:no1 */
#pragma omp flush

/* == GROUP BARRIER1 0(0,1) ==*/
M120_CL0_PC0_barrier_flg[0][0][1]++;
while (M120_CL0_PC0_barrier_flg[0][1][1] < M120_CL0_PC0_barrier_flg[0][0][1]) {
}
M120_CL0_PC0_barrier_flg[1][0][1]++;

#pragma omp flush
/* barrier_finish:pe0:module120:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_backsubstitute#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 120: z_backsubstitute */
/* ******************* */
static void z_backsubstitute_PE1()
{
      int i_NO100/* i */;
      int n_NO101/* n */;
      int m_NO102/* m */;
      int k_NO103/* k */;
      int j_NO104/* j */;

/* @decl:pe1:module120@ */
/* == z_backsubstitute#block1 ==*/
/* == z_backsubstitute#block1.doall1 ==*/
      for (i_NO100 = (grid_points[0]+(-2))/ 2+1 ; i_NO100 <= grid_points[0]-1-1 ; i_NO100 += 1){
/* == z_backsubstitute#block1.doall1.loop1 ==*/
      for (j_NO104 = 1 ; j_NO104 <= grid_points[1]-1-1 ; j_NO104 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1 ==*/
      for (k_NO103 = grid_points[2]-2 ; k_NO103 >= 0 ; k_NO103 += (-1)){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1 ==*/
      for (m_NO102 = 0 ; m_NO102 <= 4 ; m_NO102 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1.loop1 ==*/
      for (n_NO101 = 0 ; n_NO101 <= 4 ; n_NO101 += 1){
/* == z_backsubstitute#block1.doall1.loop1.loop1.loop1.loop1.bb1 ==*/
      rhs[i_NO100][j_NO104][k_NO103][m_NO102] = rhs[i_NO100][j_NO104][k_NO103][m_NO102]-lhs[i_NO100][j_NO104][k_NO103][2][m_NO102][n_NO101]*rhs[i_NO100][j_NO104][k_NO103+1][n_NO101];
      }
      }
      }
      }
      }
/* barrier_start:pe1:module120:no1 */
#pragma omp flush

/* == GROUP BARRIER1 1(0,1) ==*/
M120_CL0_PC0_barrier_flg[0][1][1]++;
while (M120_CL0_PC0_barrier_flg[1][0][1] < M120_CL0_PC0_barrier_flg[0][1][1]) {
}

#pragma omp flush
/* barrier_finish:pe1:module120:no1 */
/* [NOT IMPLEMENTED EXPR: reset_syncaf] */
/* == z_backsubstitute#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 124: exact_solution_c2 */
/* ******************* */
static void exact_solution_c2_PE0(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe0:module124@ */
/* == exact_solution_c2#block1 ==*/
/* == exact_solution_c2#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution_c2#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution_c2#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 124: exact_solution_c2 */
/* ******************* */
static void exact_solution_c2_PE1(double xi,
      double eta,
      double zeta,
      double* dtemp)
{
      int m_NO99/* m */;
      int m_NO100/* m */;

/* @decl:pe1:module124@ */
/* == exact_solution_c2#block1 ==*/
/* == exact_solution_c2#block1.doall1 ==*/
      for (m_NO100 = 0 ; m_NO100 <= 4 ; m_NO100 += 1){
/* == exact_solution_c2#block1.doall1.bb1 ==*/
      (dtemp[m_NO100]) = ce[m_NO100][0]+xi*(ce[m_NO100][1]+xi*(ce[m_NO100][4]+xi*(ce[m_NO100][7]+xi*ce[m_NO100][10])))+eta*(ce[m_NO100][2]+eta*(ce[m_NO100][5]+eta*(ce[m_NO100][8]+eta*ce[m_NO100][11])))+zeta*(ce[m_NO100][3]+zeta*(ce[m_NO100][6]+zeta*(ce[m_NO100][9]+zeta*ce[m_NO100][12])));
      }
/* == exact_solution_c2#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 114: binvcrhs */
/* ******************* */
static void binvcrhs_PE0(double(* lhs_NO95)[5],
      double(* c)[5],
      double* r)
{
      double pivot/* pivot */;
      double coeff/* coeff */;

/* @decl:pe0:module114@ */
/* == binvcrhs#block1 ==*/
/* == binvcrhs#block1.bb1 ==*/
      pivot = 1.0000000000000000E+00/ lhs_NO95[0][0];
      (lhs_NO95[0][1]) = (lhs_NO95[0][1])*pivot;
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])*pivot;
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])*pivot;
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])*pivot;
      *(c[0]) = c[0][0]*pivot;
      (c[0][1]) = (c[0][1])*pivot;
      (c[0][2]) = (c[0][2])*pivot;
      (c[0][3]) = (c[0][3])*pivot;
      (c[0][4]) = (c[0][4])*pivot;
      (r[0]) = (r[0])*pivot;
      coeff = lhs_NO95[1][0];
      (lhs_NO95[1][1]) = (lhs_NO95[1][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[0][4]);
      *(c[1]) = c[1][0]-coeff*c[0][0];
      (c[1][1]) = (c[1][1])-coeff*(c[0][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[0][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[0][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[0][4]);
      (r[1]) = (r[1])-coeff*(r[0]);
      coeff = lhs_NO95[2][0];
      (lhs_NO95[2][1]) = (lhs_NO95[2][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[0][4]);
      *(c[2]) = c[2][0]-coeff*c[0][0];
      (c[2][1]) = (c[2][1])-coeff*(c[0][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[0][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[0][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[0][4]);
      (r[2]) = (r[2])-coeff*(r[0]);
      coeff = lhs_NO95[3][0];
      (lhs_NO95[3][1]) = (lhs_NO95[3][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[0][4]);
      *(c[3]) = c[3][0]-coeff*c[0][0];
      (c[3][1]) = (c[3][1])-coeff*(c[0][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[0][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[0][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[0][4]);
      (r[3]) = (r[3])-coeff*(r[0]);
      coeff = lhs_NO95[4][0];
      (lhs_NO95[4][1]) = (lhs_NO95[4][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[0][4]);
      *(c[4]) = c[4][0]-coeff*c[0][0];
      (c[4][1]) = (c[4][1])-coeff*(c[0][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[0][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[0][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[0][4]);
      (r[4]) = (r[4])-coeff*(r[0]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[1][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])*pivot;
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])*pivot;
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])*pivot;
      *(c[1]) = c[1][0]*pivot;
      (c[1][1]) = (c[1][1])*pivot;
      (c[1][2]) = (c[1][2])*pivot;
      (c[1][3]) = (c[1][3])*pivot;
      (c[1][4]) = (c[1][4])*pivot;
      (r[1]) = (r[1])*pivot;
      coeff = (lhs_NO95[0][1]);
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[1][4]);
      *(c[0]) = c[0][0]-coeff*c[1][0];
      (c[0][1]) = (c[0][1])-coeff*(c[1][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[1][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[1][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[1][4]);
      (r[0]) = (r[0])-coeff*(r[1]);
      coeff = (lhs_NO95[2][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[1][4]);
      *(c[2]) = c[2][0]-coeff*c[1][0];
      (c[2][1]) = (c[2][1])-coeff*(c[1][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[1][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[1][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[1][4]);
      (r[2]) = (r[2])-coeff*(r[1]);
      coeff = (lhs_NO95[3][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[1][4]);
      *(c[3]) = c[3][0]-coeff*c[1][0];
      (c[3][1]) = (c[3][1])-coeff*(c[1][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[1][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[1][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[1][4]);
      (r[3]) = (r[3])-coeff*(r[1]);
      coeff = (lhs_NO95[4][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[1][4]);
      *(c[4]) = c[4][0]-coeff*c[1][0];
      (c[4][1]) = (c[4][1])-coeff*(c[1][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[1][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[1][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[1][4]);
      (r[4]) = (r[4])-coeff*(r[1]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[2][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])*pivot;
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])*pivot;
      *(c[2]) = c[2][0]*pivot;
      (c[2][1]) = (c[2][1])*pivot;
      (c[2][2]) = (c[2][2])*pivot;
      (c[2][3]) = (c[2][3])*pivot;
      (c[2][4]) = (c[2][4])*pivot;
      (r[2]) = (r[2])*pivot;
      coeff = (lhs_NO95[0][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[2][4]);
      *(c[0]) = c[0][0]-coeff*c[2][0];
      (c[0][1]) = (c[0][1])-coeff*(c[2][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[2][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[2][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[2][4]);
      (r[0]) = (r[0])-coeff*(r[2]);
      coeff = (lhs_NO95[1][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[2][4]);
      *(c[1]) = c[1][0]-coeff*c[2][0];
      (c[1][1]) = (c[1][1])-coeff*(c[2][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[2][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[2][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[2][4]);
      (r[1]) = (r[1])-coeff*(r[2]);
      coeff = (lhs_NO95[3][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[2][4]);
      *(c[3]) = c[3][0]-coeff*c[2][0];
      (c[3][1]) = (c[3][1])-coeff*(c[2][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[2][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[2][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[2][4]);
      (r[3]) = (r[3])-coeff*(r[2]);
      coeff = (lhs_NO95[4][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[2][4]);
      *(c[4]) = c[4][0]-coeff*c[2][0];
      (c[4][1]) = (c[4][1])-coeff*(c[2][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[2][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[2][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[2][4]);
      (r[4]) = (r[4])-coeff*(r[2]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[3][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])*pivot;
      *(c[3]) = c[3][0]*pivot;
      (c[3][1]) = (c[3][1])*pivot;
      (c[3][2]) = (c[3][2])*pivot;
      (c[3][3]) = (c[3][3])*pivot;
      (c[3][4]) = (c[3][4])*pivot;
      (r[3]) = (r[3])*pivot;
      coeff = (lhs_NO95[0][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[3][4]);
      *(c[0]) = c[0][0]-coeff*c[3][0];
      (c[0][1]) = (c[0][1])-coeff*(c[3][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[3][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[3][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[3][4]);
      (r[0]) = (r[0])-coeff*(r[3]);
      coeff = (lhs_NO95[1][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[3][4]);
      *(c[1]) = c[1][0]-coeff*c[3][0];
      (c[1][1]) = (c[1][1])-coeff*(c[3][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[3][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[3][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[3][4]);
      (r[1]) = (r[1])-coeff*(r[3]);
      coeff = (lhs_NO95[2][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[3][4]);
      *(c[2]) = c[2][0]-coeff*c[3][0];
      (c[2][1]) = (c[2][1])-coeff*(c[3][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[3][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[3][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[3][4]);
      (r[2]) = (r[2])-coeff*(r[3]);
      coeff = (lhs_NO95[4][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[3][4]);
      *(c[4]) = c[4][0]-coeff*c[3][0];
      (c[4][1]) = (c[4][1])-coeff*(c[3][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[3][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[3][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[3][4]);
      (r[4]) = (r[4])-coeff*(r[3]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[4][4]);
      *(c[4]) = c[4][0]*pivot;
      (c[4][1]) = (c[4][1])*pivot;
      (c[4][2]) = (c[4][2])*pivot;
      (c[4][3]) = (c[4][3])*pivot;
      (c[4][4]) = (c[4][4])*pivot;
      (r[4]) = (r[4])*pivot;
      coeff = (lhs_NO95[0][4]);
      *(c[0]) = c[0][0]-coeff*c[4][0];
      (c[0][1]) = (c[0][1])-coeff*(c[4][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[4][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[4][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[4][4]);
      (r[0]) = (r[0])-coeff*(r[4]);
      coeff = (lhs_NO95[1][4]);
      *(c[1]) = c[1][0]-coeff*c[4][0];
      (c[1][1]) = (c[1][1])-coeff*(c[4][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[4][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[4][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[4][4]);
      (r[1]) = (r[1])-coeff*(r[4]);
      coeff = (lhs_NO95[2][4]);
      *(c[2]) = c[2][0]-coeff*c[4][0];
      (c[2][1]) = (c[2][1])-coeff*(c[4][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[4][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[4][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[4][4]);
      (r[2]) = (r[2])-coeff*(r[4]);
      coeff = (lhs_NO95[3][4]);
      *(c[3]) = c[3][0]-coeff*c[4][0];
      (c[3][1]) = (c[3][1])-coeff*(c[4][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[4][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[4][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[4][4]);
      (r[3]) = (r[3])-coeff*(r[4]);
/* == binvcrhs#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 114: binvcrhs */
/* ******************* */
static void binvcrhs_PE1(double(* lhs_NO95)[5],
      double(* c)[5],
      double* r)
{
      double pivot/* pivot */;
      double coeff/* coeff */;

/* @decl:pe1:module114@ */
/* == binvcrhs#block1 ==*/
/* == binvcrhs#block1.bb1 ==*/
      pivot = 1.0000000000000000E+00/ lhs_NO95[0][0];
      (lhs_NO95[0][1]) = (lhs_NO95[0][1])*pivot;
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])*pivot;
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])*pivot;
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])*pivot;
      *(c[0]) = c[0][0]*pivot;
      (c[0][1]) = (c[0][1])*pivot;
      (c[0][2]) = (c[0][2])*pivot;
      (c[0][3]) = (c[0][3])*pivot;
      (c[0][4]) = (c[0][4])*pivot;
      (r[0]) = (r[0])*pivot;
      coeff = lhs_NO95[1][0];
      (lhs_NO95[1][1]) = (lhs_NO95[1][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[0][4]);
      *(c[1]) = c[1][0]-coeff*c[0][0];
      (c[1][1]) = (c[1][1])-coeff*(c[0][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[0][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[0][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[0][4]);
      (r[1]) = (r[1])-coeff*(r[0]);
      coeff = lhs_NO95[2][0];
      (lhs_NO95[2][1]) = (lhs_NO95[2][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[0][4]);
      *(c[2]) = c[2][0]-coeff*c[0][0];
      (c[2][1]) = (c[2][1])-coeff*(c[0][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[0][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[0][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[0][4]);
      (r[2]) = (r[2])-coeff*(r[0]);
      coeff = lhs_NO95[3][0];
      (lhs_NO95[3][1]) = (lhs_NO95[3][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[0][4]);
      *(c[3]) = c[3][0]-coeff*c[0][0];
      (c[3][1]) = (c[3][1])-coeff*(c[0][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[0][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[0][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[0][4]);
      (r[3]) = (r[3])-coeff*(r[0]);
      coeff = lhs_NO95[4][0];
      (lhs_NO95[4][1]) = (lhs_NO95[4][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[0][4]);
      *(c[4]) = c[4][0]-coeff*c[0][0];
      (c[4][1]) = (c[4][1])-coeff*(c[0][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[0][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[0][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[0][4]);
      (r[4]) = (r[4])-coeff*(r[0]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[1][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])*pivot;
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])*pivot;
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])*pivot;
      *(c[1]) = c[1][0]*pivot;
      (c[1][1]) = (c[1][1])*pivot;
      (c[1][2]) = (c[1][2])*pivot;
      (c[1][3]) = (c[1][3])*pivot;
      (c[1][4]) = (c[1][4])*pivot;
      (r[1]) = (r[1])*pivot;
      coeff = (lhs_NO95[0][1]);
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[1][4]);
      *(c[0]) = c[0][0]-coeff*c[1][0];
      (c[0][1]) = (c[0][1])-coeff*(c[1][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[1][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[1][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[1][4]);
      (r[0]) = (r[0])-coeff*(r[1]);
      coeff = (lhs_NO95[2][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[1][4]);
      *(c[2]) = c[2][0]-coeff*c[1][0];
      (c[2][1]) = (c[2][1])-coeff*(c[1][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[1][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[1][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[1][4]);
      (r[2]) = (r[2])-coeff*(r[1]);
      coeff = (lhs_NO95[3][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[1][4]);
      *(c[3]) = c[3][0]-coeff*c[1][0];
      (c[3][1]) = (c[3][1])-coeff*(c[1][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[1][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[1][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[1][4]);
      (r[3]) = (r[3])-coeff*(r[1]);
      coeff = (lhs_NO95[4][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[1][4]);
      *(c[4]) = c[4][0]-coeff*c[1][0];
      (c[4][1]) = (c[4][1])-coeff*(c[1][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[1][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[1][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[1][4]);
      (r[4]) = (r[4])-coeff*(r[1]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[2][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])*pivot;
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])*pivot;
      *(c[2]) = c[2][0]*pivot;
      (c[2][1]) = (c[2][1])*pivot;
      (c[2][2]) = (c[2][2])*pivot;
      (c[2][3]) = (c[2][3])*pivot;
      (c[2][4]) = (c[2][4])*pivot;
      (r[2]) = (r[2])*pivot;
      coeff = (lhs_NO95[0][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[2][4]);
      *(c[0]) = c[0][0]-coeff*c[2][0];
      (c[0][1]) = (c[0][1])-coeff*(c[2][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[2][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[2][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[2][4]);
      (r[0]) = (r[0])-coeff*(r[2]);
      coeff = (lhs_NO95[1][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[2][4]);
      *(c[1]) = c[1][0]-coeff*c[2][0];
      (c[1][1]) = (c[1][1])-coeff*(c[2][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[2][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[2][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[2][4]);
      (r[1]) = (r[1])-coeff*(r[2]);
      coeff = (lhs_NO95[3][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[2][4]);
      *(c[3]) = c[3][0]-coeff*c[2][0];
      (c[3][1]) = (c[3][1])-coeff*(c[2][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[2][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[2][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[2][4]);
      (r[3]) = (r[3])-coeff*(r[2]);
      coeff = (lhs_NO95[4][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[2][4]);
      *(c[4]) = c[4][0]-coeff*c[2][0];
      (c[4][1]) = (c[4][1])-coeff*(c[2][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[2][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[2][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[2][4]);
      (r[4]) = (r[4])-coeff*(r[2]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[3][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])*pivot;
      *(c[3]) = c[3][0]*pivot;
      (c[3][1]) = (c[3][1])*pivot;
      (c[3][2]) = (c[3][2])*pivot;
      (c[3][3]) = (c[3][3])*pivot;
      (c[3][4]) = (c[3][4])*pivot;
      (r[3]) = (r[3])*pivot;
      coeff = (lhs_NO95[0][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[3][4]);
      *(c[0]) = c[0][0]-coeff*c[3][0];
      (c[0][1]) = (c[0][1])-coeff*(c[3][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[3][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[3][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[3][4]);
      (r[0]) = (r[0])-coeff*(r[3]);
      coeff = (lhs_NO95[1][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[3][4]);
      *(c[1]) = c[1][0]-coeff*c[3][0];
      (c[1][1]) = (c[1][1])-coeff*(c[3][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[3][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[3][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[3][4]);
      (r[1]) = (r[1])-coeff*(r[3]);
      coeff = (lhs_NO95[2][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[3][4]);
      *(c[2]) = c[2][0]-coeff*c[3][0];
      (c[2][1]) = (c[2][1])-coeff*(c[3][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[3][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[3][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[3][4]);
      (r[2]) = (r[2])-coeff*(r[3]);
      coeff = (lhs_NO95[4][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[3][4]);
      *(c[4]) = c[4][0]-coeff*c[3][0];
      (c[4][1]) = (c[4][1])-coeff*(c[3][1]);
      (c[4][2]) = (c[4][2])-coeff*(c[3][2]);
      (c[4][3]) = (c[4][3])-coeff*(c[3][3]);
      (c[4][4]) = (c[4][4])-coeff*(c[3][4]);
      (r[4]) = (r[4])-coeff*(r[3]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[4][4]);
      *(c[4]) = c[4][0]*pivot;
      (c[4][1]) = (c[4][1])*pivot;
      (c[4][2]) = (c[4][2])*pivot;
      (c[4][3]) = (c[4][3])*pivot;
      (c[4][4]) = (c[4][4])*pivot;
      (r[4]) = (r[4])*pivot;
      coeff = (lhs_NO95[0][4]);
      *(c[0]) = c[0][0]-coeff*c[4][0];
      (c[0][1]) = (c[0][1])-coeff*(c[4][1]);
      (c[0][2]) = (c[0][2])-coeff*(c[4][2]);
      (c[0][3]) = (c[0][3])-coeff*(c[4][3]);
      (c[0][4]) = (c[0][4])-coeff*(c[4][4]);
      (r[0]) = (r[0])-coeff*(r[4]);
      coeff = (lhs_NO95[1][4]);
      *(c[1]) = c[1][0]-coeff*c[4][0];
      (c[1][1]) = (c[1][1])-coeff*(c[4][1]);
      (c[1][2]) = (c[1][2])-coeff*(c[4][2]);
      (c[1][3]) = (c[1][3])-coeff*(c[4][3]);
      (c[1][4]) = (c[1][4])-coeff*(c[4][4]);
      (r[1]) = (r[1])-coeff*(r[4]);
      coeff = (lhs_NO95[2][4]);
      *(c[2]) = c[2][0]-coeff*c[4][0];
      (c[2][1]) = (c[2][1])-coeff*(c[4][1]);
      (c[2][2]) = (c[2][2])-coeff*(c[4][2]);
      (c[2][3]) = (c[2][3])-coeff*(c[4][3]);
      (c[2][4]) = (c[2][4])-coeff*(c[4][4]);
      (r[2]) = (r[2])-coeff*(r[4]);
      coeff = (lhs_NO95[3][4]);
      *(c[3]) = c[3][0]-coeff*c[4][0];
      (c[3][1]) = (c[3][1])-coeff*(c[4][1]);
      (c[3][2]) = (c[3][2])-coeff*(c[4][2]);
      (c[3][3]) = (c[3][3])-coeff*(c[4][3]);
      (c[3][4]) = (c[3][4])-coeff*(c[4][4]);
      (r[3]) = (r[3])-coeff*(r[4]);
/* == binvcrhs#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 112: matvec_sub */
/* ******************* */
static void matvec_sub_PE0(double(* ablock)[5],
      double* avec,
      double* bvec)
{
      int i_NO98/* i */;
      int i_NO99/* i */;

/* @decl:pe0:module112@ */
/* == matvec_sub#block1 ==*/
/* == matvec_sub#block1.loop1 ==*/
      for (i_NO99 = 0 ; i_NO99 <= 4 ; i_NO99 += 1){
/* == matvec_sub#block1.loop1.bb1 ==*/
      (bvec[i_NO99]) = (bvec[i_NO99])-(ablock[i_NO99][0])*(avec[0])-(ablock[i_NO99][1])*(avec[1])-(ablock[i_NO99][2])*(avec[2])-(ablock[i_NO99][3])*(avec[3])-(ablock[i_NO99][4])*(avec[4]);
      }
/* == matvec_sub#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 112: matvec_sub */
/* ******************* */
static void matvec_sub_PE1(double(* ablock)[5],
      double* avec,
      double* bvec)
{
      int i_NO98/* i */;
      int i_NO99/* i */;

/* @decl:pe1:module112@ */
/* == matvec_sub#block1 ==*/
/* == matvec_sub#block1.loop1 ==*/
      for (i_NO99 = 0 ; i_NO99 <= 4 ; i_NO99 += 1){
/* == matvec_sub#block1.loop1.bb1 ==*/
      (bvec[i_NO99]) = (bvec[i_NO99])-(ablock[i_NO99][0])*(avec[0])-(ablock[i_NO99][1])*(avec[1])-(ablock[i_NO99][2])*(avec[2])-(ablock[i_NO99][3])*(avec[3])-(ablock[i_NO99][4])*(avec[4]);
      }
/* == matvec_sub#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 113: matmul_sub */
/* ******************* */
static void matmul_sub_PE0(double(* ablock)[5],
      double(* bblock)[5],
      double(* cblock)[5])
{
      int j_NO98/* j */;
      int j_NO99/* j */;

/* @decl:pe0:module113@ */
/* == matmul_sub#block1 ==*/
/* == matmul_sub#block1.loop1 ==*/
      for (j_NO99 = 0 ; j_NO99 <= 4 ; j_NO99 += 1){
/* == matmul_sub#block1.loop1.bb1 ==*/
      (cblock[0][j_NO99]) = (cblock[0][j_NO99])-ablock[0][0]*(bblock[0][j_NO99])-(ablock[0][1])*(bblock[1][j_NO99])-(ablock[0][2])*(bblock[2][j_NO99])-(ablock[0][3])*(bblock[3][j_NO99])-(ablock[0][4])*(bblock[4][j_NO99]);
      (cblock[1][j_NO99]) = (cblock[1][j_NO99])-ablock[1][0]*(bblock[0][j_NO99])-(ablock[1][1])*(bblock[1][j_NO99])-(ablock[1][2])*(bblock[2][j_NO99])-(ablock[1][3])*(bblock[3][j_NO99])-(ablock[1][4])*(bblock[4][j_NO99]);
      (cblock[2][j_NO99]) = (cblock[2][j_NO99])-ablock[2][0]*(bblock[0][j_NO99])-(ablock[2][1])*(bblock[1][j_NO99])-(ablock[2][2])*(bblock[2][j_NO99])-(ablock[2][3])*(bblock[3][j_NO99])-(ablock[2][4])*(bblock[4][j_NO99]);
      (cblock[3][j_NO99]) = (cblock[3][j_NO99])-ablock[3][0]*(bblock[0][j_NO99])-(ablock[3][1])*(bblock[1][j_NO99])-(ablock[3][2])*(bblock[2][j_NO99])-(ablock[3][3])*(bblock[3][j_NO99])-(ablock[3][4])*(bblock[4][j_NO99]);
      (cblock[4][j_NO99]) = (cblock[4][j_NO99])-ablock[4][0]*(bblock[0][j_NO99])-(ablock[4][1])*(bblock[1][j_NO99])-(ablock[4][2])*(bblock[2][j_NO99])-(ablock[4][3])*(bblock[3][j_NO99])-(ablock[4][4])*(bblock[4][j_NO99]);
      }
/* == matmul_sub#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 113: matmul_sub */
/* ******************* */
static void matmul_sub_PE1(double(* ablock)[5],
      double(* bblock)[5],
      double(* cblock)[5])
{
      int j_NO98/* j */;
      int j_NO99/* j */;

/* @decl:pe1:module113@ */
/* == matmul_sub#block1 ==*/
/* == matmul_sub#block1.loop1 ==*/
      for (j_NO99 = 0 ; j_NO99 <= 4 ; j_NO99 += 1){
/* == matmul_sub#block1.loop1.bb1 ==*/
      (cblock[0][j_NO99]) = (cblock[0][j_NO99])-ablock[0][0]*(bblock[0][j_NO99])-(ablock[0][1])*(bblock[1][j_NO99])-(ablock[0][2])*(bblock[2][j_NO99])-(ablock[0][3])*(bblock[3][j_NO99])-(ablock[0][4])*(bblock[4][j_NO99]);
      (cblock[1][j_NO99]) = (cblock[1][j_NO99])-ablock[1][0]*(bblock[0][j_NO99])-(ablock[1][1])*(bblock[1][j_NO99])-(ablock[1][2])*(bblock[2][j_NO99])-(ablock[1][3])*(bblock[3][j_NO99])-(ablock[1][4])*(bblock[4][j_NO99]);
      (cblock[2][j_NO99]) = (cblock[2][j_NO99])-ablock[2][0]*(bblock[0][j_NO99])-(ablock[2][1])*(bblock[1][j_NO99])-(ablock[2][2])*(bblock[2][j_NO99])-(ablock[2][3])*(bblock[3][j_NO99])-(ablock[2][4])*(bblock[4][j_NO99]);
      (cblock[3][j_NO99]) = (cblock[3][j_NO99])-ablock[3][0]*(bblock[0][j_NO99])-(ablock[3][1])*(bblock[1][j_NO99])-(ablock[3][2])*(bblock[2][j_NO99])-(ablock[3][3])*(bblock[3][j_NO99])-(ablock[3][4])*(bblock[4][j_NO99]);
      (cblock[4][j_NO99]) = (cblock[4][j_NO99])-ablock[4][0]*(bblock[0][j_NO99])-(ablock[4][1])*(bblock[1][j_NO99])-(ablock[4][2])*(bblock[2][j_NO99])-(ablock[4][3])*(bblock[3][j_NO99])-(ablock[4][4])*(bblock[4][j_NO99]);
      }
/* == matmul_sub#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 115: binvrhs */
/* ******************* */
static void binvrhs_PE0(double(* lhs_NO95)[5],
      double* r)
{
      double pivot/* pivot */;
      double coeff/* coeff */;

/* @decl:pe0:module115@ */
/* == binvrhs#block1 ==*/
/* == binvrhs#block1.bb1 ==*/
      pivot = 1.0000000000000000E+00/ lhs_NO95[0][0];
      (lhs_NO95[0][1]) = (lhs_NO95[0][1])*pivot;
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])*pivot;
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])*pivot;
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])*pivot;
      (r[0]) = (r[0])*pivot;
      coeff = lhs_NO95[1][0];
      (lhs_NO95[1][1]) = (lhs_NO95[1][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[0][4]);
      (r[1]) = (r[1])-coeff*(r[0]);
      coeff = lhs_NO95[2][0];
      (lhs_NO95[2][1]) = (lhs_NO95[2][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[0][4]);
      (r[2]) = (r[2])-coeff*(r[0]);
      coeff = lhs_NO95[3][0];
      (lhs_NO95[3][1]) = (lhs_NO95[3][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[0][4]);
      (r[3]) = (r[3])-coeff*(r[0]);
      coeff = lhs_NO95[4][0];
      (lhs_NO95[4][1]) = (lhs_NO95[4][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[0][4]);
      (r[4]) = (r[4])-coeff*(r[0]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[1][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])*pivot;
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])*pivot;
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])*pivot;
      (r[1]) = (r[1])*pivot;
      coeff = (lhs_NO95[0][1]);
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[1][4]);
      (r[0]) = (r[0])-coeff*(r[1]);
      coeff = (lhs_NO95[2][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[1][4]);
      (r[2]) = (r[2])-coeff*(r[1]);
      coeff = (lhs_NO95[3][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[1][4]);
      (r[3]) = (r[3])-coeff*(r[1]);
      coeff = (lhs_NO95[4][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[1][4]);
      (r[4]) = (r[4])-coeff*(r[1]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[2][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])*pivot;
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])*pivot;
      (r[2]) = (r[2])*pivot;
      coeff = (lhs_NO95[0][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[2][4]);
      (r[0]) = (r[0])-coeff*(r[2]);
      coeff = (lhs_NO95[1][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[2][4]);
      (r[1]) = (r[1])-coeff*(r[2]);
      coeff = (lhs_NO95[3][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[2][4]);
      (r[3]) = (r[3])-coeff*(r[2]);
      coeff = (lhs_NO95[4][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[2][4]);
      (r[4]) = (r[4])-coeff*(r[2]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[3][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])*pivot;
      (r[3]) = (r[3])*pivot;
      coeff = (lhs_NO95[0][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[3][4]);
      (r[0]) = (r[0])-coeff*(r[3]);
      coeff = (lhs_NO95[1][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[3][4]);
      (r[1]) = (r[1])-coeff*(r[3]);
      coeff = (lhs_NO95[2][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[3][4]);
      (r[2]) = (r[2])-coeff*(r[3]);
      coeff = (lhs_NO95[4][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[3][4]);
      (r[4]) = (r[4])-coeff*(r[3]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[4][4]);
      (r[4]) = (r[4])*pivot;
      coeff = (lhs_NO95[0][4]);
      (r[0]) = (r[0])-coeff*(r[4]);
      coeff = (lhs_NO95[1][4]);
      (r[1]) = (r[1])-coeff*(r[4]);
      coeff = (lhs_NO95[2][4]);
      (r[2]) = (r[2])-coeff*(r[4]);
      coeff = (lhs_NO95[3][4]);
      (r[3]) = (r[3])-coeff*(r[4]);
/* == binvrhs#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
/* ******************* */
/* *** Module 115: binvrhs */
/* ******************* */
static void binvrhs_PE1(double(* lhs_NO95)[5],
      double* r)
{
      double pivot/* pivot */;
      double coeff/* coeff */;

/* @decl:pe1:module115@ */
/* == binvrhs#block1 ==*/
/* == binvrhs#block1.bb1 ==*/
      pivot = 1.0000000000000000E+00/ lhs_NO95[0][0];
      (lhs_NO95[0][1]) = (lhs_NO95[0][1])*pivot;
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])*pivot;
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])*pivot;
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])*pivot;
      (r[0]) = (r[0])*pivot;
      coeff = lhs_NO95[1][0];
      (lhs_NO95[1][1]) = (lhs_NO95[1][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[0][4]);
      (r[1]) = (r[1])-coeff*(r[0]);
      coeff = lhs_NO95[2][0];
      (lhs_NO95[2][1]) = (lhs_NO95[2][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[0][4]);
      (r[2]) = (r[2])-coeff*(r[0]);
      coeff = lhs_NO95[3][0];
      (lhs_NO95[3][1]) = (lhs_NO95[3][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[0][4]);
      (r[3]) = (r[3])-coeff*(r[0]);
      coeff = lhs_NO95[4][0];
      (lhs_NO95[4][1]) = (lhs_NO95[4][1])-coeff*(lhs_NO95[0][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[0][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[0][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[0][4]);
      (r[4]) = (r[4])-coeff*(r[0]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[1][1]);
      (lhs_NO95[1][2]) = (lhs_NO95[1][2])*pivot;
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])*pivot;
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])*pivot;
      (r[1]) = (r[1])*pivot;
      coeff = (lhs_NO95[0][1]);
      (lhs_NO95[0][2]) = (lhs_NO95[0][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[1][4]);
      (r[0]) = (r[0])-coeff*(r[1]);
      coeff = (lhs_NO95[2][1]);
      (lhs_NO95[2][2]) = (lhs_NO95[2][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[1][4]);
      (r[2]) = (r[2])-coeff*(r[1]);
      coeff = (lhs_NO95[3][1]);
      (lhs_NO95[3][2]) = (lhs_NO95[3][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[1][4]);
      (r[3]) = (r[3])-coeff*(r[1]);
      coeff = (lhs_NO95[4][1]);
      (lhs_NO95[4][2]) = (lhs_NO95[4][2])-coeff*(lhs_NO95[1][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[1][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[1][4]);
      (r[4]) = (r[4])-coeff*(r[1]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[2][2]);
      (lhs_NO95[2][3]) = (lhs_NO95[2][3])*pivot;
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])*pivot;
      (r[2]) = (r[2])*pivot;
      coeff = (lhs_NO95[0][2]);
      (lhs_NO95[0][3]) = (lhs_NO95[0][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[2][4]);
      (r[0]) = (r[0])-coeff*(r[2]);
      coeff = (lhs_NO95[1][2]);
      (lhs_NO95[1][3]) = (lhs_NO95[1][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[2][4]);
      (r[1]) = (r[1])-coeff*(r[2]);
      coeff = (lhs_NO95[3][2]);
      (lhs_NO95[3][3]) = (lhs_NO95[3][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])-coeff*(lhs_NO95[2][4]);
      (r[3]) = (r[3])-coeff*(r[2]);
      coeff = (lhs_NO95[4][2]);
      (lhs_NO95[4][3]) = (lhs_NO95[4][3])-coeff*(lhs_NO95[2][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[2][4]);
      (r[4]) = (r[4])-coeff*(r[2]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[3][3]);
      (lhs_NO95[3][4]) = (lhs_NO95[3][4])*pivot;
      (r[3]) = (r[3])*pivot;
      coeff = (lhs_NO95[0][3]);
      (lhs_NO95[0][4]) = (lhs_NO95[0][4])-coeff*(lhs_NO95[3][4]);
      (r[0]) = (r[0])-coeff*(r[3]);
      coeff = (lhs_NO95[1][3]);
      (lhs_NO95[1][4]) = (lhs_NO95[1][4])-coeff*(lhs_NO95[3][4]);
      (r[1]) = (r[1])-coeff*(r[3]);
      coeff = (lhs_NO95[2][3]);
      (lhs_NO95[2][4]) = (lhs_NO95[2][4])-coeff*(lhs_NO95[3][4]);
      (r[2]) = (r[2])-coeff*(r[3]);
      coeff = (lhs_NO95[4][3]);
      (lhs_NO95[4][4]) = (lhs_NO95[4][4])-coeff*(lhs_NO95[3][4]);
      (r[4]) = (r[4])-coeff*(r[3]);
      pivot = 1.0000000000000000E+00/ (lhs_NO95[4][4]);
      (r[4]) = (r[4])*pivot;
      coeff = (lhs_NO95[0][4]);
      (r[0]) = (r[0])-coeff*(r[4]);
      coeff = (lhs_NO95[1][4]);
      (r[1]) = (r[1])-coeff*(r[4]);
      coeff = (lhs_NO95[2][4]);
      (r[2]) = (r[2])-coeff*(r[4]);
      coeff = (lhs_NO95[3][4]);
      (r[3]) = (r[3])-coeff*(r[4]);
/* == binvrhs#block1.bb2 ==*/
      goto L1;
L1:;
goto __RETURN;
__RETURN:;
;
}
