#include "main.h"

/**
 * print_binary - converts a binary to decimal
 * @n: the binary given
 */
void print_binary(unsigned long int n)
{
	unsigned int bit_pos = 1 << 30;

	if (n == 0)
	{
		_putchar('0');
	}

	while (bit_pos > n)
	{
		bit_pos >>= 1;
	}

	while (bit_pos > 0)
	{
		if (n >= bit_pos)
		{
			_putchar('1');
			n -= bit_pos;
		}
		else
		{
			_putchar('0');
		}
		bit_pos >>= 1;
	}
}
