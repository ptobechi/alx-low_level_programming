/**
 * *_strncat - function appends two strings
 * @dest: th first variable
 * @src: the string to add to dest string
 * @n: int n use most n bytes of src
 * Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		dest_len = dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
