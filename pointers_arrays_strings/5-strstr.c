#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr - search a needle in a haystack
 * @haystack: the string
 * @needle: the needle
 * Return: h or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			n++;
			haystack++;
		}

		if (*n == '\0')
		{
			return (h);
		}

		haystack = h + 1;
	}
	return (NULL);
}
