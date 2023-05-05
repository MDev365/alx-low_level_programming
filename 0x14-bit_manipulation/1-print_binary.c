#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n == 0)
	{
		printf("0");
		return;
	}

	 m = 1UL << ((sizeof(unsigned long) * 8) - 1);
	while (n > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
		m = m >> 1;
	}
}
