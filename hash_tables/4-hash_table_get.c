#include "hash_tables.h"
/**
 * hash_table_get- retrieves a valeu associated with a key
 *
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned char *cle;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	cle = (unsigned char *) key;
	index = key_index(cle, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
