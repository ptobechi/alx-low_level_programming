#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times the numbers from 0 -14
 */
void more_numbers(void)
{
int i;
int count = 0;

do
{
for (i = 0; i <= 14; i++)
{
_putchar('0' +  10 * i);
}while(count < 10)
_putchar('\n');

count++;
}
_putchar('\n');
}
