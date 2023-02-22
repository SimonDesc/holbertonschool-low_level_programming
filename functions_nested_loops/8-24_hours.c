#include "main.h"

/**
 *jack_bauer - print 00:00 to 24:59
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h=4848;
	int m=4848;
	while (h <= 5051)
	{    
		while (m < 5358)
		{
			_putchar(h/100);
			_putchar(h%100);
			_putchar(':');
			_putchar(m/100);
			_putchar(m%100);
			_putchar('\n');
			m++;
			if (m%100 == 58)
			{
				m = m + 90 ;
			}
		}

		h++;
		if (h%100 == 58)
		{
			h = h + 90 ;
		}
		m = 4848;

	}
}
