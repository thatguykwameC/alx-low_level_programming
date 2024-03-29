#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: the head node
 *
 * Return: the number of nodes in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
