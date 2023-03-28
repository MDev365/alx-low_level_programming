#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;
	char *rs[i - 1];

	while (i != 0)
	{
		i--;
		rs[j] = s[i];
		j++;
	}
}
