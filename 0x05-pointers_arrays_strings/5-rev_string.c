#include <string.h>

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
 *
 * Return: Always void (Success)
*/
void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len -1;

	while(start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
