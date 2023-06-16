#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the node at index index of a dlistint_t linked list.
 * @head: list head
 * @index: returns the nth node of a dlistint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, found = 0;
	dlistint_t *node;

	if (head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		if (node == NULL)
			return (-1);
		*head = node->next;
		if (node->next != NULL)
			(node->next)->prev = NULL;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (i == index)
		{
			found = 1;
			break;
		}
		node = node->next;
		i++;
	}
	if (found)
	{
		if (node == *head)
		{
			*head = node->next;
			if (node->next != NULL)
				(node->next)->prev = NULL;
			free(node);
			return (1);
		}
		(node->prev)->next = node->next;
		if (node->next != NULL)
			(node->next)->prev = node->prev;
		free(node);
		return(1);
	}
	return (-1);
}
	
