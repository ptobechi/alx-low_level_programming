#include <stdio.h>
#include "calc.h"

/**
 * get_op_func - a ponter function
 * @s: operator to perform
 * Return: Always 0 (Success)
*/
int (*get_op_func(char *s))(int, int)
{
