#include "main.h"
#include <stdio.h>

/**
 * print_hex - convert int to hex and print it
 * @num: number to be converted
 * @digits: how many digits the number prints
 *
 * Return: void
 */
void print_hex(int num, int digits)
{
	const char hex_lookup[] = "0123456789abcdef";
	int i;
	char hex[20];

	for (i = 0 ; num != 0 ; i++)
	{
		hex[i] = hex_lookup[num % 16];
		num = num / 16;
	}
	for (; i < 20 ; i++)
		hex[i] = '0';

	for (i = digits - 1; i >= 0 ; i--)
	{
		_putchar(hex[i]);
	}
}

/**
 * print_buffer - print the content of size bytes of the buffer pointed by b
 * @b: string buffer
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	fflush(stdin);
	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size ; i += 10)
	{
		print_hex(i, 8);
		_putchar(':');
		_putchar(' ');
		for (j = 0; j < 10 ; j++)
		{
			if (j + i >= size)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				print_hex(b[i + j], 2);

			if (j % 2 != 0)
				_putchar(' ');
		}

		for (j = 0; j < 10 && j + i < size; j++)
		{
			if ((b[i + j]) >= ' ' && (b[i + j]) <= '~')
				_putchar(b[i + j]);
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
