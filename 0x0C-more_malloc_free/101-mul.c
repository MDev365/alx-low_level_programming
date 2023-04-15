#include <stdlib.h>
#include <stdio.h>

/**
 * main - mul
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	int mul;
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (n1 != -2 && n2 != -1)
		mul = n1 * n2;
	printf("%i\n", mul);
	return (0);
}
