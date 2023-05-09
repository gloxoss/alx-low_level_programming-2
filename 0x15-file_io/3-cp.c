#include "main.h"

/**
  * main - Enry point
  * @argc: int
  * @argv: char*
  * Return: int
  */
int main(int argc, char *argv[])
{
	int from, to, closer;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);
	while ((nchars = read(from, buffer, 1024)) > 0)
	{
		nwr = write(to, buffer, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	closer = close(from);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	closer = close(to);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}

/**
  * error_file - print file error message
  * @from: int
  * @to: int
  * @argv: char*
  * Return: void
  */
void error_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
