#include <stdio.h>

/**
  * main - Print numbers using only putchar
  *
  * Return: 0
  */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		putchar(d + '0');
	putchar('\n');
	return (0);
}
