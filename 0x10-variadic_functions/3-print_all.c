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
	char *s, sp;

	if (format == NULL)
		return;
	va_start(args, format);
	i = 0;
	sp ="";
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s", sp);
			printf("%s%c", va_arg(args, int));
			break;
		case 'i':
			printf("%s", sp);
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%s", sp);
			printf("%f", va_arg(args, double));
			break;
		case 's':
			printf("%s", sp);
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("(nil)");
			} else
				printf("%s", s);
			break;
		default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
