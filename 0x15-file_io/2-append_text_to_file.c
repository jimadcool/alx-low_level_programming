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
 * append_text_to_file - append text to the end of a file
 *
 * @filename: the name of the file
 * @text_content: null terminated string to add to the file
 *
 * Return: 1 if successful, -1 if unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	write_count = write(fd, text_content, string_length(text_content));

	close(fd);

	if (fd == -1 || write_count == -1
			|| write_count != string_length(text_content))
		return (-1);

	return (1);
}
