#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: int
 *
 * Return:  returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = n ; i ; i = va_arg(args, int))
	{
		sum += i;
	}
	return (sum);
}
