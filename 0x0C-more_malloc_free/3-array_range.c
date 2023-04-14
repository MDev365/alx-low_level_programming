#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *m;
	int i, j;

	if (max < min)
		return (NULL);

	m = malloc(sizeof(int) * (max - min + 1));

	if (m == NULL)
		return (NULL);

	j = min;
	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		m[i] = j;
		j++;
	}
	return (m);
}
