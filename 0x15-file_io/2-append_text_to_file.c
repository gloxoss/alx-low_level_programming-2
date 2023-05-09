#include "main.h"

/**
  * append_text_to_file - append to EOF
  * @filename: const char*
  * @text_content: char*
  * Return: int
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer, c = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	writer = write(fd, text_content, c);
	if (fd == -1 || writer == -1)
		return (-1);
	close(fd);
	return (1);
}
