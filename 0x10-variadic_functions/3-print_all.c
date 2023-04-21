#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * struct format - Struct op
 *
 * @fc: format character
 * @f: The function associated
 */
typedef struct format
{
	char *fc;
	void (*func)(va_list args);
} format_st;

/**
 * print_char - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_char(va_list args) {
	int c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_int(va_list args) {
	int i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_float - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_float(va_list args) {
	float f = va_arg(args, int);
	printf("%f", f);
}

/**
 * print_string - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_string(va_list args) {
	char *s = va_arg(args, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * get_print_func - return the fucntion associated with c
 * @c: char indicate the type of the argument
 *
 * Return: pointer to fucntion
 */
void (*get_print_func(char c))(va_list args)
{
	int i;
	format_st format_array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	i = 0;
	while (i != 4 || c != *format_array[i].fc)
	{
		i++;
	}
	return (format_array[i].func);	
}
	
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
	void (*func)(va_list);

	printf("start");
	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		printf("%c", format[i]);
		func = get_print_func(format[i]);
		if (func != NULL)
			func(args);
	}
	va_end(args);
	printf("\n");
}
