#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 * @dest: destination memory region
 * @src: source memory region
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		dest[d] = src[d];
	return (dest);
}
