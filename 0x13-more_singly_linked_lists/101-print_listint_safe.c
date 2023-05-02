#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *node, *prev_node = NULL;

	node = h;
	if (h == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		if (prev_node > node)
		{
			printf("-> [%p] %i\n", node, node->n);
			exit(98);			
		}
		printf("[%p] %i\n", node, node->n);
		prev_node = node;
		node = node->next;
		i++;
	}

	return (i);
}
