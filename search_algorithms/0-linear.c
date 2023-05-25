#include "search_algos.h"

/**
 * linear_search- performs a linear search on an array to find
 * a specific value and returns its index or -1 if not found.
 *
 * @array: A pointer to the first element of the array to be searched.
 * @size: The size parameter in the linear_search function is of type size_t
 * and represents the number of elements in the array. It is used to determine
 * the range of the array to be searched.
 * @value: The value parameter is the integer value that we are searching for
 * in the array.
 *
 * Return: the index of the first occurrence of the value in the array if
 * it is found, or -1 if the value is not found or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	if (!array || !value)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
