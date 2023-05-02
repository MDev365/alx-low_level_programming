#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: list head
 * @index: node index to be returned
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next_node;
	unsigned int i = 0;

	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
