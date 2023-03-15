#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of int
 *
 * @min : the min value
 * @max : the max value
 * Return: return the array
 */
int *array_range(int min, int max)
{
	int *tableau = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	tableau = malloc(sizeof(int) * (max - min + 1));
	if (tableau == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		tableau[i] = min;
	}
	return (tableau);
}
