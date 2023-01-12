#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints the alphabet in lowercase, and then in
 * uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
