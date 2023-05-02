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
	listint_t *node;

	node = *h;
	if (h == NULL || *h == NULL)
	{
		return(0);
	}

	while (*h != NULL)
	{
		node = (*h)->next;
		free(*h);
		*h = node;
		i++;
	}

	return (i);
}
