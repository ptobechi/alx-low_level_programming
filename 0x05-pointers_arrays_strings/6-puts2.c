#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other number startign from the first line
 *
 * @str: string to print from
 *
 * Return: Return void (Success)
*/
void puts2(char *str)
{
	int count;
	int len = strlen(str);

	for (count = 0; count < len; count++)
	{
		if (count % 2 == 0)
		{
			printf("%c", str[count]);
		}
	}
	printf("\n");	
}
