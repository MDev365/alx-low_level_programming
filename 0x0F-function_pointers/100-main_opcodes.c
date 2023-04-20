#include <stdio.h>
#include <stdlib.h>

/**
 * main - 100-main_opcodes.c
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, n;
	int (*func)(int, char **);
	unsigned char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func = main;
	c = (unsigned char *) &func;

	for (i = 0; i < n ; i++)
	{
		printf("%02hhx", c[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
