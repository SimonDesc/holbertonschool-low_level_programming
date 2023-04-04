/**
 * print_dlistint- prints all the elements of a dlistint_t list
 * @h: the list
 *
 * Return: The number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
