#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: int pointer type
 * @b: int pointer type
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
