#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string.
 * @s: a string
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
