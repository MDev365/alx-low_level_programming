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
 * free_listint_safe - frees a listint_t list..
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	const listint_t *node;

	node = h;
	if (h == NULL || *h == NULL)
	{
		return(0);
	}

	while (*h != NULL)
	{
		node = *h->next;
		free(*h);
		*h = node;
		i++;
	}

	return (i);
}
