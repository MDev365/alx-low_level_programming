#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: dest string
 * @src: src string
 * @n: n from src
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (i < n)
		dest[i] = '\0';
	return (dest);
}
