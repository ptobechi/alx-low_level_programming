/**
 * _strspn - returns the number of bytes that consist of accept
 * @s: string
 * @accept: char to check for in the pointeer
 * Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
			count = count + 1;
	}
	return (count);
}
