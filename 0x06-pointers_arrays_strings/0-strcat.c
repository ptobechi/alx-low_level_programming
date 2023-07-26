#include <string.h>

/**
 * *_strcat - appends two string while terminating the null bytes
 * @dest: the primary string
 * @src: the secondary string to be appended
 * Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
