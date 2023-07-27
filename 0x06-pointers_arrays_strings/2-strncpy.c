/**
 * *_strncpy - copies a string
 * @dest: copy of the string
 * @src: string tobe copied
 * @n:
 * Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (i < n)
		dest[i + 1] = '\0';

	return (dest);
}