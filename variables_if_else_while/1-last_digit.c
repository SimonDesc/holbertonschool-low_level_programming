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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d  greater than 5\n", n , lastDigit);
	}

	else if (lastDigit = 0)
	{
		printf("Last digit of %d and is %d\n)", n , lastDigit);
	}

	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n", n , lastDigit);
	}
	return (0);
}
