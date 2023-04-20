#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 *
 * Return:  returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (cmp(array[i]));
	}

	return (-1);
}
