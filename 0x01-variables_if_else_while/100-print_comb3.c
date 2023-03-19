#include <stdio.h>

/**
 * main - print all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int n, d;

	for (n = 0 ; n <= 8 ; n++)
	{
		d = n + 1;
		for (d = n + 1 ; d <= 9 ; d++)
		{
			putchar(n + '0');
			putchar(d + '0');
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
