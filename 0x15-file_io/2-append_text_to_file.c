#include "main.h"


/**
 * _strlen - return the length of a string
 * @s: the string
 *
 * Return: (int) the lenght of the string
 */
int _strlen(const char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	return (i);
}


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int w, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	len = _strlen(text_content);

	w = write(file, text_content, len);
	if (w == -1 || w != len)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
