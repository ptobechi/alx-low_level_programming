#include "main.h"
#include <stdio.h>

/**
 * _isdigit - returns 1 if true else returns 0
 * @c: char c to check
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
