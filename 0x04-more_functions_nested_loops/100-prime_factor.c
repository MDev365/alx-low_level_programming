#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: int 0 if success
 */
int main(void)
{
	long int num, max_factor = 0, d;

	n = 612852475143;

	for (d = 2; d <= sqrt(num); d++)
	{
		while (num % d == 0)
		{
			max_factor = d;
			num = num / d;
		}
	}

	if (num > 2)
		max_factor = num;

	printf("%ld\n", max_factor);

	return (0);
}
