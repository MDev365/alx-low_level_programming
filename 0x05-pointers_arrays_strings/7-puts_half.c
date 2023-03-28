#include "main.h"

/**
 * puts_half - prints a string in reverse
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	if (i != 0)
		i--

	if (i == 0)
		j = 0;
	else if (i % 2 == 0)
	{
		j = i / 2;
	else
		j = (i - 1) / 2;

	while (j < i)
	{
		j++;
		_putchar(s[j]);
	}
	_putchar('\n');
}
