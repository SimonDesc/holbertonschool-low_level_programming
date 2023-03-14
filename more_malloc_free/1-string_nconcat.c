#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of caractere to take from s2
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++, size1++)
	{
	}
	for (i = 0; s2[i]; i++, size2++)
	{
	}
	if (n >= size2)
	{
		n = size2;
	}

	p = malloc(sizeof(char) * (size1 + n) + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0, i = size1; j < n; i++, j++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
