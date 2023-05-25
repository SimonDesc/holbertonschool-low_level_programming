#include "search_algos.h"

/**
 * binary_search - function performs a binary search on a given array
 * to find a specific value and returns its
 * index if found, or -1 if not found.
 *
 * @array: A pointer to the first element of the array to be searched.
 * @size: The size parameter in the binary_search function is the size
 * of the array that is being
 * searched. It is of type size_t, which is an unsigned integer type used for
 * sizes of objects.
 * @value: The value parameter is the integer value that we are searching for
 * in the array.
 * Return: the index of the element in the array that matches the given value,
 * or -1 if the value is
 * not found in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;
	int left = 0;
	int right = size - 1;

	if (!array || !value)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		i = my_floor((left + right) / 2);
		if (array[i] < value)
		{
			left = i + 1;
		}
		else if (array[i] > value)
		{
			right = i - 1;
		}
		else
			return (i);
	}
	return (-1);
}

/**
 * my_floor- returns the integer part of a given double number.
 * @number: The input number that we want to find the floor of.
 * Return: The function `my_floor` returns the integer part of the
 * input `number` as a double.
 */
double my_floor(double number)
{
	int integerPart = (int)number;

	return ((double)integerPart);
}

/**
 * print_array- prints out a given range of elements in an integer array.
 * @array: a pointer to the first element of the array to be printed
 * @start: The starting index of the array to be printed.
 * @end: The "end" parameter is an integer that represents the index of the
 * last element in the array that needs to be printed.
 */
void print_array(int *array, int start, int end)
{
	int i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		i++;
	}
	printf("\n");
}
