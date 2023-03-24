#include "main.h"

/**
 * print_triangle - print a traiangle
 * @size: the size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		for (k = i ; k < size ; k++)
			_putchar(' ');
		for (j = 1 ; j <= i ; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
