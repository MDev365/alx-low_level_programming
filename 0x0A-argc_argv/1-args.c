#include <stdio.h>
#include "main.h"

/**
 * main - print the number of args
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
