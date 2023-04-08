#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int is_digit(char c)
{
	{
		return (c >= '0' && c <= '9');
	}
	
	int main(int argc, char *argv[])
	{
		int sum = 0;

		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		for (int i = 1; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (!is_digit(argv[i][j]))
				{
					printf("Error\n");
					return 1;
				}
				j++;

			}
			int num = atoi(argv[i]);
			if (num <= 0)
			{
				continue;
			}
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
