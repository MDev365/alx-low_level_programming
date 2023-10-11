#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in an array of integers
 *                 using the interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *         If value is not present in array or if array is NULL,
 *         your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high, found = 0;
	
	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size;
	pos = low + (
		((double)(high - low) / (array[high] - array[low]))
		* (value - array[low])
		);

	while (high > low)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
		{
			found = 1;
			break;
		}
		pos = low + (
			((double)(high - low) / (array[high] - array[low]))
			* (value - array[low])
			);
	}

	if (found == 1)
		return (pos);

	return (-1);
}
