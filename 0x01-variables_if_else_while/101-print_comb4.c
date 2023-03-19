#include <stdio.h>

/**
 * main - print all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int n, d, s;

	for (n = 0 ; n <= 7 ; n++)
	{
		for (d = n + 1 ; d <= 8 ; d++)
		{
			for (s = d + 1 ; s <= 9 ; s++)
			{
				putchar(n + '0');
				putchar(d + '0');
				putchar(s + '0');
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
