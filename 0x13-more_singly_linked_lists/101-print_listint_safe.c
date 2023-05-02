#include "lists.h"

/**
 * check_if_node_loop - check_if_node_loop
 * @head: head
 * @node: node to be checked
 * @i: index
 *
 * Return: 1 if there is loop, 0 if not
 */

int check_if_node_loop(const listint_t *head, const listint_t *node, int i)
{
	int idx = 0, occurrence = 0;
	/*printf("%i" , i);*/
	while (idx != i + 1)
	{
		/*printf("   [%p] %i : %i (occ : %i)\n", (void *)head, idx, i, occurrence);*/
		if (head == node)
			occurrence++;
		head = head->next;
		idx++;
	}
	if (occurrence > 1)
	{
		return (1);
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
	const listint_t *node;

	node = head;
	if (head == NULL)
	{
		exit(98);
	}

	while (node != NULL)
	{
		if (check_if_node_loop(head, node, i))
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			return (i);
		}
		printf("[%p] %i\n", (void *)node, node->n);
		node = node->next;
		i++;
	}

	return (i);
}
