#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * my_atoi - converts a string to an integer
 * @str: the string to convert
 *
 * Return: the converted integer
 */
int my_atoi(char *str)
{
	int res = 0;

	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}

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

	cents = my_atoi(argv[1]);
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
