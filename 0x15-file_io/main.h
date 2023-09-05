#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
/**
 * Author: Tobechukwu Paschal
 * file: main.h
 *
 * Description: Project prototype for file io
*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* _MAIN_H */

