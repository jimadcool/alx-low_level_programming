#include <stdio.h>

/**
 * main - Entry point
 * Description - program that prints all possible different
 * combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int l;
	int o;

	for (i = 0; i < 10; i++)
	{
		for (l = i + 1; l < 10; l++)
		{
			for (o = l + 1; o < 10; o++)
			{
				putchar(i + '0');
				putchar(l + '0');
				putchar(o + '0');
				if (i == 7 && l == 8 && o == 9)
				{
					continue;
				}
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
