#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <stdio.h>
/*
 * int dprintf(int fd, const char *format, ...);
 */
#include <stdlib.h>
/*
 * void *malloc(size_t size);
 * void free(void *ptr);
 * callos, realloc, reallocarray..
 */
#include <fcntl.h>
#include <sys/stat.h>
/*
 * int open(const char *path, int oflag, ...);
 */
#include <unistd.h>
/*
 * ssize_t read(int fildes, void * buf, size_t nbytes);
 * ssize_t write(int fildes, const void *buf, size_t nbyte);
 * int close(int fildes);
 */
/*Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
