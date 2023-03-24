#include "main.h"
#include <math.h>

unsigned int i, d, ch;


/**
 * remaining - return the remaining
 * @p: power
 * @c: check
 *
 * Return: remaining
 */
void remaining(int p, int c)
{
	int j, po;

	po = 1;
	for (j = 1; j <= p ; j++)
		po = po * 10;

	d = i / po;
	if (d > 0 || c != 0)
	{
		_putchar(d + '0');
		i = i % po;
		ch = 1;
	}
}



/**
 * print_number - print an integer
 * @n: the integer
 *
 * Return: void
 */
void print_number(int n)
{
	/* 2,147,483,647*/
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n > 0)
	{
		ch = 0;
		i = n;

		remaining(9, ch);
		remaining(8, ch);
		remaining(7, ch);
		remaining(6, ch);
		remaining(5, ch);
		remaining(4, ch);
		remaining(3, ch);
		remaining(2, ch);
		remaining(1, ch);
		remaining(0, ch);
	}
}
