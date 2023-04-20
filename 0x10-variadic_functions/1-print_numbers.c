#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0 || separator == NULL)
		return;

	va_start(args, n);

	sum = 0;
	for (i = 0 ; i < n ; i++)
	{
		printf("%i");
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
