#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: list head
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *prev_node = *head;

	if (!head || !*head)
		return (NULL);

	while (*head != NULL)
	{
		*head = (*head)->next;
		prev_node->next = next_node;
		next_node = prev_node;
		prev_node = *head;
	}
	return (next_node);
}
