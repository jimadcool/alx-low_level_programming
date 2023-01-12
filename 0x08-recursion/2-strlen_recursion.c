#include "main.h"

/**
 *_strlen_recursion - returns length of a string
 *@s: pointer to string params
 *Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);

}
