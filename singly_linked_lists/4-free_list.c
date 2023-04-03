#include "lists.h"
/**
* free_list - free the list
* @head: the first node
*
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
