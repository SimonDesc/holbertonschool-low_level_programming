#include "main.h"
/**
 * cap_string - take a pointer string and return the first letter in uppercase
 * @str: th pointer string
 * Return: the string in the pointer
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	while (str[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == str[i - 1] && str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
