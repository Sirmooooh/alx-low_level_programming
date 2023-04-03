#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum5, sum6, z;
	char buffer[20];

	sum5 = 0;
	sum6 = 0;

	for (z = 0; z < size; z++)
	{
		sum5 = sum5 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sum6 += a[z * size + (size - z - 1)];
	}

	sprintf(buffer, "%d, %d\n", sum5, sum6);
	write(STDOUT_FILENO, buffer, strlen(buffer));
}
