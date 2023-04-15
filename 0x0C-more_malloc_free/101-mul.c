#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return string length
 * @s: string
 *
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL || s[0] == '\0')
		return (0);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}

	if (i <= 0)
		return (0);
	else
		return (i);
}

/**
 * is_number - check if string is number
 * @s: string
 * Return: 1 if number and 0 if not
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
	}
	return (1);
}




/**
 * main - mul
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	int n1_len, n2_len;
	char *n1, *n2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (is_number(argv[1]) == 0 || is_number(argv[2]) == 0)
		{
		printf("Error\n");
		exit(98);
	}

	n1_len = _strlen(argv[1]);
	n2_len = _strlen(argv[2]);

	n1 = malloc(sizeof(char) * n1_len);
	if (n1 == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	n2 = malloc(sizeof(char) * n2_len);
	if (n2 == NULL)
	{
		free(n1);
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[1]) != -1 && atoi(argv[2]) != -1)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	free(n1);
	free(n2);
	return (0);
}
