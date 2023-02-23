#include "main.h"

/**
 *_isupper - check if c is upper or lower
 * @c: the parameter to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
