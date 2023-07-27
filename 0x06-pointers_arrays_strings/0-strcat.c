/**
 * *_strcat - appends two string while terminating the null bytes
 * @dest: the primary string
 * @src: the secondary string to be appended
 * Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		dest_len = dest_len + 1;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
