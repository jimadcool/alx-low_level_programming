#include "main.h"

/**
 * puts2 - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
