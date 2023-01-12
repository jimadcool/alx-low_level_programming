
#include "main.h"

/**
 * _strchr - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @str: A pointer to the memory area to be searched.
 * @c: The character to search
 *
 * Return: A pointer to the filled memory area @dest.
 */
char *_strchr(char *str, char c)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	if (*str == c)
	{
		return (str);
	}
	return ('\0');
}
