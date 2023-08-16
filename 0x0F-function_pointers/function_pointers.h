#ifndef FP_H
#define FP_H

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
