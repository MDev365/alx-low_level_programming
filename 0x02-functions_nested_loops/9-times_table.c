#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Retrun: void
 */
void times_table(void)
{
	int i, n, t;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 0 ; n <= 9 ; n++)
		{
			t = n * i;
			if (t >= 10)
			{
				_putchar(((t % 100) / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else if (t == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				_putchar(t + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
