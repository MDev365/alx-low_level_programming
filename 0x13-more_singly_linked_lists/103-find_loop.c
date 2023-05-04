#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: list header
 *
 * Return: the number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	int idx = 0, occ = 0, i;
	listint_t *current = head, *s_node = head;

	while (current != NULL)
	{
		s_node = head;
		i = 0;
		occ = 0;
		while (s_node != NULL && i != idx + 1)
		{
			if (s_node == current)
			{
				occ++;
			}
			if (occ > 1)
				return (s_node);
			s_node = s_node->next;
			i++;
		}

		current = current->next;
		idx++;
	}

	return (NULL);
}
