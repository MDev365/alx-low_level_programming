#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *s;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}


		if(format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
