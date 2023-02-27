#include "main.h"
/**
 * _puts - print a text
 * @str: a pointer str
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
