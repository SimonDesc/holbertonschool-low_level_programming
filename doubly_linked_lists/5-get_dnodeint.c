#include "lists.h"
/**
 * get_dnodeint_at_index- Return the nth node of a dlistint_t linked list
 * @head:the head of node
 * @index:the index of the node to found
 *
 * Return:The node found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		if (i > index)
		{
			return (NULL);
		}
		i++;
		head = head->next;
	}
}
