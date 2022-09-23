#include "main.h"


/**
*more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int num, num_count;

	for (num_count = 0; num_count <= 9; num_count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}

}
