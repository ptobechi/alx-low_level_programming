#ifndef _VARIADIC_FUNNCTIONS_
#define _VARIADIC_FUNNCTIONS_

/**
 * Author: Tobechukwu Paschal
 * file: variadic_functions.h
 * Description: Function prototype for the variadic project
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
