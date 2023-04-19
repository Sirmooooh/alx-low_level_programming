#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
