#include "header.h"

/**
 * print_alphabet - print alphabet in loweercase followed by a nnew linne
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
