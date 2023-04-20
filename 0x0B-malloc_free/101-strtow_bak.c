#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	char **word_arr;
	int i, w_number, w, j, w_size, w_start, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w_number = 0;
	for (i = 0; str[i] != '\0' ; i++)
	{
		printf("word number %i: ", w_number + 1);
		while (str[i] != ' ' && str[i] != '\0')
		{
			printf("%c",str[i]);
			i++;
		}
		w_number++;
		if (str[i] == '\0')
			break;
		printf("\n");
	}
	printf("\nthe number of words is %i\n",w_number);
	if (w_number == 0)
		return (NULL);
	word_arr = malloc(sizeof(char *) * w_number);
	if (word_arr == NULL)
		return (NULL);
	w = 0;
	for (i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
			continue;
		w_start = i;
		w_size = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
			w_size++;
		}
		word_arr[w] = malloc(sizeof(char) * w_size + 1);
		if (word_arr[w] == NULL)
			return (NULL);
		printf("word %i is: ", w);
		k = 0;
		for (j = w_start ; j < w_start + w_size ; j++)
		{
			printf("%c", str[j]);
			word_arr[w][k] = str[j];
			k++;
		}
		printf("\n");
		word_arr[w][k] = '\0';
		w++;
		if (str[i] == '\0')
			break;
	}
	return (word_arr);
}
