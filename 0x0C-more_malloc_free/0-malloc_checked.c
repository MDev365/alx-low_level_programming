#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == null)
		exit(EXIT_FAILURE);
	return (m);
