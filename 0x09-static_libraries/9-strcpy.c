#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	dest[i] = src[i];
	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
