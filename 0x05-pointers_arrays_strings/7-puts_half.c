#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string to print half
 * Return: Always void (Success)
*/
void puts_half(char *str)
{
	int len = strlen(str);
	int count = (len - 1) / 2;

	if (len % 2 == 0)
	{
		printf("%s\n", str + len / 2);
	}
	else
	{
		printf("%s\n", str + count);
	}
}
