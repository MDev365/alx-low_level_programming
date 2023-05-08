#include "main.h"

/**
 * file_close - close file or print error and exit
 * @fd: the value of the file descriptor
 *
 * Return: void
 */
void file_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

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
	r = read(file_from, buf, 1024);
	if (file_from == -1 || r == -1)
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

	do {
		w = write(file_to, buf, r);
		if (w == -1 || file_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(file_from, buf, 1024);
		/*file_to = open(argv[2], O_WRONLY | O_APPEND);*/
	} while (r > 0);

	file_close(file_from);
	file_close(file_to);
	return (0);
}
