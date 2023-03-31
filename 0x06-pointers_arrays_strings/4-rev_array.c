#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n ; i++)
	{
		n = n - 1;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
