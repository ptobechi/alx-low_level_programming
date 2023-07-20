#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: int size of the triangle
 */
void print_triangle(int size)
{
	int count = 0;
	int i = 0;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		do{
			_putchar("#");
		}while(count < size)
		_putchar("\n");
	}
}
