#include "main.h"
/**
 * _puts(char *str) - print a text
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
