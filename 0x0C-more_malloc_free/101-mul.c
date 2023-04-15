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
	int mul, n1_len, n2_len;
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
	
	n1_len = _strlen(avg[1]);
	n2_len = _strlen(avg[2]);

	n1 = malloc(sizeof(char) * n1_len);
	if (n1 == NULL)
		return (NULL);

	n2 = malloc(sizeof(char) * n2_len);
	if (n2 == NULL)
	{
		free(n1);
		return(NULL);
	}

	/* n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (n1 != -2 && n2 != -1)
		mul = n1 * n2;
	printf("%i\n", mul);*/
	return (0);
}
