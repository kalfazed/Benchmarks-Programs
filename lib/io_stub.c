#include <stdio.h>
#include <stdarg.h>

/* settings for input */
#undef   NO_INPUT       /* don't read from file */
#undef   IMPLANT_INPUT  /* input data is written in initialized array 
                           if defined (when undef NO_INPUT) */
#define  INPUT_ADDR  0x08000000 /* memory address of inputdata (when NO_INPUT) */

/* settings for output */
#undef   NO_OUTPUT      /* don't write to file */
#define  OUTPUT_ADDR 0x0b000000 /* memory address of outputdata (when NO_OUTPUT) */

/* settings for making initialized array data from input */
#undef   MAKE_DATA      /* make data if defined */
#undef   MAKE_DATA_WHOLE_BUF
#define  MAKE_DATA_FILENAME "io_stub_data.c"

#define  USE_MEMCPY       /* use memcpy() for copy loop */
#define  NO_BOUND         /* no boundary check */
#undef   DEBUG

#ifdef DEBUG
#include <limits.h>
#endif /* DEBUG */

#ifdef USE_MEMCPY
#include <string.h>
#endif /* USE_MEMCPY */

//#define FILE_BUF_MAX 1000000000
//#define FILE_BUF_MAX 120000
//#define FILE_BUF_MAX 33928748
#define FILE_BUF_MAX 100000000
//#define FILE_BUF_MAX 100000

#ifdef IMPLANT_INPUT
#include "io_stub_data.c"
#else

#ifndef NO_INPUT
static unsigned char fread_buf[FILE_BUF_MAX];
#endif

static int fread_buf_count_max = FILE_BUF_MAX;

#endif /* IMPLANT_INPUT */

static int fread_buf_count = 0;

#ifndef NO_INPUT
static unsigned char *fread_buf_ptr = fread_buf;
#else
static unsigned char *fread_buf_ptr = (unsigned char*)INPUT_ADDR;
#endif

#ifndef NO_OUTPUT
static unsigned char fwrite_buf[FILE_BUF_MAX];
#endif

static int fwrite_buf_count = 0;

#ifndef NO_OUTPUT
static unsigned char *fwrite_buf_ptr = fwrite_buf;
#else
static unsigned char *fwrite_buf_ptr = (unsigned char*)OUTPUT_ADDR;
#endif


void fread_all(char* filename)
{
#ifdef NO_INPUT
    ;
#else /* NO_INPUT */
#ifdef IMPLANT_INPUT
    ;
#else /* IMPLANT_INPUT */
    int i, mod_i;
    int size;
    FILE *fp;
#ifdef MAKE_DATA
    FILE *data_fp;
#endif /* MAKE_DATA */

    if((fp=fopen(filename, "rb"))==NULL){
#ifdef DEBUG 
	fprintf(stderr, "couldn't open input file %s\n", filename);
#endif /* DEBUG */
	return;
    }
#ifdef DEBUG
    fprintf(stderr, "INT_MAX : %d\n", INT_MAX);
    fprintf(stderr, "FILE_BUF_MAX : %d\n", FILE_BUF_MAX);
#endif /* DEBUG */
    size = fread(fread_buf, 1, FILE_BUF_MAX, fp);
    if (size >= FILE_BUF_MAX) {
	fprintf(stderr, "read buffer full");
	size = FILE_BUF_MAX;
    }
    fread_buf_count_max = size;
    fclose(fp);
#ifdef DEBUG
    fprintf(stderr, "read %d bytes\n", size);
#endif /* DEBUG */

#ifdef MAKE_DATA
    data_fp = fopen(MAKE_DATA_FILENAME, "w");

#ifdef MAKE_DATA_WHOLE_BUF
    size = FILE_BUF_MAX;
#endif /* MAKE_DATA_WHOLE_BUF */

    fprintf(data_fp, "static unsigned char fread_buf[%d] = {\n", size);
    for (i = 0, mod_i = 0; i < size - 1; i++, mod_i++) {
	if (mod_i == 10) {
	    fprintf(data_fp, "\n");
	    mod_i = 0;
	}
	fprintf(data_fp, "0x%x, ", fread_buf[i]);
    }
    if (i == size - 1) {
	if (mod_i == 10) {
	    fprintf(data_fp, "\n");
	}
	fprintf(data_fp, "0x%x", fread_buf[i]);
    }
    fprintf(data_fp, "\n};\n");
    fprintf(data_fp, "static int fread_buf_count_max = %d;\n", size);
    fclose(data_fp);
#endif /* MAKE_DATA */
#endif /* IMPLANT_INPUT*/
#endif /* NO_INPUT */
}

