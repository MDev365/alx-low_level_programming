#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index
 * of a listint_t linked list.
 * @head: list head
 * @index: index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *next_node = *head, *previous_node = *head;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	while (next_node != NULL && i != index)
	{
		previous_node = next_node;
		next_node = next_node->next;
		i++;
	}

	if (i == index)
	{
		previous_node->next = next_node->next;
		free(next_node);
		return (1);
	}

	return (1);
}
