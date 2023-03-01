#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies the string pointed to by src,
 *  including the terminating null byte ('\0'), to the buffer pointed to by dest.
 * @dest: the destination
 * @src: the source
 * @n : the number of caractere to take
 * Return: Always 0
 */
void *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int nb_src = 0;

	while (src[nb_src] != '\0')
	{
		nb_src++;
	}

	if (nb_src <= n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	
	return (dest);
}
