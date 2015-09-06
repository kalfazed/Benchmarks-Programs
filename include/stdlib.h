#ifndef STDLIB_H
#define STDLIB_H

#include "type.h"

#ifndef NULL
#define NULL 0
#endif

void abort(void);
int abs(int val);
/* int atexit(void (*func)(void)); */
double atof(const char *str);
int atoi(const char *str);
long atol(const char *str);
void *bsearch(const void *key, const void *base, size_t nel,
	    size_t size, int (*compar)(const void *,const void *));
void *calloc(size_t nelem, size_t elsize);
div_t div(int numer, int denom);
void exit(int status);
void free(void *ptr);
char *getenv(const char *name);
long labs(long lval);
ldiv_t ldiv(long int numer, long int denom);
void * malloc(size_t size);
/* 
int mblen(const char *s, size_t n);
size_t mbstowcs(wchar_t *pwcs, const char *s, size_t n);
int mbtowc(wchar_t *pwc, const char *s, size_t n);
void  qsort(void  *base,  size_t  nel,  size_t  width, int (*compar)(const void *, const void *));
*/
int rand(void);
double strtod(const char *str, char **endptr);
long strtol(const char *str, char **endptr, int base);
int system(const char *string);
void *realloc(void *ptr, size_t size);
void srand(unsigned int seed);

/* ocfe does not support
void *memalign(size_t alignment, size_t size);
void *valloc(size_t size);
long long strtoll(const char *str, char **endptr, int base);
long long atoll(const char *str);
lldiv_t lldiv(long long numer, long long denom);
char *lltostr(long long value, char *endptr);
char *ulltostr(unsigned long long value, char *endptr);
long long llabs(long long llval);
*/
#endif /* STDLIB_H */
