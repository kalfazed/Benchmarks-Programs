#ifndef UNISTD_H
#define UNISTD_H
#include <type.h>

int close(int fildes);
ssize_t write(int fd, const void *buf, size_t count);   
ssize_t read(int fd, void *buf, size_t count);

#endif
