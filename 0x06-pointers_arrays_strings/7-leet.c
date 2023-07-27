/**
 * leet - Encodes a string to 1337
 * @str: string to be encoded
 * Return: Always 0 (Success)
*/
char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encode[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int x, y;

	for (x = 0; str[x]; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == letters[y])
			{
				str[x] = encode[y];
				break;
			}
		}
	}
	return (str);
}
