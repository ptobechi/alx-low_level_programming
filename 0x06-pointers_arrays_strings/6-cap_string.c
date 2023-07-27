/**
 * cap_string - capitalise string
 * @str: string to capitalize
 * Return: Always 0 (Success)
*/
char *cap_string(char *str)
{
	int i, j, found;
	int word_seperators = {32, 9, 44, 10, 59, 46, 33, 63,34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == word_seperators)
			{
				found = 1;
				break;
			}
		}
		if (found = 1 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++
		found = 0;
	}
}
