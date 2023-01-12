#include <stdio.h>

/**
 * main - Entry point
 * Description - program that prints all possible different
 * combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int l;

	for (i = 0; i < 10; i++)
{
	for (l = i + 1; l < 10; l++)
	{
		putchar(i + '0');
		putchar(l + '0');
		if (i == 8 && l == 9)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
