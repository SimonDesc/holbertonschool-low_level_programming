#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *followed by a new line.
 *@n: number of line to draw
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int max;

	if (n >= 0)
	{
		for (max = 0; max < n; max++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
