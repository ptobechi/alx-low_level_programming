#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns 1 if true else return 0
 * @c: check if uppercase.
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
	    return (1);
    }
    return (0);
}
