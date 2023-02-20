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
			n++;
		}
		else
		{
			n++;
		}
	}
	putchar ('\n');

	return (0);
}
