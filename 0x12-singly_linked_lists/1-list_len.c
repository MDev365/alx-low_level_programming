#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list header
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *next_l = h;

	if (h == NULL)
	{
		return (0);
	}

	while (next_l != NULL)
	{
	next_l = next_l->next;
	i++;
	}

	return (i);
}
