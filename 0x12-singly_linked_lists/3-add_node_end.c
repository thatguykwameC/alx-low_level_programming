#include "lists.h"

/**
 * add_node_end - adds new node to the end
 * of list, list_t
 * @head: pointer to the head node
 * @str: inputted string
 *
 * Return: the address of a new element
 * else NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *holder = *head;
	int length = 0;

	/* Handles calculation of input string length */
	while (str[length])
		length++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	/* Adds new_node to the end of list_t */
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	/* Checks if list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Iterates over the list, to find the last node */
	while (holder->next)
		holder = holder->next;

	holder->next = new_node;

	return (new_node);
}
