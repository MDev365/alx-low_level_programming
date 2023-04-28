#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *next_l = h;

	if (h == NULL)
	{
		return (0);
	}

	while(next_l != NULL)
	{
	printf("[%i] %s\n", next_l->len, next_l->str);
	next_l = next_l->next;
	i++;
	}

	return (i);
}
