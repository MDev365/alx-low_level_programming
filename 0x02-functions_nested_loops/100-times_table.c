#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, t, a;

	if (n <= 15 && n >= 0)
	{
		for (t = 0; t <= n ; t++)
		{
			for (a = 0 ; a <= n ; a++)
			{
				i = t * a;
				if (a == 0)
					_putchar('0');
				else if (i < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i + '0');
				}
				else if (i >= 10 && i < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else if (i >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i / 100) + '0');
					_putchar(((i / 10) % 10) + '0');
					_putchar((i % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

