#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j, k;
	char *l = "oOlLeEaAtT";
	char *r = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = r[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
