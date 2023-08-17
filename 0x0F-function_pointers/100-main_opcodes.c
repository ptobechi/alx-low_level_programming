#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print opcodes
 * @addr: address of the memory
 * @num_bytes: bytes
 * Return: Void
*/
void print_opcodes(void *addr, size_t num_bytes)
{
	unsigned char *ptr = (unsigned char *)addr;
	size_t i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);

		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry Point
 * @argc: argumennt count
 * @argv: arg val
 * Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
	int nb = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (nb <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((void *)main, nb);
	return (0);
}

