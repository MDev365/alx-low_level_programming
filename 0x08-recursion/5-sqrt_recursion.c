#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: returns the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == -1 || n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if (n / n < 0)
			return (-1);
		else if (n / n == 1)
			return (1);
		else
			return (1 + _sqrt_recursion(n / n));
	}
}
