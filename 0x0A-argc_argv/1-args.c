#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
