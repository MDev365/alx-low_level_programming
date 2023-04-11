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
		return (1);
	}
	else
	{
		printf("%i\n", (atoi(argv[1])) * (atoi(argv[2])));
		return (0);
	}
}
