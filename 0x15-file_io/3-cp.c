#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: argc
 * @argv: argv
 *
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char **argv)
{
	int file_to, file_from;
	int r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);	
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(file_from, buf, 1024) > 0))
	{
		printf("%s\n", buf);
		w = write(file_to, buf, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);	
		}
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't read from file %i\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't read from file %i\n", file_to);
		exit(100);
	}
	return (0);
}
