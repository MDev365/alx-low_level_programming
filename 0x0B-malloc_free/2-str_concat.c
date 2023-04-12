#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - returns a pointer to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *dup_str;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0' ; i++)
			size1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0' ; i++)
			size2++;
		size2++;
	}
	dup_str = malloc((size1 + size2) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	j = 0;
	if (s1 != NULL)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			dup_str[j] = s1[i];
			j++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0 ; s2[i] != '\0' ; i++)
		{
			dup_str[j] = s2[i];
			j++;
		}
	}
	dup_str[j] = '\0';
	return (dup_str);
}
