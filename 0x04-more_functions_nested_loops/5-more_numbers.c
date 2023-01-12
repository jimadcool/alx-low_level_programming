#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int num = 0;

	while (num < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		num++;
	}
}
