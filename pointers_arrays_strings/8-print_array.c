#include "main.h"
#include <stdio.h>
/**
 * print_array - return a array of integers
 * @a : the array
 * @n : the integer to stop
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (a[i] < a[n])
		{
			printf("%d", a[i]);
			i++;

			if (a[i] != a[n])
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
