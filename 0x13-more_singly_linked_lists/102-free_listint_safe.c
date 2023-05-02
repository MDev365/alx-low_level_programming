#include "lists.h"


/**
 * check_if_node_loop2 - check_if_node_loop
 * @head: head
 * @node: node to be checked
 * @i: index
 *
 * Return: 1 if there is loop, 0 if not
 */

listint_t check_if_node_loop2(const listint_t *head)
{
	int idx = 0, occurrence = 0;
	listint_t *current = head, *s_node = head; 
	/*printf("%i" , i);*/
	while (current != NULL)
	{
		s_node = head;
		i = 0;
		while (s_node != NULL && i != idx + 1)
		{
			if (s_node == current)
				occurrence++;
			if (occurrence > 1)
				return (s_node);
			s_node = s_node->next;
			i++;
		}

		current = current->next;
		idx++;
	}

	return (NULL);
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
	listint_t *node, *node_loop;

	node = *h;
	if (h == NULL || *h == NULL)
	{
		return(0);
	}

	node_loop = check_if_node_loop2(*h);
	while (*h != NULL && *h != node_loop)
	{
		node = (*h)->next;
		free(*h);
		*h = node;
		i++;
	}

	return (i);
}
