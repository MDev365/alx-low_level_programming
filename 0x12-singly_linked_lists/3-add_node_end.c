#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: list head
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *next_l = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (next_l != NULL)
	{
		if (next_l->next == NULL)
			break;
		else
			next_l = next_l->next;
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	next_l->next = new;

	return (new);
}
