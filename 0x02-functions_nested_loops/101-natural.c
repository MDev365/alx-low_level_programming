#include <stdio.h>

/**
 * main - print the sum of ll the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0
 */
int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 1 ; n < 1024 ; n++)
	{
		if (n % 3 == 0)
			sum = sum + n;
		else if (n % 5 == 0)
			sum = sum + n;
	}
	printf("%i\n", sum);
	return (0);
}
