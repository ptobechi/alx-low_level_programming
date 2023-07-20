#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: int n distance for straing line
 */
void print_line(int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('\n');
	}else{
		do{
			_putchar('-');
		}while(count < n)
	}
