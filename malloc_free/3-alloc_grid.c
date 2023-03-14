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
	int **grid; /* Déclare un pointeur vers un tableau à deux dimensions */
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Boucle pour allouer de la mémoire pour chaque ligne du tableau */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int)); /* Alloue de la mémoire pour chaque colonne de la ligne i */ 
		if (grid[i] == NULL)
		{
			/* Libère la mémoire allouée précédemment pour les lignes précédentes en cas d'échec */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialise chaque élément du tableau à 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
