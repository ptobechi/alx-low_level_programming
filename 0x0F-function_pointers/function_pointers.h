#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

/**
 * Author: Tobechukwu Paschal
 * file: function_pointers.h
 * description: Function prototypes for the funnction pointer proect
 * print_name - print name
 * @name: string name
 * @f: function pointer
*/
void print_name(char *name, void (*f)(char *));
#endif
