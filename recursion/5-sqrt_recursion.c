#include "main.h"

/**
 * _sqrt_recursion_helper - Helper function
 * @n: The number to calculate the square root of
 * @guess: The initial guess for the square root of n
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion_helper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	else if (square > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: The number to calculate the square root of
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, 0));
}
