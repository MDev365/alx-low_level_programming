#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	op = &argv[2][0];
	printf("%i\n",argv[2][1]); 
	if (*op != '+' && *op != '-' && *op != '*' &&
		*op != '/' && *op != '%' && argv[2][1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(op);
	printf("%i\n", f(a, b));
	return (0);
}
