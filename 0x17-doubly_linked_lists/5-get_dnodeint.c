#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlisint
 * @head: the head node
 * @index: the index of the nth mode to return
 *
 * Return: the address of the nth node if found , else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t index_at = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && index_at < index)
	{
		head = head->next;
		index_at++;
	}

	return (head);
}
