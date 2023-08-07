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
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int coinCount = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < numCoins; i++)
	{
		coinCount += cents / coins[i];

		cents %= coins[i];
	}
	printf("%d\n", coinCount);
	return (0);
}
