#include "main.h"

/**
 * _memset - fill memory with constant bytes
 * @s: memory region
 * @b: constant bytes
 * @n: count
 *
 * Return: a pointer to the memory area, NULL otherwise
 */

char
*_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
		*(s + c++) = b;

	return (s);
}
