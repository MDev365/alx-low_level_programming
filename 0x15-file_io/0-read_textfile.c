#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: 
 * @letters: 
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0, if write fails or does not
 * write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i = 0;
	FILE *file;
	char c;
	int b;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return 0;

	while ((b = read(file, &c, sizeof(char))) != EOF && i != letters)
	{
		write(STDOUT_FILENO, &c, sizeof(char));
		i++;
	}
	return (i);	
}
