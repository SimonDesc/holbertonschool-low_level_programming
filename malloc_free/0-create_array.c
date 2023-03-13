#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size
 * @c: the array of chars
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	*ar = c;

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (0);
	}


	return (ar);

}
