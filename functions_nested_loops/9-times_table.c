#include "main.h"

/**
 *times_table - print the multiplication table
 *
 * Return: 0
 */
void times_table(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int product = i * j;
			int unite = product % 10;
			int dizaine = product / 10;

			if (dizaine == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(unite + '0');
			}
			else if (dizaine != 0)
			{
				_putchar(dizaine + '0');
				_putchar(unite + '0');
			}
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
