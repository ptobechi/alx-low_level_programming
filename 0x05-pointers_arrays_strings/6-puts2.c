#include <stdio.h>

/**
 * puts2 - print every other number startign from the first line
 *
 * @str: string to print from
 *
 * Return: Return void (Success)
*/
void puts2(char *str)
{
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			printf('\n');
			break;
		}
		if (count % 2 == 0)
		{
			printf(str[count]);
			count++;
		}
	}
}
