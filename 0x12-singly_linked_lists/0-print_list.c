#include "lists.h"

/**
 * print_list - prints all elements of list, list_t
 * @h: the head node
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		/* Handles cases where string is NULL */
		if (h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_counter++;
	}

	return (node_counter);
}
