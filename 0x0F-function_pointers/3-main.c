#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main fucntion
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int a, b;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0];
	if (op != '+' || op != '-' || op != '*' ||
		op != '/' || op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return(0);
}
