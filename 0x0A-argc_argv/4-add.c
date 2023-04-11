#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}


/**
 * _isnumber - check if string is number
 * @s: the string to be checked
 *
 * Return: 1 if number 0 otherwise
 */
int _isnumber(char *s)
{
	int i, c;

	i = 0;
	c = 1;
	while (s[i] != '\0')
	{
		c = c * _isdigit(s[i]);
		i++;
	}

	return (c);
}


/**
 * main - print all the args
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1 ; i < argc ; i++)
	{
		if (!(_isnumber(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
