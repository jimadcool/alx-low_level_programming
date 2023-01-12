#include "main.h"
/**
 * clear_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);

	/*complement unsigned long int, put zero at the index indicated*/
	*n &= ~(1 << index);
	return (1);
}
