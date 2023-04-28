#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *next_l;

	if (h == NULL)
	{
		return (0);
	}

	*next_l = *h;
	while(next_l != NULL)
	{
	printf("[%i] %s\n", h->len, h->s);
	*next_l = next_l->next;
	i++;
	}

	printf("-> %li elements", i);
	return (i);
}
