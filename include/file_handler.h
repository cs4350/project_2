/**
 * Defines a 2-dimensional array of character
 * pointers that hold the contents of the
 * currently opened file in memory. Functions
 * to support reading and writing the file
 * buffer to the disk are also defined.
 **/
#ifndef _FILE_HANDLER_H
#define _FILE_HANDLER_H
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>

const int M_LN_SIZE = 156;
char **file_buf;
extern int errno;
/**
 * Fill buffer with contents of file.
 **/
void read_file(const char *file_name, int *line_count);
/**
 * Write buffer's contents to file.
 **/
void write_file(const char *file_name);
/**
 * Free all memory associated with the file
 * buffer.
 **/
void destory_buf();
/**
 * This overridden destory_buf will first write
 * the file buffer to the file file_name before
 * destorying the buffer.
 **/
void destroy_buf(const char *file_name);
#endif