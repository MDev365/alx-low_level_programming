#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the number
 *
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	last = n % 10;
	if (n < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
