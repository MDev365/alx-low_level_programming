#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function that will be used to print
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;

	(*f)(name);
}

