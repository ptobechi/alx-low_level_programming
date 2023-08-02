/**
 * factorial - returns factoria of a given number
 * @n: given number
 * Return: Always 0 (Success)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
