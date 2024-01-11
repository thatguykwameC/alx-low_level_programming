#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @head: the head node
 *
 * Return: the number of nodes in a list
 */

size_t dlistint_len(const dlistint_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
		return (node_count);

	while (head != NULL)
	{
		node_count++;
		head = head->next;
	}

	return (node_count);
}
