#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: decimal number
 * @m: decimal number
 *
 * Return: returns the number of bits you would
 * need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}