#include "main.h"

/**
 * check_factor - check if there is a factor to n
 * @n: the number
 * @f: the factor
 *
 * Return: if there is factor to n 
 */

int check_factor(int n, int f)
{
	if(f == 1)
		return (1);
	else if (n % f == 0)
		return (0);
	else
		return checkfactor(n, f - 1);
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number to be checked
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	else
	{
		return (check_factor(n, n-1));
	}
}
