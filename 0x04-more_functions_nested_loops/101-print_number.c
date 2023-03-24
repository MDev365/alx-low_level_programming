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
	/* 2,147,483,647*/
	int i, c;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n > 0)
	{
		c = 0;

		i = n / (int) pow(10, 9);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 9);
			c = 1;
		}

		i = n / (int) pow(10, 8);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 8);
			c = 1;
		}

		i = n / (int) pow(10, 7);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 7);
			c = 1;
		}

		i = n / (int) pow(10, 6);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 6);
			c = 1;
		}

		i = n / (int) pow(10, 5);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 5);
			c = 1;
		}

		i = n / (int) pow(10, 4);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 4);
			c = 1;
		}

		i = n / (int) pow(10, 3);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 3);
			c = 1;
		}

		i = n / (int) pow(10, 2);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 2);
			c = 1;
		}

		i = n / (int) pow(10, 1);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 1);
			c = 1;
		}

		i = n / (int) pow(10, 0);
		if (i > 0 || c != 0)
		{
			_putchar(i + '0');
			n = n % (int) pow(10, 0);
			c = 1;
		}

	}
	}
}
