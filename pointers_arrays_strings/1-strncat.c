#include "main.h"
#include <stdio.h>
/**
 * *_strncat - This function appends the src string to the dest string
 * @dest: the destination
 * @src: the source
 * Return: Always 0
 */
void *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
