#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - read text file and print to stdout
  * @filename: const char*
  * @letters: size_t
  * Return: ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, reader, writer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	reader = read(fd, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, reader);
	if (fd == -1 || writer == -1 || reader == -1 || writer != reader)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (writer);
}
