#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	result = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && cents >= 0; k++)
	{
		while (cents >= coins[k])
		{
			result++;
			cents -= coins[k];
		}
	}
	printf("%d\n", result);
	return (0);
}
