#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: stirng
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, start, end, m, n;
	char *num;

	i = 0;
	m = 0;
	while (!(s[i] >= 48 && s[i] <= 57))
	{
		if (s[i] == '-')
			m++;
		i++;
	}

	start = i;
	j = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		n = 1;
		num[j] = s[i];
		j++;
		i++;
	}

	end = i - 1;
	if (n == 1)
	{
		n = (int) *num;
		return (n);
	}

	else
		return (0);
}
