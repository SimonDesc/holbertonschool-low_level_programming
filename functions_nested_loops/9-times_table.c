#include "main.h"

/**
 *times_table - print the multiplication table
 *
 * Return: 0
 */
void times_table(void)
{
	int i = 1;
	
	while (i < 10)
	{
		int j = 1;

		while (j < 10)
		{
			int product = i * j;
			int ones_digit = product % 10;
			int tens_digit = product / 10;

			if (tens_digit == 0)
			{
				_putchar(' ');
				ones_digit = product % 10;
			}
			_putchar(tens_digit + '0');
			_putchar(ones_digit + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;

		}
		i++;
		_putchar('\n');
	}
}
