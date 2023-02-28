#include "main.h"
/**
 * puts2 - return 1 on 2 from a string
 * @str: the str
 * Return: Always 2
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
}
