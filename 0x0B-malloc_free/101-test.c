#include <stdlib.h>

/**
 * words_count - return the number of words in string
 * @s: string
 *
 * Return: (int) number of words, otherwise 0
 */
int words_count(char *s)
{
	int wcount, i, j;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == ' ')
			continue;
		for (j = 0 ; s[i] != ' ' && s[i] != '\0' ; j++)
		{
			i++;
		}
		if (j != 0)
			wcount++;
		if (s[i] == '\0')
			break;
	}
	return (wcount);
}



/**
 * word_length - get the start of word and return the end of it
 * @s: pointer to start of the word
 *
 * Return: (int) length of the word, otherwise 0
 */
int word_length(char *s)
{
	int count, i;

	if (s == NULL)
		return (0);

	count = 0;
	for (i = 0; s[i] != ' ' && s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	char **w_array;
	int w_num, i, j, w_length, w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w_num  = words_count(str);
	if (w_num == 0)
		return (NULL);

	w_array = malloc(sizeof(char *) * w_num);
	if (w_array == NULL)
		return (NULL);
	w = 0;
	for (i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
			continue;

		w_length = word_length(&str[i]);
		if (w_length <= 0)
			continue;

		w_array[w] = malloc(sizeof(char) * (w_length + 1));
		if (w_array[w] == NULL)
			return (NULL);

		for (j = 0 ; j < w_length ; j++)
		{
			w_array[w][j] = str[i + j];
			i++;
		}
		w_array[w][j] = '\0';
		w++;

		if (s[i] == '\0')
			break;
	}
	return (w_array);
}
