#include "lists.h"

/**
 * list_len - returns the number of elements in
 * a linked list, list_t
 * @h: the head node
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t node_counter = 0;
	
	/* Gets number of element in list_t */
	while (h)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
