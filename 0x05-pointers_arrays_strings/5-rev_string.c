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
	char a, b;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;

	while (j < i)
	{
		i--;
		a = s[j];
		b = s[i];
		s[i] = a;
		s[j] = b;
		j++;
	}
}
