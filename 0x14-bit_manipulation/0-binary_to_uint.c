#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: strin containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;
/*if b not true*/
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		/* if (b[i] < '0' || b[i] > '1') */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total = 2 * total + (b[i] - '0');
	}
	return (total);
}
