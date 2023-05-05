#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int start;
	unsigned long int m;

	if (n == 0)
	{
		printf("0");
		return;
	}

	 m = 1UL << ((sizeof(unsigned long) * 8) - 1);
	while (m != 0)
	{
		if (n & m)
		{
			start = 1;
			_putchar('1');
		}
		else
		{
			if (start == 1)
				_putchar('0');
		}
		m = m >> 1;
	}
}
