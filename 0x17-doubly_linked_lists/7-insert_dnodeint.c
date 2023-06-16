#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list head
 * @idx: returns the nth node of a dlistint_t linked list.
 * @n: node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, found = 0;
	dlistint_t *new, *head;

	if (h == NULL)
		return (NULL);
	head = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (head != NULL)
	{
		if (i == idx)
		{
			found = 1;
			break;
		}
		head = head->next;
		i++;
	}

	if (found)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = head;
		new->prev = head->prev;
		(head->prev)->next = new;
		head->prev = new;
		return (new);
	}
	else if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
