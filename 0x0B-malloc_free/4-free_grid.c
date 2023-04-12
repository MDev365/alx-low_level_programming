#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2 dimensional grid previously created by your alloc_grid function.
 * @height: grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h, w;

	if (grid == NULL)
	{
		return;
	}

	for (h = 0 ; h < height ; h++)
	{
		free(grid[h]);
	}

	free(grid);
}
