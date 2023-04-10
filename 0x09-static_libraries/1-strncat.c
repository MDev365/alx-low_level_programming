#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * @n: n bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (j < n)
		dest[i] = '\0';

	return (dest);
}
