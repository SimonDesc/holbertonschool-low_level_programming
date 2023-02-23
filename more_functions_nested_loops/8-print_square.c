#include "main.h"

/**
 *print_square - print a square
 *followed by a new line.
 *@size: the number of # to draw
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int height = 0;

	while (height < size)
	{
		int width = 1;/* start a 1 to not showing the first # */

		_putchar('#');

		while (width < size)
		{
			_putchar('#');
			width++;
		}

		_putchar('\n');
		height++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
