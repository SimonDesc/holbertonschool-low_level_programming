#include "main.h"
/**
 * cap_string - take a pointer string and return the first letter in uppercase
 * @str: the pointer string
 * Return: the string in the pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i - 1] < 48 || str[i - 1] > 122) && (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
