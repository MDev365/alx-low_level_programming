#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height ; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			while (h >= 0)
			{
				free(array[h]);
				h--;
			}

			free(array);
			return (NULL);
		}

		for (w = 0; w < width ; w++)
		{
			array[h][w] = 0;
		}
	}

	return (array);
}
