#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i;
	int t;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (t = 0; t < size; t++)
				_putchar('#');

			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
