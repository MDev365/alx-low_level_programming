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
 * long_multiplication - lonng
 * @n1: first number
 * @n2: second number
 *
 * Return: void
 */
char *long_multiplication(char *n1, char *n2)
{
	int i, j, k, carry, n1_len, n2_len, m;
	char *r;

	n1_len = _strlen(n1);
	n2_len = _strlen(n2);

	r = malloc(sizeof(char) * (n1_len + n2_len + 1));
	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n1_len + n2_len ; i++)
		r[i] = '0';
	r[i] = '\0';

	for (i = n1_len - 1 ; i >= 0 ; i--)
	{
		carry = 0;
		k = i + n2_len;
		for (j = n2_len - 1 ; j >= 0 ; j--)
		{
			m = ((n1[i] - '0') * (n2[j] - '0')) + carry + (r[k] - '0');
			carry = m / 10;
			r[k] = ((m % 10) + '0');
			k--;
		}
		r[k] = r[k] + carry;
	}
	if (r[0] == '0')
	{
		for (i = 0; i < n1_len + n2_len ; i++)
		{
			r[i] = r[i + 1];
		}
	}
	return (r);
}



/**
 * main - mul
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char **argv)
{
	char *result;

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

	result = long_multiplication(argv[1], argv[2]);

	if (atoi(argv[1]) != -1 && atoi(argv[2]) != -1)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	printf("%s\n", result);

	return (0);
}
