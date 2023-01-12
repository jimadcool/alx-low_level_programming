#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
