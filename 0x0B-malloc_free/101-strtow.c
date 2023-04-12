#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
    char **words_arr;
    int i, w_number, w, j, w_size, w_start, k;
    
    if (str == NULL || str == "")
    {
        return (NULL);
    }
    w_number = 0;
    for (i = 0; str[i] != '\0' ; i++)
    {
        while (str[i] != ' ')
            i++;
        w_number++;
    }
    word_arr = malloc(sizeof(char *) * w_number);
    if (word_arr == NULL)
    {
        return (NULL);
    }
    w = 0;
    for (i = 0; str[i] != '\0' ; i++)
    {
        if (s[i] == ' ')
            continue;
        
        w_start = i;
        w_size = 0;
        while (s[i] != ' ')
        {
            w_size++;
        }
        word_arr[w] = malloc(sizeof(char) * w_size + 1);
        if (word_arr[w] == NULL)
        {
            return (NULL);
        }
        k = 0;
        for (j = w_start ; j < w_start + w_size ; j++)
        {
            word_arr[w][k] = str[j];
            k++;
        }
        word_arr[w][k] = '\0';
        w++;
    }
    return (word_arr);
}
