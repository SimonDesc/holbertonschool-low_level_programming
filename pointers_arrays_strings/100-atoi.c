#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer.o
 * @s: the string to converty
 * Return: a int
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (res > (2147483647 - digit) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483647);
			}
		}
		res = res * 10 + digit;
		i++;
	}

	return (res * sign);
}
