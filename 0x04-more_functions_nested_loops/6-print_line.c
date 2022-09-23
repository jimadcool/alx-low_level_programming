#include "main.h"

/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
		_putchar('_');
	_putchar('\n');
}
