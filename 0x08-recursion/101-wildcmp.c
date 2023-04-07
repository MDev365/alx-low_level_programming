#include "main.h"

/**
 * _wildcmp - compare
 * @s1: string 1
 * @s2: string 2
 * @n: wild character
 *
 * Return: 1 or 0
 */

int _wildcmp(char *s1, char *s2, int n)
{
	/*printf("%c : %c\n",s1[0], s2[0]);*/
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	else if (s2[0] == '*')
	{
		n = n + 1;
		return (1 * _wildcmp(&s1[0], &s2[1], n));
	}
	else if (s1[0] == s2[0])
	{
		if (n > 0)
		{
			if (s1[0] == s1[1])
			{
				return (1 * _wildcmp(&s1[1], &s2[0], n));
			}
			n = 0;
			return (1 * _wildcmp(&s1[0], &s2[0], n));
		}
		return (1 * _wildcmp(&s1[1], &s2[1], n));
	}
	else
	{
		if (n > 0)
		{
			return (1 * _wildcmp(&s1[1], &s2[0], n));
		}
		return (0);
	}
}


/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	return (_wildcmp(s1, s2));
}

