#include "search_algos.h"
#include <math.h>

/**
 * binary_search - searches for a value in an array of integers
 *                 using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, jump_size, start, end;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = sqrt(size);
	start = 0;
	end = jump_size;

	while (array[end - 1] < value)
	{
		printf("Value found between indexes [%i] and [%i]", start, array[start]);
		start = end;
		end += jump_size;
		if (end >= size)
			break;
	}
	printf("Value found between indexes [%i] and [%i]", start, end);
	if (array[end] < value)
		return (-1);

	for (i = start
		
}
