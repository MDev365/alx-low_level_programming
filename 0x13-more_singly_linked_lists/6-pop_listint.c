#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: list head
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
