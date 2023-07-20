#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the screen
 * @n: int n total diagonal to print on the screen
 */
void print_diagonal(int n)
{
	int count = 0;

	if(n == 0)
	{
		_putchar("\n");
	}
	else
	{
		do{
			_putchar(""\"\n");
		}while(count < n)
	}
}
