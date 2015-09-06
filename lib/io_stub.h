#include <stdio.h>

void fread_all(char* filename);
void fwrite_all(char* filename);
unsigned int fread_stub(void* ptr, int size, int num);
int fgetc_stub();
char* fgets_stub(char *s, int size);
int fprintf_stub(const char *fmt, ...);
unsigned int fwrite_stub(void* ptr, int size, int num);
