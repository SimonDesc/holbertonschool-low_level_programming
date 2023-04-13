#include "hash_tables.h"

/**
 * hash_table_print- function that prints a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int size_hash;
	unsigned long int i = 0;
	int first = 0;

	if (ht == NULL)
	{
		return;
	}

	current_node = ht->array[0];
	size_hash = ht->size;

	putchar('{');
	for (; i < size_hash; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			if (first == 0)
				first = 1;
			else
				printf(", ");

			printf("'%s': ", current_node->key);
			printf("'%s'", current_node->value);
			current_node = current_node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
