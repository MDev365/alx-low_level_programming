#include <stdio.h>
#include "main.h"

/**
 * main - print all the args
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%i\n", argv[0] * argv[1]);
	}
	return (0);
}
