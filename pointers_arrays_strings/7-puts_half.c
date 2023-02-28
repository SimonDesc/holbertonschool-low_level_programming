#include "main.h"
/**
* puts_half - return the second half of the string
* @str: the str
* Return: Always 0
	*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int max = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	
	if (max % 2 == 0)
	{
		j = max / 2;
	}
	else
	{
		j = (max - 1) / 2;
	}

	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
