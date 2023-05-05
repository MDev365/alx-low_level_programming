#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	char binary_num[64];

	if (n = 0)
	{
		printf("0");
		return;
	}

	while (n > 0)
	{
		if (n & 1)
			binary_num[i] = '1';
		else
			binary_num[i] = '0';
		n >> 1;
		i++;
	}

	for (; i >= 0 ; i--)
		printf("%c",binary_num[i]);
	printf("\n");
}
