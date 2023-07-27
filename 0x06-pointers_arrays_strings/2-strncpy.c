/**
 * *_strncpy - copies a string
 * @dest: copy of the string
 * @src: string tobe copied
 * @n: total strings to copy
 * Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
