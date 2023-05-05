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

	if (n == 0 && index = 0)
	{
		return(0);
	}

	while (n > 0)
	{
		if (n & 1)
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
		n = n >> 1;
	}

	return (-1);
}
