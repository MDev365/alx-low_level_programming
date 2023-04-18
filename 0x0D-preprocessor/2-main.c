#include <stdio.h>

/**
 * main - print the file naem follwed by new line
 *
 * Return: void
 */
int main(void)
{
	int i, p;

	p = 0;
	for (i = 0 ; __FILE__[i] != '\0' ; i++)
	{
		if (__FILE__[i] == '/')
			p = i;
	}
	printf("%s\n", (__FILE__ + p));
	return (0);
}
