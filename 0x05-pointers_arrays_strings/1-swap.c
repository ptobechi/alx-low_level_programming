/**
 * swap_int - swap the values of two integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Always void (Success)
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
