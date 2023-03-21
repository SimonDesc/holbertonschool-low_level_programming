#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - iterate a array
 *
 *
 *@array: the array
 *@size: the size
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL)
	{
		return;
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}
	return (-1);
}
