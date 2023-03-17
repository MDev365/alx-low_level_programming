#include <stdio.h>

/**
  * main - Print the numbers base16e
  *
  * Return: 0
  */
int main(void)
{
	char d, c;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
