#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of the array elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **m;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);

	m = malloc(nmemb * sizeof(void *));

	for (i = 0 ; i < nmemb ; i++)
	{
		m[i] = malloc(size);
	
		if (m[i] == NULL)
			return (NULL);

		m[i] = NULL;
	}

	if (m == NULL)
		return (NULL);

	return (m);
}
