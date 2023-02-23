#include "main.h"

/**
 *print_numbers - Write a function that prints the numbers, from 0 to
 *followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
