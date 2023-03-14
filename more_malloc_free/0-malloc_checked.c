#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: the allocated int
 * Return: a pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
