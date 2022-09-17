#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 48;
	int n2 = 48;
	int com = 44;

	while (n1 <= 57)
	{
		putchar(n1);
		putchar(n2);
		if (n1 != 57 || n2 != 57)
		{
			putchar(com);
			putchar(32);
		}
		n2 += 1;
	}
	n1 += 1;
	}
	putchar('\n');
	return (0);
}
