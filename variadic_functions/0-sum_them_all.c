#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: int parameters
 *
 * Return: 0 if n == 0 or the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	unsigned int result = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
