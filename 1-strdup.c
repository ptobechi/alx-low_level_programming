#include <stdlib.h>

/**
 * _strdup - returns a pointer to the new string of duplicate of str
 * @str: string
 * Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[i];

	return (strout);
}
