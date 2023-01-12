#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print out strings
 * @seperator: character used to seperate integer
 * @n: no of integer in array
 * @...: infinite number of variables
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list aps;
	char *string;
	unsigned int i;

	va_start(aps, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(aps, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	putchar('\n');

	va_end(aps);
}
