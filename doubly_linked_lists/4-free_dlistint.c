#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: the head
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_dlistint(head->next);
	}

	free(head);
}
