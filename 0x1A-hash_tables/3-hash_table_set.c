#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: value is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *node;
	unsigned long int idx, i;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL ||
		key[0] == '\0' || ht->size == 0 || ht->arrya == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	node = ht->array[idx];
	for (i = idx + 1 ; node != NULL ; i++)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = ht->array[i];
	}
	new_node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(new_value);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
