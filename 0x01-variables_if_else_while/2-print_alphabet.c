#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
