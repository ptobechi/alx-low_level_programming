#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence of a string
 * @c: character to check for and return
 * @s: string to check the characteer for
 * Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int count_string = 0;
	int search = 0;
	char *result;

	for (; s[count_string] !='\0'; count_string++)
		count_string = count_string + 1;

	for (; search < count_string; search++)
	{
		if (s[search] == c)
		{
			result = s[search];
		}
	}

	if (*result != '\0')
		result = NULL;
	return (result);
}

