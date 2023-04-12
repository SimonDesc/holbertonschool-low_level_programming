#include "hash_tables.h"

/**
 * hash_table_set - Ajoute ou met à jour un élément dans la table de hachage
 * @ht: pointeur vers la table de hachage
 * @key: la clé
 * @value: la valeur associée à la clé
 * Return: 1 si succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned char *cle;
	hash_node_t *newnode;
	hash_node_t *current_node;
	unsigned long int index;

	/* Vérification des arguments */
	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	cle = (unsigned char *)key;
	index = key_index(cle, ht->size);

	/* Recherche de la clé existante */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* Clé trouvée, mise à jour de la valeur */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Création du nouveau nœud */
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	/* Ajout du nouveau nœud en tête de liste */
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}

