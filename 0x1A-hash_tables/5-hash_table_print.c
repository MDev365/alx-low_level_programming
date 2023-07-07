#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, comma = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}	
	}
	printf("}\n");
}
