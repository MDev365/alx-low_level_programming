#include <stdlib.h>

/**
 * copy_memory - copy the content of src to dest
 * @src: source memory
 * @dest: destination memory
 * @size: size
 *
 * Return: void
 */

void copy_memory(char *src, char *dest, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size ; i++)
	{
		dest[i] = src[i];
	}
}



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

	copy_memory(ptr, mem, cp_size);

	free(ptr);
	return (mem);
}
