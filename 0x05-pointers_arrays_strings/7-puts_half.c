#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to print half
 * Return: Always void (Success)
*/
void puts_half(char *str)
{
	int count;
	int len = strlen(str);

	for (count = 0; count < len / 2; count++)
	{
		printf("%c", str[count]);
	}
}
