#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printout numbers
 * @seperator: character used to seperate integer
 * @n: no of integer in array
 * @...: infinite number of variables
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list aps;
	unsigned int i;

	va_start(aps, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aps, int));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(aps);
}
