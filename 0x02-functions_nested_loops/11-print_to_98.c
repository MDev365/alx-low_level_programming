#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n == 98)
		printf("%i", n);
	else if (n < 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			if (a == 98)
				printf("%i", a);
			else
				printf("%i, ", a);
		}
	}
	else if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			if (a == 98)
				printf("%i", a);
			else
				printf("%i, ", a);
		}
	}
	printf("\n");
}
