#include "main.h"
/**
* puts_half - return the second half of the string
* @str: the str
* Return: Always 0
	*/
void puts_half(char *str)
{
	int i = 0;
	int max = 0;
	int y = 0;


	while (str[i] != '\0')
	{
		i++;
	}
	max = i;

	if (max % 2 == 0)
	{
		max = max / 2;
	}
	else
	{
		max = (max + 1) / 2;
	}

	while (str[max] != '\0')
	{
		y = str[max];
		max++;
		_putchar(y);
	}

	_putchar('\n');
}
