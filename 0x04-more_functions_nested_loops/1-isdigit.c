#include "main.h"
#include <ctype.h>

/**
 * _isdigit - returns 1 if true else returns 0
 * @c: char c to check
 * Return: Always 0.
 */
int _isdigit(void)
{
    char c;

    if (isdigit(c))
    {
	    return (1);
    }
    else
    {
	    return (0);
    }
}
