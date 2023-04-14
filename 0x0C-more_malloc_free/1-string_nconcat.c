#include <stdlib.h>

/**
 * _strlen - return string length
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	
	if (s == NULL || s[0] = '\0')
		return (0);
	
	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}

	if (i <= 0)
		return (0);
	else
		return (i - 1);
}



/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first n bytes of s2
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sc;
	int s1_len, s2_len, i, j;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n > s2_len)
		n = s2_len;

	sc = malloc(sizeof(char) * (s1_len + n + 1));

	if (sc == NULL)
		return (NULL);

	j = 0;
	for (i == 0; i < s1_len ; i++)
	{
		sc[j] = s1[i];
		j++;
	}

	for (i == 0; i < n ; i++)
	{
		sc[j] = s2[i];
		j++;
	}

	sc[j] = '\0';

	return(sc);
}
