#include "main.h"

/**
 * _memcpy - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @dest: A pointer to the memory area to be filled.
 * @src: The pointer to be copied into the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @dest.
 */
char *_memcpy(char *dest, char *src,  unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
