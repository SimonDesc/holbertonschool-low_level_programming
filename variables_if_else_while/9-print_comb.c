#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Return the value of the a random number
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
		if (a == 57)
		{
			putchar('\n');
		}
		a++;
	}
	return (0);
}
