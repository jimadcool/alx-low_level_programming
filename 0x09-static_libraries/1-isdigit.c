#include "main.h"
/**
 * _isdigit - check the code
 * @c: int type character
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
