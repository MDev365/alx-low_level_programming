#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int a, b, i, m;

	a = 1;
	b = 2;
	printf("%i, %i", a, b);
	for (i = 1 ; i <= 50 ; i++)
	{
		m = a + b;
		a = b;
		b = m;
		printf(", %i", m);
	}
	printf("\n");
	return (0);
}
