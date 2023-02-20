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

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar ('\n');

	return (0);
}
