#ifndef STDIO_H
#define STDIO_H

#include "type.h"

#ifndef NULL
#define NULL 0
#endif
#ifndef EOF
#define EOF -1
#endif
#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif

struct __FILE_TAG       /* needs to be binary-compatible with old versions */
{
#ifdef _STDIO_REVERSE
    unsigned char   *_ptr;  /* next character from/to here in buffer */
    ssize_t         _cnt;   /* number of available characters in buffer */
#else
    ssize_t         _cnt;   /* number of available characters in buffer */
    unsigned char   *_ptr;  /* next character from/to here in buffer */
#endif
    unsigned char   *_base; /* the buffer */
    unsigned char   _flag;  /* the state of the stream */
    unsigned char   _file;  /* UNIX System file descriptor */
    unsigned        __orientation:2; /* the orientation of the stream */
    unsigned        __ionolock:1;   /* turn off implicit locking */
    unsigned        __seekable:1;   /* is file seekable? */
    unsigned        __filler:4;
};

typedef  struct __FILE_TAG  FILE;

extern FILE *stderr;
extern FILE *stdout;
extern FILE *stdin;

FILE *fopen(const char *filename, const char *mode);

int fclose(FILE *stream);

int fflush(FILE *stream);

int printf(const char *format, /* args*/ ...);

int fprintf(FILE *stream,  const  char  *format,  /*  args*/
	    ...);
int sprintf(char *s, const char *format, /* args*/ ...);


int scanf(const char *format, ...);

int fscanf(FILE*stream, const char *format, ...);

int sscanf(const char *s, const char *format, ...);


int fputc(int c, FILE *stream);

int putc(int c, FILE *stream);


int fgetc(FILE *stream);

int getc(FILE *stream);


char *gets(char *s);

char *fgets(char *s, int n, FILE *stream);


int puts(const char *s);

int fputs(const char *s, FILE *stream);


int fseek(FILE *stream, long offset, int whence);

/* int fseeko(FILE *stream, off_t offset, int whence); */

size_t fread(void *ptr, size_t  size,  size_t  nitems,  FILE
	     *stream);

size_t fwrite(const void *ptr, size_t size,  size_t  nitems,
	      FILE *stream);

#endif /* STDIO_H */
