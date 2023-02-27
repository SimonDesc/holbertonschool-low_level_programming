#include "main.h"
/**
 * print_rev - print a text in reverse
 * @s: a pointer str
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i+1)
	{
		_putchar(s[i]);
		i = i -1;
	}
	_putchar('\n');
}
