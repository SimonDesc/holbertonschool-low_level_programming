#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the head
 * @n: the int to add
 *
 * Return: The adress of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Déclaration de la variable pour le nouveau nœud */
	dlistint_t *new_node;

	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));

	/* Vérifier si l'allocation de mémoire a réussi */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialiser les attributs du nouveau nœud avec les valeurs données */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Si la liste n'est pas vide, mettre à jour le pointeur 'prev' */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Mettre à jour la tête de la liste pour pointer vers le nouveau nœud */
	*head = new_node;

	/* Retourner un pointeur vers le nouveau nœud ajouté */
	return (*head);
}
