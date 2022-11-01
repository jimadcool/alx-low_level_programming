#include "main.h"

/**
 * read_textfile - read a text file and print it
 * to the POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_letters, written_letters;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	read_letters = read(fd, buf, letters);
	buf[read_letters] = '\0';
	written_letters = write(STDOUT_FILENO, buf, read_letters);

	close(fd);
	free(buf);

	if (fd == -1 || read_letters == -1
			|| written_letters == -1 || written_letters != read_letters)
		return (0);

	return (written_letters);
}
