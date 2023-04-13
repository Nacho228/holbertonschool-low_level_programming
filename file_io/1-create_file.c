#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file.
 * @text_content: if it exists, text content.
 * Return: 1 if succesful.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1 || !filename)
	{
		return (-1);
	}

	buffer = malloc(sizeof(char) * strlen(text_content) + 1);
	if (buffer == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		strcpy(buffer, text_content);
		if (write(fd, buffer, strlen(buffer)) == -1)
		{
			free(buffer);
			close(fd);
			return (-1);
		}

	}
	free(buffer);
	close(fd);
return (1);
}
