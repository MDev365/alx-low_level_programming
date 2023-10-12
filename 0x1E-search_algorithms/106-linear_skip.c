#include "search_algos.h"
#include <math.h>


/**
 * list_goto_index - goto index in list
 * @list: list
 * @idx: index
 *
 * Return: pointer to element in the list or NULL
 */
skiplist_t *list_goto_index(skiplist_t *list, size_t idx)
{
	skiplist_t *head;
	size_t i = 0;

	if (list == NULL)
		return (NULL);
	head = list;
	while (head->next != NULL && head->index < idx)
	{
		head = head->next;
	}
	return (head);
}



/**
 * linear_skip - searches for a value in an array of integers
 *                 using the linear_skip search algorithm
 * @list: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
skiplist_t *linear_skip(skiplist_t *list, size_t size, int value)
{
	int i, jump_size, start, end, found = 0;
	skiplist_t *current;

	if (list == NULL || size == 0)
		return (NULL);

	jump_size = sqrt(size);
	start = 0;
	end = jump_size;

	current = list_goto_index(list, end);
	printf("Value checked at index [%d] = [%d]\n", end, current->n);
	while (current->n < value && end != size - 1)
	{
		start = end;
		end += jump_size;
		if (end >= size)
			end = size - 1;;
		current = list_goto_index(list, end);
		printf("Value checked at index [%d] = [%d]\n", end, current->n);
	}

	printf("Value found between indexes [%i] and [%i]\n", start, end);
	for (i = start ; i <= end && i < size ; i++)
	{
		current = list_goto_index(list, i);
		printf("Value checked at index [%d] = [%d]\n", i, current->n);
		if (current->n == value)
		{
			found = 1;
			break;
		}
	}

	if (found == 1)
		return (current);

	return (NULL);
}
