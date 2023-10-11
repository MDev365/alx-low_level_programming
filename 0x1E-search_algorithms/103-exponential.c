#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *			using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @start: is the start of elements in array
 * @end: is the end of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
	size_t i, found = 0, mid;

	if (array == NULL)
		return (-1);

	mid = (end + start) / 2;
	while (start <= end)
	{
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
			found = 1;
			break;
		}
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
		mid = (end + start) / 2;
	}

	if (found)
		return (mid);

	return (-1);
}


/**
 * exponential_search - searches for a value in an array of integers
 *                 using the exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1, low, high, found = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (pos < size && array[pos] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			found = 1;
			break;
		}
		else if (array[pos] > value)
		{
			break;
		}
		pos *= 2;
	}

	if (found == 1)
		return (pos);

	low = pos / 2;
	high = pos >= size? size - 1 : pos;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (binary_search(array, low, high, value));
}
