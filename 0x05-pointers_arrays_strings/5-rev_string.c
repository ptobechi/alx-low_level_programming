#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: Always void (Success)
*/
void rev_string(char *s)
{
	size_t len;

	for (; len > 0; len--)
	{
		*s = s[len - 1];
	}
}
