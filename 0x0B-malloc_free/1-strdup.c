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
	int i, j;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	dup_str = malloc(i * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j <= i ; j++)
	{
		dup_str[j] = str[j];
	}
	return (dup_str);
}
