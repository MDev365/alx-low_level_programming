#include "main.h"

/**
 * _strspn - get the lenght of a prefix substring
 * @s: the string
 * @accept: accepted prefix
 *
 * Return: the number of byetes which consist of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				n++;
			j++;
		}
		if (accept[j] == '\0')
			return (n);

		i++;
	}
}
