#include "lists.h"
/**
 * delete_dnodeint_at_index - Short description, single line
 * @head: the struct
 * @index: index
 (*
 * Return: The total of the nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;

	dlistint_t *tmp = *head;
	dlistint_t *tmp2 = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if ((*head)->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && pos != index)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		pos++;
	}

	if (tmp == NULL)
	{
		return (-1);
	}

	tmp2->next = tmp->next;
	tmp->next->prev = tmp2;
	free(tmp);

	return (1);
}
