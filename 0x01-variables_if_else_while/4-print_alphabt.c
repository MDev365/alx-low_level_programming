#include <stdio.h>
#include <stdlib.h>
/**
 * main - alpha without e q
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
