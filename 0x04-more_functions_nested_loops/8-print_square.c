#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: int size of the squaree
 */
void print_square(int size)
{
int count;

if (size == 0)
{
_putchar('\n');
}
else
{
for (count = 0; count <= size; count++)
{
_putchar('#');
_putchar('\n');
}
}
}
