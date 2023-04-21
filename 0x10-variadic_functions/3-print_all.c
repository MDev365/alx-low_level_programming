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
	void (*func)(void *);
} format_st;

/**
 * print_char - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_char(void* data) {
    printf("%c", *((char*) data));
}

/**
 * print_int - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_int(void* data) {
    printf("%d", *((int*) data));
}

/**
 * print_float - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_float(void* data) {
    printf("%f", *((float*) data));
}

/**
 * print_string - print
 * @data: the data to be printed
 *
 * Return: void
 */
void print_string(void* data) {
	if (data == NULL)
		print("(nil)");
	else
		printf("%s", (char*) data);
}

/**
 * get_print_func - return the fucntion associated with c
 * @c: char indicate the type of the argument
 *
 * Return: pointer to fucntion
 */
void (*get_print_func(char *c))(void *)
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
	while (i != 4 || c[0] != *format_array[i].fc)
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
	void (*func);

	va_start(args, format);

	i = 0;
	while (format[i] != NULL)
	{
		func = get_print_func(format[i]);
		if (func != NULL)
			func(args);
	}
	va_end(args);
	printf("\n");
}
