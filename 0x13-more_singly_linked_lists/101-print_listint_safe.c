#include "lists.h"

/**
 * check_if_node_loop - check_if_node_loop
 * @head: head
 * @node: node to be checked
 *
 * Return: 1 if there is loop, 0 if not

int check_if_node_loop(const listint_t *head, const listint_t *node)
{
	while (head != node && head != NULL)
	{
		head = head->next;
	}
	if (head == node)
	{
		return(1);
	}
	return (0);
}


/**
 * print_listint_safe -  prints all the elements of a listint_t list.
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *node, *prev_node = NULL;

	node = head;
	if (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		if (check_if_node_loop(head, node))
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			exit(98);			
		}
		printf("[%p] %i\n", (void *)node, node->n);
		prev_node = node;
		node = node->next;
		i++;
	}

	return (i);
}
