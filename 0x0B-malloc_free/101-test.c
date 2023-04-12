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
		return (NULL);

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

