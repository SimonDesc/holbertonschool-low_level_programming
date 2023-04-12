#include "hash_tables.h"
/**
 * key_index- function that give you the index of a key
 * @key:The key
 * @size:Size of the array of the hash table
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = (hash_djb2(key) % size);

	return (index);
}
