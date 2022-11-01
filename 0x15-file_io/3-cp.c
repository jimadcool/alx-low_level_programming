#include "main.h"

/**
 * copy_file - copy the contents of one file to another
 *
 * @source: name of source file
 * @dest: name of destination file
 *
 * Return: 1 if successful, -1 if unsuccessful
 */
int copy_file(char *source, char *dest)
{
	int fd1, fd2;
	ssize_t read_count, write_count;

	fd1 = open(source, O_RDONLY);
}
