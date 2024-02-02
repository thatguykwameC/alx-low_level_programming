#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to retrieve the data from
 * @key: the key
 *
 * Return: the value associated with the key if found, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht != NULL && ht->array != NULL && key != NULL)
	{
		unsigned long int idx;
		hash_node_t *current_node;

		idx = key_index((const unsigned char *)key, ht->size);
		current_node = ht->array[idx];

		/* Traverse the linked list at the index */
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) == 0)
				return (current_node->value);

			current_node = current_node->next;
		}
		return (NULL);
	}
	else
		return (NULL);
}
