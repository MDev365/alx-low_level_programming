#include <stdio.h>

/**
 * main - print all possible different combinations of two two-digits numbers.
 *
 * Return: 0
 */
int main(void)
{
	int n, d;

	for (n = 0 ; n <= 98 ; n++)
	{
		for (d = n + 1 ; d <= 99 ; d++)
		{
			putchar((n % 100) / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar((d % 100) / 10 + '0');
			putchar(d % 10 + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
