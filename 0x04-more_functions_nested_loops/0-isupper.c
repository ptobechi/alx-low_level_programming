#include "main.h"
#include <ctype.h>

/**
 * _isupper - returns 1 if true else return 0
 * @c: check if uppercase.
 *
 * Return: Always 0.
 */
int _isupper(void)
{
    char c;

    return ((c >= 65) && (c <= 90));
}
