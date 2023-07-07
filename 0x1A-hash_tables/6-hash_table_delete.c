#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		node = ht->array[i];
		while (node)
		{
			next_node = node->next;
			free(node->key);
			free(node->valude);
			free(node);
			node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
