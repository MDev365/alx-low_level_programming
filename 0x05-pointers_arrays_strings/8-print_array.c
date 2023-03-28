#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integers
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

