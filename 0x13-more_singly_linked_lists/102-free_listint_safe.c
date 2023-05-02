#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list..
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *node, *node_loop;

	node = *h;
	if (h == NULL || *h == NULL)
	{
		return(0);
	}

	node_loop = find_listint_loop(*h);
	while (*h != NULL || *h != node_loop)
	{
		node = (*h)->next;
		free(*h);
		*h = node;
		i++;
	}

	return (i);
}
