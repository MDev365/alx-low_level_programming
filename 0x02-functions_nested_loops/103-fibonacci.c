#include <stdio.h>

/**
 * main - sum of even-valued terms of fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, m, sum;

	a = 1;
	b = 2;
	sum = 2;
	m = 0;
	while (m <= 4000000)
	{
		m = a + b;
		a = b;
		b = m;
		if (m % 2 == 0)
			sum = sum + m;
	}
	printf("%lu\n", sum);
	return (0);
}
