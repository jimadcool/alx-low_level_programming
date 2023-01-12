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

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
