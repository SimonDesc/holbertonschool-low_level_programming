#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a malloc ++
 *
 * @nmemb: the array of int
 * @size: the size
 * Return: return the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size) ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
