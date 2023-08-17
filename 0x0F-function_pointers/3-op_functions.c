#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - performs a add operation
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perfoms sub operation
 * @a: integer a
 * @b: int b
 * Return: Always 0 (Succes)
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication operation
 * @a: int a
 * @b: int b
 * Return: Always 0 (Succeess)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs div operation
 * @b: innt b
 * @a: innt a
 * Return: Always 0 (Success)
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs mod operation
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
