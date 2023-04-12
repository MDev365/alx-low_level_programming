#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 *
 * Return: NULL if size is 0, pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
			array[i] = c;
		return (array);
	}
}
