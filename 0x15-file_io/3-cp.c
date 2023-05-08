#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *argv)
{
	int file_to, file_from;
	int w, len = 0;

  if (argc != 3)
  {
		dprintf("Usage: cp file_from file_to\n");
		exit(97);		
  }

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

  file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC ,
								S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  
	w = write(file, text_content, len);
	if (file_to == -1)
	{
		dprintf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

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
