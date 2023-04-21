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
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("(nil)");
			} else
				printf("%s", s);
			break;
		}

		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		   && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
