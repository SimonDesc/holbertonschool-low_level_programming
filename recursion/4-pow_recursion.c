#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the number
 * @y: the factorial
 * Return: the factorial of a given number
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
		return (x * (x * y - 1);
	}
}
