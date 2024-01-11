#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a dlistint_t
 * @head: a pointer to the head node
 * @index: index of the node to delete
 *
 * Return: 1 on success, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t current_index = 0;
	dlistint_t *holder;

	if (*head == NULL || head == NULL)
		return (-1);

	holder = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (holder != NULL && current_index != index)
		{
			holder = holder->next;
			current_index++;
		}

		if (current_index < index)
			return (-1);

		if (holder->prev != NULL)
			holder->prev->next = holder->next;

		if (holder->next != NULL)
			holder->next->prev = holder->prev;
	}

	free(holder);
	holder = NULL;

	return (-1);
}
