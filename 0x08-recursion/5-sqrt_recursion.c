#include "main.h"

/**
 * sqrt_guess - trying to fine squr using Babylonian method
 * @num: the number
 * @guess: the guess
 *
 * Return: double
 */

double sqrt_guess(double num, double guess)
{
	double new_guess = (guess + num / guess) / 2;

	if (new_guess == guess)
		return (guess);
	return (sqrt(num, new_guess));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: returns the natural square root of n
 */
int _sqrt_recursion(int n)
{
	double result;

	if (n < 0)
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
		result = sqrt_guess(n, 1.0);

		if (result != (int)result)
			return (-1);
		else
			return ((int)result);
	}
}
