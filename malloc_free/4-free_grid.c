#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensionnal grid
 *
 * @grid: the grid
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i ; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
