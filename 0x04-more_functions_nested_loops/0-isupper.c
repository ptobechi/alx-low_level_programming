#include "main.h"
#include <ctype.h>

/**
 * _isupper - returns 1 if true else return 0
 * @c: check if uppercase.
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
    if (c > 64 && c < 91)
    {
	    return (1)
    }
    return (0);
}
