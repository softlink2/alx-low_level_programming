#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area pointed to by s with the
 * constant byte b
 * @s: memory region to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		s[d] = b;
	return (s);
}


