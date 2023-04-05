#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the number to be raised
 * @y: the power to be raised to
 *
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
