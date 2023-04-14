#include <stdlib.h>


void fill_memory(char *s, unsigned int size)
{
	unsigned int i;
	
	for (i = 0; i < size ; i++)
	{
		s[i] = 0;
	}
}


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

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	
	if (m == NULL)
		return (NULL);

	fill_memory((char *) m, nmemb * size);


	return (m);
}
