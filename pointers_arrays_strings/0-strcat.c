#include "main.h"
#include <stdio.h>
/**
 * *_strcat - This function appends the src string to the dest string
 * @dest: the destination
 * @src: the source
 * Return: Always 0
 */
void *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
