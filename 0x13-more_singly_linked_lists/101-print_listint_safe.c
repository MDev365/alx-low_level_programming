#include "lists.h"
/**
 * print_listint_safe -  prints all the elements of a listint_t list.
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
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
			printf("-> [%p] %i\n", (void *)node, node->n);
			exit(98);			
		}
		printf("[%p] %i\n", (void *)node, node->n);
		prev_node = node;
		node = node->next;
		i++;
	}

	return (i);
}
