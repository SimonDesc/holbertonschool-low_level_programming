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
	int n = 'A';
	int i = 'a';

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i++;
	}
	while (n >= 65 && n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');

	return (0);
}
