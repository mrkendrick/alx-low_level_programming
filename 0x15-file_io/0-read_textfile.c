#include "main.h"

/**
 * read_textfile - reads a text file to the standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: number of bytes written to stdout
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_count, write_count;

	fd = open(filename, O_RDONLY);

	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_count = read(fd, buf, letters);
	if (read_count == -1)
	{
		return (0);
	}
	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		return (0);
	}

	free(buf);
	close(fd);

	return (write_count);
}
