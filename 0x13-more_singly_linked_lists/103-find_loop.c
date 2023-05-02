#include "lists.h"

/**
 * check_if_node_loop3 - check_if_node_loop
 * @head: head
 * @node: node to be checked
 * @i: index
 *
 * Return: 1 if there is loop, 0 if not
 */

int check_if_node_loop3(const listint_t *head, const listint_t *node, int i)
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
 * find_listint_loop - finds the loop in a linked list.
 * @head: list header
 *
 * Return: the number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t i = 0;
	listint_t *node;

	node = head;
	if (head == NULL)
	{
		return (NULL);
	}

	while (node != NULL)
	{
		if (check_if_node_loop3(head, node, i))
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			return (node);
		}
		printf("[%p] %i\n", (void *)node, node->n);
		node = node->next;
		i++;
	}

	return (NULL);
}
