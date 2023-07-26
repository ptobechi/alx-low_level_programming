/**
 * reverse_array - reverse an array of int
 * @a: an array of integers
 * @n: the number of element to swap
 * Return: Always void (Success)
*/
void reverse_array(int *a, int n)
{
	int start;
	int end;

	for (start = 0, end = n  - 1; start < end; start++, end--)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
	}
}
