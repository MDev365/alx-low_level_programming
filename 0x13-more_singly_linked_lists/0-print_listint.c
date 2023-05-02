#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @head: list header
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *node;

	node = h;
	if (h == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
	printf("%i\n", node->n);
	node = node->next;
	i++;
	}

	return (i);
}
