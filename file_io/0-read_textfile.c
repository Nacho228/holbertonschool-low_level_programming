#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of the file.
 * @letters: letters to be printed.
 * Return: bytes written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytes_read;
	int bytes_written;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);
return (bytes_written);
}

