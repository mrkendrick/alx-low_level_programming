#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file and writes into it
 * @filename: filename
 * @text_content: text content of file
 * Return: 1 on success, -1 if fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_count;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = _strlen(text_content);
	}

	write_count = write(fd, text_content, len);
	if (write_count == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
