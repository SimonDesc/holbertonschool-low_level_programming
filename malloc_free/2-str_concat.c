#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: the string 1
 * @s2: the string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i = 0;
	int j = 0;
	int size1 = 0;
	int size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[i] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[i] != '\0'; size2++)
	{
	}
	ar = malloc((size1 + size2) * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = size1; i < (size1 + size2); i++, j++)
	{
		ar[i] = s2[j];
	}

	return (ar);

}
