#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: A pointer to the s array
 * @accept: The pointer to the accept array
 *
 * Return: A pointer to the filled memory area @dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
