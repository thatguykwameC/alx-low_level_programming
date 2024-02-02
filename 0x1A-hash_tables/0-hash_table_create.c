#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate memory for the hash table structure */
	hash_table_t *hash_tab;

	hash_tab = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_tab != NULL)
	{
		unsigned short j;

		hash_tab->size = size;
		hash_tab->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

		if (hash_tab->array == NULL)
		{
			free(hash_tab);
			return (NULL);
		}

		for (j = 0; j < size; j++)
			hash_tab->array[j] = NULL;

		return (hash_tab);
	}
	return (NULL);
}
