#ifndef FCNTL_H
#define FCNTL_H

/* File access modes for `open' and `fcntl'.  */
#define O_RDONLY        0       /* Open read-only.  */
#define O_WRONLY        1       /* Open write-only.  */
#define O_RDWR          2       /* Open read/write.  */

#ifndef PPC64AIX
/* Bits OR'd into the second argument to open.  */
#define O_CREAT         0x40  /* Create file if it doesn't exist.  */
#define O_EXCL          0x80  /* Fail if file already exists.  */
#define O_TRUNC         0x200  /* Truncate file to zero length.  */
#define O_NOCTTY        0x100  /* Don't assign a controlling terminal.  */

/* File status flags for `open' and `fcntl'.  */
#define O_APPEND        0x400  /* Writes append to the file.  */
#define O_NONBLOCK      0x800  /* Non-blocking I/O.  */

#else
/* Bits OR'd into the second argument to open.  */
#define O_CREAT         0x100  /* Create file if it doesn't exist.  */
#define O_EXCL          0x400  /* Fail if file already exists.  */
#define O_TRUNC         0x200  /* Truncate file to zero length.  */
#define O_NOCTTY        0x800  /* Don't assign a controlling terminal.  */

/* File status flags for `open' and `fcntl'.  */
#define O_APPEND        0x8  /* Writes append to the file.  */
#define O_NONBLOCK      0x4  /* Non-blocking I/O.  */
#endif

int open(const char *pathname, int flags);

#endif
