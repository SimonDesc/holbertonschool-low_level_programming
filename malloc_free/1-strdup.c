#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as parameter
 *
 * @str: the string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int size = 0;


	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	ar = malloc(size * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}

	return (ar);

}
