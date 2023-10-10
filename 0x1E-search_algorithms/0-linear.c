#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, found = 0;

	if (array == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}

	if (found == 1)
		return ((int) i);

	return (-1);
}
