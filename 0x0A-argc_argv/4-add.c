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
	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		if (_isnumber(argv[1]) || _isnumber(argv[2]))
		{
			printf("%i\n", (atoi(argv[1])) * (atoi(argv[2])));
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
}
