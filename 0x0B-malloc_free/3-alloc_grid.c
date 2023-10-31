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

	grid_2D = malloc(height * sizeof(int *));

	if (grid_2D == NULL)
	{
		free(grid_2D);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_2D[i] = malloc(width * sizeof(int));
		if (grid_2D[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(grid_2D);
			free(grid_2D[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_2D[i][j] = 0;

	return (grid_2D);
}
