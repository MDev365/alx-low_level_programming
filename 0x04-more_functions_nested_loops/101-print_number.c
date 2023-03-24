#include "main.h"
#include <math.h>

/**
 * print_number - print an integer
 * @n: the integer
 *
 * Return: void
 */
void print_number(int n)
{

	unsigned int n1 = 0;

	if  (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
