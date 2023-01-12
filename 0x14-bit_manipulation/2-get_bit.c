#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_num;

	/* when index > 64 which equals 8 bytes*/
	if (index > 64)
		return (-1);

	/* shift n right by n index & bitwise with 1*/
	bit_num = (n >> index) & 1;

	return (bit_num);
}
