#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: dest memory area
 * @src: src memory area
 * @n: number of byetes that are to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
