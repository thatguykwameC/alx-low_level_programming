#include "lists.h"

/**
 * add_dnodeint_end - adds a head at the beginning of a dlistint_t list
 * @head: a pointer to the head node
 * @n: the number to insert
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		(*head)->prev = NULL;
	}

	else
	{
		current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;

		new_node->prev = current_node;
		current_node->next = new_node;
	}

	return (new_node);
}
