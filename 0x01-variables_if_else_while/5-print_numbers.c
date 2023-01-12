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
		printf("%i", low);
		low++;
	}
	printf("\n");
	return (0);
}
