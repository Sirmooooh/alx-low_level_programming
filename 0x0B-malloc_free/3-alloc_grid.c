#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int q, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);
	q = 0;
	while (q < height)
	{
		mee[q] = malloc(sizeof(int) * width);

		if (mee[q] == NULL)
		{
			r = q - 1;
			while (r >= 0)
			{
				free(mee[r]);
				r--;
			}
			free(mee);
			return (NULL);
		}
		q++;
	}
	q = 0;
	while (q < height)
	{
		r = 0;
		while (r < width)
		{
			mee[q][r] = 0;
			r++;
		}
		q++;
	}
	return (mee);
}
