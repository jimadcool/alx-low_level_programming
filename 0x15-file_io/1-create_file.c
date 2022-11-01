#include "main.h"

/**
 * string_length - find the length of a string
 *
 * @str: the string
 *
 * Return: the length of str
 */
int string_length(char *str)
{
	int len = 0;

	if (str == NULL)
		return (len);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * create_file - create a file
 *
 * @filename: the name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	write_count = write(fd, text_content, string_length(text_content));

	close(fd);

	if (fd == -1 || write_count == -1
			|| write_count != (ssize_t)string_length(text_content))
		return (-1);

	return (1);
}
