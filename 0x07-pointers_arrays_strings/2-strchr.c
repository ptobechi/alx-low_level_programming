#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence of a string
 * @c: character to check for and return
 * @s: string to check the characteer for
 * Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

