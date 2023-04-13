#include "hash_tables.h"
/**
 * hash_table_delete- delete a hash table
 *
 * @ht: the hash table
 *
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node;
	hash_node_t *next_node;
	unsigned long int size_hash;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return;
	}

	current_node = ht->array[0];
	size_hash = ht->size;

	for (; i < size_hash; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			next_node = current_node->next;

			free(current_node->value);
			free(current_node->key);
			free(current_node);

			current_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
