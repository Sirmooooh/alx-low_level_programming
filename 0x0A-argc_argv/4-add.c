#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (error)
 */

int main(int argc, char *argv[])
{
	int sum = 0, num;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
