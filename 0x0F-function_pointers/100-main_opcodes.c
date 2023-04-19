#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, k;
	char *array;

	if (!(argc == 2))
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", array[k]);
			break;
		}
		printf("%02hhx ", array[k]);
	}
	return (0);
}
