#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hashtable empty
 * @size: size of the array in the hashtable
 * Return: new hashtable or null if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;

	table->array =  malloc(sizeof(hash_node_t));


	return (table);

}
