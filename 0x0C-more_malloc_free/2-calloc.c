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
	void *m;
	
	if (nmemb * size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return(NULL);

	return (m);
}
