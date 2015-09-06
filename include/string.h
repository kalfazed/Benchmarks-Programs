#ifndef STRING_H
#define STRING_H

#include "type.h"

#ifndef NULL
#define NULL 0
#endif

void *memccpy(void *s1, const void *s2, int c, size_t n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memcpy(void *s1, const void *s2, size_t n);
void *memmove(void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);

size_t  strlen(const char *s);
char *strcat(char *s1, const char *s2);
char *strncat(char *s1, const char *s2, size_t n);
size_t strlcat(char *dst, const char *src, size_t dstsize);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *strcpy(char *s1, const char *s2);
char *strncpy(char *s1, const char *s2, size_t n);
size_t strlcpy(char *dst, const char *src, size_t dstsize);
size_t strcspn(const char *s1, const char *s2);
size_t strspn(const char *s1, const char *s2);
char *strdup(const char *s1);
size_t strlen(const char *s);
char *strpbrk(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);

/* char *strtok_r(char *s1, const char *s2, char **lasts); */

#endif /* STRING_H */
