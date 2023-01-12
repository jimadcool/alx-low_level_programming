#include "main.h"
/**
 * _islower - check the code
 * @c: char type character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
