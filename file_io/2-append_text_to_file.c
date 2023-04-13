#include "main.h"
/**
 * append_text_to_file - function that creates a file.
 * @filename: name of the file.
 * @text_content: if it exists, text content.
 * Return: 1 if succesful.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (text_content == NULL)
	{
		text_content = "";
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
return (1);
}
