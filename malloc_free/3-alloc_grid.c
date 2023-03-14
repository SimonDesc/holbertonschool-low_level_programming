#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensionnal array of int
 *
 * @width: the width
 * @height: the height
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int)*width);
		if (grid == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}		
	}
	return (grid);
}
