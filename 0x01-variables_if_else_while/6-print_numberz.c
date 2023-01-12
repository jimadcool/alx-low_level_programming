#include <stdio.h>

/**
 * main - Entry point
 * Description - print all single numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int low = 0;

	while (low < 10)
	{
		putchar(low + '0');
		low++;
	}
	putchar('\n');
	return (0);
}
