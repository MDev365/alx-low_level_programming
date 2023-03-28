#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: stirng
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, m, n, num;

	i = 0;
	m = 0;
	while (!(s[i] >= 48 && s[i] <= 57) && s[i] != '\0')
	{
		if (s[i] == '-')
			m++;
		i++;
	}

	n = 0;
	while ((s[i] >= 48 && s[i] <= 57) && s[i] != '\0')
	{
		n = (n * 10) + (s[i] - '0');
		num = 1;
		i++;
	}

	if (num == 1)
	{
		if (m % 2 ==0)
			return (n);
		else
			return (n * -1);
	}

	else
		return (0);
}
