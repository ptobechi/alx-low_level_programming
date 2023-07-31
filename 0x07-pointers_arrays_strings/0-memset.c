/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: a byte constant
 * @n: the first n bytes of the memory pointed by s
 * Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
