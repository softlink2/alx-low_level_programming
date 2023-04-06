
#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 *
 * Return: pointer to destination
 */

char *
_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
