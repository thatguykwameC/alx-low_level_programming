#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the node head
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *new_node;
	size_t current_idx;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_idx = 0;
	current_node = *h;

	while (current_node->next != NULL && current_idx < (idx - 1))
	{
		current_node = current_node->next;
		current_idx++;
	}

	if ((++current_idx) < idx)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	current_node->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
