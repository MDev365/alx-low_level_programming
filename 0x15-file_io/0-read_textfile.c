#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0, if write fails or does not
 * write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *text;
	int r, w;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	text = malloc(letters * sizeof(char));
	if (text == NULL)
		return(0);

	
	if ((r = read(file, text, letters)) != -1)
	{
		w = write(STDOUT_FILENO, text, r);
		if (w == -1)
			return (0);
	}

	return (w);
}
