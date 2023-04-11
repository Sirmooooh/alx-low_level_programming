#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
	int l, k, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (l = 1; l < argc; l++)
		{
			ptr = argv[l];
			length = strlen(ptr);

			for (k = 0; k < length; k++)
			{
				if (isdigit(*(ptr + k)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[l]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
