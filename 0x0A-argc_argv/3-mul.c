#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print all the args
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%i\n", (atoi(argv[0])) * (atoi(argv[1])));
	}
	return (0);
}
