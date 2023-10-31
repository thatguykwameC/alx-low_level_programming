#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up memory allocated by 2D grid
 * @grid: 2D grid
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	unsigned short i = 0;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
