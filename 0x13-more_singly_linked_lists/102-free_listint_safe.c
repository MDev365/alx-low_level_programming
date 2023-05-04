#include "lists.h"


/**
 * check_if_node_loop2 - check_if_node_loop
 * @head: head
 *
 * Return: 1 if there is loop, 0 if not
 */

int check_if_node_loop2(listint_t *head)
{
	int idx = 0, occurrence = 0, i;
	listint_t *current = head, *s_node = head;

	while (current != NULL)
	{
		s_node = head;
		i = 0;
		while (s_node != NULL)
		{
			printf("loop i: %i\n", i);
			printf("p i: %p\n", (void *)s_node);
			if (s_node == current)
			{
				occurrence++;
				printf("loop occurrence: %i\n", occurrence);
			}
			if (occurrence > 1)
			{
				printf("loop i: %i\n", i);
				return (i);
			}
			s_node = s_node->next;
			i++;
		}

		current = current->next;
		idx++;
	}

	return (-1);
}


/**
 * free_listint_safe - frees a listint_t list..
 * @h: list header
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, loop_idx;
	listint_t *node;

	node = *h;
	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	/*loop_idx = check_if_node_loop2(*h);*/
	while (*h != NULL && i != loop_idx + 1)
	{
		if (node < node->next)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;
	return (i);
}
