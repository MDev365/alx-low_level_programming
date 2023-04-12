#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int j, size;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	size = sizeof(str);
	dup_str = malloc(size);

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (j = 0 ; j <= size ; j++)
	{
		dup_str[j] = str[j];
	}

	return (dup_str);
}
