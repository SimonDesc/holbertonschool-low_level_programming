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
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (ptr != NULL && idx != pos)
	{
		tmp = ptr;
		ptr = ptr->next;
		pos++;
	}
	if (pos == idx)
	{
		new->prev = tmp;
		new->next = ptr;
		tmp->next = new;
		if (ptr != NULL)
		{
			ptr->prev = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}

