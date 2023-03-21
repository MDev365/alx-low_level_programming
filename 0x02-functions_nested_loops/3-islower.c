#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: The cahracter to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
