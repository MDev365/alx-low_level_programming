#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size
 * Return: return the new allocated memeory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	int i, j, cp_size;
	
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size > old_size)
		cp_size = old_size;
	else
		cp_size = new_size;

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);

	for (i = 0 ; i < cp_size ; i++)
	{
		mem[i] = ptr[i];
	}
	free(ptr);
	return (mem);
}
