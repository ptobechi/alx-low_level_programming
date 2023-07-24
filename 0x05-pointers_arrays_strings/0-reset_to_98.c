#include "main.h"
#include <stdio.h>

/** main - Entry Point 
 * reset_to_98 - update value on pointer
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int *p;

	n = 402;
	printf("n=%d\n", n);

	reset_to_98(&n);
	printf("n=%d", n);
	return (0);
}
