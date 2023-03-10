#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints all natural numbers from n to 98
 *@n: first int
 *
 * Return: all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else if (n == 98)
			{
				putchar('\n');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else if (n == 98)
			{
				putchar('\n');
			}
			n--;
		}
	}
}
