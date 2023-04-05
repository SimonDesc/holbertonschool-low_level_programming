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
	/* Initialise le pointeur last_node pointer le premier élément de liste */
	dlistint_t *last_node = *head;
	/* Déclare le nouveau noeud à ajouter */
	dlistint_t *new_node;
	/* Alloue de la mémoire pour le nouveau noeud */
	new_node = malloc(sizeof(dlistint_t));
	/* Si l'allocation de mémoire échoue, retourne NULL */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Initialise les membres de la structure new_node */
	new_node->n = n;
	new_node->next = NULL;
	/* Si la liste est vide, le nouveau noeud devient premier élément liste */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/* Parcourt la liste jusqu'à atteindre le dernier noeud */
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* Met à jour pointeur next dernier noeud pour pointer vers nouveau noeud */
	last_node->next = new_node;
	/* Retourne le pointeur vers la tête de la liste */
	return (*head);
}
