#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%i", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
