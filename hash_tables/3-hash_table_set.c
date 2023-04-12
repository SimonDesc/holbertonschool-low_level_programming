#include "hash_tables.h"
/**
 * hash_table_set - Short description, single line
 * @ht: Description of parameter x
 * @key: the size
 * @value: the value
 * Return: Description of the returned value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned char *cle;
	hash_node_t *newnode;
	unsigned long int index;

	cle = (unsigned char *)key;
	index = key_index(cle, ht->size);

	if (ht == NULL)
	{
		return (0);
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
		return (1);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
