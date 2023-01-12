#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
