#include "lists.h"
/**
 * insert_dnodeint_at_index - Short description, single line
 * @h: the struct
 * @idx: index
 * @n: the date given
 (*
 * Return: The total of the nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;

	dlistint_t *ptr = *h;
	dlistint_t *tmp = NULL;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	while (ptr != NULL && idx != pos)
	{
		tmp = ptr;
		ptr = ptr->next;
		pos++;
	}
	new->prev = tmp;
	new->next = ptr;

	if (tmp != NULL)
	{
		tmp->next = new;
	}
	if (ptr != NULL)
	{
		ptr->prev = new;
	}
	if (pos == 0)
	{
		*h = new;
	}
	return (new);
}
