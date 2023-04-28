#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: list head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_l = head;

	while (head != NULL)
	{
		next_l = head->next;
		free(head->str);
		free(head);
		head = next_l;
	}
}
