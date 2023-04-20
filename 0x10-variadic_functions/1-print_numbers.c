#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 *
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
