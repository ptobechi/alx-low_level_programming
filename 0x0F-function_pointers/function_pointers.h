#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdlib.h>

/**
 * Author: Tobechukwu Paschal
 * file: function_pointers.h
 * description: Function prototypes for the funnction pointer proect
 * print_name - print name
 * @name: string name
 * @f: function pointer
*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
