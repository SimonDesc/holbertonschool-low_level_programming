#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - Function that searches for an integer
 *
 * @array: the array
 * @size: size of the array
 * @cmp: the pointer of function
 *
 * Return: -1 is no elements matches or size <= 0
 * otherwise the index of i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
	}
