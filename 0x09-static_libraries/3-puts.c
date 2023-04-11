#include "main.h"

/**
 * _puts - print a string
 * @s: string
 *
 * Return: void
 */
void _puts(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 1;
	}
	_putchar('\n');
}
