#include "main.h"

/**
 * _pow_recursion - Short description, single line
 * @x: Description of parameter x
 * @y: Description of parameter y
 * Return: Description of the returned value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

/**
 * binary_to_uint - converts a binary to decimal
 * @b: the binary given
 * Return: total if ok, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int size = 0;
	unsigned int total = 0;

	if (b == NULL)
	{
		return (0);
	}

	size = strlen(b);

	for (; i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
			total += (b[i] - '0') * _pow_recursion(2, size - i - 1);
	}
	return (total);
}
