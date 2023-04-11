#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the amount of change
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cents, ch, i;
	int c[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		ch = 0;
		if (cents == 0)
		{
			printf("%i\n", cents);
			return (0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				while (cents - c[i] >= 0)
				{
					cents = cents - c[i];
					ch = ch + 1;
				}
			}

			printf("%i\n", ch);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
