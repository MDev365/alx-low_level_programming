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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s;
	int bits = 0;

	s = (n & m);
	
	if (s == 0)
	{
		return (0);
	}

	while (s > 0)
	{
		if (s & 1)
		{
			bits++;
		}

		s = s >> 1;
	} 

	return (bits);
}
