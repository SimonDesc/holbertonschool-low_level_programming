#include "hash_tables.h"
/**
 * hash_table_create - Short description, single line
 * @size: Description of parameter x
 * Return: Description of the returned value
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_array = calloc(size, sizeof(hash_table_t) * 1);

	if (my_array == NULL)
	{
		return (NULL);
	}
	my_array->size = size;

	my_array->array = malloc(sizeof(hash_table_t *) * size);
		if (my_array->array == NULL)
		{
			return (NULL);
		}
	return (my_array);
}
