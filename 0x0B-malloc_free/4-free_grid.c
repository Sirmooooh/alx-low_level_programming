#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 **/

void free_grid(int **grid, int height)
{
	int k;

	k = 0;
	while (k < height)
	{
		free(grid[k]);
		k++;
	}
	free(grid);
}
