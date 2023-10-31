#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2D array of integers
 * and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid_2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_2D = malloc(sizeof(*grid_2D) * height);

	if (grid_2D == NULL)
		return (NULL);

	for (i = 0; i <= (height - 1); i++)
	{
		grid_2D[i] = malloc(sizeof(int) * width);

		if (grid_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid_2D[j]);
			free(grid_2D);
			return (NULL);
		}

		for (j = 0; j <= (width - 1); j++)
			grid_2D[i][j] = 0;
	}

	return (grid_2D);
}
