#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 10;

	if (n & 1)
		return (0);
	else
		return (1);
}
