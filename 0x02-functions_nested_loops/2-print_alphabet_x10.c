#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int num = 0;

	while (num < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		num++;
	}
}
