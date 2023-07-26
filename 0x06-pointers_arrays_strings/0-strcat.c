/**
 * *_strcat - appends two string while terminating the null bytes
 * @dest: the primary string
 * @src: the secondary string to be appended
 * Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		dest_len = dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
