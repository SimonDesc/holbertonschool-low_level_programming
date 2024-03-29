#include "lists.h"
/**
 * sum_dlistint- sum all the data(n) of a dlistint_t linked list
 * @head:the head of node
 *
 * Return:The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
