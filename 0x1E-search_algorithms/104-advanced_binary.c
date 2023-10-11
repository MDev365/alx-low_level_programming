#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 *			using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	mid = (end + start) / 2;
	if (start == end)
		return (-1);

	
	printf("Searching in array:");
	for (i = start ; i <= end ; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
		else
			printf("\n");
	}
	if (value == array[mid])
	{
		return (mid);
	}
	else if (value < array[mid])
		end = mid - 1;
	else
		start = mid + 1;
	mid = (end + start) / 2;
	advanced_binary(&array[start], end - start + 1, value);

	return (-1);
}
