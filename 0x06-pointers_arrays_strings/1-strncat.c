/**
 * *_strncat - function appends two strings
 * @dest: th first variable
 * @src: the string to add to dest string
 * @n: int n use most n bytes of src
 * Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i, x;

	for (x = 0; dest[x] != '\0'; x++)
		dest_len = dest_len +1;

	for (i = 0; i < n; i++)
	{

		dest[dest_len + i] = src[i];
	}
	return (dest);
}
