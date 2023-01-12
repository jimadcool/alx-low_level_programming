#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: int type character
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
