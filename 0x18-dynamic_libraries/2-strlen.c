#include "main.h"

/**
 * _strlen - retruns the length of a string
 * @s: pointer to a string
 *
 * Return: the size of the integer
 */
int _strlen(char *s)
{
	int i;
	char c;

	c = s[0];
	i = 0;

	while (c != '\0')
	{
		i = i + 1;
		c = s[i];
	}

	return (i);
}
