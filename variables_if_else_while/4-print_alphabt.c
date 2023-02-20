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
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		else
		{
			n++;
		}
		n++;
	}
	putchar ('\n');

	return (0);
}
