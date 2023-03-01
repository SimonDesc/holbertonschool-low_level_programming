#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies the string pointed to by src,
 *  including the terminating null byte ('\0').
 * @dest: the destination
 * @src: the source
 * @n : the number of caractere to take
 * Return: Always 0
 */
void *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
