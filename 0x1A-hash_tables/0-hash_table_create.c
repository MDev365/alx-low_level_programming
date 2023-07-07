#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table,
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	htable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));

	for (i = 0 ; i < size ; i++)
	{
		htable->array[i] = NULL;
	}

	return (htable);
}
