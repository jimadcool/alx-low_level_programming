#include <stdio.h>
/**
 * main - Entry point
 * Description - program that prints all possible different
 * combinations of two two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int l;

	for (i = 0; i <= 98; i++)
	{
		for (l = i + 1; l <= 99; l++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			if (i == 98 && l == 99)
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
