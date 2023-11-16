#include "lists.h"

/**
 * add_node - adds new node to the beginning
 * of list, list_t
 * @head: pointer to the head node
 * @str: inputted string
 *
 * Return: the address of a new element
 * else NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	/* Handles calculation of input string length */
	while (str[length])
		length++;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	/* Add new_node to the list */
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	*head = new_node;

	return (*head);
}
