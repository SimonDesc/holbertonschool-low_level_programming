#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Put the caracter in uppercase
 * @s: the string
 * Return: the char in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
