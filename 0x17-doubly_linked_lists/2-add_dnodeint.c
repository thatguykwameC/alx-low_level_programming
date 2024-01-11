#include "lists.h"

/**
 * add_dnodeint - adds a head node at the beginning of a dlistint_t list
 * @head: a pointer to the head node
 * @n: the number to insert
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		(*head)->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		if ((*head)->next != NULL)
			(*head)->prev = new_node;

		*head = new_node;
	}

	return (new_node);
}
