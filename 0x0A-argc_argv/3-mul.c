#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (1);
}
