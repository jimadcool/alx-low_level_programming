#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);

	/*1UL unsigned long int, put one at the index indicated*/
	*n |= 1UL << index;
	return (1);
}