#if 1
void fwrite_all(char *filename)
{
#ifdef NO_OUTPUT
    ;
#else /* NO_OUTPUT */
    int size;
    FILE *fp;

    if((fp = fopen(filename, "wb"))==NULL){
#ifdef DEBUG
	fprintf(stderr, "couldn't create output file %s\n", filename);
#endif /* DEBUG */
	return;
    }
    size = fwrite(fwrite_buf, 1, fwrite_buf_count, fp);
#ifdef DEBUG
    fprintf(stderr, "write %d / %d bytes\n", size, fwrite_buf_count);
#endif /* DEBUG */
#endif /* NO_OUTPUT */
}
#else
void fwrite_all(char *filename)
{
    FILE *fp;
    int i;

    if ((fp = fopen(filename, "w")) == NULL) {
#ifdef DEBUG
        fprintf(stderr, "couldn't create output file %s\n", filename);
#endif /* DEBUG */
        return;
    }
    
    for (i = 0; i < fwrite_buf_count; i++) {
        fprintf(fp, "%d\n", fwrite_buf[i]);
    }
#ifdef DEBUG
    fprintf(stderr, "write %d / %d bytes\n", size, fwrite_buf_count);
#endif /* DEBUG */
}
#endif

unsigned int fread_stub(void* ptr, int size, int num)
{
    unsigned int i, total;
    unsigned char* uc_ptr;

    uc_ptr = (unsigned char*)ptr;
    total = size * num;
#ifndef USE_MEMCPY
    for (i = 0; i < total; i++) {

#ifndef NO_BOUND
	if(fread_buf_count >= fread_buf_count_max) {
#ifdef DEBUG
	    fprintf(stderr, "out of fread buffer[%d / %d]\n", fread_buf_count, fread_buf_count_max);
#endif /* DEBUG */
	    break;
	}
#endif /* NO_BOUND */

	*uc_ptr = *fread_buf_ptr;
	uc_ptr++; fread_buf_ptr++;
	fread_buf_count++;
    }
#else /* USE_MEMCPY */
    memcpy(uc_ptr, fread_buf_ptr, total);
    fread_buf_ptr += total;
    fread_buf_count += total;
#endif /* USE_MEMCPY */

    return total;
}

int fgetc_stub()
{
    int val;

    if (fread_buf_count < fread_buf_count_max) {
	val = (int)(*fread_buf_ptr);
	fread_buf_ptr++;
	fread_buf_count++;
    } else {
	val = EOF;
    }

    return val;
}

char* fgets_stub(char *s, int size)
{
    char *ptr;
    int i;
    int tmp;

    ptr = s;
    if (fread_buf_count > fread_buf_count_max)
	return NULL;

    for (i = 0; i < size - 1; i++) {
	tmp = fgetc_stub();
	*ptr = (char)tmp;
	if (tmp == EOF || tmp == '\n')
	    break;
	ptr++;
    }
    ptr++;
    *ptr = '\0';

    return s;
}

int fprintf_stub(const char *format, ...)
{
    int num;
    va_list ap;

    va_start(ap, format);
    num = vsprintf((char *)fwrite_buf_ptr, format, ap);
    va_end(ap);
    fwrite_buf_ptr += num;
    fwrite_buf_count += num;

    return num;
}

unsigned int fwrite_stub(void* ptr, int size, int num)
{
    unsigned int i, total;
    unsigned char* uc_ptr;

    uc_ptr = (unsigned char*)ptr;
    total = size * num;

#ifndef USE_MEMCPY
    for (i = 0; i < total; i++) {

#ifndef NO_BOUND
	if (fwrite_buf_count >= FILE_BUF_MAX) {
#ifdef DEBUG
	    fprintf(stderr, "fwrite buffer full[%d / %d]\n", fwrite_buf_count, FILE_BUF_MAX);
#endif /* DEBUG */
	    break;
	}
#endif /* NO_BOUND */

	*fwrite_buf_ptr = *uc_ptr;
	fwrite_buf_ptr++; uc_ptr++;
	fwrite_buf_count++;
    }
#else /* USE_MEMCPY */
    memcpy(fwrite_buf_ptr, uc_ptr, total);
    fwrite_buf_ptr += total;
    fwrite_buf_count += total;
    i = total;
#endif /* USE_MEMCPY */

    return i;
}
