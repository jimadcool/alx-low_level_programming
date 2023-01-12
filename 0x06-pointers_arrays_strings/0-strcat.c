#include "main.h"

/**
 * _strcat - Concatenates a string pointed to by @src, including the
 *           terminating null byte, removes terminating null at dest .
 * @dest: A strng to concatenate the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = 0;

	while (dest[j] != '\0')
		j++;

	i = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
