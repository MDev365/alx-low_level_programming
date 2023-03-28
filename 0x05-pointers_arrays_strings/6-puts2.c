#include "main.h"

/**
 * _puts2 - print a string
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
