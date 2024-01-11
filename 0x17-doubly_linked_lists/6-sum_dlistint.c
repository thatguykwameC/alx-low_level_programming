#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a dlistint
 * @head: the node head
 *
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
