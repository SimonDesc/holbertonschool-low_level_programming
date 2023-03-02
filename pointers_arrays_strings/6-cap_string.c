#include "main.h"
/**
 * cap_string - take a pointer string and return the first letter in uppercase
 * @str: the pointer string
 * Return: the string in the pointer
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[] = {
		',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', 32
	};

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if ((sep[j] == str[i - 1]) && (str[i] > 96 && str[i] < 123))
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - ('a' - 'A');
	}
	return (str);
}
