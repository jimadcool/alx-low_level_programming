#include <stdio.h>

/**
 * main - Entry point
 * Description - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
