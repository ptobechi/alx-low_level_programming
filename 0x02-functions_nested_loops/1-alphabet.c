#include "main.h"

/**
 * print_alphabet - print alphabet in loweercase followed by a nnew linne
 *
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
