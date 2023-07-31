/**
 * _memcpy - copy n bytes of memory area to dest
 * @dest: destination for copied memory area
 * @src: string memory area to copy from
 * @n: n bytes to be copied
 * Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
