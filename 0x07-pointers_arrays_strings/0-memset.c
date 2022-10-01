#include <string.h>
#include "main.h"

/**
* _memset - fill memory with a constant byte
 @s: pointer to the memory area
* @b: the byte to fill memory with
* @n: number of bytes of memory to fill
* Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
