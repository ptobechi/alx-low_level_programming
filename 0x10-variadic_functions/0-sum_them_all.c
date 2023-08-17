#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all number
 * @n: list of numbers to sum
 * Return: Always0 (Succes)
*/
int sum_them_all(const unsigned int n, ...)
{
	var_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return(0);

	var_start(list, n);

	for (i = 0; i < n; i++)
		sum += var_arg(list, int);


	var_end(list);
	return (sum);
}
