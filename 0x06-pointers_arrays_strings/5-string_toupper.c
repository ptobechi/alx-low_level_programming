/**
 * string_toupper - converts string to upper
 * @str: strings to convrt
 * Return: Always 0 (Success)
*/
char *string_toupper(char *str)
{
	char *m_str = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (m_str);
}
