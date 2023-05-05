#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: decimal number
 * @index: index
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int start, i = 0;
	unsigned long int m;

	if (n == 0)
	{
		return(-1);
	}

	 m = 1UL << ((sizeof(unsigned long) * 8) - 1);
	while (m != 0)
	{
		if (n & m)
		{
			start = 1;
      		if (i == index)
				return ('1');
			i++;
		}
		else
		{
			if (start == 1)
			{
				if (i == index)
					return ('0');
				i++;
			}
		}
		m = m >> 1;
	}
}
