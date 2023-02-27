#include "main.h"
/**
 * rev_string - print a string in reverse, then delete the value
 * @s: a pointer str
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i + 1)
	{
		if (s[i] == '\0')
		{
			i = i - 1;
		}
		else
		{
			_putchar(s[i]);
			i = i - 1;
		}
	}
	*s = '\0';
	if (*s != 0)
	{
		_putchar('\n');
	}
}
