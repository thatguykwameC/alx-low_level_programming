#include "lists.h"

/**
 * free_dlistint - frees memory allocated for a dlistint_t list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		/* Frees up space for current node */
		holder = head;
		free(holder);
		holder = NULL;

		head = head->next;
	}
}
