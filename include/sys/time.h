#ifndef TIME_H
#define TIME_H

struct timeval{
    long    tv_sec;    /* seconds since Jan. 1, 1970 */
    long    tv_usec;   /* and microseconds */
};

int gettimeofday(struct timeval *tp, void *);

#endif
