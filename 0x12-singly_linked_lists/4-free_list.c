#include "lists.h"

/**
 * free_list - frees list, list_t
 *@head: the head node
 */

void free_list(list_t *head)
{
	list_t *holder;

	/* Iterate through the list */
	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
